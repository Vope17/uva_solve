nclude<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> g(n);
		int total = 0;
		for(int &x : g)
		{
			cin >> x;
			total += x;
		}
		double avg = total / double(n);
		int cnt = 0;
		for(int i = 0; i < n; ++i)
		{
			if(double(g[i]) > avg)
				++cnt;	
		}
		double res = cnt / double(n) * 100;

		printf("%.3f%%\n", res);

	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
