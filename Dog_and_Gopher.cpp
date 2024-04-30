#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		double gopher_x, gopher_y, dog_x, dog_y;
		cin >> gopher_x >> gopher_y >> dog_x >> dog_y;
		vector<pair<double, double>> holes;
		double x, y;
		while(n--)
		{
			cin >> x >> y;
			holes.push_back(make_pair(x, y));
		}
		double res_x = 0;
		double res_y = 0;
		bool is_ok = false;
		for(int i = 0; i < holes.size(); ++i)
		{
			double a = holes[i].first - gopher_x;
			double b = holes[i].second - gopher_y;
			double c = holes[i].first - dog_x;
			double d = holes[i].second - dog_y;
					
			if((c * c + d * d) >= 4.0 * (a * a + b * b))
			{
				is_ok = true;	
				res_x = holes[i].first;
				res_y = holes[i].second;
				break;
			}
		}
		if(is_ok)
				printf("The gopher can escape through the hole at (%.3f,%.3f).\n", res_x, res_y);
		else
			printf("The gopher cannot escape.\n");	
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
