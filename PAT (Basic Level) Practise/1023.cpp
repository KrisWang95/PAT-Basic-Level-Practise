#include<iostream>
#include<vector>
using namespace std;
int main(){
  int num[10];
  bool flag = 1;
  for( int i = 0 ; i < 10 ; i++){
    cin >> num[i];
    if(num[i]>0 && i != 0 && flag){
      cout << i ;
      num[i]--;
      flag = 0; //标记第一位数已选定 
    }
  }
  for( int i = 0 ; i < 10 ; i++){
    if(num[i] ){
      for( int j = 0 ; j < num[i] ; j++)
          cout << i ;
    }
  }
  return 0;
}
