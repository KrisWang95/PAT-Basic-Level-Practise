#include<iostream> 
using namespace std;

int main(){
	int start , end  ;
	float count ;
	int hour , mintue , second ;
	int CLk_TCK = 100 ;
	cin >>	start >> end ;
	count = (end - start)/100.0 ;
	hour = count / 3600 ;
	count -= hour*3600 ;
	mintue = count / 60 ;
	count -= mintue*60 ;
	second = (int)(count+0.5) ; //ËÄÉáÎåÈë 
	printf("%02d:%02d:%02d",hour , mintue , second) ;
	return 0 ;
}
