#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

void solve()
{
  string s, t;
  while(cin >> s >> t)
  {
    int n1 = s.size(), n2 = t.size();
    int j = 0;
    for(int i = 0; i < n2; ++i)
    {
      if(t[i] == s[j])
        j++;
    }
    if(j == n1)
      cout << "Yes\n";
    else 
      cout << "No\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

