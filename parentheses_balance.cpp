#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack;
#define ll long long
#define ERROR 1e-8

void solve()
{
  int t; cin >> t;
  string str;
  std::getline(cin, str);
  while(t--)
  {
    std::getline(cin, str);
    stack<char> st;
    bool isValid = true;
    for(char &c : str)
    {
      if(c == ']' && !st.empty() && st.top() == '[')
        st.pop();
      else if(c == ')' && !st.empty() && st.top() == '(')
        st.pop();
      else if(c == '(' || c == '[')
        st.push(c);
      else 
      {
        isValid = false;
        break;
      }
    }
    if(isValid && st.empty())
      cout << "Yes\n";
    else 
      cout << "No\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

