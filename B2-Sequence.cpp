#include<bits/stdc++.h>

int main()
{
	int n;
	int t = 1;
	while(std::cin >> n)
	{
		std::cout << "Case #" << t++ << ": ";
		std::vector<int> nums(n);
		for(int &x : nums)
			std::cin >> x;
		
		std::set<int> set;
		bool isValid = true;
		for(int i = 0; i < n; ++i)
			for(int j = i + 1; j < n; ++j)
			{
				if(set.find(nums[i] + nums[j]) != set.end())
					isValid = false;
				set.insert(nums[i] + nums[j]);
			}
		if(isValid)
			std::cout << "It is a B2-Sequence.\n";
		else
			std::cout << "It is not a B2-Sequence.\n";
		std::cout << '\n';
	}
	return 0;
}
