#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int a, b, c, d, L;
	while(cin >> a >> b >> c >> d >> L)
	{
		if(!a && !b && !c && !d && !L)
			break;
		int cnt = 0;
		for(int i = 0; i <= L; ++i)
		{
			ll sum = 0;
			sum += a * i * i + b * i + c;
			if(sum % d== 0)
				cnt++;
		}
		cout << cnt << '\n';
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}	
