#include <bits/stdc++.h>
#define ll long long
void solve()
{
  int n;
  std::vector<ll> dp(55);
  dp[1] = 1;
  dp[2] = 2;
  for(int i = 3; i < 55; ++i)
    dp[i] = dp[i - 1] + dp[i - 2];

  while(std::cin >> n && n)
  {
    std::cout << dp[n] << '\n'; 
  }
}

int main()
{
  solve();
  return 0;
}
