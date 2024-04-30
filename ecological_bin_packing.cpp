#include <bits/stdc++.h>
using std::cin, std::cout, std::vector, std::istringstream, std::string;
vector<vector<int>> result;
vector<int> path;
void backtracking(int cur, vector<bool> &memo)
{
  if(path.size() == 3)
  {
    result.push_back(path);
    return;
  }
 
  for(int i = 0; i < 3; ++i)
  {
    if(memo[i])
      continue;
    memo[i] = true;
    path.push_back(i);
    backtracking(i, memo);
    path.pop_back();
    memo[i] = false;
  }
}

void solve()
{
  string line;
  while(std::getline(cin ,line))
  {
    istringstream iss(line);
    vector<vector<int>> nums(3, vector<int>(3));
    int n;
    for(vector<int> &v : nums)
      for(int &x : v)
        iss >> x;

    vector<int> pre(3, 0);
    for(int i = 0; i < 3; ++i)
      pre[i] = nums[0][i] + nums[1][i] + nums[2][i];
    
    vector<vector<int>> comb(3, vector<int>(3));
    for(int i = 0; i < 3; ++i)
      for(int j = 0; j < 3; ++j)
        comb[i][j] = pre[j] - nums[i][j];
   
    vector<bool> memo(3, false);
    backtracking(0, memo); 
    vector<string> mp = {"B", "G", "C"};
    std::pair<string, int> res;
    res.second = INT32_MAX; 
    for(int i = 0; i < 6; ++i)
    {
      int tmp = comb[0][result[i][0]] + comb[1][result[i][1]] + comb[2][result[i][2]];
      string t = mp[result[i][0]] + mp[result[i][1]] + mp[result[i][2]];
      if(tmp <= res.second)
      {
        if(tmp == res.second)
        {
          if(t < res.first)
            res.first = t;
        }
        else 
        {
          res.first = t;
          res.second = tmp; 
        }
      }
    }
    cout << res.first << ' ' << res.second << '\n';
  }
}

int main()
{
  solve();
  return 0;
}

