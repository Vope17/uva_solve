#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int k = 1;
	while(t--)
	{
		std::cout << "Case " << k++ << ": ";
		int n; std::cin >> n;
		std::unordered_map<std::string, int> umap;
		std::string str; int a;
		while(n--)
		{
			std::cin >> str >> a;
			umap[str] = a;
		}
		
		int d; std::cin >> d;
		std::cin >> str;
		try
		{
			if(umap.at(str) <= d)
				std::cout << "Yesss\n";
			else if(umap.at(str) > d + 5)
				std::cout << "Do your own homework!\n";
			else
				std::cout << "Late\n";
		}
		catch(std::exception &e)
		{
			std::cout << "Do your own homework!\n";
		}
	}
}

int main()
{
	solve();
	return 0;
}
