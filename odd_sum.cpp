#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int k = 1;
	while(t--)
	{
		std::cout << "Case " << k++ <<": ";
		int a, b;
		std::cin >> a >> b;
		int sum = 0;
		for(int i = a; i <= b; ++i)
		{
			if(i % 2)
				sum += i;
		}
		std::cout << sum << '\n';
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
