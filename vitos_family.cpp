#include<bits/stdc++.h>

void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int n; std::cin >> n;
		std::vector<int> nums(n);
		for(int &x : nums)
			std::cin >> x;
		
		std::sort(nums.begin(), nums.end());
		int mid = n % 2 ? n / 2 : (n - 1) / 2;

		int ans = 0;
		for(int &x : nums)
			ans += std::abs(nums[mid] - x);

		std::cout << ans << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
