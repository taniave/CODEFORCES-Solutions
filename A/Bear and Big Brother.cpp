#include <bits/stdc++.h>

using namespace std;

int main(){

	int a,b,weight, years = 1;

	scanf("%d %d",&a,&b);

	a=a*3;
	b=b*2;
	years = 1;
	
	if(a<=b){
		while(a<=b){
			a=a*3;
			b=b*2;
			years++;
		}
	}
	else
		years = 1;

	printf("%d\n",years);
	return 0;
}
