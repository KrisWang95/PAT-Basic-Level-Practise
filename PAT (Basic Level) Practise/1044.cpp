#include<iostream> 
#include<string>
using namespace std;
string low[14] ={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[14] ={"   ","tam","hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void changeToMar(string s){
	int result = 0 , temp[2];
	for(int i = 0; i < s.length(); i++){
		result = result * 10 + s[i] -'0' ;
	}
	temp[0] = result % 13 ;
	temp[1] = (result / 13) % 13 ;
	if(temp[1]&&temp[0])
		cout  <<  high[temp[1]] << " " << low[temp[0]];
	else if(!temp[1])
		cout  << low[temp[0]];
	else
		cout  << high[temp[1]];
}
void changeToEarth(string s){
	int i = 0 ,result[2] = {0};
	for(i = 0; i < s.length() ; i++){
		if(s[i] == ' '){
			break;
		}
	}
	if(i != s.length()) {
		for(int j = 0; j < 14 ;j ++){
			if(s[0] == high[j][0] && s[1] == high[j][1] &&s[2] == high[j][2]){
				result[1] = j;
			}
			if(s[4] == low[j][0] && s[5] == low[j][1] &&s[6] == low[j][2]){
				result[0] = j; 
			}
		} 
		cout << result[1]*13+result[0] ;
	}else{
		for(int j = 0; j < 14 ;j ++){
			if(s[0] == low[j][0] && s[1] == low[j][1] &&s[2] == low[j][2]){
				result[0] = j; 
			}else if(s[0] == high[j][0] && s[1] == high[j][1] &&s[2] == high[j][2]){
				result[0] = 13*j ; 
			}
		}
		cout << result[0]; 
	}
		
}
int main(){
	int N;
	cin >> N;
	getchar();//²¶»ñ¿Õ×Ö·û 
	string temp[N];
	for(int i = 0; i < N ; i++) {
		getline(cin, temp[i]) ;	
	} 
	for(int i = 0; i < N ; i++) {
		if(temp[i][0] >= '0' && temp[i][0] <= '9'){
			changeToMar(temp[i]);
		}else{
			changeToEarth(temp[i]);
		}
		if(i < N -1)
			cout <<endl; 
	} 
	return 0;
}
