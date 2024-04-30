#include<bits/stdc++.h>
#define ll long long
void solve()
{
	int s;
	ll d;
	while(std::cin >> s >> d)
	{
		int k = s;
		ll cnt = 0;
		while(d > 0)
		{
			d -= k;
			k++;
			cnt++;
		}
		std::cout << s + cnt - 1 << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
