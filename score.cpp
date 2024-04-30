#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map;
#define ll long long

void solve()
{
  int t; cin >> t;
  while (t--)
  {
    string str;
    cin >> str;
    int cnt = 1;
    int res = 0; 
    for (char c : str)
    {
      if (c == 'O')
      {
        res += cnt;
        cnt++;
      }
      else 
        cnt = 1;  
    }
    cout << res << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


