#include<stdio.h>
int main(){
	char num[100];
	int i=0,sum=0;
	int osum[3];
	char* s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf("%s",&num);
	while(num[i]){
		sum+=(num[i]-'0');
		i++; 
	}
	for(i=0;i<3;i++){
		osum[i]=sum%10;
		sum/=10;
	}
	if(osum[2]){
		printf("%s %s %s",s[osum[2]],s[osum[1]],s[osum[0]]);
	}
	else{
		if(osum[1])
		printf("%s %s",s[osum[1]],s[osum[0]]);
		else
		printf("%s",s[osum[0]]);
	}
	return 0;
}
