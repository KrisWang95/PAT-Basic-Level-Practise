#include<stdio.h>
#include<math.h>
int main(){
	int num,i,j,k=0,cnt=0,flag=1;
	scanf("%d",&num);
	int result[num];
	for(i = 2 ; i <= num;i++){
		for(j = 2 ; j <= sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag){
			result[k++]=i;
		}
		flag=1;	
	}
	for(i = 0 ; i < k-1;i++){
		if(result[i+1]-result[i]==2)
			cnt++;
	}
	printf("%d",cnt);
	return 0;
}
