#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map;
#define ll long long

void solve()
{
  string line;
  vector<string> strs;
  int mx = 0;
  while (std::getline(cin, line))
  {
    strs.push_back(line);
    mx = std::max(mx, int(line.size()));
  }
   
  for (int j = 0; j < mx; ++j)
  {
    for (int i = strs.size() - 1; i >= 0; --i)
    {
      if(j < strs[i].size())
        cout << strs[i][j];
      else 
        cout << ' ';
    }
    if(j != mx - 1)
      cout << '\n';
  }
  cout << '\n';
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


