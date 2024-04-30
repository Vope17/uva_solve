#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set, std::queue;
#define ll long long

struct node
{
  public:
    int a;
    int b;
    int cnt;
  node(int _a, int _b, int _cnt):a(_a), b(_b), cnt(_cnt){}
};
void solve()
{
  string start, end;
  vector<vector<int>> offset = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, -2}, {2, -1}, {1, 2}, {2, 1}}; 
  while (cin >> start >> end)
  {
    vector<vector<int>> graph(9, vector<int>(9, -1));
    queue<node> q;
    int startRow = start[1] - '0';
    int startCol = start[0] - 'a' + 1;
    int endRow = end[1] - '0';
    int endCol = end[0] - 'a' + 1;
    q.push(node(startRow, startCol, 0));   
    int res = 0;
    while (!q.empty())
    {
      node tmp = q.front();
      q.pop();
      if (tmp.a == endRow && tmp.b == endCol)
      {
        res = tmp.cnt; 
        break;
      }
      for (int i = 0; i < offset.size(); ++i)
      {
        int a, b, c;
        a = tmp.a - offset[i][0];
        b = tmp.b - offset[i][1];
        c = tmp.cnt + 1;
        if (a <= 0 || a >= 9 || b <= 0 || b >= 9)
          continue;
        else 
          q.push({a, b, c});
      }
    }
 
    cout << "To get from " << start << " to " << end << " takes " << res << " knight moves.\n";
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


