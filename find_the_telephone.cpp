#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream;
#define ll long long
void solve()
{
  string str;
  int hash[26] = {0};
  for (int i = 0; i < 15; i++)
    hash[i] = (i / 3) + 2;
  hash[15] = hash[16] = hash[17] = hash[18] = 7;
  hash[19] = hash[20] = hash[21] = 8;
  hash[22] = hash[23] = hash[24] = hash[25] = 9;
  while (cin >> str)
  {
    for (char &c : str)
      if (c >= 'A' && c <= 'Z')
        cout << hash[c - 'A'];
      else 
        cout << c;
    cout << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


