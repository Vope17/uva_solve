#include<bits/stdc++.h>
using namespace std;

void solve()
{
	std::string str;
	std::vector<string> strs;
	string a;
	while(cin >> str)
	{
		if(cin.peek() != '\n')
		{
			cin >> a;
			str += " " + a;
		}
		strs.push_back(str);
	}
	
	int speed = 0;
	float distance = 0;
	std::string previous;

	bool is_first = false;
	for(int i = 0; i < strs.size(); ++i)
	{
		if(is_first)
		{
			
			int h, m, s, p_h, p_m, p_s;
			h = (strs[i][0] - '0') * 10 + strs[i][1] - '0';
			m = (strs[i][3] - '0') * 10 + strs[i][4] - '0';
			s = (strs[i][6] - '0') * 10 + strs[i][7] - '0';
			
			p_h = (previous[0] - '0') * 10 + previous[1] - '0';
			p_m = (previous[3] - '0') * 10 + previous[4] - '0';
			p_s = (previous[6] - '0') * 10 + previous[7] - '0';

			int t = h * 3600 + m * 60 + s;
			int p_t = p_h * 3600 + p_m * 60 + p_s;
			distance += (t - p_t) * speed/float(3600);
			if(!(strs[i][9] >= '0' && strs[i][9] <= '9'))
			{
				cout << strs[i].substr(0, 8) << ' ';		
				printf("%.2f km\n", distance);
			}
		}
		if(strs[i][9] >= '0' && strs[i][9] <= '9')
		{
			is_first = true;
			speed = 0;
			for(int j = 9; j < strs[i].size(); ++j)
				if(strs[i][j] != ' ')	
					speed = speed * 10 + strs[i][j] - '0';
		}
		previous = strs[i].substr(0, 8);
	}

}


int main()
{
	solve();
	return 0;
}

