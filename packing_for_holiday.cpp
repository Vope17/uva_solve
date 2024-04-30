#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t; cin >> t;
  int k = 1;
  while(t--)
  {
    cout << "Case " << k++ << ": ";
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= 20 && b <= 20 && c <= 20)
      cout << "good\n";
    else 
      cout << "bad\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

