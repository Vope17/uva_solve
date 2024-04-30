#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int res = 0;
		vector<string> strs(n);
		for(string &s : strs)
			getline(cin, s);
			
		for(int i = 0; i < strs.size(); ++i)
		{
			if(strs[i] == "LEFT")
				res--;
			else if(strs[i] == "RIGHT")
				res++;
			else
			{
				char c = strs[i][8];
				if(strs[c - '0' - 1] == "LEFT")
				{
					strs[i] = "LEFT";
					res--;
				}
				else
				{
					strs[i] = "RIGHT";
					res++;
				}
			}
		}
		cout << res;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
