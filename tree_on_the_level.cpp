#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	int val;
	node* left;
	node* right;
	node():val(0), left(nullptr), right(nullptr){}
}node;
void make_tree(node*, int, string);
void traversal(node*, vector<int>&, bool &);
int find_h(node*);
bool isComplete_tree(node*);
void solve()
{
	string str;
	node* root = new node;
	unordered_set<string> uset;
	vector<int> res;
	bool is_complete = true;
	while(cin >> str)
	{
		if(str.empty())
			break;
		int val = 0;
		string temp;
		if(str == "()")
		{
			traversal(root, res, is_complete);
			int h = find_h(root);
			h++;

			if(is_complete)
			{
				for(int i = 0; i < res.size(); ++i)
				{
					cout << res[i];
					if(i != res.size() - 1)
						cout << ' ';
				}
				cout << '\n';
			}
			else
				cout << "not complete\n";
			root = new node;
			uset.clear();
			res.clear();
			is_complete = true;
			continue;
		}
		for(int i = 0; i < str.size(); ++i)
		{
			if(str[i] >= '0' && str[i] <= '9')
			{
				val = val * 10 + str[i] - '0';	
			}
			if(str[i] == 'L' || str[i] == 'R')
				temp += str[i];
		}
		if(uset.find(temp) != uset.end())
			is_complete = false;
		uset.insert(temp);
		make_tree(root, val, temp);
	}

}
void make_tree(node* root, int val, string temp)
{

	node* tree = root;
	for(char c : temp)
	{
		if(c == 'L')
		{
			if(!tree->left)
				tree->left = new node;
			tree = tree->left;
		}
		else
		{
			if(!tree->right)
				tree->right = new node;
			tree = tree->right;
		}
	}
	if(tree->val < val)
		tree->val = val;
}
void traversal(node* root, vector<int> &res, bool &check)
{
	if(!root)
		return;
	queue<node*> que;
	que.push(root);
	while(!que.empty())
	{
		node* cur = que.front();
		que.pop();
		res.emplace_back(cur->val);
		if(cur->val == 0)
			check = false;
		if(cur->left)
			que.push(cur->left);
		if(cur->right)
			que.push(cur->right);
	}
}
int find_h(node* root)
{
	if(!root)
		return 0;
	return max(find_h(root->left), find_h(root->right)) + 1;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;	
}
