#include<iostream>
#include<string>
using namespace std;
int main() {
	int num, flag, temp, max = 1;
	cin >> num;
	int school[num+1] ; 
	for(int i = 0; i < num+1; i++)
		school[i] = 0;
	for (int i = 0; i < num; i++) {
		cin >> flag >> temp;
		school[flag] += temp;
	}
	for (int i = 0; i < num+1 ; i++) {
		if (school[max] < school[i])
			max = i;
	}
	cout << max << " " << school[max] ;
}
