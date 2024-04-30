#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    std::sort(nums.begin(), nums.end());
    int mid = n / 2;
    
    cout << 2 * (nums[mid] - nums[0]) + 2 * (nums[n - 1] - nums[mid]) << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

