#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream;
#define ll long long

void solve()
{
  int t; cin >> t; cin.ignore();
  string line;
  cout << "Lumberjacks:\n";
  while (t--)
  {
    std::getline(cin, line);
    istringstream iss(line);
    vector<int> nums;
    int x;
    while (iss >> x)
      nums.push_back(x);

    vector<int> copy1(nums.begin(), nums.end());
    vector<int> copy2(nums.begin(), nums.end());
    std::sort(copy1.begin(), copy1.end());
    std::sort(copy2.rbegin(), copy2.rend());
    bool isOrdered1 = true;
    bool isOrdered2 = true;
    for (int i = 0; i < nums.size(); ++i)
      if (nums[i] != copy1[i])
        isOrdered1 = false;

    for (int i = 0; i < nums.size(); ++i)
      if (nums[i] != copy2[i])
        isOrdered2 = false;
    if (isOrdered1 || isOrdered2)
      cout << "Ordered\n";
    else 
      cout << "Unordered\n";
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


