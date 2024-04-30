#include<bits/stdc++.h>

int factorSum(const int& n)
{
	int sum = 0;
	for(int i = 1; i <= n; ++i)
		if(n % i == 0)
			sum += i;

	return sum;
}

void solve()
{
	int n;
	int k = 1;
	while(std::cin >> n && n)
	{
		std::cout << "Case " << k++ << ": ";
		int res = -1;
		for(int i = n; i >= 1; --i)
			if(factorSum(i) == n)
			{
				res = i;
				break;
			}
		
		std::cout << res << '\n';
	}
}

int main()
{
	solve();
	return 0;
}
