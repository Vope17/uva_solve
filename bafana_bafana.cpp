
#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long

void solve()
{ 
  int t; cin >> t;
  int n, k, p;
  int z = 1;
  while (t--)
  {
    cout << "Case " << z++ << ": ";
    cin >> n >> k >> p;
    vector<int> players(n + 1);
    std::iota(players.begin(), players.end(), 0);
    vector<int> circle(2 * n + 1);
    std::copy(players.begin(), players.end(), circle.begin());
    std::copy(circle.begin() + 1, circle.begin() + n + 1, circle.begin() + n + 1);
    
    p %= n;

    cout << circle[k + p] << '\n';

  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


