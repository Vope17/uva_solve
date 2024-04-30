#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long

void solve()
{
  string a, b;
  while(cin >> a >> b)
  {
    if(a == "0" || b == "0")
    {
      cout << 0 << '\n';
      continue;
    }
    if (a.size() > b.size())
      std::swap(a, b);
    int n1 = a.size(), n2 = b.size();
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    int mx = std::max(n1, n2);
    vector<int> res(n1 + n2, 0);
    int i = 0, j = 0;
    for (i = 0; i < n2; ++i)
    {
      for (j = 0; j < n1; ++j)
      {
        int tmp = (a[j] - '0') * (b[i] - '0');
        res[i + j] += tmp;
        res[i + j + 1] += res[i + j] / 10;
        res[i + j] %= 10;
      }
    }
    std::reverse(res.begin(), res.end());
    for (int i = 0; i < n1 + n2; ++i)
    {
      if(i == 0 && res[i] == 0)
        continue;
      cout << res[i];
    }
    cout << '\n';
  }
}

  int main()
  {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
    return 0;
  }


