#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	int N, tag = 0, j = 0;
	cin >> N ;
	int src[N],next[N];
	for(int i = 0;i < N; i++){
		cin >> src[i] ;
	}
	for(int i = 0;i < N; i++){
		cin >> next[i] ;
	}
	
	for (tag = 0; tag < N - 1 && next[tag] <= next[tag + 1]; tag++);
    for (j = tag + 1; src[j] == next[j] && j < N; j++);
    if (j == N){
    	cout << "Insertion Sort\n" ;
		sort(src,src+tag+2);
    } else{
    	cout << "Merge Sort\n" ;
    	tag = 1;
		int k = 1;
		while(tag){
			tag = 0; 
			for(int i = 0;i < N; i++){
				if(src[i] != next[i]) tag=1 ;
			}
			k*=2;
			for(int i = 0; i < N/k; i++)
				sort(src+i*k,src+(i+1)*k);
			sort(src+N/k*k,src+N);
		}
    }
	for(int i = 0;i < N-1; i++){
		cout << src[i] << " " ;
	}
	cout << src[N-1];
	return 0;
}
