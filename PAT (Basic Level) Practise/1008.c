#include<stdio.h>
int main(){
	int i,j,N,M;
	scanf("%d %d",&N,&M);
	int num[N+M];
	for(i = 0 ; i < N ; i++){
		scanf("%d",&num[i]);
	}
	for(i = N-1 ; i >= 0; i--){
		num[i+M]=num[i];
	}
	for(i = N+M-1 , j = M-1; i > N-1 ; i--,j--){
		num[j]=num[i];
	}
	for(i = 0 ; i < N-1 ; i++){
		printf("%d ",num[i]);
	}
	printf("%d",num[N-1]);
	return 0;
} 
