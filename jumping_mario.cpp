#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	int k = 1;
	while(t--)
	{
		std::cout << "Case " << k++ << ": ";
		int n; std::cin >> n;
		std::vector<int> nums(n);
		for(int &x : nums)
			std::cin >> x;
		
		int h = 0, l = 0;
		for(int i = 1; i < nums.size(); ++i)
		{
			if(nums[i] > nums[i - 1])
				h++;
			else if(nums[i] < nums[i - 1])
				l++;
		}
		std::cout << h << ' ' << l << '\n';
	}
}

int main()
{
	solve();
	return 0;
}
