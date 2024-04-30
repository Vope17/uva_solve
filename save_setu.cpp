#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;

void solve()
{
  int t; cin >> t;
  int sum = 0;
  while(t--)
  {
    string str;
    int num;
    cin >> str;
    if(cin.peek() == ' ') 
    {
      cin >> num;
      sum += num;
    }
    else 
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


