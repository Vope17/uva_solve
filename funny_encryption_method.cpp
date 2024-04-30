#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int n;
	while(t--)
	{
		std::cin >> n;
		std::bitset<3000> bs(n);
		std::vector<std::bitset<4>> v;
		while(n)
		{
			int tmp = n % 10;
			v.push_back(tmp);
			n /= 10;
		}
		int ans = 0;
		std::cout << bs.count();
		for(auto const &b : v)
			ans += b.count();
		
		std::cout << ' ' << ans << '\n';
	}
}
int main()
{
	solve();
	return 0;
}

