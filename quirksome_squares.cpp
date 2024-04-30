#include <bits/stdc++.h>

bool check(int num, int n)
{
  int origin = num;
  int num1 = 0, num2 = 0;
  n /= 2;
  int k = 0; 
  while(n--)
  {
    num2 += std::pow(10, k) * (num % 10);
    k++; 
    num /= 10;
  }
  num1 = num;
  if((num1 + num2) * (num1 + num2) == origin)
    return true;

  return false;
}

void solve()
{
  int n;
  while(std::cin >> n)
  {
    for(int i = 0; i < std::pow(10, n); ++i)
    {
      if(check(i, n))
      {
      	std::string str = std::to_string(i);
    	for(int i = str.size(); i < n; ++i)
    		str = "0" + str;
      	std::cout << str << '\n';
      }
        
    }
  }
}

int main()
{
  solve();
  return 0;
}


