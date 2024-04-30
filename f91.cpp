#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

int f91(int n)
{
  if(n <= 100)
    return f91(f91(n + 11));
  else 
    return n - 10;
}

void solve()
{
  int n;
  while(cin >> n && n)
  {
    cout << "f91("  << n << ") = "<< f91(n) << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

