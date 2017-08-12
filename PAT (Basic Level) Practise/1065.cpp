#include<iostream>
using namespace std;
int main() {
	int N, M, cnt = 0, temp1, temp2 ,object[100000] = {-1}, party[100000] = {0};
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> temp1 >> temp2;
		object[temp1] = temp2;
		object[temp2] = temp1;
	}
	cin >> M;
	for(int i = 0; i < M; i++){
		cin >> temp1;
		if(object[temp1] != -1){
			party[temp1] = 1;
		}else{
			party[temp1] = -1;
		}
	}
	for(int i = 0; i < 100000; i++){
		if(party[i] == -1){
			cnt++;
		}else if(party[i] == 1){
			if(party[object[i]] == 0){
				cnt++;
				party[i] = -1;
			}
		}
	}
	cout << cnt << endl;
	int firstflag = 1;
	for(int i = 0; i < 100000; i++){
		if(party[i] == -1){
			if(firstflag) {
				firstflag = 0;
				printf("%05d", i);
			}else{
				printf(" %05d", i);
			}
		}
	}
	return 0;
}
