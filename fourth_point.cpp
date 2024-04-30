#include<bits/stdc++.h>

auto hash = [](const std::pair<double, double> &p){return p.first * p.second;};
void solve()
{
	std::string line;
	while(std::getline(std::cin, line))
	{
		std::istringstream iss(line);
		std::unordered_set<std::pair<double, double>, decltype(hash)> uset(1000, hash);
		double a, b;
		double curx = 0, cury = 0;
		while(iss >> a >> b)
		{
			if(uset.find({a, b}) != uset.end())
			{
				curx -= 2 * a;
				cury -= 2 * b;

			}
			else
			{
				uset.insert({a, b});
				curx += a;
				cury += b;

			}


		}
		printf("%.3lf %.3lf\n", curx, cury);

	}

}


int main()
{
	solve();
	return 0;

}
