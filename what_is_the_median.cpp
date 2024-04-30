#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int n;
  vector<int> nums;
  while(cin >> n)
  {
    nums.push_back(n);
    std::sort(nums.begin(), nums.end());
    int sz = nums.size();
    if(sz % 2 == 1)
      cout << nums[sz / 2] << '\n';
    else 
      cout << int((nums[sz / 2] + nums[sz / 2 - 1]) / 2) << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

