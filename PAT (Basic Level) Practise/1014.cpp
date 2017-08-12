#include<iostream>
#include<string>
using namespace std;
int main(){
	char str1[61],str2[61],str3[61],str4[61];
	int hour=0,flag=0,mintue=0;
	string D ;
	char str[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin >> str1 >> str2 >> str3 >> str4 ;
	for(int i = 0 ;i < 60 ; i++ ) {
		if(str1[i]==str2[i]){
			if(flag==1){
				if(str1[i]>=48&&str1[i]<=57){
					hour=str1[i]-48;
					flag++;
				}else if(str1[i]>=65&&str1[i]<=78){
					hour=str1[i]-55;
					flag++;
				}
						
			}else{
				if(str1[i]>=65&&str1[i]<=71){
					D=str[str1[i]-65];
					flag++;
				}
			}
		}
		if(str3[i]==str4[i]){
			if(((str3[i]>=65&&str3[i]<=90)||(str3[i]>=97&&str3[i]<=122))&&!mintue){
				mintue=i;
			}	
		}
	}
	cout  << D << " " ; 
	printf("%02d:%02d",hour,mintue);
	return 0;
}


