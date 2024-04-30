#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long
void solve()
{
  int n, m;
  int k = 1;
  while(cin >> n >> m && !(n == 0 && m == 0))
  {
    cout << "CASE# " << k++ << ":\n";
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    std::sort(nums.begin(), nums.end());

    int query;
    while(m--)
    {
      cin >> query;
      cout << query;
      auto it = std::lower_bound(nums.begin(), nums.end(), query);
      if(*it == query)
      {
        cout <<" found at ";
        cout << (it - nums.begin() + 1) << '\n';
      }
      else 
      {
        cout << " not found\n";
      }
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


