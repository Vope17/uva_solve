#include<bits/stdc++.h>

std::vector<long long> arr(50, 0);

void solve()
{
	arr[1] = 1;
	arr[2] = 2;
	for(int i = 3; i < 50; ++i)
		arr[i] = arr[i - 1] + arr[i - 2];

	int t; std::cin >> t;
	while(t--)
	{
		long long n; std::cin >> n;
		std::cout << n << " = ";
		std::string res;
		bool isFirst = true;
		for(int i = 50 - 1; i >= 1; --i)
		{
			if(n < arr[i] && !isFirst)
				res += '0';
			if(n < arr[i])
				continue;

			isFirst = false;			
			res += '1';
			n -= arr[i];

		}

		std::cout << res << " (fib)" << '\n';

	}

}

int main()
{
	solve();
	return 0;

}

