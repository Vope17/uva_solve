#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::unordered_map, std::pair;
#define ll long long
#define ERROR 1e-8
#define bigNum int(1e6)
vector<int> prime_table(bigNum, 1);
void make_prime_table()
{
  prime_table[0] = prime_table[1] = 0;
  for(int i = 2; i <= bigNum; ++i)
  {
    if(prime_table[i])
      for(int j = i + i; j < bigNum; j += i)
        prime_table[j] = 0;
  }
}

void solve()
{
  int n;
  make_prime_table();
  while(cin >> n && n)
  {
    pair<int, int> mx;
    bool find = false;
    int i = 2;
    for(i = 2; i <= n / 2; ++i)
    {
      if(prime_table[i] && prime_table[n - i])
      {
        find = true;
        break;
        // mx = std::max(mx, std::make_pair(i, n - i), [](const pair<int, int> &p1, const pair<int, int> &p2){return std::abs(p1.first - p1.second) <= std::abs(p2.first - p2.second);});
      }
    }
    // if(mx.first > mx.second)
    //   std::swap(mx.first, mx.second);
    if(find)
      cout << n << " = " << i << " + " << n - i << '\n';
    else 
      cout << "Goldbach's conjecture is wrong.\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

