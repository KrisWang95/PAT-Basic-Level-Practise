#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N, temp, cnt = 1;
	cin >> N;
	int R[N];
	for(int i = 0; i < N; i++){
		R[i] = 0;
		cin >> temp;
		while(temp != 0){
			R[i] += (temp % 10);
			temp /= 10;
		}
	} 
	sort(R,R+N);
	for(int i = 1; i < N; i++){
		if(R[i] > R[i-1]){
			R[cnt++] = R[i];
		}
	} 
	cout << cnt << endl;
	for(int i = 0 ; i < cnt; i++){
		printf("%d",R[i]);
		if(i < cnt -1){
			printf(" ");
		}
	} 
	return 0;
} 
