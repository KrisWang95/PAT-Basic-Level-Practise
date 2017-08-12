#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N, Count,cnt = 0 , Mempty = 0,empty = 0;
	double D;
	cin >> N >> D >> Count ;
	for(int i = 0; i < N ; i++){
		int num ;
		cin >> num ;
		double temp;
		for(int j = 0; j < num ; j++){
			cin >> temp;
			if(temp < D){
				cnt++;
			}
		}
		if ( cnt > num/2 && num > Count){
			empty ++;
		}else if (cnt > num/2 && num <= Count){
			Mempty++;
		}
		cnt = 0;
	}
	printf("%.1f%s %.1f%s",1.0*Mempty / (N *1.0)* 100,"%",1.0*empty / N * 100,"%");
    return 0;
}
