#include<iostream> 
#include<cmath>
using namespace std;

int main(){
	int num ;
	char image ;  
	cin >> num >> image ;
	int max = sqrt((num+1)/2.0) ;
	int extra = num - 2*max*max+1 ;
	for( int i = 1 ; i <= max ; i++){
		for( int j = 1 ; j <= 2*max -i ;j++){
			if( i > j)
				cout << " " ;
			else
				cout << image ;
		}
		cout << endl ;
	}
	for( int i = max-1 ; i >= 1 ; i--){
		for( int j = 1 ; j <= 2*max-i ;j++){
			if( i > j)
				cout << " " ;
			else
				cout << image ;
		}
		cout << endl ;
	}
	cout << extra ;
	return 0 ;
}
