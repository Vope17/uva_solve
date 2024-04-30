#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long
void solve()
{
  int n, b, h, w;
  while(cin >> n >> b >> h >> w)
  {
    int total = INT32_MAX;
    while(h--)
    {
      int cost; cin >> cost;
      vector<int> weeks(w);
      for(int &x : weeks)
        cin >> x;
      
      int mx = 0;
      for(int &x : weeks)
        mx = std::max(mx, x); 
      if(mx >= n)
        total = std::min(total, n * cost);
    }
    if(total > b)
      cout << "stay home\n";
    else 
      cout << total << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


