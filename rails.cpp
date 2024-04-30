#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string;
#define ll long long

void solve()
{
  int n; 
  int f;
  string line;
  while (cin >> n && n)
  {
    while(1)
    {
      vector<int> original(n);
      std::iota(original.begin(), original.end(), 1);

      vector<int> nums(n);
      for (int &x : nums)
        cin >> x;
      
      stack<int> st;
      st.push(0);
      int j = 0;
      for (int i = 0; i < n; ++i)
      {
        while (st.top() != nums[i] && j < n) 
        {
          st.push(original[j++]);
        }
        if (st.top() == nums[i])
          st.pop();
      }
      if (st.size() <= 1)
        cout << "Yes\n";
      else 
        cout << "No\n";

      cin.ignore();
      if(cin.peek() == '0')
      {
        cin.ignore();
        break;
      }
    }
    cout << '\n';
  }
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


