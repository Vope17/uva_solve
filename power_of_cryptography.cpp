#include <bits/stdc++.h>
using std::vector, std::string, std::cin, std::cout;
#define ll long long
void solve()
{
  double n, p;
  while(cin >> n >> p)
    cout << std::setprecision(0) << std::fixed << std::pow(p, 1.0/n) << '\n';
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}
