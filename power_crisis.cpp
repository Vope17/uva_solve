#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin >> n && n != 0)
	{
		n--;
		for(int i = 1; i < n; ++i)
		{
			int t = 0;
			for(int j = 1; j <= n; ++j)
				t = (t + i) % j;	
			if(t == 11)
			{
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}
