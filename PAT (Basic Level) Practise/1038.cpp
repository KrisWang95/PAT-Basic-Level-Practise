#include<iostream>
using namespace std;
int main(){
	int N ;
	cin >> N;
	int mark[101]={0},temp;
	for(int i =0; i < N ; i++){
		scanf("%d",&temp);
		mark[temp]++;
	}
	int SN;
	cin >> SN;
	int search[SN];
	for(int i =0; i < SN ; i++){
		scanf("%d",&search[i]); 
		if(i < SN-1)
			printf("%d ",mark[search[i]]);
		else
			printf("%d",mark[search[i]]);
	}
	return 0;
} 
