#include<bits/stdc++.h>

void solve()
{
	int n;
	while(std::cin >> n)
	{
		std::vector<int> nums(n);
		std::multiset<int> mset;
		for(int &x : nums)
			std::cin >> x, mset.insert(x);
		std::sort(nums.begin(), nums.end());
		int mid = n % 2 == 1 ? n / 2 : (n - 1) / 2;
		int ans1, ans2, ans3;
		ans1 = nums[mid];
		ans2 = 0;
		ans3 = 1;
		if(n % 2 == 0)
		{
			ans3 = nums[mid + 1] - nums[mid] + 1;	
			for(int x = nums[mid]; x <= nums[mid + 1]; ++x)
			{
				if(mset.find(x) != mset.end())
					ans2 += mset.count(x);
			}
		}
		else
			ans2 += mset.count(nums[mid]);

		std::cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
