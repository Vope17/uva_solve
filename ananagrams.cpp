#include <bits/stdc++.h>

using std::cin, std::cout, std::vector, std::string, std::map, std::multiset, std::set;
#define ll long long

string ToLower(string str)
{
  for (char &c : str)
    c = tolower(c);
  return str;
}


void solve()
{ 
  string str;
  vector<string> strs;
  int index = 0;
  while (cin >> str && str != "#")
  {
    strs.push_back(str);
  }
  map<string, string> mp;
  for (int i = 0; i < strs.size(); ++i)
  {
    string tmp = ToLower(strs[i]);
    std::sort(tmp.begin(), tmp.end());
    mp[tmp] = strs[i];
  }

  multiset<string> mset;
  for (int i = 0; i < strs.size(); ++i)
  {
    strs[i] = ToLower(strs[i]);
    std::sort(strs[i].begin(), strs[i].end());
    mset.insert(strs[i]);   
  }
  set<string> st;
  for (auto it = mset.begin(); it != mset.end(); ++it)
  {
    if (mset.count(*it) == 1)
      st.insert(mp[*it]);
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


