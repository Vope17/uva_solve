#include<bits/stdc++.h>

void solve()
{
	std::string str;
	std::vector<std::string> strs;
	while(std::getline(std::cin, str))
	{
		if(str.empty())
			break;

		strs.push_back(str);

	}

	bool btn = true;
	std::string res;
	for(int i = 0; i < strs.size(); ++i)
	{
		for(int j = 0; j < strs[i].size(); ++j)
			if(strs[i][j] == '"')
				if(btn)
					res += "``", btn = false;
				else
					res += "''", btn = true;

			else
				res += strs[i][j];
		res += '\n';
	}

	std::cout << res;
}

int main()
{
	solve();
	return 0;

}"')
}
}
