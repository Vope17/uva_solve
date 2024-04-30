#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t; cin >> t;
  while(t--)
  {
    int d; cin >> d;
    int n; cin >> n;
    vector<bool> days(d + 1, false);
    vector<int> parties(n);
    for(int &x : parties)
    cin >> x;

    for(int &x : parties)
    {
      for(int i = x; i <= d; i += x)
        if(i % 7 == 6 || i % 7 == 0)
          continue;
        else 
          days[i] = true;
    }
    int cnt = 0;
    for(bool b : days)
    if(b)
      cnt++;
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

