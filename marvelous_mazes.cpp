#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long

void solve()
{ 
  string str;
  while (cin >> str)
  {
    
    int sum = 0;
    int n = str.size();
    for (int i = 0; i < n; ++i)
    {
      if (str[i] >= '0' && str[i] <= '9')
      {
        while (i < n && str[i] >= '0' && str[i] <= '9')
        {
          sum += (str[i] - '0');
          i++;
        }
      }
      if (str[i] == 'b')
      {
        while (sum)
        {
          cout << ' ';
          sum--;
        }
      }
      else if (str[i] == '!')
      {
        cout << '\n';
      }
      else 
      {
        while (sum)
        {
          cout << str[i];
          sum--;
        }
      }
    }
    cin.ignore();
    if (cin.peek() == 10)
      cout << "\n\n";
    else 
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


