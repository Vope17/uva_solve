#include <bits/stdc++.h>
using std::string;
bool check(string num, int n)
{
	
	int num1 = stoi(num.substr(0, n / 2));
	int num2 = stoi(num.substr(n / 2, n / 2));

	if((num1 + num2) * (num1 + num2) == stoi(num))
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
  		string str = std::to_string(i);
  		while(str.size() < n)
			str = "0" + str;
			
  		if(check(str, n))
  			std::cout << str << '\n';
  	}
  }
}

int main()
{
  solve();
  return 0;
}


