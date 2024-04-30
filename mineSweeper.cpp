#include<bits/stdc++.h>

using std::vector;
int check(vector<vector<char>> &graph, int i, int j)
{
	int mine = 0;
	for(int k = i - 1; k <= i + 1; ++k)
		for(int z = j - 1; z <= j + 1; ++z)
			if(graph[k][z] == '*')
				mine++;

	return mine;
}

void makeGraph(vector<vector<char>> &graph, int n, int m)
{
	for(int i = 1; i < n; ++i)
		for(int j = 1; j < m; ++j)
			std::cin >> graph[i][j];
}

void traversal(vector<vector<char>> &graph, int n, int m)
{
	for(int i = 1; i < n; ++i)
		for(int j = 1; j < m; ++j)
			if(graph[i][j] != '*')
				graph[i][j] = char(check(graph, i, j) + '0');	
}

void print(vector<vector<char>> &graph, int n, int m)
{
	for(int i = 1; i < n; ++i)
	{
		for(int j = 1; j < m; ++j)
			std::cout << graph[i][j];
		std::cout << '\n';
	}
}
void solve()
{
	int n, m;
	int k = 1;
	while(std::cin >> n >> m && n && m)
	{
		std::cout << "Field #" << k++ << ":\n";
		vector<vector<char>> graph(n + 2, vector<char>(m + 2, '.'));
		makeGraph(graph, n + 1, m + 1);
		traversal(graph, n + 1, m + 1);
		print(graph, n + 1, m + 1);
		std::cin.ignore();
		if(std::cin.peek() != '0')
			std::cout << '\n';
	}
}
int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
