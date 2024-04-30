#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int n;
  while(cin >> n)
  {
    vector<vector<int>> nums(n + 1, vector<int>(n + 1));
    for(int i = 1; i <= n; ++i)
      for(int j = 1; j <= n; ++j)
        cin >> nums[i][j];
    vector<vector<int>> pre(n + 1, vector<int>(n + 1));

    for(int i = 1; i <= n; ++i)
      for(int j = 1; j <= n; ++j)
        pre[i][j] += pre[i - 1][j] + nums[i][j];

    for(int i = 1; i <= n; ++i)
    {
      for(int j = 1; j <= n; ++j)
        cout << pre[i][j] << ' ';
      cout << '\n';
    }

    int res = INT32_MIN;
    for(int i = 1; i <= n; ++i) //traversal the row
    {
      for(int j = i; j <= n; ++j) // traversal the row
      {
        int sum = 0;
        for(int k = 1; k <= n; ++k) // traversal the column
        {
          sum += pre[j][k] - pre[i - 1][k];
          res = std::max(res, sum);
          if(sum < 0)
            sum = 0;
        }
      }
    }
    cout << res << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

