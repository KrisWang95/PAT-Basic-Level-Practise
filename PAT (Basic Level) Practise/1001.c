#include<stdio.h>
int main (){
    int num,count=0;
    scanf("%d",&num);
    while(num!=1) {
        if(num%2==0){
            num/=2;
        }else{
            num=(num*3+1)/2;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}