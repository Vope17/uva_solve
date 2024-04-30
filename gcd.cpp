#include<bits/stdc++.h>

int myGCD(int a, int b)
{
	if(b == 0)
		return a;
	
	return myGCD(b, a % b);
}

void solve()
{
	int n;
	while(std::cin >> n && n)
	{
		int ans = 0;
		for(int i = 1; i <= n; ++i)
			for(int j = i + 1; j <= n; ++j)
				ans += std::__gcd(i, j);

		std::cout << ans << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
