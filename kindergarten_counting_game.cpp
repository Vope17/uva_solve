#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

void solve()
{
  string line;
  while(std::getline(cin, line))
  {
    int cnt = 0;
    int n = line.size();
    for(int i = 0; i < n; ++i)
    {
      if(std::isalpha(line[i]))
      {
        while(std::isalpha(line[i]))
          i++;

        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


