#include<bits/stdc++.h>

void solve()
{
	int n, m;
	std::cin >> n >> m;
	int curi, curj;
	char curdir;
	std::string str;
	std::unordered_map<char, std::pair<int ,int>> umap = {{'N', {1, 0}}, {'E', {0, 1}}, {'S', {-1, 0}}, {'W', {0, -1}}};
	auto hash = [](const std::pair<int, int> &p){return p.first ^ p.second;};
	std::unordered_set<std::pair<int, int>, decltype(hash)> fail(100, hash);
	while(std::cin >> curj >> curi >> curdir >> str)
	{
		std::pair<int, int> rndir = umap[curdir]; 
		bool die = false;
		for(int i = 0; i < str.size(); ++i)
		{
			//std::cout << curj << ' ' << curi << ' '  << curdir << ' ' << rndir.first << ' ' << rndir.second << '\n';
			if(str[i] == 'F')
			{
				int tmp1 = curi + rndir.first; 
				int tmp2 = curj + rndir.second;
				if(tmp1 < 0 || tmp1 > m || tmp2 < 0 || tmp2 > n)
				{
					if(fail.find({tmp1, tmp2}) == fail.end())
					{
						fail.insert({tmp1, tmp2});
						die = true;
						break;
					}
				}
				else
				{
					curi += rndir.first;
					curj += rndir.second;

				}
			}
			else
			{
				if(str[i] == 'L')
				{
					if(curdir == 'N')
					{	
						curdir = 'W';
					}
					else if(curdir == 'E')
					{
						curdir = 'N';
					}
					else if(curdir == 'S')
					{
						curdir = 'E';
					}
					else if(curdir == 'W')
					{
						curdir = 'S';
					}
				}
				else if(str[i] == 'R')
				{
					if(curdir == 'N')
					{	
						curdir = 'E';
					}
					else if(curdir == 'E')
					{
						curdir = 'S';
					}
					else if(curdir == 'S')
					{
						curdir = 'W';
					}
					else if(curdir == 'W')
					{
						curdir = 'N';
					}
				}
				rndir = umap[curdir];			
			}
		}
		if(die)
			std::cout << curj << ' ' << curi << ' ' << curdir << " LOST"<< '\n';	
		else
			std::cout << curj << ' ' << curi << ' ' << curdir << '\n';	
	}
}

int main()
{

	solve();
	return 0;
}
