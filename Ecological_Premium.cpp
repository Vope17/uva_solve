#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		float sum = 0;
		while(n--)
		{
			int a, b, c;
			cin >> a >> b >> c;
			sum += (a / float(b)) * c * b;
		}
		cout << sum << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
