#include<bits/stdc++.h>

void recursive(std::vector<int> &res, int a, int b, bool &isBoring)
{
	if(b == 1)
	{
		isBoring = true;
		return;
	}

	if(a == 1)
	{
		res.push_back(a);
		return;
	}

	if(a % b)
	{
		isBoring = true;
		return;
	}
	res.push_back(a);
	recursive(res, a / b, b, isBoring);
}

void solve()
{
	int a, b;
	while(std::cin >> a >> b)
	{
		std::vector<int> res;
		bool isBoring = false;
		recursive(res, a, b, isBoring);

		if(isBoring)
			std::cout << "Boring!";
		else
			for(int i = 0; i < res.size(); ++i)
			{
				std::cout << res[i];
				if(i != res.size() - 1)
					std::cout << ' ';
			}
		std::cout << '\n';
	}
}


int main()
{
	solve();	
	return 0;
}
