#include<stdio.h>
int fun(int a ,int b){ //判断b是否被a覆盖 
	while(a!=1) {
        if(a%2==0){
            a/=2;
        }else{
            a=(a*3+1)/2;
        }
        if(a==b) 
        	return 0;
    }
    return 1; //表明b没有被a覆盖 
}
int Bubble(int *a,int len){
	int i,j,temp;
	for(i = 0 ; i < len ; i++ ){
		for(j = i+1 ; j < len ; j++ ){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}	
	}
	for(i = 0 ; i < len-1 ; i++ ){
		printf("%d ",a[i]);
	}
	printf("%d",a[len-1]);
	return 0;
}
int main(){
	int num,i = 0 , j = 0 , k = 0 , cnt = 0;
    scanf("%d",&num);
    int numArr[num],result[num];
    for(i = 0 ; i < num ;i++)
    	scanf("%d",&numArr[i]);
    for(i = 0 ; i < num ;i++){
    	for(j = 0 ; j < num ; j++){
    		if(numArr[i]!=numArr[j]){
    			if(fun(numArr[j],numArr[i]))
    				cnt++; 
    		}
    	}
    	if(cnt==num-1)
    		result[k++]=numArr[i];
    	cnt=0;
    }
	Bubble(result,k);
    return 0;
} 
