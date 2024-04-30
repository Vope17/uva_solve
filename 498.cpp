#include<bits/stdc++.h>

void solve()
{
	int x;
	while(std::cin >> x)
	{

		std::string line;
		std::getline(std::cin, line);
		std::getline(std::cin, line);
		std::istringstream iss(line);
		int a;
		std::vector<int> nums;
		while(iss >> a)
			nums.push_back(a);	

		int n = nums.size() - 1;
		int ans = 0;
		for(int i = 0; i < nums.size(); ++i)
		{
			ans += nums[i] * (n - i) * std::pow(x, n - i - 1);	

		}
		std::cout << ans << '\n';

	}

}


int main()
{
	solve();
	return 0;

}
