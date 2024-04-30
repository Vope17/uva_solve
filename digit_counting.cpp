#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long

void solve()
{
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    vector<int> res (10, 0);
    for (int i = 1; i <= n; ++i)
    {
      int n = i;
      while (n)
      {
        res[n % 10]++;
        n /= 10;
      }
    }
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


