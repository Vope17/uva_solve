#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map;
#define ll long long
#define ERROR 1e-8

int editDistance(string s1, string s2)
{
  int n1 = s1.size(), n2 = s2.size();
  vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1));
  
  for(int i = 1; i <= n1; ++i)
    for(int j = 1; j <= n2; ++j)
    {
      if(s1[i - 1] == s2[j - 1])
        dp[i][j] = dp[i - 1][j - 1];
      else 
        dp[i][j] = dp[i - 1][j - 1] + 1;
    }
  return dp[n1][n2];
}
void solve()
{
  int t; cin >> t;
  while(t--)
  {
    string str;
    cin >> str;
    int n = str.size();
    if(n == 5)
      cout << "3\n";
    else 
    {
      if(editDistance(str, "one") <= 1)
        cout << "1\n";
      else 
        cout << "2\n";
    }
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

