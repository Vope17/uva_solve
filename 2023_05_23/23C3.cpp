#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		vector<int> nums(n);
		vector<bool> check(n, false);
		for(int &x : nums)
			cin >> x;
		
		bool res = true;
		for(int i = 1; i < n; ++i)
		{
			int index = abs(nums[i] - nums[i - 1]);
			if(index >= n)
			{
				res = false;
				break;
			}
			else
				check[index] = true;
		}
		for(int i = 1; i < n; ++i)
		{
			if(check[i] == false)
			{
				res = false;
				break;
			}
		}
		if(res)
			cout << "Jolly\n";
		else
			cout << "Not jolly\n";
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}	
