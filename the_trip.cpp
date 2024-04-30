#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long

void solve()
{ 
  int n; 
  while (cin >> n && n)
  {
    vector<double> nums(n);
    double avg = 0;
    for (double &d : nums)
    {
      cin >> d;
      avg += d;
    }
    avg = (double)((int)(avg * 100 / n + 0.5)) / 100;
    double low = 0, high = 0;
    for (double &d : nums)
    {
      if (d > avg) high += (d - avg);
      if (d < avg) low += (avg - d);
    }
    cout << "$" << std::fixed << std::setprecision(2) << (std::min(high, low)) << '\n';
  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


