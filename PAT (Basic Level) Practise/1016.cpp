#include<iostream>
#include<string>
using namespace std;
int main(){
	string A,B;
	long int Da,Db,Pa = 0,Pb = 0;
	cin >> A >> Da >> B >> Db ;
	for(int i = 0 ; i < A.size() ; i++){
		if(A[i]-'0'==Da){
			Pa=Pa*10+Da;
		}
	}
	for(int i = 0 ; i < B.size() ; i++){
		if(B[i]-'0'==Db){
			Pb=Pb*10+Db;
		}
	}
	cout << Pa+Pb ; 
	return 0 ;
}
