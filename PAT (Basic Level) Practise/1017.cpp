#include<iostream>
#include<vector>
using namespace std;
int main(){
	string A;
	vector <int> C;
	int B,temp=0;
	cin >> A >> B;
	for(int i =0 ;i <A.size(); i++){
		temp=temp*10+A[i]-'0';
	   	C.push_back(temp/B);
		if(temp < B){
			temp = A[i]-'0';
		}
		else{
			temp = temp%B;
		}		 
	}
	if(C[0]!=0){
		cout << C[0];
	}else{
		if(A.size()==1){
			cout << C[0];
		}
	}
	for(int i = 1 ; i < C.size() ;i++){
			cout << C[i]; 
	}
	cout <<" " <<temp ;
	return 0;
} 
