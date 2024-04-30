#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

ll recursive(ll b, ll p, ll m)
{
  if(p == 0)
    return 1;
  else if(p == 1)
    return b % m;

  ll res = recursive(b, p / 2, m);
  if(p % 2)
    return res * res * b % m;
  else 
    return res * res % m;
}

void solve()
{
  ll b, p, m;
  while(cin >> b >> p >> m)
    cout << recursive(b, p, m) << '\n';
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

