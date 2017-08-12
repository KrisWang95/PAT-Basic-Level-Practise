#include<iostream>
#include<string> 
using namespace std;
int main(){
	string input;
	getline(cin,input);
	int ascii[257] = {0}, max = 0 ;
	for(int i = 0; i < input.length(); i++){
		if(input[i] >= 'A' && input[i] <= 'Z'){
			ascii[input[i]+32]++;
		}else if(input[i] >= 'a' && input[i] <= 'z'){
			ascii[input[i]]++;
		}
	}
	for(int i = 0;i <=256; i++){
		if(ascii[i]>ascii[max]){
			max = i ;
		}
	}
	printf("%c %d",max,ascii[max]);
	return 0;
} 
