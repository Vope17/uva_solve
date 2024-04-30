#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

void solve()
{
  int n;
  int k = 1;
  string empty;
  while(cin >> n && n)
  {
    std::cout << "Set #" << k++ << '\n';
    vector<int> nums(n);
    for(int &x : nums)
      cin >> x;
    int avg = std::accumulate(nums.begin(), nums.end(), 0) / n;
    int cnt = 0 ;
    for(int &x : nums)
      if(x > avg)
        cnt += x - avg;
    cout << "The minimum number of moves is " << cnt << ".";
    cout << '\n' << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

