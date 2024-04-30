#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;

int pow(int base, int n)
{
  int sum = 1;
  while(n--)
    sum *= base;

  return sum;
}

void solve()
{
  string str;
  while(cin >> str && str != "0")
  {
    int sum = 0;
    std::reverse(str.begin(), str.end());
    for(int i = 0; i < str.size(); ++i)
    {
      sum += (str[i] - '0') * (pow(2, i + 1) - 1);
    }
    cout << sum << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


