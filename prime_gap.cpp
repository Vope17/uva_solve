#include<bits/stdc++.h>
using namespace std;
bool is_prime(int);
void solve()
{
	int n;
	while(cin >> n && n != 0)
	{
		int k = n;
		int q = n;
		int n1, n2;
		n1 = n2 = n;
		while(!is_prime(k))
		{
			k--;
			n1 = k;
		}
		while(!is_prime(q))
		{
			q++;
			n2 = q;	
		}
		cout << n2 - n1 << '\n';
	}
}

bool is_prime(int n)
{
	for(int i = 2; i < n; ++i)
		if(n % i == 0)
			return false;
		return true;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
