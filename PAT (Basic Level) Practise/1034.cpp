#include<iostream>
using namespace std;
void myprint(long long int m,long long int n){
	//辗转相除法求最简分式
	long long int mt = m,nt = n, r ; 
	if(m!=0){
		mt=m,nt=n;
	    r=n%m;
	    while(r!=0)
	    {
	        n=m;
	        m=r;
	        r=n%m;
	    }
	    mt=mt/m,nt=nt/m;
	    if(mt>0&&nt<0){
	    	mt=-mt;nt=-nt;
	    }
	}
	//格式输出 
	if(mt  < 0 && nt!=0){
		if(mt / nt == 0){
			printf("(%lld/%lld)", mt , nt );
		}else if(mt % nt != 0){
			printf("(%lld %lld/%lld)", mt/nt ,mt>0?mt-mt/nt*nt:mt/nt*nt-mt , nt );
		}else{
			printf("(%lld)", mt/nt );
		}
	}else if( mt>=0 && nt!= 0){
		if(mt / nt == 0 && mt != 0){
			printf("%lld/%lld", mt , nt );
		}else if( mt % nt != 0){
			printf("%lld %lld/%lld", mt/nt ,mt-mt/nt*nt , nt );
		}else {
			printf("%lld", mt/nt );
		}
	}else{
		printf("Inf") ;
	}
}
int main(){
	long long int a1 , a2 , b1 , b2 ;
	long long int a[4] , b[4] ;
	char s[] = {"+-*/"} ;
	scanf("%lld/%lld %lld/%lld", &a1 , &b1 , &a2 , &b2 );
	//计算四则运算 
	a[0] = a1 * b2 + a2 * b1 ;b[0] =b1*b2 ;
	a[1] = a1 * b2 - a2 * b1 ;b[1] =b1*b2 ;
	a[2] = a1 * a2 ; b[2] = b1 * b2 ;
	a[3] = a1 * b2 ; b[3] = b1 * a2 ; 
	for( int i = 0 ; i < 4 ; i++){
		myprint(a1,b1);
		cout << " " << s[i] << " " ;
		myprint(a2,b2);
		cout << " = " ;
		myprint(a[i],b[i]);
		cout << endl ;
	}
	return 0;
}

