#include<iostream>
#include<cmath>
using namespace std;
typedef struct money{
	int G,S,K;
}Money;
int main(){
	Money a,b;
	scanf("%d.%d.%d %d.%d.%d",&a.G,&a.S,&a.K,&b.G,&b.S,&b.K);
	int c = a.G*17*29+a.S*29+a.K ,d = b.G*17*29+b.S*29+b.K;
	c = d - c;
	a.G = c/17/29;
	a.S = (c-a.G*17*29)/29;
	a.K = (c-a.G*17*29-a.S*29);
	printf("%d.%d.%d",a.G,abs(a.S),abs(a.K));
	return 0;
} 
