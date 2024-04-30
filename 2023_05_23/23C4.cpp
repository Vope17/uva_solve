#include<bits/stdc++.h>
using namespace std;

void get_primes(vector<bool>&, int);
void solve()
{
	int n, c;
	while(cin >> n >> c)
	{
		vector<bool> primes(n + 1, true);
		vector<int> nums;
		get_primes(primes, n);
		cout << n << ' '  << c << ": ";
		if(n == 1)
		{
			cout << 1 << "\n\n";
			continue;
		}
		for(int i = 0; i < primes.size(); ++i)	
			if(primes[i])
				nums.push_back(i);

		int s = nums.size();
		if(c >= s)
		{
			cout << 1 << ' ';
			for(int i = 0; i < s; ++i)
			{
				cout << nums[i];
				if(i < s - 1)
					cout << ' ';
			}
		}
		else
		{
			if(s % 2)
			{
				s /= 2;
				for(int i = s - c; i <= s + c - 1; ++i)
				{
					cout << nums[i];
					if(i != s + c - 1)
						cout << ' ';
					}
			}
			else
			{
				c--;
				s = s / 2 - 1;
				for(int i = s - c; i <= s + c; ++i)
				{
					cout << nums[i];
					if(i != s + c)
						cout << ' ';
				}
			}
		}
		cout << "\n\n";
	}
}

void get_primes(vector<bool>& v, int n)
{	
	v[0] = false;
	v[1] = false;
	for(int i = 2; i <= n; ++i)
	{
		if(v[i])
			for(int j = i + i; j <= n; j += i)
				v[j] = false;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}	
