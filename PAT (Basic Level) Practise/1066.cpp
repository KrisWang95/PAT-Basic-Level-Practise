#include<iostream>
using namespace std;
int main(){
	int N,M,A,B,R,temp;
	cin >> N >> M >> A >> B >> R;
	for(int i = 0; i < N; i++){
		bool flag = true;
		for(int j = 0; j < M; j++){
			scanf("%d",&temp);
			if(temp <= B && temp >= A) {
				temp = R;
			}
			if(flag){
				printf("%03d",temp);
				flag = false;
			}else{
				printf(" %03d",temp);		
			}
		}
		cout << endl;
	}
	return 0;
}
