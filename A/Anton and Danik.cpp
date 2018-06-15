#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int games, A, D;
	string letters;
	
	cin>>games;
	cin>>letters;
	
	A=0;
	D=0;
	
	for(int i=0;i<games;i++){
		if(letters[i] == 'A')
			A++;
		else
			D++;
	}
	
	if(A > D)
		cout<<"Anton"<<endl;
	else if(A < D)
		cout<<"Danik"<<endl;
	else 
		cout<<"Friendship"<<endl;
	
	
	return 0;
}
