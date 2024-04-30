#include<bits/stdc++.h>
#define ll long long
void solve()
{
	ll a, b;
	while(std::cin >> a >> b)
		std::cout << std::abs(a - b) << '\n';
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
