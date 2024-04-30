#include<bits/stdc++.h>
std::map<char, std::vector<int>> mp =
{
	{'c', {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1}},
	{'d', {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
	{'e', {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
	{'f', {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
	{'g', {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
	{'a', {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
	{'b', {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
	{'C', {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}},
	{'D', {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0}},
	{'E', {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0}},
	{'F', {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0}},
	{'G', {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0}},
	{'A', {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0}},
	{'B', {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}},
};
void a(char c, std::vector<bool> &fingers, std::vector<int> &finger_cnt)
{
	for(int i = 1; i < mp[c].size(); ++i)
	{
		if(fingers[i] == false && mp[c][i] == 1)
		{
			finger_cnt[i]++;
		}
		fingers[i] = mp[c][i];
	}
}
void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		std::string str;
		std::cin >> str;
		std::vector<bool> fingers(11, false);
		std::vector<int> finger_cnt(11);
		for(int i = 0; i < str.size(); ++i)
		{
			a(str[i], fingers, finger_cnt);			
		}
		for(int i = 1; i <= 10; ++i)
		{
			std::cout << finger_cnt[i];
			if(i != 10)
				std::cout << ' ';
		}

		
		std::cout << '\n';
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
