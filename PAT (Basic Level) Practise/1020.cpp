//注意库存数量以及销售额的数据类型为浮点型 
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct info{
	float count , money , av;	
}Info;
bool cmp(Info a , Info b){
	return a.av > b.av ;
}
int main(){
	int type , need , i = 0 , sumc = 0 ;
	float summ = 0.0 ;
	cin >> type >> need ;
	Info info[type] ;
	for( i = 0 ; i < type ; i++ )
		cin >> info[i].count ;
	for( i = 0 ; i < type ; i++ ){
		cin >> info[i].money ;
		info[i].av = info[i].money/info[i].count ;
	}
	sort(info,info+type,cmp);
	for( i = 0 ; i < type ; i++ ){
		if(info[i].count <= need ) {
			summ += info[i].money ;
		}else{
			summ += info[i].av*need ;
			break;
		}
		need -= info[i].count; 
	}
	printf("%.2f",summ);
	return 0;
}
