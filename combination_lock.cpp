#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int angle = 0;
	int pos, c1, c2, c3;
	while(cin >> pos >> c1 >> c2 >> c3)
	{
		if(!pos && !c1 && !c2 && !c3)
			break;
		angle = 1080;
		angle += ((pos - c1)+40)%40*9;
		angle += ((c2 - c1)+40)%40*9;
		angle += ((c2 - c3)+40)%40*9;
		printf( "%d\n", angle );
	}
	return 0;
}
