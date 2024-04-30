#include<bits/stdc++.h>

void solve()
{
	int t;
	int k = 1;
	while(std::cin >> t && t)
	{
		std::string str;
		std::getline(std::cin, str);
		std::vector<std::string> strs(t);
		for(std::string &s : strs)
			std::getline(std::cin, s);

		std::cout << "Case " << k++ << ":\n";
		std::cout << "#include<string.h>\n#include<stdio.h>\nint main()\n{\n";
		for(int i = 0; i < strs.size(); ++i)
		{
			std::cout << "printf(\"";
			for(int j = 0; j < strs[i].size(); ++j)
			{
				if(strs[i][j] == '"')
					std::cout << '\\';

				std::cout << strs[i][j];
			}
			std::cout << "\\n\");\n";
		}
		std::cout << "printf(\"\\n\");\n";
		std::cout << "return 0;\n";
		std::cout << "}\n";
	}
}


int main()
{
	solve();
	return 0;

}
