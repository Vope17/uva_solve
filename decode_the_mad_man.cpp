#include<bits/stdc++.h>

std::string kb1 = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'`";
std::string kb2 = "  `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'`";
void solve()
{
	std::string str;
	while(std::getline(std::cin, str))
	{
		for(char &c : str)
			if(c != ' ')
				c = std::tolower(c), std::cout << kb2[kb1.find(c)];
			else
				std::cout << ' ';

		std::cout << '\n';
	}
}

int main()
{
	solve();
	return 0;
}
