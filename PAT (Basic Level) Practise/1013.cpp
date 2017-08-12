#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int start , end , cnt = 0 , i = 2 , j = 0 , flag = 1 ;
	cin >> start >> end ;
	int p[10000]={2};
	while(cnt <= end ){
		for(j = 0 ; p[j] <= sqrt(i) ; j++){
			if(i%p[j]==0)
				flag = 0 ;
		}
		if(flag){
			p[cnt++]=i;
			if(cnt >= start && cnt <= end){
				if(cnt!=end)
					cout << i << (cnt%10 == ((start-1)%10) ? "\n" : " ") ;
				else
					cout << i ;	
			}
		}
		i++;flag=1;
	}
	return 0 ;
}
