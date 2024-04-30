#include<bits/stdc++.h>


bool check(std::vector<std::vector<char>> &graph, int i, int j, int c, int n, int m)
{
	if(i - c < 0 || j - c < 0 || i + c > n - 1 || j + c >  m - 1)
		return false;
	
	for(int k = i - c; k <= i + c; k++)
		for(int z = j - c; z <= j + c; z++)
			if(graph[k][z] != graph[i][j])
				return false;
	
	return true;
}
void solve()
{
	int t; std::cin >> t;
	int n, m, q;
	while(t--)
	{
		std::cin >> n >> m >> q;
		std::cout << n << ' ' << m << ' ' << q << '\n';
		std::vector<std::vector<char>> graph(n, std::vector<char>(m));
		for(auto &v : graph)
			for(auto &c : v)
				std::cin >> c;
	
		int ci, cj;
		while(q--)
		{
			std::cin >> ci >> cj;
			int z = std::min(ci, cj);
			int i;
			for(i = 1; i <= z; ++i)
				if(!check(graph, ci, cj, i, n, m))	
				{
					break;
				}
			
			i--;
			std::cout << 2 * i + 1 << '\n';
		}
	}
}


int main()
{
	
	solve();
	return 0;
}
