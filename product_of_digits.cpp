#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int n; std::cin >> n;
		std::string str;
		if(n == 1)
		{
			std::cout << 1 << '\n';
			continue;
		}
		
		bool a = true;
		while(n > 1)
		{
			for(int i = 2; i <= 9; ++i)
			{
				if(n % i == 0)
				{
					n /= i;
					str += std::to_string(i);
					break;
				}
			}
			if(n >= 10)
			{
				a = false;
				break;
			}
		}
		if(a)
			std::cout << str << '\n';
		else
			std::cout << -1 << '\n';
	}
}

int main()
{
	solve();
	return 0;
}

