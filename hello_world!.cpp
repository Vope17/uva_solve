#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long
vector<bool> prime_table(10000, true);
void solve()
{ 
  int n;
  int k = 1;
  while (cin >> n && n >= 0)
  {
    cout << "Case " << k++ << ": ";
    cout << std::ceil(std::log(n) / std::log(2)) << '\n';
  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


