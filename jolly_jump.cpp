#include<bits/stdc++.h>

void solve()
{
	int n;
	while(std::cin >> n)
	{
		bool isJolly = true;
		std::vector<int> nums(n);
		std::vector<bool> check(n, false);
		for(int &x : nums)
			std::cin >> x;
		
		for(int i = 1; i < n; ++i)
			check[std::abs(nums[i] - nums[i - 1])] = true;

		for(int i = 1; i < n; ++i)
			if(check[i] == false)
				isJolly = false;
		
		if(isJolly)
			std::cout << "Jolly\n";
		else
			std::cout << "Not jolly\n";
	}
}


int main()
{
	solve();
	return 0;
}
