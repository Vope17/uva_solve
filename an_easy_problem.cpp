#include<bits/stdc++.h>
#define ll long long
ll get_sum(std::string str, int base)
{
	ll sum = 0;
	for(int i = 0; i < str.size(); ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
			sum = sum * base + str[i] - '0';
		else if(str[i] >= 'A' && str[i] <= 'Z')
			sum = sum * base + str[i] - 'A' + 10; 
		else if(str[i] >= 'a' && str[i] <= 'z')
			sum = sum * base + str[i] - 'a' + 36;
	}
	return sum;
}

void solve()
{
	std::string str;
	while(std::cin >> str)
	{
		int mx = 0;
		for_each(str.begin(), str.end(),[&mx](char c){
			int tmp = 0;
			if(c >= '0' && c <= '9')
				tmp = c - '0';
			else if(c >= 'A' && c <= 'Z')
				tmp = c - 'A' + 10;
			else if(c >= 'a' && c <= 'z')
				tmp = c - 'a' + 26;
			mx = std::max(mx, tmp);
		});
		if(mx <= 1)
		{
			std::cout << 2 << '\n';
			return;
		}
		for(int i = 3; i <= 62; ++i)
		{
			ll tmp = get_sum(str, i);
			if(i >= mx && tmp % (i - 1) == 0)
			{
				std::cout << i << '\n';
				return;
			}
		}
		std::cout << "such number is impossible!\n";
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;
}
