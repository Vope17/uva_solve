#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream;
#define ll long long

void solve()
{
  int n;
  while (cin >> n)
  {
    if (n == 0)
    {
      cout << 0 << '\n';
      continue;
    }

    int cnt = 1;
    int nums = 1;
    while (nums % n != 0)
    {
      nums %= n; // avoid big number operation, the result is same
      nums = nums * 10 + 1;
      cnt++;
    }

    cout << cnt << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


