#include<bits/stdc++.h>
using namespace std;
void solve1()
{
	int n;
	while(std::cin >> n)
	{
		std::cout << n * 3 / 2 << '\n';
	}
}
void solve2()
{
  int n;
  while (cin >> n)
  {
    int cnt = 0;
    int empty = 0;
    while(n)
    {
      cnt += n;
      empty += n;
      n = empty / 3;
      empty = empty % 3;
    }
    if(empty == 2)
      cnt++;
    cout << cnt << '\n';

  }
}

int main()
{
	solve1();
	solve2();
	return 0;
}
