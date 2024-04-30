#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::unordered_map, std::pair;
#define ll long long
#define ERROR 1e-8
#define bigNum int(1e6)

void solve()
{
  string str;
  while(cin >> str && str != "#")
  {
    if(std::next_permutation(str.begin(), str.end()))
      cout << str << '\n';
    else 
      cout << "No Successor\n";
  }

}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

