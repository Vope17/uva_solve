#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int a, b, c;
		std::cin >> a >> b >> c;
		int res = (a + b) / c;
		int curEmpty = (a + b) % c + (a + b) / c;
		while(curEmpty >= c)
		{
			res += curEmpty / c;
			curEmpty = curEmpty % c + curEmpty / c;
		}
		std::cout << res << '\n';	
	}
}


int main()
{
	solve();
	return 0;
}
