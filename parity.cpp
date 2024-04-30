#include<bits/stdc++.h>
// solve1
void solve()
{
	int n;
	while(std::cin >> n && n)
	{
		std::bitset<32> bs(n);
		std::cout << "The parity of ";
		for(int i = 31; i >= 0; --i)
			if(bs[i] == 1)
			{
				while(i >= 0)
				{
					std::cout << bs[i--];
				}
			}
		std::cout << " is " << bs.count() << " (mod 2).\n";
	}
}
// solve2
pair<int, string> cnt(int n)
{
  int cnt = 0;
  string str;
  while (n)
  {
    if (n % 2)
      str += "1", cnt++;
    else 
      str += "0";
    n /= 2;
  }
  std::reverse(str.begin(), str.end());
  return {cnt, str};
}

void solve2()
{
  int n;
  while (cin >> n && n)
  {
    auto p = cnt(n);
    cout << "The parity of " << p.second << " is " << p.first << " (mod 2).\n";
  }
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
