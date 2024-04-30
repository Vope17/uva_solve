#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::stack, std::string, std::unordered_map, std::pair, std::map, std::priority_queue, std::istringstream, std::set;
#define ll long long

void solve()
{
  string line;
  set<string> st;
  while (std::getline(cin, line))
  {
    for (char &c : line)
      if (!isalpha(c))
        c = ' ';
      else 
        c = tolower(c);
    istringstream iss(line);
    string str;
    while (iss >> str)
      st.insert(str);
  }
  for (auto it = st.begin(); it != st.end(); ++it)
    cout << *it << '\n';
}

int main(int argc, char **argv)
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}


