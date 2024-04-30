#include <bits/stdc++.h>

using std::vector;
void bfs(vector<vector<char>> &graph, int i, int j, const int &m, const int &n, int &cnt)
{
	if(i <= 0 || j <= 0 || i > m || j > n || graph[i][j] == '*' || graph[i][j] == '-')
		return;
	
	graph[i][j] = '*';

	for(int k = i - 1; k <= i + 1; k++)
		for(int z = j - 1; z <= j + 1; z++)
			bfs(graph, k, z, m, n, cnt);
}
void makeGraph(vector<vector<char>> &graph, int m, int n)
{
  
  for(int i = 1; i <= m; ++i)
    for(int j = 1; j <= n; ++j)
      std::cin >> graph[i][j];
 
}

void solve()
{
  int m, n;
  while(std::cin >> m >> n && m)
  {
    vector<vector<char>> graph(m + 2, vector<char>(n +  2, '-'));
    makeGraph(graph, m, n);
    int cnt = 0;
    for(int i = 1; i <= m; ++i)
    	for(int j = 1; j <= n; ++j)
    		if(graph[i][j] == '@')
    		{
    			bfs(graph, i, j, m, n, cnt);
    			cnt++;
    		}
   	std::cout << cnt << '\n';
  }

}

int main()
{
  solve();
  return 0;
}


