#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin >> a;
	int cntP = 0 ,cntT = 0,result = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == 'T')
			cntT++;
	}
	for(int i = 0; i < a.length(); i++){
		//��ÿ��Aǰ�� P������ A��� T������˼��ɵõ��ܸ��� 
		switch (a[i]) {
			case 'P' :
				cntP++;
				break;
			case 'T' :
				cntT--;
				break;
			case 'A' :
				result = (result+ (cntT*cntP)%1000000007)%1000000007;
				break;	
		}
	} 
	cout << result;
	return 0;
} 
