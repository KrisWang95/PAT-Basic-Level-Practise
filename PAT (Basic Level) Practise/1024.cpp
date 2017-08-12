#include<iostream> 
#include<string>
#include<vector>
using namespace std;
void myprint (int a){
	for ( int i = 0 ; i < a ; i++ )
		cout << 0 ;
} 
int main(){
	string str ;
	cin >> str ;
	bool postion ;
	int i ,exponent = 0 ;
	//判断指数正负及指数大小 
	for ( i = 0 ; i < str.size() ; i++ ) {
		if(str[i]=='E'){
			switch(str[i+1]){
				case '-' :
					postion = 0 ;
					break;
				case '+' :
					postion = 1 ;
					break;
			}
			for (int j = i + 2 ; j < str.size() ; j++ ) {
				exponent =exponent*10 + str[j] - '0';
			}
			break;
		}
	}
	//输出负号 
	if(str[0]=='-')
		cout << "-" ;
	if(postion&& exponent != 0){				//当指数为正指数 
		if( exponent - (i - 3) < 0){			//当指数小于小数的位数时 
			for ( int j = 1 ; j < i ; j++ ){
				if(str[j]!='.'){
					cout << str[j] ;
					if(j==2+exponent)
						cout << "." ;
				}
			}	
		}else{									//当指数大于小数的位数时 
			for ( int j = 1 ; j < i ; j++ ){
				if(str[j]!='.'){
					cout << str[j] ;
				}
			}
		}
		myprint( exponent - (i - 3) ) ;	
	}else if(postion==0 && exponent != 0 ){		//当指数为负指数 
		cout << "0." ;
		myprint( exponent - 1 ) ;
		for ( int j = 1 ; j < i ; j++ ){
			if(str[j]!='.'){
				cout << str[j] ;
			}
		}
	}else{										//当指数为0
		for ( int j = 1 ; j < i ; j++ ){
			cout << str[j] ;
		}
	}
	return 0;	
}
