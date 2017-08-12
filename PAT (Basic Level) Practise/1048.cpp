#include<iostream>
#include<string>
#include<cmath> 
using namespace std;
int main(){
	string a, b, s = "JQK" ;
	int cnt = 0;
	char str[101] = {0};
	cin >> a >> b;
	int i = a.length() - 1 , j = b.length() - 1;
	for(int m = 0; m < abs(i - j); m++){
		if(i > j) {
			b = "0" + b;
		}else{
			a = "0" + a;
		}
	} 
	i = a.length() - 1 , j = b.length() - 1;
	while(i != -1 && j != -1){
		if(cnt % 2 == 0){
			str[cnt] = (a[i] + b[j] - 2 * '0') % 13 ;
			if(str[cnt] >= 10 ){
				str[cnt] = s[str[cnt]-10];
			}else{
				str[cnt] += '0';
			}
		}else{
			str[cnt] = (b[j] - a[i] >= 0 ?  b[j] - a[i] : b[j] - a[i] + 10) + '0';
		}	
		cnt++;
		i--;
		j--;
	}
	for(int k = cnt - 1; k >= 0; k--)
		cout << str[k];
	return 0;
} 
