#include<stdio.h> 
int main(){
	int num, i=0;
	scanf("%d",&num);
	long long int a=0,b=0,c=0;
	while(i!=num){
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("Case #%d: %s\n",++i,a + b > c ? "true":"false");
	}
	return 0;
}
