#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	vector<string> result;
	while(t--)
	{
		int n; cin >> n;
		int k = n;
		string res(n, ' ');
		string n1, n2;
		while(n--)
		{
			char c1, c2;
			cin >> c1 >> c2;
			n1 += c1;
			n2 += c2;
		}
		int carry = 0;	
		for(int i = k - 1; i >= 0; --i)
		{
			int tmp = (n1[i] - '0') + (n2[i] - '0') + carry;
			if(tmp >= 10)
			{
				res[i] = char(tmp % 10 + '0');
				carry = 1;
			}
			else
			{
				res[i] = char(tmp + '0');
				carry = 0;
			}
		}
		result.push_back(res);
	}
	for(int i = 0; i < result.size(); ++i)
	{
		cout << result[i];
		if(i != result.size() - 1)
		{
			cout << '\n';
			cout << '\n';
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
