#include<bits/stdc++.h>

void solve()
{
	std::string s1, s2;
	while (std::cin >> s1 >> s2 && s1 != "0" && s2 != "0")
	{
		int n = std::max(s1.size(), s2.size());
		if(s1.size() < n)
		{
			int k = n - s1.size();
			for(int i = 0; i < k; ++i)
				s1 = "0" + s1;
		}
		else if(s2.size() < n)
		{
			int k = n - s1.size();
			for(int i = 0; i < k; ++i)
				s2 = "0" + s2;
		}
		
		int carry = 0;
		int cnt = 0;
		for(int i = n - 1; i >= 0; --i)
		{
			int sum = s1[i] - '0' + s2[i] - '0' + carry;
			if(sum >= 10)
				carry = 1, cnt++;
			else
				carry = 0;
		}
		if(cnt)
			if(cnt > 1)
				std::cout << cnt << " carry operations.\n";
			else
				std::cout << cnt << " carry operation.\n";
		else
			std::cout << "No carry operation.\n";
	}
}


int main()
{
	solve();
	return 0;
}
