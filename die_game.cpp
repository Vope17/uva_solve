#include<bits/stdc++.h>

void solve()
{
	int n;
	while(std::cin >> n && n)
	{
		std::string str;
		int t = 1, l = 3, r = 4, u = 2, d = 5; 
		while(n--)
		{
			std::cin >> str;
			if(str == "north")
			{
				u = t;
				t = d;
				d = 7 - u;
			}
			else if(str == "south")
			{
				d = t;
				t = u;
				u = 7 - d;
			}
			else if(str == "east")
			{
				r = t;
				t = l;
				l = 7 - r;
			}
			else if(str == "west")
			{
				l = t;
				t = r;
				r = 7 - l;
			}
		}
		std::cout << t << '\n';
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
