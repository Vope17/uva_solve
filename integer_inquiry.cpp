#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long

void solve()
{
  string str;
  string result;
  while(cin >> str && str != "0")
  {
    while(str.size() > result.size())
      result = "0" + result;
    while(str.size() < result.size())
      str = "0" + str;

    int carry = 0;
    for(int i = str.size() - 1; i >= 0; --i)
    {
      int tmp = carry + (str[i] - '0') + (result[i] - '0');
      if(tmp >= 10)
      {
        carry =  1;
        result[i] = char(tmp - 10 + '0');
      }
      else 
      {
        carry = 0;
        result[i] = char(tmp + '0');
      }
    }
    if(carry)
      result = "1" + result;
    
  }
  cout << result << '\n';
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


