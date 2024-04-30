#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	std::string str;
	std::getline(std::cin, str);
	std::getline(std::cin, str);
	while(t--)
	{
		int cnt = 0;
		std::map<std::string, int> mp;
		while(std::getline(std::cin, str))
		{
			if(str.empty())
				break;
			mp[str]++;	
			cnt++;
		}
		std::vector<std::pair<std::string, double>> a;
		for(auto it = mp.begin(); it != mp.end(); ++it)
		{
			a.push_back({it->first, (it->second) / double(cnt) * 100});	
		}
		std::sort(a.begin(), a.end(), [](const auto &p1, const auto &p2)
				{
						return p1.first < p2.first;

				});
		for(auto const &p : a)
		{
			std::cout << p.first << ' ';
			std::cout << std::fixed << std::setprecision(4) << p.second << '\n';
		}
		if(t)
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

