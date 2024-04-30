#include<bits/stdc++.h>

bool isPrime(int x)
{
	for(int i = 2; i * i <= x; ++i)
		if(x % i == 0)
			return false;

	return true;
}

void solve()
{
	int a, b;
	while(std::cin >> a >> b)
	{
		std::cout << a << ' ' << b << ": ";
		std::vector<int> prime = {1, 2};
		for(int i = 3; i <= a; ++i)
			if(isPrime(i))
				prime.push_back(i);

		
		int n = prime.size();
		if(n % 2)
			b = 2 * b - 1;
		else
			b *= 2;

		if(b >= n)
		{
			for(int i = 0; i < n; ++i)
			{
				std::cout << prime[i];
				if(i != n - 1)
					std::cout << " ";
			}
			std::cout << '\n' << '\n';
			continue;
		}
		
		else
		{
			std::deque<int> res;
			int mid = (n % 2) ? n / 2 : (n - 1) / 2;
			res.push_back(prime[mid]);
			int j = 1;
			if(b % 2)
			{
				b--;
				while(b)
				{
					if(b)
					{
						res.push_back(prime[mid + j]);
						b--;
					}
					if(b)
					{
						res.push_front(prime[mid - j]);
						b--;
					}
					j++;
				}
			}
			else
			{
				b -= 2;
				res.push_back(prime[mid + 1]);
				while(b)
				{
					if(b)
					{
						res.push_back(prime[mid + 1 + j]);
						b--;
					}
					if(b)
					{
						res.push_front(prime[mid - j]);
						b--;
					}
					j++;
				}
			}
			for(int i = 0; i < res.size(); ++i)
			{
				std::cout << res[i];
				if(i != res.size() - 1)
					std::cout << ' ';
			}
			std::cout << '\n' << '\n';
		}
	}
}

int main()
{
	solve();
	return 0;
}
