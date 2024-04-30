#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, q;
	int k = 1;
	while(cin >> n >> q)
	{
		if(n == 0 && q == 0)
			break;
		cout << "CASE# " << k << ":\n";
		k++;	

		vector<int> marbles(n);
		vector<int> queries(q);
		for(int &x : marbles)
			cin >> x;
		
		for(int &x : queries)
			cin >> x;
		
		sort(marbles.begin(), marbles.end());
		
		for(int i = 0; i < q; ++i)
		{
			cout << queries[i] << ' ';
			auto it = lower_bound(marbles.begin(), marbles.end(), queries[i]);
			int z = it - marbles.begin();
			if(marbles[z] == queries[i])
				cout << "found at " << z + 1<< '\n';
			else
				cout << "not found\n";	
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
