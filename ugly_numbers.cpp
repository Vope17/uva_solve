#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long
int nthUglyNumber(int n)
{
  vector<int> ugly(n, 1);
  int c2 = 2, c3 = 3, c5 = 5;
  int i2 = 0, i3 = 0, i5 = 0;
  for(int i = 1; i < n; ++i)
  {
    int last = ugly[i] = std::min({c2, c3, c5});
    while(c2 <= last) c2 = 2 * ugly[++i2];
    while(c3 <= last) c3 = 3 * ugly[++i3];
    while(c5 <= last) c5 = 5 * ugly[++i5];
  }
  return ugly[n - 1];
}
void solve()
{
  cout << "The 1500'th ugly number is " << nthUglyNumber(1500) << ".\n"; 
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

