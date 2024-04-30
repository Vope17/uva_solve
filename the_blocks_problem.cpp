#include<bits/stdc++.h>
using std::cin, std::cout, std::string, std::vector, std::istringstream, std::stack, std::map, std::deque, std::list;
#define ll long long
#define ERROR 1e-8

void print_blocks(vector<list<int>> &blocks, int n)
{
  for(int i = 0; i < n; ++i)
  {
    cout << "#" << i << " : ";
    while(!blocks[i].empty())
    {
      cout << blocks[i].front() << ' '; 
      blocks[i].pop_front();
    }
    cout << '\n';
  }
}

void clean_block(vector<list<int>> &blocks, vector<int> &b_pos, int pos)
{
  while(!blocks[pos].empty() && blocks[pos].size() > 1)
  {
    int tmp = blocks[pos].back();
    b_pos[tmp] = tmp;
    while(!blocks[tmp].empty() && blocks[tmp].size() > 1)
      blocks[tmp].pop_back();
    blocks[pos].pop_back();
  }
}

void solve()
{
  int n; cin >> n;
  string line;
  string str1, str2;
  int from, to;
  vector<list<int>> blocks(n);
  vector<int> pos(n);
  for(int i = 0; i < n; ++i)
  {
    blocks[i].push_back(i);
    pos[i] = i;
  }
  while(cin >> str1 && str1 != "quit", cin >> from >> str2 >> to)
  {
    if(str1 == "move")
    {
      if(str2 == "onto")
      {
        clean_block(blocks, pos, from);
        clean_block(blocks, pos, to);
        blocks[to].push_back(from);
        pos[from] = to;
      }
      else 
      {
        clean_block(blocks, pos, from);
        for(int i = 0; i < blocks[to].size(); ++i)
        {
          if(blocks[to].back() != to)
            blocks[blocks[to].back()].push_back(from);
        }
        blocks[to].push_back(from);
        pos[from] = to;
      }
    }
    else 
  {
      if(str2 == "onto")
      {
        clean_block(blocks, pos, to);
      }
      else 
    {

      }
    }
  }
  print_blocks(blocks, n);
}

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  solve();
  return 0;
}

