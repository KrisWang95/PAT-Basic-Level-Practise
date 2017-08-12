#include<iostream>
#include<string>
using namespace std;
bool find(string &a,char b){
	for(int i = 0; i < a.length(); i++){
		if(a[i] == b){
			a[i] = ' ';
			return true;
		}
	}
	return false;
}
int main(){
	string a,b;
	int cnt = 0;
	cin >> a >> b;
	for(int i = 0; i < b.length(); i++){
		if(find(a,b[i])) cnt++;
	}
	if(cnt == b.length()){
		cout << "Yes" << " " << a.length() - b.length();
	}else{
		cout << "No" << " " << b.length() - cnt;
	}
}
