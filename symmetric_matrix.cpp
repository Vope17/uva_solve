#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int n;
	char c;
	int k = 1;
	while(t--)
	{
		std::cout << "Test #" << k++ << ": ";
		std::cin >> c >> c;	
		std::cin >> n;
		std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
		bool isValid = true;
		for(auto &v : matrix)
			for(auto &x : v)
			{
				std::cin >> x;
				if(x < 0)
					isValid = false;
			}

		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
				if(matrix[i][j] != matrix[n - i - 1][n - j - 1])
				{
					isValid = false;
					break;
				}
		}
		if(isValid)
			std::cout << "Symmetric.\n";
		else
			std::cout << "Non-symmetric.\n";
	}
}


int main()
{
	solve();
	return 0;
}
