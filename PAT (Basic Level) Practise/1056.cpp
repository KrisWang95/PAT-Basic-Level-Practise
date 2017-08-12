#include<iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	int temp ,sum = 0;
	for(int i = 0 ;i < N; i++) {
		cin >> temp ;
		sum += (N - 1) * 11 * temp ;
	}
	cout << sum ;
	return 0;
}
