#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long
#define ERROR 1e-8
void solve()
{
  ll n;
  while(cin >> n && n)
  {
    ll k = int64_t(std::sqrt(n) + ERROR);
    if(k * k == n)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

