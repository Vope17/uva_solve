#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

int bubble_sort(vector<int> &nums)
{
  int cnt = 0;
  int n = nums.size();
  for(int i = 0; i < n; ++i)
    for(int j = 1; j < n; ++j)
      if(nums[j] < nums[j - 1])
        std::swap(nums[j], nums[j - 1]), cnt++;

  return cnt;
}

void solve()
{
  int t; cin >> t;
  while(t--)
  {
    int n; cin >> n;
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    
    cout << "Optimal train swapping takes " << bubble_sort(nums) << " swaps." << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


