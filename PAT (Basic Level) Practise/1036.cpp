#include<iostream>
using namespace std;
int main(){
	int N;
	char a;
	cin >> N >> a; 
	for(int i =1;i <= int(N/2.0+0.5); i++){
		if(i == 1 || i == int(N/2.0+0.5)){
			for(int j = 0; j < N; j++){
				cout << a;
			}
			if(i != int(N/2.0+0.5))
				cout << endl;
		}else{
			for(int j = 1; j <= N; j++){
				if(j == 1 || j == N)
					cout << a;
				else
					cout << " " ;
			}
			cout << endl;
		}
	}
} 
