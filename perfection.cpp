#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int n;
  cout << "PERFECTION OUTPUT\n";
  while(cin >> n && n)
  {
    cout << std::setw(5) << n << "  ";
    int sum = 0;
    for(int i = 1; i < n; ++i)
      if(n % i == 0)
        sum += i; 
    if(sum > n)
      cout << "ABUNDANT\n";
    else if(sum < n)
      cout << "DEFICIENT\n";
    else 
      cout << "PERFECT\n";
  }
  cout << "END OF OUTPUT\n";
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

