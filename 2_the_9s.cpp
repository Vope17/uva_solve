#include<bits/stdc++.h>

int recursive(std::string str)
{
	if(str.size() == 1 && str[0] == '9')
		return 0; 

	int sum = 0;
	for(char c : str)
		sum += (c - '0');
	
	if(sum % 9 == 0)
		return recursive(std::to_string(sum)) + 1;

	return 0;	
}

void solve()
{
	std::string str;
	while(std::cin >> str && str != "0")
	{
		std::cout << str << " is ";
		if(str.size() == 1 && str[0] == '9')
			std::cout << "a multiple of 9 and has 9-degree " << 1 << ".\n";
		else
			if(recursive(str))
				std::cout << "a multiple of 9 and has 9-degree " << recursive(str) << ".\n";
			else	
				std::cout << "not a multiple of 9.\n";
	}
}


int main()
{
	solve();
	return 0;
}


