#include<bits/stdc++.h>

#define PI std::atan(1) * 4.0
double earth = 6440;
void solve()
{
	int r; double d; std::string str;
	while(std::cin >> r >> d >> str)
	{
		r += earth;
		if(str == "min")
			d = d / 60;

		while(d > 360)
			d -= 360;

		double ans1 = 0;
		double ans2 = 0;
		ans1 = 2 * r * PI * (d / double(360));
		ans2 = 2 * r * std::sin(d / 2.0 * PI / 180.0);
		std::cout << std::fixed << std::setprecision(6);
		std::cout << ans1 << ' ' << ans2 << '\n';

	}

}


int main()
{
	solve();
	return 0;

}
