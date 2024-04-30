#include<bits/stdc++.h>


void solve()
{
	int t; std::cin >> t;
	int a, c;
	double b;
	while(std::cin >> a >> b >> c)
	{
		double q = 1 - b;
		std::cout << q * (c - 1) * b / (std::pow(q, a) - 1) << '\n';
	}
}


int main()
{

	solve();
	return 0;
}
