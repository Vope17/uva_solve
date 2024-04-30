#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long
vector<bool> prime_table(10000, true);
void solve()
{ 
  string str;
  prime_table[0] = false;
  for (int i = 2; i < 10000; ++i)
    if (prime_table[i])
      for (int j = i * i; j < 10000; j += i)
        prime_table[j] = false;

  while (cin >> str)
  {
    int sum = 0;
    for (char &c : str)
      if (c >= 'A' && c <= 'Z')
        sum += (c - 'A') + 26 + 1;
      else if (c >= 'a' && c <= 'z')
        sum += (c - 'a') + 1;

    if (prime_table[sum])
      cout << "It is a prime word.\n";
    else 
      cout << "It is not a prime word.\n";
  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


