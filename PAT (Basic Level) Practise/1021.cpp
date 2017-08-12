#include<iostream>
#include<string>
using namespace std ;
int main(){
	string num;
	cin >> num ;
	int a[10]={0};
	for(int i = 0 ; i < num.size() ; i++) {
		a[num[i]-'0']++;
	}
	for(int i = 0 ; i < 10 ; i++){
		if(a[i])
			cout << i << ":" << a[i] << endl ;
	}
	return 0;
}
