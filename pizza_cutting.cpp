#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  ll n;
  while(cin >> n && n >= 0)
  {
    cout << 1 + (1 + n) * n / 2 << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

