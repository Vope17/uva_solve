#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int a, b, i, j;
	int k = 1;
	while(t--)
	{
		std::cout << "Case " << k++ << ": ";
		std::cin >> a >> b >> i >> j;
		int res = 0;
		for(int z = a + b + 1; z <= i + j; ++z)
			res += z;
	
		res -= a;
		res += i;
		std::cout << res << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
