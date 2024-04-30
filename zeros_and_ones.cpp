#include<bits/stdc++.h>
using namespace std;

void solve()
{
	std::string str;
	int k = 1;
	while(cin >> str)
	{
		int n; cin >> n;
		cout << "Case " << k << ":\n";
		k++;
		while(n--)
		{
			int a, b;
			cin >> a >> b;
			bool all_zero = true;
			bool all_one = true;
			if(a > b)
				swap(a, b);
			
			for(int i = a; i <= b; ++i)
			{
				if(str[i] == '1')
					all_zero = false;
				if(str[i] == '0')
					all_one = false;
			}
			if(all_zero || all_one)
				cout << "Yes\n";
			else
				cout << "No\n";
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
