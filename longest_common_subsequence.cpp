#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set, std::queue;
#define ll long long

void solve()
{
  string str1, str2;
  while (getline(cin, str1), getline(cin, str2))
  {
    int n1 = str1.size();
    int n2 = str2.size();
    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));

    for (int i = 1; i <= n1; ++i)
    {
      for (int j = 1; j <= n2; ++j)
      {
        if(str1[i - 1] == str2[j - 1])
          dp[i][j] = dp[i - 1][j - 1] + 1;
        else 
          dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
      }
    }

    cout << dp[n1][n2] << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


