#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int a, b;
		std::cin >> a >> b;
		if(a < b || (a + b) % 2)
		{
			std::cout << "impossible\n";
			continue;

		}

		int n1 = (a + b) / 2;
		int n2 = a - n1;
		std::cout << n1 << ' ' << n2 << '\n';

	}

}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();	
	return 0;

}
