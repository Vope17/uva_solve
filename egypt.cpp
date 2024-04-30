#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long

void solve()
{
  int a, b, c;
  while(cin >> a >> b >> c && !(a == 0 && b == 0 && c == 0))
  {
    if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
      cout << "right";
    else 
      cout << "wrong";
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


