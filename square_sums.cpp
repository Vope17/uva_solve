#include<bits/stdc++.h>

using std::vector;
void solve()
{
	int n;
	while(std::cin >> n && n)
	{
		vector<vector<int>> matrix(n, vector<int>(n, 0));
		for(vector<int> &v : matrix)
			for(int &x : v)
				std::cin >> x;

		int sum = 0, k = 0;
		for(int i = 0; i < n / 2; ++i)
		{
			for(int j = 0; j < n / 2; ++j)
				sum += matrix[i][j] + matrix[i][j + n - 1 - k] + matrix[i + n - 1 - k][j] + matrix[i + n - 1 - k][j + n - 1 - k];
			k++;
		}
	}
}

int main()
{
	solve();
	return 0;
}
