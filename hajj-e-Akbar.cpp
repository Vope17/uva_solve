#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  string str;
  int k = 1;
  while(cin >> str && str != "*")
  {
    cout << "Case " << k++ << ": ";
    if(str == "Hajj")
      cout << "Hajj-e-Akbar\n";
    else 
      cout << "Hajj-e-Asghar\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

