#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream;
#define ll long long

void DFS(vector<vector<int>> &graph, vector<bool> &visited, int cur, vector<int> &res)
{
  
  visited[cur] = true;
  for (int i = 0; i < graph[cur].size(); ++i)
  {
    if (visited[graph[cur][i]])
      continue;
    DFS(graph, visited, graph[cur][i], res);
  }
  res.push_back(cur);
}

void solve()
{
  int n, m;
  while (cin >> n >> m && !(n == 0 && m == 0))
  {
    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> res;
    int a, b;
    while (m--)
    {
      cin >> a >> b;
      graph[a].push_back(b);
    }
    for (int i = 1; i <= n; ++i)
      if (!visited[i])
        DFS(graph, visited, i, res);
    for (int i = 1; i <= n; ++i)
      if (!visited[i])
        res.push_back(i);
    std::reverse(res.begin(), res.end());
    for (int &x : res)
      cout << (&x == &res[0] ? "" : " ") << x;
    cout << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


