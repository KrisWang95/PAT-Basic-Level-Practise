#include<iostream> 
using namespace std;
int main(){
	string temp,im[3][10];
	bool tag = false;
	int cnt = 0;
	for(int i = 0; i < 3; i++){
		getline(cin,temp);
		for(int j = 0; j < temp.length() ; j++){
			if(temp[j] == '['){
				tag = true;
				continue;
			}else if(temp[j] == ']'){
				tag = false;
				cnt++;
			}
			if(tag){
				im[i][cnt] += temp[j];
			}
		}
		cnt = 0 ;
		tag = false;
	}
	int N;
	cin >> N;
	for(int i = 0; i < N ; i++){
		int a[5];
		scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
		if(im[0][a[0]-1].empty()||im[1][a[1]-1].empty()||im[2][a[2]-1].empty()||im[1][a[3]-1].empty()||im[0][a[4]-1].empty()){
			cout << "Are you kidding me? @\\/@";
		}else{
			cout << im[0][a[0]-1] << "(" << im[1][a[1]-1] << im[2][a[2]-1] << im[1][a[3]-1] << ")" << im[0][a[4]-1];
		}
		if( i != N - 1)
			cout << endl; 
	}
	return 0;
}
