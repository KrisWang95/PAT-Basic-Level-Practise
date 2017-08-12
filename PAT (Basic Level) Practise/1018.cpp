#include<iostream> 
using namespace std;
int f(char a,char b){
	if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){
		return 1; 
	}else if((b=='C'&&a=='J')||(b=='J'&&a=='B')||(b=='B'&&a=='C')){
		return -1;
	}else{
		return 0;
	}	
}
int g(char *a,int *b,int c,int num){
	int cnt1=0 , cnt2=0 , cnt3=0 ;
	for(int i = 0; i< num ; i++){
		if(b[i]==c){
			if(a[i]=='C'){
		 		cnt1++;
		 	}else if(a[i]=='J'){
		 		cnt2++;
		 	}else{
		 		cnt3++;
		 	}
		}	
	}
	if((cnt1>=cnt2&&cnt1>cnt3)){
		cout <<"C";
	}else if (cnt2>cnt1&&cnt2>cnt3){
		cout <<"J";
	}else if((cnt3>=cnt1&&cnt3>=cnt2)){
		cout <<"B";
	}
	return 0;
}
int main(){
	int num;
	cin >> num;
	char A[num],B[num];
	int C[num];
	int s = 0 , p = 0 , a , b , c ; 
	for(int i = 0; i< num; i++){
		cin >> A[i] >> B[i] ;
		C[i]=f(A[i],B[i]);
		switch(C[i]){
			case 1 : 
				s++;
				break;
			case 0 : 
				p++;
				break;
		}
	}
	cout << s << " " << p << " " << num-s-p <<endl;
	cout << num-s-p << " " << p << " " << s <<endl;
	g(A,C,1,num);
	cout << " " ;
	g(B,C,-1,num);	
	return 0;
}
