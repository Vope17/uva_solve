#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int n, k;
  while(cin >> n >> k)
  {
    int butts = 0;
    int cnt = 0;
    while(n >= 1)
    {
      cnt += n;
      butts += n;
      n = butts / k;
      butts %= k;
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

