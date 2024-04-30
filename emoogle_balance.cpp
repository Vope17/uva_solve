#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map;
#define ll long long

void solve()
{
  int n;
  int k = 1;
  while (cin >> n && n)
  {
    cout << "Case " << k++ << ": ";
    int cnt = 0;
    int x;
    while(n--)
    {
      cin >> x;
      if (x != 0)
        cnt++;
      else 
        cnt--;
    }
    cout << cnt << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


