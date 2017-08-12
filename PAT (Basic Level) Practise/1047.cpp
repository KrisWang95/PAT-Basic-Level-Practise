#include<iostream>
using namespace std;
int main(){
	int N,a,b,c,sum[1000] = {0}, max = 0;
	cin >> N;
	for(int i = 0; i < N; i++){
		scanf("%d-%d %d",&a,&b,&c);
		sum[a] += c;
		if(sum[a] > sum[max]) {
			max = a;
		}
	}
	cout << max << " " << sum[max] ;
	return 0;
} 
