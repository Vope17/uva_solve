#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue;
#define ll long long

void solve()
{
  int n, x;
  while (cin >> n && n)
  {
    priority_queue<int, vector<int>, std::greater<int>> pq;
    while (n--)
    {
      cin >> x;
      pq.push(x);
    }
    int res = 0;
    int tmp = 0;
    while(pq.size() > 1)
    {
      tmp = pq.top(); pq.pop();
      tmp += pq.top(); pq.pop();
      res += tmp;
      pq.push(tmp);
    }
    cout << res << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


