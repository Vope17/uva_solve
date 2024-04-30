#include <bits/stdc++.h>
using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set, std::queue;
#define ll long long

vector<bool> PrimeTable(10000000, true);

bool IsPrime(string num)
{
  int n = stoi(num); 
  return PrimeTable[n];
}

void solve()
{
  PrimeTable[0] = PrimeTable[1] = false;
  for (int i = 2; i * i < 10000000; ++i)
    if(PrimeTable[i])
      for (int j = i * i; j < 10000000; j += i)
        PrimeTable[j] = false;
  string num;
  while (cin >> num)
  {
    cout << num << " ";
    if (IsPrime(num))     
    {
      string ori = num;
      std::reverse(num.begin(), num.end());
      if (ori == num)
      {
        cout << "is prime.\n";
        continue;
      }
      if (IsPrime(num))
        cout << "is emirp.\n";
      else 
        cout << "is prime.\n";
    }
    else 
    {
      cout << "is not prime.\n";
    }
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}



