#include<iostream> 
using namespace std;
int main(){
	int N ;
	cin >> N; ;
	double a[N], sum = 0;//ò�Ƶ�double����Ϊfloat 
	for(int i = 0 ; i < N; i++){
		scanf("%lf",&a[i]);
		sum += a[i] * (N - i) * (i + 1) ;
	}
	printf("%.2lf",sum);
	return 0;
}
