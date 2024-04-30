#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t; cin >> t;
  while(t--)
  {
    int n, m;
    cin >> n >> m;
    n -= 2, m -= 2;
    if(n % 3)
      n = n / 3 + 1; 
    else 
      n = n / 3;
    if(m % 3)
      m = m / 3 + 1;
    else 
      m = m / 3;
    cout << n * m << '\n'; 
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

