#include<bits/stdc++.h>
void solve()
{
	std::string str;
	std::string kb("`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./");
	while(std::getline(std::cin, str))
	{
		if(str.empty())
			break;
		for(char c : str)
		{
			if(c == ' ')
				std::cout << ' ';
			else
				std::cout << kb[kb.find(c) - 1];
		}
		std::cout << '\n';
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
