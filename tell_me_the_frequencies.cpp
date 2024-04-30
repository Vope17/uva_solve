#include<bits/stdc++.h>

void solve()
{
	bool isSecond = false;
	std::string str;
	while(std::getline(std::cin, str))
	{
		if(isSecond)
			std::cout << '\n';
		else
			isSecond = true;

		std::map<int ,int> map;
		for(char &c : str)
			map[c]++;
		
		std::vector<std::pair<int, int>> nums(map.begin(), map.end());
		std::sort(nums.begin(), nums.end(), [](auto &p1, auto &p2){
				if(p1.second == p2.second) 
					return p1.first > p2.first;
				return p1.second < p2.second;	
				});
		for(auto &p : nums)
			std::cout << p.first << ' ' << p.second << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
