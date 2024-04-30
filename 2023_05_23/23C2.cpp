#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int t; cin >> t;
	cout << "Lumberjacks:\n";
	
	while(t--)
	{
		vector<int> nums(10);
		for(int &x : nums)
			cin >> x;
		
		bool is_up = true;
		bool is_down = true;
	
		for(int i = 1; i < 10; ++i)
		{
			if(nums[i] > nums[i - 1])
				is_down = false;
			
			if(nums[i] < nums[i - 1])
				is_up = false;
		}
		if(is_up || is_down)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}	
