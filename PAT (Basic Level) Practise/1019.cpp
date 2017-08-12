#include<iostream>
using namespace std;
bool cmp (const int a, const int b){
    return a > b;
}
int change(int *a){
	return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
int main(){
	int A,B,anwser=1;
	cin >> A;
	int num[4]={0};
	for(int i =3 ;i >=0 ;i--){
		num[i] =A%10;
		A/=10;
	}
	do{
		sort(num,num+4,cmp);A=change(num);
		cout << num[0] << num[1] << num[2] << num[3] << " " << "-" << " " ;
		sort(num,num+4);B=change(num);
		cout << num[0] << num[1] << num[2] << num[3] << " " << "=" << " " ;
		anwser = A - B ;
		A = anwser ;
		//there is a magic
		for(int i =3 ;i >=0 ;i--){
			num[i] =A%10;
			A/=10;
		}
		cout << num[0] << num[1] << num[2] << num[3] << endl; 
	}while((anwser != 6174)&&(anwser != 0));
	return 0;
}
