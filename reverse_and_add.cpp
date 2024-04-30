#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream;
#define ll long long

bool isPal(string str)
{
  int l = 0, r = str.size() - 1;
  while(l < r)
  {
    if(str[l++] != str[r--])
      return false;
  }
  return true;
}

int recursion(string &nums, int cnt)
{
  if(isPal(nums))
    return cnt; 
  
  int n = nums.size();
  string tmp = nums;
  std::reverse(tmp.begin(), tmp.end());
  int carry = 0;
  for(int i = n - 1; i >= 0; --i)
  {
    int cal = (tmp[i] - '0') + (nums[i] - '0') + carry;
    // cout << cal  << ' '<< '\n';
    if(cal >= 10)
    {
      carry = 1;
      nums[i] = char((cal % 10) + '0');    
    }
    else
    {
      carry = 0;
      nums[i] = char((cal % 10) + '0');    
    }
  }
  if(carry == 1)
    nums = "1" + nums;
  return recursion(nums, cnt + 1);
}

void solve()
{
  int t; cin >> t;
  while(t--)
  {
    string n; cin >> n;
    cout << recursion(n, 0) << ' ' << n << '\n'; 
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

