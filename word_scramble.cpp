#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  string line;
  while(std::getline(cin, line))
  {
    istringstream iss(line);
    string str;
    while(iss >> str)
    {
      std::reverse(str.begin(), str.end());
      cout << str;
      if(!iss.eof())
        cout << ' '; 
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

