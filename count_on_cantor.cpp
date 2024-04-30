#include<bits/stdc++.h>

void solve()
{
	int n; 
	while(std::cin >> n)
	{
		std::cout << "TERM " << n << " IS ";
		int sum = 0;
		int i = 1;
		while(sum <= n)
			sum += i++;
		
		i--;
		if(i % 2)
			std::cout << 1 + std::abs(sum - n) << '/' << i - std::abs(sum - n) << '\n';

		else
			std::cout << i - std::abs(sum - n) << '/' << 1 + std::abs(sum - n) << '\n';
	}
}

int main()
{
	solve();
	return 0;
}
