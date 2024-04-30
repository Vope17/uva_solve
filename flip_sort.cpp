
#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;

void solve()
{
  int n;
  while(cin >> n)
  {
    cout << "Minimum exchange operations : ";
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    
    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
      for(int j = 1; j < n; ++j)
      {
        if(nums[j] < nums[j - 1])
        {
          std::swap(nums[j], nums[j - 1]);
          cnt++;
        }
      }
    }
    cout << cnt << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


