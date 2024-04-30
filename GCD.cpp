#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	while(cin >> n && n)
	{
		int res = 0;
		for(int i = 1; i < n; ++i)
			for(int j = i + 1; j <= n; ++j)
				res += __gcd(i, j);	

		cout << res << '\n';
	}
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}


