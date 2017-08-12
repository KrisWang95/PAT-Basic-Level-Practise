#include<iostream> 
using namespace std;
int main(){
	int N, tempSeat, t;
	cin >> N;
	string tempStuNum,stuNum[N+1] ;
	int seat[N+1];
	for(int i = 0; i < N; i++){
		cin >> tempStuNum >> t >> tempSeat;
		stuNum[t] = tempStuNum;
		seat[t] = tempSeat;
	}
	int SN;
	cin >> SN;
	int St[SN];
	for(int i = 0; i < SN; i++){
		cin >> St[i] ;
	}
	for(int i = 0; i < SN-1; i++){
		cout << stuNum[St[i]] << " " << seat[St[i]] << endl;
	}
	cout << stuNum[St[SN-1]] << " " << seat[St[SN-1]];
	return 0;
} 
