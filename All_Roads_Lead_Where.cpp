#include<bits/stdc++.h>

typedef struct node
{
	std::string name;
	std::vector<std::string> sub_cities;

}node;
void make_tree(node* root, std::unordered_set<std::string>& uset)
{
	std::string c1, c2;
	std::cin >> c1 >> c2;
	node *v 
	if(uset.find(c1) == uset.end())
	
	
}

void solve()
{
	int n, m;
	std::cin >> n >> m;
	node* root;
	std::unordered_set<std::string> uset;
	for(int i = 0; i < n; ++i)
	{
		make_tree(node* root, uset);
	}
}


int main()
{
	int t; std::cin >> t;
	while(t--)
		solve();
	return 0;
}
