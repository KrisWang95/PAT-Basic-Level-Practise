#include<iostream>
using namespace std;
int main(){
	int sum =0;
	string s;
	getline(cin,s);
	for(int i = 0; i < s.length();i ++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			sum += s[i] - 'A' + 1; 
		}else if(s[i] >= 'a' && s[i] <= 'z') {
			sum += s[i] - 'a' + 1; 
		}
	}
	int cnt0 = 0, cnt1 = 0;
	unsigned int mask = 1u<<31;
	for(; mask; mask>>=1){
		if(cnt1) {
			if(! (mask & sum))
				cnt0++;
		}
		if(mask & sum){
			cnt1++;
		}
	}
	cout << cnt0 << " " << cnt1 ;
	return 0;
}
