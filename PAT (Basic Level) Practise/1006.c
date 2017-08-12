#include<stdio.h>
int main(){
	int num,i,B,S,G;
	scanf("%d",&num);
	B=num/100;
	S=(num%100)/10;
	G=(num%100)%10;
	for(i = 0 ; i < B ; i++)
		printf("B");
	for(i = 0 ; i < S ; i++)
		printf("S");
	for(i = 1 ; i <= G ; i++)
		printf("%d",i);
	return 0;
}
