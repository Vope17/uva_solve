#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set, std::queue;
#define ll long long

int recursion(ll a, const ll &limit, int cnt)
{
  if (a == 1)
    return cnt + 1;
  if (a > limit)
    return cnt;
  if (a % 2) 
    return recursion(3 * a + 1, limit, cnt + 1);
  else 
    return recursion(a / 2, limit, cnt + 1);
}

void solve()
{
  ll a, limit;
  int k = 1;
  while (cin >> a >> limit && (a >= 0 && limit >= 0))
  {
    cout << "Case " << k++ << ": A = " << a << ", limit = " << limit << ", number of terms = ";
    cout << recursion(a, limit, 0) << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


