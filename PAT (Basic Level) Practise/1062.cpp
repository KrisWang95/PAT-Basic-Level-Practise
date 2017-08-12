#include<iostream>
using namespace std;
bool judge(int a, int b){
	int temp;
	while(a % b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	if(temp == 1){
		return true;
	}
	return false;
}
int main(){
	int N1,M1,N2,M2,K;
	double a,b,c;
	scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K);
	a = (1.0 * N1 / M1) < (1.0 * N2 / M2) ? (1.0 * N1 / M1) : (1.0 * N2 / M2) ; 
	b = (1.0 * N1 / M1) > (1.0 * N2 / M2) ? (1.0 * N1 / M1) : (1.0 * N2 / M2);
	int flag = 1;  
    for(int i = 1 ; i < K ;i++){  
        c = 1.0 * i / K;  
        if(a < c && c < b){  
            if(judge(i,K)){  
                if(flag){  
                flag = 0;  
                    printf("%d/%d",i,K);  
                }else{  
                    printf(" %d/%d",i,K);  
                }  
            }  
              
        }  
    }  
	return 0;
}
