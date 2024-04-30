#include<bits/stdc++.h>


void solve()
{
	int t; std::cin >> t;
	std::map<std::string, int> mp;
	std::string str;
	while(t--)
	{
		std::cin >> str;
		mp[str]++;
		std::getline(std::cin, str);
	}
	for(auto const &p : mp)
		std::cout << p.first << ' ' << p.second << '\n';
}

int main()
{
	solve();
	return 0;
}
