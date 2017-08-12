#include<stdio.h>
int FindStr(char *s,char Target){
	int i=0;
	while(s[i]){
		if(s[i]==Target){
			return i;
		}
		i++;
	}
	return 0;
}
int fun1(char *s){
	int i=0,cnt=0,acnt=0;
	while(s[i]){
		cnt++;
		if(s[i++]=='A')
			acnt++;
	} 
	if(FindStr(s,'T')-FindStr(s,'P')>1)
		return cnt-2==acnt?cnt:0;
	else
		return 0;
}
int choose(char *str){
	int strlen=fun1(str);
	int a=FindStr(str,'P');
	int c=FindStr(str,'T');
	int b=c-a-1;
	if(strlen){	
		if(b*a==strlen-c-1)
			printf("YES\n");
		else
			printf("NO\n");	
	}else{
		printf("NO\n");
	}		
	return 0;
}
int main(){
	char str[100];
	int num,i=0;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%s",str);
		choose(str);
	}
	return 0;		
} 
