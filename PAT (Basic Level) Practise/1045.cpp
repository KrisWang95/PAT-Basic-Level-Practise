#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
	int N, max = 0, cnt = 0 ;
	cin >> N;
	int a[N], b[N], c[N];
	for(int i = 0; i < N; i++){
		scanf("%d",&a[i]) ;
		b[i] = a[i];
	}
	sort(b,b+N);
	for(int i = 0; i < N; i++){
		if(b[i] == a[i] && a[i] > max){
			c[cnt++] = a[i] ;
		}
		if( a[i] > max ){
			max = a[i];
		}
	}
	cout << cnt << endl; 
	for(int i = 0; i < cnt - 1; i++){
		printf("%d ",c[i]);
	}
	if(cnt)
		cout << c[cnt - 1] ;
	else
		cout << endl ; //必须加这行代码 
	return 0;
} 
