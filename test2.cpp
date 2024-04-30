#include <bits/stdc++.h>
#define ll long long
ll pow(int a, int n)
{
  ll sum = 1;
  while(n--)
    sum *= a;
  return sum;
}

void solve()
{
  int t; std::cin >> t;
  int a, b;
  ll l;
  while(t--)
  {
    std::cin >> a >> b >> l;
    int cn1 = 1, cn2 = 1;
    int temp1 = a, temp2 = b;
    if(l % a != 0 && l % b != 0)
    {
      std::cout << 1 << '\n';
      continue;
    }
    while(l % temp1 == 0)
    {
      cn1++;
      temp1 = temp1 * a;
    }
    while(l % temp2 == 0)
    {
      cn2++;
      temp2 = temp2 * b;
    }
    int cnt = 0;
    std::set<ll> set;
    for(int i = 0; i <= cn1; ++i)
    {
      for(int j = 0; j <= cn2; ++j)
      {
        ll tmp = pow(a, i) * pow(b, j);
        if(l % tmp == 0 && set.find(tmp) == set.end())
        {
          cnt++;
          set.insert(tmp);
        }
      }
    }
    if(a == b)
      std::cout << std::sqrt(cn1 * cn2) << '\n';
    else
      std::cout << cnt << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}
