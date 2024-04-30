#include<bits/stdc++.h>

void solve()
{
	std::string str1, str2;
	while(std::getline(std::cin, str1), std::getline(std::cin, str2))
	{
		if(str1.empty() || str2.empty())
		{
			std::cout << '\n';
			continue;

		}
		int hash1[26] = {0};
		int hash2[26] = {0};

		for(char c : str1)
			hash1[c - 'a']++;

		for(char c : str2)
			hash2[c - 'a']++;


		for(int i = 0; i < 26; ++i)
		{
			int k = std::min(hash1[i], hash2[i]);
			if(k > 0)
				while(k--)
					std::cout << char(i + 'a');

		}
		std::cout <<'\n';

	}

}

int main()
{
	solve();
	return 0;

}
