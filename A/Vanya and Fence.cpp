#include <bits/stdc++.h>

using namespace std;

int main(){

	int friends, fence_height, friends_height, road;
	
	scanf("%d %d",&friends,&fence_height);
	road = 0;
		
		for(int i=0;i<friends;i++){
			scanf("%d",&friends_height);
	
			if(friends_height > fence_height)
				road+=2;
			else
				road++;	
		}
	
		printf("%d\n",road);
	
	return 0;
}
