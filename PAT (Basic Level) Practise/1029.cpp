#include<iostream>
#include<string>
using namespace std;
int main(){
	string a , b , c ;
	cin >> a >> b ;
	int i = 0 , j = 0;
	for( int i = 0 ; i < a.size() ; i ++){
		for( int j = 0 ; j < b.size() ; j ++){
			if(b.find((a[i]<='z'&&a[i]>='a')?a[i]-32:a[i])==string::npos&&b.find((a[i]<='Z'&&a[i]>='A')?a[i]+32:a[i])==string::npos){
				if(a[i] >= 'a' && a[i] <= 'z' ){
					a[i] -= 32 ;
					cout << a[i] ; 
				}else{
					cout << a[i] ;
				}
				b += a[i] ;	// 没有的就放回 
			}	
		}
	}
	return 0 ;
} 

