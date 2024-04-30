#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long

int FindMaxIndex(vector<int> &nums, int r)
{
  int max = 0;
  int maxIndex = 0;
  for (int i = 0; i < r; ++i)
    if (nums[i] > max) 
      max = nums[i], maxIndex = i;
  return maxIndex;
}

void solve()
{ 
  string line;
  while (getline(cin, line))
  {
    std::istringstream iss(line);
    vector<int> nums;
    int num;
    while (iss >> num)
      nums.push_back(num);
    for (int &x : nums)
      cout << (&x == &nums[0] ? "" : " ") << x;
    cout << '\n';
    vector<int> sorted(nums);
    std::sort(sorted.begin(), sorted.end());
    int n = nums.size();
    int r = n;
    std::queue<int> res;
    while (nums != sorted)
    {
      int maxIndex = FindMaxIndex(nums, r);
      if (maxIndex == 0)
      {
        res.push(n - r + 1);
        std::reverse(nums.begin(), nums.begin() + r);
        r--;
      }
      else if (maxIndex == r - 1)
      {
        r--; 
      }
      else 
      {
        res.push(n - maxIndex);
        std::reverse(nums.begin(), nums.begin() + maxIndex + 1);
      }
    }
    while (!res.empty())
    {
      cout << res.front() << ' ';
      res.pop();
    }
    cout << '0' << '\n';
  }
}
int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0); 
  std::cin.tie(0);
  solve();
  return 0;
}


