#include<bits/stdc++.h>

int get_len(int n)
{
	if(n == 1)
		return 1;

	if(n % 2)
		return get_len(3 * n + 1) + 1;
	else
		return get_len(n / 2) + 1;
}
void solve()
{
	int a, b;
	while(std::cin >> a >> b)
	{
		std::cout << a << ' ' << b << ' ';
		int res = 0;
		for(int i = std::min(a, b); i <= std::max(a, b); ++i)
			res = std::max(res, get_len(i));

		std::cout << res << '\n';
	}
}


int main()
{
	solve();
	return 0;
}
