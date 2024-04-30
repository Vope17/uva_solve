#include<bits/stdc++.h>

#define PI M_PI
void solve()
{
	double a;
	while(std::cin >> a)
	{
		double b = a * a;
		double cube = b - b * (PI/6) - b * sqrt(3)/4;
		double dot = b - b * PI/4 - 2 * cube;
		double slash = b - 4 * cube - 4 * dot;
		
		printf("%.3lf %.3lf %.3lf\n", slash, 4 * dot, 4 * cube);	
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
