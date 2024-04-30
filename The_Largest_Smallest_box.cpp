#include<bits/stdc++.h>

void solve()
{
	double l, w;
	while(std::cin >> l >> w)
	{
		double a = 12;
		double b = -4*(l + w);
		double c = l*w;
		double mx = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
		double mn = std::min(l, w) / double(2);
		printf("%.3lf 0.000 %.3lf\n", mx, mn);
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
