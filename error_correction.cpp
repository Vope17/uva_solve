#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set;
#define ll long long

void solve()
{
  int n;
  while (cin >> n && n)
  {
    vector<vector<int>> graph(n, vector<int>(n, 0));
    for (vector<int> &v : graph)
      for (int &x : v)
        cin >> x;
    vector<bool> infoRow(n, false);
    vector<bool> infoCol(n, false);
    for (int i = 0; i < n; ++i)
    {
      int tmp = 0;
        for (int j = 0; j < n; ++j)
          tmp += graph[i][j];
      if (tmp % 2)
        infoRow[i] = true;
    }
         
    for (int j = 0; j < n; ++j)
    {
      int tmp = 0;
        for (int i = 0; i < n; ++i)
          tmp += graph[i][j];
      if (tmp % 2)
        infoCol[j] = true;
    }
    int oddRow = std::accumulate(infoRow.begin(), infoRow.end(), 0);
    int oddCol= std::accumulate(infoCol.begin(), infoCol.end(), 0);

    if (oddRow == 0 && oddCol == 0)
      cout << "OK\n";
    else if (oddRow != oddCol || oddRow > 1 || oddCol > 1)
      cout << "Corrupt\n";
    else 
    {
      int i = 0, j = 0;
      for (i = 0; i < n; ++i)
        if (infoRow[i] == true)
          break;

      for (j = 0; j < n; ++j)
        if (infoCol[j] == true)
          break;

      cout << "Change bit " << "(" << i + 1 << ',' << j + 1 << ")\n";
    }
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


