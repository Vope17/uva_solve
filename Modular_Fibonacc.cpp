#include<bits/stdc++.h>
#define ll long long
		
void solve()
{
	int n, m;
	while(std::cin >> n >> m)
	{
		unsigned ll a = 0, b = 1;
		n--;
		int k = 1 << m;
		while(n--)
		{
			ll tmp = a + b;
			a = b;
			b = tmp;
		}
		std::cout << b  << '\n';
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
