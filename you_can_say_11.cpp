#include<bits/stdc++.h>

void solve()
{
	std::string str;
	while(std::cin >> str)
	{
		if(str == "0")
			break;

		std::cout << str << ' ';
		int n = str.size();
		int sum1 = 0;
		int sum2 = 0;
		for(int i = 0; i < n; i += 2)
			sum1 += str[i] - '0';

		for(int i = 1; i < n; i += 2)
			sum2 += str[i] - '0';	

		if(std::abs(sum1 - sum2) % 11 == 0)
			std::cout << "is a multiple of 11.\n";
		else
			std::cout << "is not a multiple of 11.\n";
	}
}


int main()
{
	solve();
	return 0;
}
