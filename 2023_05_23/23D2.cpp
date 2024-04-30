#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int t; cin >> t;
	string str;
	int k = 1;
	while(t--)
	{
		cout << "Test #" << k << ": ";
		k++;
		cin.ignore();
		getline(cin, str);
		int n = 0;
		for(int i = 4; i < str.size(); ++i)
			if(str[i] >= '0' && str[i] <= '9')
				n = n * 10 + str[i] - '0';
		vector<vector<ll>> matrix(n, vector<ll>(n));
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> matrix[i][j];


		bool check = true;
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				if(matrix[i][j] < 0 || matrix[i][j] != matrix[n - 1 - i][n - 1 - j])
				{
					check = false;
					break;
				}
			}
		}
		if(check)
			cout << "Symmetric.\n";
		else
			cout << "Non-symmetric.\n";
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}	
