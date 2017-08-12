#include<iostream>
using namespace std;
int main(){
	int num , i , A1 = 0 , A2 = 0, A3 = 0, A4 = 0, A5 = 0 ,flag = 0;
	float sum = 0.0 ;
	cin >> num;
	int arr[num];
	for(i = 0 ;i < num ;i++) {
		cin >> arr[i];
		switch(arr[i]%5){
			case 0:
				A1 += (arr[i]%2 == 0 ? arr[i]:0);
				break;
			case 1:
				flag=1;
				A2 += (A2%5==0?arr[i]:-arr[i]);
				break;
			case 2:
				A3++;
				break;
			case 3:
				A4++;sum+=arr[i];
				break;
			case 4:
				A5=(A5 > arr[i] ? A5 : arr[i]);
				break;
		}
	}
	if(A1==0)
		cout<<"N ";
	else
		cout<<A1<<" ";
	if(A2==0&&!flag)
		cout<<"N ";
	else
		cout<<A2<<" ";
	if(A3==0)
		cout<<"N ";
	else
		cout<<A3<<" ";
	if(A4==0)
		cout<<"N ";
	else
		printf("%.1f ",sum/A4);
	if(A5==0)
		cout<<"N";
	else
		cout<<A5;
	return 0;
}
