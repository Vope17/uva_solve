#include<bits/stdc++.h>
using namespace std;
void solve()
{
	std::string str;
	std::unordered_map<std::string, std::string> umap;
	while(getline(std::cin, str))
	{
		if(str.empty())
			break;

		istringstream is(str);
		string s1, s2;
		is >> s1 >> s2; 
		umap[s1] = s2;
		umap[s2] = s1;
	}

	while(cin >> str)
	{
		if(str == " ")
			break;
		if(umap.find(str) != umap.end())
			cout << umap[str] << '\n';
		else
			cout << "eh\n";
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);	
	solve();
	return 0;
}
