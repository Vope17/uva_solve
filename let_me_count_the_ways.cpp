#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set;
#define ll long long

void solve()
{
  int n;
  while (cin >> n)
  {
    vector<int> coins = {1, 5, 10, 25, 50};
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < coins.size(); ++i)
    {
      for (int j = 1; j <= n; ++j)
      {
        if (j - coins[i] >= 0)
          dp[j] += dp[j - coins[i]];
      }
    }
    if (dp[n] > 1)
      cout << "There are " << dp[n] << " ways to produce " << n << " cents change." << '\n';
    else 
      cout << "There is only 1 way to produce " << n << " cents change." << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


