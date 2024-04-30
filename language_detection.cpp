#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::unordered_map;
#define ll long long
#define ERROR 1e-8

void solve()
{
  string str;
  int k = 1;
  unordered_map<string, string> umap =
    {
      {"HELLO", "ENGLISH"}, 
      {"HOLA", "SPANISH"}, 
      {"HALLO", "GERMAN"}, 
      {"BONJOUR", "FRENCH"}, 
      {"CIAO", "ITALIAN"}, 
      {"ZDRAVSTVUJTE", "RUSSIAN"}
    };
  while(cin >> str && str != "#")
  {
    cout << "Case " << k++ << ": "; 
    if(umap.find(str) != umap.end())
      cout << umap[str] << '\n';
    else 
      cout << "UNKNOWN\n";
  }
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

