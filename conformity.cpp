#include <bits/stdc++.h>
using std::string;
void solve()
{
  int n;
  while(std::cin >> n && n)
  {
    std::map<string, int> map;
    int mx = 0;
    while(n--)
    {
      string str;
      string combination;
      for(int i = 0; i < 5; ++i)
      {
        std::cin >> str;
        combination += str;
      }
      std::sort(combination.begin(), combination.end());
      map[combination]++;
  	  mx = std::max(mx, map[combination]);
    }
    int res = 0;
	for(auto it = map.begin(); it != map.end(); ++it)
	{
		if(it->second == mx)
			res += mx;
	}
	std::cout << res << '\n';
  }
}

int main()
{
  solve();
  return 0;
}

