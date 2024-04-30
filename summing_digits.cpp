#include<bits/stdc++.h>

int recursion(std::string str)
{
	if(str.size() == 1)
		return str[0] - '0';

	int total = 0;
	std::for_each(str.begin(), str.end(), [&total](const char &c){
			total += c - '0';
			});
	
	return recursion(std::to_string(total));
}

void solve()
{
	std::string str;
	while(std::cin >> str && str != "0")
	{
		std::cout << recursion(str) << '\n';	
	}
}

int main()
{
	solve();
	return 0;
}
