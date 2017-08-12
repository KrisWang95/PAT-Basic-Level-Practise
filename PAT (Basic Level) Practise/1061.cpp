#include<iostream> 
using namespace std;
int main(){
	int stuNum,pNum;
	cin >> stuNum >> pNum;
	int MaxMarks[pNum],Right[pNum],temp,sum;
	for(int i = 0; i < pNum; i++)
		cin >>  MaxMarks[i];
	for(int i = 0; i < pNum; i++)
		cin >>  Right[i];
	for(int i = 0; i < stuNum; i++){
		sum = 0;
		for(int j = 0; j < pNum; j++){
			cin >> temp;
			if(temp == Right[j]){
				sum += MaxMarks[j];
			}
		}
		cout << sum ;
		if(i < pNum - 1)
			cout << endl;
	}
	return 0;
}
