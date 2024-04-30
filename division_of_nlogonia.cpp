#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

void solve()
{
  int t;
  while(cin >> t && t)
  {
    int sx, sy;
    cin >> sx >> sy;
    int x, y;
    while(t--)
    {
      cin >> x >> y;
      if(x == sx || y == sy)
        cout << "divisa";
      else if(x > sx && y > sy)
        cout << "NE";
      else if(x > sx && y < sy)
        cout << "SE";
      else if(x < sx && y > sy)
        cout << "NO";
      else if(x < sx && y < sy)
        cout << "SO";
      cout << '\n';
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

