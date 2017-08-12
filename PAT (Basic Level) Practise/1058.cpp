#include<iostream> 
#include<algorithm> 
using namespace std;
int main(){
	bool flag = false;
	int N, M, cnt = 0 , max = 0;
	cin >> N >> M;
	int mark[M],cntOption[M],falseCnt[M],getMarks[N];
	string RAns[M], stuAns[N][M],temp;
	for(int i = 0; i < M; i++){
		cin >> mark[i] >> cntOption[i];
		getchar();
		getline(cin,RAns[i]);
		falseCnt[i] = 0;
	}
	for(int i = 0; i < N; i++){
		getMarks[i] = 0;
		getline(cin,temp);
		for(int j = 0; j <temp.length();j++){
			if(temp[j]=='('){
				flag = true;
				continue;
			}else if(temp[j]==')'){
				flag = false;
				cnt++;
			}
			if(flag){
				stuAns[i][cnt] += temp[j];
			}
		}
		cnt = 0;
		for(int j = 0; j < M; j++){
			if(RAns[j] == stuAns[i][j]){
				getMarks[i] += mark[j];
			}else{
				falseCnt[j]++ ;
				if(falseCnt[j] > max){
					max = falseCnt[j];
				}
			}
		}
	}
	for(int i = 0; i < N; i++){
		cout << getMarks[i] << endl;
	}
	if(max){
		cout << max ;
		for(int i = 0; i < M; i++){
			if(falseCnt[i] == max )
				cout << " "<< i+1 ;
		}	
	}else{
		cout << "Too simple";
	}
		
	return 0;
}
