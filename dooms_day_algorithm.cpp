#include<bits/stdc++.h>

std::string arr[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void solve()
{
	int t; std::cin >> t;
	while(t--)
	{
		int a, b;
		std::cin >> a >> b;
		int total = 0;
		for(int i = 1; i < a; ++i)
			total += days[i];

		total += b;
		total -= 1;
		std::cout << arr[(total % 7)] << '\n';

	}

}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	solve();
	return 0;

}
