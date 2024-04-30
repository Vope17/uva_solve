#include<bits/stdc++.h>
#define ll long long

int get_num(int x, int i, std::vector<int> &nums)
{
	int total = 0;
	while(x)
	{
		total += nums[(x % i) - 1];
		x /= i;
	}
	return total;
}
void solve()
{
	int t; std::cin >> t;
	int x;
	int k = 1;
	while(t--)
	{
		std::cout << "Case " << k++ << ": \n";
		std::vector<int> nums(36, 0);
		for(int &x : nums)
			std::cin >> x;
		int n; std::cin >> n;
		while(n--)
		{
			std::cin >> x;
			std::cout << "Cheapest base(s) for number " << x << ": ";
			std::vector<int> table(40);
			int mn = INT32_MAX;
			for(int i = 2; i <= 36; ++i)
			{
				table[i] = get_num(x, i, nums);
				mn = std::min(mn, get_num(x, i, nums));
			}
			std::vector<int> res;	
			for(int i = 2; i <= 36; ++i)
			{
				if(table[i] == mn)
					res.push_back(i);
			}
			for(int i = 0; i < res.size(); ++i)
			{
				if(i)
					std::cout << " " << res[i];
			}
		}

	}

}

int main()
{
	solve();
	return 0;

}
