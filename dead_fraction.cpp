#include <bits/stdc++.h>
using std::string;
void solve()
{
  string str;
  while(std::cin >> str)
  {
    int num = stoi(str.substr(0, 0));
    std::cout << num;
  }
}

int main()
{
  solve();
  return 0;
}
