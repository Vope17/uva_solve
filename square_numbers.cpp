#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long
bool IsSquare(int num)
{
  for(int i = 1; i * i <= num; ++i)
  {
    if(i * i == num)
      return true;
  }
  return false;
}

void solve()
{
  int a, b;
  while(cin >> a >> b && !(a == 0 && b == 0))
  {
    int cnt = 0;
    for(int i = a; i <= b; ++i)
      if(IsSquare(i))
        cnt++;
    cout << cnt << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


