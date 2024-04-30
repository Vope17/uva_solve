#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long
void solve()
{
  int n, m;
  while(cin >> n >> m && !(n == 0 && m == 0))
  {
    cout << n << " things taken " << m << " at a time is ";
    int p = (n - m);
    ll sum = 1;
    for(int i = 2, j = 2, k = 2; i <= n; ++i)
    {
      sum *= i;
      if(sum % j == 0 && j <= m)
      {
        sum /= j; 
        j++;
      }
      if(sum % k == 0 && k <= p)
      {
        sum /= k;
        k++;
      }
    }
    cout << sum << " exactly.\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


