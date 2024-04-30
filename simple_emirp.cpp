#include<bits/stdc++.h>

bool isPrime(int a)
{
	if(a < 2)
		return false;

	for(int i = 2; i * i <= a; ++i)
		if(a % i == 0)
			return false;

	return true;
}

void solve()
{
	std::string s1;
	while(std::cin >> s1)
	{
		std::cout << s1 << " is ";
		std::string s2 = s1;
		std::reverse(s2.begin(), s2.end());
		int n1 = std::stoi(s1);
		int n2 = std::stoi(s2);	

		if(isPrime(n1))
			if(isPrime(n2) && s1 != s2)
				std::cout << "emirp.\n";
			else
				std::cout << "prime.\n";

		else
			std::cout << "not prime.\n";
	}
}

int main()
{
	solve();
	return 0;
}
