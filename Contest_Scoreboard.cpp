#include<bits/stdc++.h>
using namespace std;

class contestant
{
	public:
		bool isSub;
		int id;
		int time;
		vector<int> submission;
		bitset<10> isSolved;
		contestant(int _id): id(_id), time(0), isSub(false), submission(vector<int>(10, 0)), isSolved{0}{} 	
};

bool cmp(const contestant* c1, const contestant* c2)
{
	if(c1->isSolved.count() == c2->isSolved.count())
	{
		if(c1->time == c2->time)
			return c1->id < c2->id;	
		else
			return c1->time < c2->time;
	}
	return c1->isSolved.count() > c2->isSolved.count();
}
void solve()
{
	int t; cin >> t;
	cin.ignore();
	cin.ignore();
	while(t--)
	{
		string str;
		int id, problem, time;
		char _status;
		vector<contestant*> datas;
		for(int i = 0; i <= 100; ++i)
			datas.push_back(new contestant(i));
		while(getline(cin, str))
		{
			if(str.empty())
				break;

			istringstream is(str);
			is >>  id >> problem >> time >> _status;
			datas[id]->isSub = true;
			if(_status == 'C' && datas[id]->isSolved[problem] == 0)
			{
				datas[id]->time += time + datas[id]->submission[problem] * 20;
				datas[id]->isSolved[problem] = 1;
			}
			else if(_status == 'I')
			{
				datas[id]->submission[problem]++;
			}
		}
		sort(datas.begin(), datas.end(), cmp);
		for(int i = 0; i <= 100; ++i)
		{
			if(datas[i]->isSub == true)
				cout << datas[i]->id << ' ' << datas[i]->isSolved.count() << ' ' << datas[i]->time << '\n';
		}
		if(t)
			cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}



