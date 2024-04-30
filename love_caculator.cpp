#include<bits/stdc++.h>
using namespace std;

// solve1
int get_num(int);
void all_low(string& s)
{
	for(char &c : s)
		if(c >= 'A' && c <= 'Z')
			c = char(c + 32);
}
void solve()
{
	string a, b;
	while(cin >> a >> b)
	{
		all_low(a);
		all_low(b);
		int sum1 = 0, sum2 = 0;
		for(char c : a)
			if(c >= 'a' && c <= 'z')
				sum1 += (c - 'a' + 1);
		for(char c : b)
			if(c >= 'a' && c <= 'z')
				sum2 += (c - 'a' + 1);

		sum1 = get_num(sum1);
		sum2 = get_num(sum2);
		if(sum2 > sum1)
			swap(sum2, sum1);
		double res = sum2 / double(sum1) * 100;
		cout << fixed << setprecision(2) <<  res << " %\n";
	}
}

int get_num(int num)
{
	if(to_string(num).size() == 1)
		return num;
	
	int sum = 0;
	while(num)
	{
		sum += num % 10;
		num /= 10;
	}
	return get_num(sum);
}
// solve2
string Recursion(string str)
{
  int sum = 0;
  for (char &c : str)
  {
    if (isalpha(c))
    {
      c = tolower(c);
      sum += (c - 'a' + 1);
    }
  }
  return std::to_string(sum);
}
int NumRecursion(string num)
{
  if (num.size() == 1)
    return num[0] - '0';
  int sum = 0; 
  for (char &c : num)
     sum += (c - '0'); 
  
  return NumRecursion(std::to_string(sum));
}

void solve()
{
  string str1, str2;
  while (getline(cin, str1), getline(cin, str2))
  {
    string s1 = Recursion(str1);
    string s2 = Recursion(str2);
    int sum1 = NumRecursion(s1); 
    int sum2 = NumRecursion(s2); 
    cout << std::fixed << std::setprecision(2) << std::min(sum1, sum2) * 100 / double(std::max(sum1, sum2)) << " %\n";
  }
  }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
