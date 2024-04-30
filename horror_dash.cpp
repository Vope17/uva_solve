#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

void solve()
{
  int t; cin >> t;
  int k = 1; 
  while(t--)
  {
    cout << "Case " << k++ << ": ";
    int n; cin >> n;
    int mx = 0;
    while(n--)
    {
      int x; cin >> x;
      mx = std::max(mx, x);
    }
    cout << mx <<'\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

