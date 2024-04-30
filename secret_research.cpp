#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map;
#define ll long long

void solve()
{
  int t; cin >> t;
  while (t--)
  {
    string str; cin >> str;
    int n = str.size();
    if (str == "1" || str == "4" || str == "78")
      cout << "+\n";
    else if (n >= 2 && str[n - 1] == '5' && str[n - 2] == '3')
      cout << "-\n";
    else if (n >= 1 && str[0] == '9' && str[n - 1] == '4')
      cout << "*\n";
    else if (n >= 3 && str[0] == '1' && str[1] == '9' && str[2] == '0')
      cout << "?\n";
    
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


