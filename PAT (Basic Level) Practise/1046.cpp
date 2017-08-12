#include<iostream>
using namespace std;
int main(){
	int N,a1,b1,a2,b2,a[2] = {0};
	cin >> N;
	for(int i = 0; i < N; i++){
		scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
		if(a1 + a2 == b1 && a1 + a2 != b2){
			a[1]++;
		}else if(a1 + a2 == b2 && a1 + a2 != b1){
			a[0]++;
		}
	}
	cout << a[0] << " " << a[1] ;
	return 0;
} 
