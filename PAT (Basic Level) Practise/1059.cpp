#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int a){
	if(a == 0 || a == 1){
		return false;
	}
	for(int i = 2 ; i <= sqrt(a) ;i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}
struct node{
	bool tag = false;
	int rank = -1;
}; 
int main(){
	int N , temp;
	cin >> N;
	node rank[10000];
	for(int i = 0; i < N; i++){
		cin >> temp;
		rank[temp].rank = i + 1;
	}
	int M;
	cin >> M;
	for(int i = 0; i < M; i++){
		cin >> temp;
		if(rank[temp].rank != -1 && !rank[temp].tag){
			rank[temp].tag = true;
			if(rank[temp].rank == 1){
				printf("%04d: Mystery Award",temp);
			}else if(isPrime(rank[temp].rank)){
				printf("%04d: Minion",temp);
			}else if(!isPrime(rank[temp].rank)){
				printf("%04d: Chocolate",temp);
			}
		}else if(rank[temp].rank == -1){
			printf("%04d: Are you kidding?",temp);
		}else if(rank[temp].rank != -1 && rank[temp].tag){
			printf("%04d: Checked",temp);
		}
		if(i != M - 1){
            cout << endl;
		}
	}
	return 0;
} 
