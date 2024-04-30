#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int k = 1;
	while(t--)
	{
		std::cout << "Pair #" << k++ << ": ";
		std::string s1, s2;
		std::cin >> s1 >> s2;
		int a, b;
		a = b = 0;
		for(char c : s1)
			a = a * 2 + c - '0';
		for(char c : s2)
			b = b * 2 + c - '0';
		int k = std::__gcd(a, b);

		if(k != 1)
			std::cout << "All you need is love!\n";
		else
			std::cout << "Love is not all you need!\n";
	}
}

int main()
{

	solve();
	return 0;
}
