#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::unordered_map, std::pair;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t;
  while(cin >> t)
  {
    map<char, int> mp;
    string line;
    std::getline(cin, line);
    while(t--)
    {
      std::getline(cin, line);
      for(char &c : line)
      {
        if(isalpha(c))
        {
          c = toupper(c);
          mp[c]++;
        }
      }
    }
    vector<pair<char, int>> v(mp.begin(), mp.end());
    std::sort(v.begin(), v.end(), [](const pair<char, int> &p1, const pair<char, int> &p2){
      if(p1.second == p2.second)
        return p1.first < p2.first;
      return p1.second > p2.second;
    });
    for(const auto &p : v)
    cout << p.first << ' ' << p.second << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

