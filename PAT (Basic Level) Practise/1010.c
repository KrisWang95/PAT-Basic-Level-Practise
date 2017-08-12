#include<stdio.h>
typedef struct _poly{
	int exponent;
	int coefficient;
}Poly;
int main(){
	Poly polynomial[5000];
	int i=0,j=0,k;
	char s;
	do{
		scanf("%d %d",&polynomial[i].coefficient,&polynomial[i].exponent);
		i++;
		if((s=getchar())=='\n')
			break;
	}while(1);
	for(j=0;j<i;j++){
		if(polynomial[j].exponent==0&&i>1){
			for(k=j+1;k<i;k++){
				polynomial[j].exponent=polynomial[k].exponent;
				polynomial[j].coefficient=polynomial[k].coefficient;
			}
			i-=1;	
		}
		polynomial[j].coefficient=polynomial[j].coefficient*polynomial[j].exponent;
		if(polynomial[j].exponent==0)
			polynomial[j].exponent=0;
		else
			polynomial[j].exponent-=1;
	}
	for(j=0;j<i;j++){
		if(polynomial[j].coefficient!=0||(polynomial[j].coefficient==0&&polynomial[j].exponent==0)){
			if(j!=i-1)
				printf("%d %d ",polynomial[j].coefficient,polynomial[j].exponent);
			else
				printf("%d %d",polynomial[j].coefficient,polynomial[j].exponent);	
		}
	}		
	return 0;
}
