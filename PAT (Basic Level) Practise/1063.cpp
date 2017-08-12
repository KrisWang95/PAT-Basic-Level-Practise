#include<iostream> 
#include<cmath>
using namespace std;
int main(){
	int N, a, b;
	double s = 0 ,temp;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> a >> b;
		temp = sqrt(a * a + b * b);
		if(s < temp){
			s = temp;
		}
	}
	printf("%.2lf",s);
	return 0;
}
