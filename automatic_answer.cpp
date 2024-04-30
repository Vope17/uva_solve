#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

void solve()
{
  int t; cin >> t;
  ll sum;
  while(t--)
  {
    cin >> sum;
    sum = (sum * 567 / 9 + 7492) * 235 / 47 - 498;
    cout << std::abs((sum % 100) / 10) << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

