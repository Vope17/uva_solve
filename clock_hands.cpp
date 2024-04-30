#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map;
#define ll long long
#define ERROR 1e-8

void solve()
{
  string times;
  while(cin >> times && times != "0:00")
  {
    if(times.size() == 4)
      times = "0" + times;
    int h = 0, m = 0;
    h = 10 * (times[0] - '0') + (times[1] - '0');
    m = 10 * (times[3] - '0') + (times[4] - '0');
    
    double angle = 0;
    angle = std::abs(30 * h - 6 * m + 30 * (m / double(60)));
    angle = std::min(angle, 360 - angle);
    cout << std::fixed << std::setprecision(3) << angle << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

