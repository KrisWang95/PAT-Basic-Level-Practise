#include<iostream>
#include<string> 
using namespace std;
int main(){
	string input;
	getline(cin,input);
	int ascii[256] = {0};
	for(int i = 0; i < input.length(); i++){
		if(input[i] == 'P'||input[i] == 'A'||input[i] == 'T'||input[i] == 'e'||input[i] == 's'||input[i] == 't'){
			ascii[input[i]]++;
		}
	}
	while(ascii['P']||ascii['A']||ascii['T']||ascii['e']||ascii['s']||ascii['t']){
		if(ascii['P']){
			cout << "P" ;
			ascii['P'] -- ;
		}
		if(ascii['A']){
			cout << "A" ;
			ascii['A'] -- ;
		}
		if(ascii['T']){
			cout << "T" ;
			ascii['T'] -- ;
		}
		if(ascii['e']){
			cout << "e" ;
			ascii['e'] -- ;
		}
		if(ascii['s']){
			cout << "s" ;
			ascii['s'] -- ;
		}
		if(ascii['t']){
			cout << "t" ;
			ascii['t'] -- ;
		}
	}
	return 0;
} 
