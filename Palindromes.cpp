#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map;
#define ll long long
#define ERROR 1e-8

map<char, char> mp = {
  {'A', 'A'},
  {'E', '3'},
  {'H', 'H'},
  {'I', 'I'},
  {'J', 'L'},
  {'M', 'M'},
  {'O', 'O'},
  {'S', '2'},
  {'T', 'T'},
  {'U', 'U'},
  {'V', 'V'},
  {'W', 'W'},
  {'X', 'X'},
  {'Y', 'Y'},
  {'Z', '5'},
  {'1', '1'},
  {'8', '8'},

  {'L', 'J'},
  {'2', 'S'},
  {'3', 'E'},
  {'5', 'Z'},

};

bool isPalindrome(string str)
{
  int l = 0, r = str.size() - 1;
  while(l < r)
    if(str[l++] != str[r--])
      return false;
  return true;
}

bool isMirrored(string str)
{
  int l = 0, r = str.size() - 1;
  while(l < r)
  {
    if(mp.find(str[l]) == mp.end())
      return false;
    if(mp[str[l]] != str[r])
      return false;
    l++, r--;
  }
  if(str.size() % 2 && mp[str[l]] != str[l]) 
    return false;
  return true;
}

void solve()
{
  string str;
  while(cin >> str)
  {
    cout << str << " -- is ";

    bool isPal = isPalindrome(str);
    bool isMir = isMirrored(str);
    if(isPal)
    {

      if(isMir)
        cout << "a mirrored palindrome.";
      else 
        cout << "a regular palindrome.";
    }
    else 
    {
      if(isMir)
        cout << "a mirrored string.";
      else 
        cout << "not a palindrome.";
    }
    cout << '\n' << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

