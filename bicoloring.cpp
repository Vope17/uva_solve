#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long
#define ERROR 1e-8

void makeGraph(vector<vector<int>> &graph)
{
  int a, b;
  cin >> a >> b;
  graph[a].push_back(b); 
  graph[b].push_back(a); 
}

bool checkColor(vector<vector<int>> &graph, int n)
{
  vector<int> color(n, -1);
  std::queue<int> q;
  q.push(0);
  color[0] = 0;
  std::set<int> set;
  set.insert(0);
  while(!q.empty())
  {
    int cur = q.front(); q.pop();
    set.insert(cur);
    for(int x : graph[cur])
    {
      if(set.find(x) != set.end())
        continue;
      if(color[x] == -1)
        color[x] = 1 - color[cur];
      else if(color[x] == color[cur])
        return false;
      q.push(x);
    }
  }
  return true;
}

void solve()
{
  int n;
  while(cin >> n && n != 0)
  {
    int e; cin >> e;
    vector<vector<int>> graph(n);
    while(e--)
      makeGraph(graph);
    if(checkColor(graph, n))
      cout << "BICOLORABLE.\n";
    else
      cout << "NOT BICOLORABLE.\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

