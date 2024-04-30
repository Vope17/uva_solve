#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	while(t--)
	{
		int n, i, j;
		vector<vector<char>> record(n);

		record[0] = {'0'};
		record[1] = {'1'};
		record[2] = {'0', '1'};

		for(int i = 3; i < record.size(); ++i)
		{
			record[i] = record[i - 2]	
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
