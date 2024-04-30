
#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long
void solve()
{
  int n;
  while(cin >> n && n)
  {
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    std::sort(nums.begin(), nums.end());
    for(int &x : nums)
      cout << (&x == &nums[0] ? "" : " ") << x;
    cout << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


