#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::unordered_map, std::pair;
#define ll long long
#define ERROR 1e-8
void solve()
{
  double h, u, d, f;
  while (cin >> h >> u >> d >> f && h)
  {
    double curPos = 0;
    int day = 1;
    f = u * f / 100;
    do {
      if(u >= 0)
      curPos += u;
      u -= f;
      if(curPos > h)
        break;
      curPos -= d;
      if(curPos < 0)
        break;
      ++day;
    } while(curPos >= 0); 
  if(curPos > 0)
    cout << "success on day " << day << '\n';
  else 
    cout << "failure on day " << day << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

