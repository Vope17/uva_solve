#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;

void solve()
{
  int n;
  vector<int> coins = {1, 5, 10, 25, 50};
  while(cin >> n)
  {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < coins.size(); ++i)
    {
      for(int j = 1; j <= n; ++j)
      {
        if(j - coins[i] >= 0)
          dp[j] += dp[j - coins[i]];
      }
    }
    cout << dp[n] << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


