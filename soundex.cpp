#include<bits/stdc++.h>
using namespace std;

unordered_map<string, int> umap
{
	{"BFPV", 1},
	{"CGJKQSXZ", 2},
	{"DT", 3},
	{"L", 4},
	{"MN", 5},
	{"R", 6},
};
void solve()
{
	unordered_map<char, int> newMap;
	for(auto it = umap.begin(); it != umap.end(); ++it)
	{
		for(int i = 0; i < it->first.size(); ++i)
		{
			newMap[it->first[i]] = it->second;
		}
	}
	string str;
	while(cin >> str)
	{
	
		int slow = 0;
		for(int i = 0; i < str.size(); ++i)
		{
			str[slow] = str[i];
			while(i < str.size() - 1 && str[i] == str[i + 1]) 
				++i;
			
			slow++;
		}
		str.resize(slow);
		bool is_p = false;
		int p_n = -1;
		for(int i = 0; i < str.size(); ++i)
		{
			if(newMap.find(str[i]) != newMap.end() && (is_p == false || p_n != newMap[str[i]]))
			{
				cout << newMap[str[i]];
				is_p = true;
				p_n = newMap[str[i]];
			}
			else
				is_p = false;
		}
		cout << '\n';
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
