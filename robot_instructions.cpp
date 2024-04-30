#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int k; std::cin >> k;
		std::string str;
		std::vector<int> move_table;
		std::getline(std::cin, str);
		int cur = 0;
		while(k--)
		{
			std::getline(std::cin, str);
			if(str == "LEFT")
			{
				cur -= 1;
				move_table.push_back(-1);

			}
			else if(str == "RIGHT")
			{
				cur += 1;
				move_table.push_back(1);

			}
			else
			{
				std::istringstream iss(str);
				iss >> str >> str;
				int index;
				iss >> index;
				cur += move_table[index - 1];
				move_table.push_back(move_table[index - 1]);

			}

		}
		std::cout << cur << '\n';

	}

}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;

}
