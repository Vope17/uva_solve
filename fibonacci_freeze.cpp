#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set, std::queue;
#define ll long long

string add(string num1, string num2)
{
  int n = std::max(num1.size(), num2.size());
  while (num1.size() < n)
    num1 = "0" + num1;

  while (num2.size() < n)
    num2 = "0" + num2;

  std::reverse(num1.begin(), num1.end());
  std::reverse(num2.begin(), num2.end());
  int carry = 0;
  string result;
  for (int i = 0; i < n; ++i)
  {
    int tmp = num1[i] - '0' + (num2[i] - '0') + carry;
    if (tmp >= 10)
      carry = 1;
    else 
      carry = 0;
    tmp %= 10; 
    result += char(tmp + '0');
  }
  if (carry)
    result += '1';
  std::reverse(result.begin(), result.end());
  return result;
}

void solve()
{ 
  int n;
  vector<string> dp(5005);
  dp[0] = "0";
  dp[1] = "1";
  for (int i = 2; i < 5005; ++i)
  {
    dp[i] = add(dp[i - 1], dp[i - 2]);
  }
  
  while (cin >> n)
  {
    cout << "The Fibonacci number for " << n << " is ";
    cout << dp[n] << '\n';
  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


