#include<iostream>
#include<vector>
using namespace std ;
int main(){
	long int A,B,C;
	int D;
	vector <int> a ; 
	cin >> A >> B >> D ;
	C = A + B ;
	do{
		a.push_back(C%D);
		C/=D;	 
	}while(C!=0);
	for( int i = a.size() ; i > 0 ; i--){
		cout << a[i-1];
	}
	return 0 ;
} 
