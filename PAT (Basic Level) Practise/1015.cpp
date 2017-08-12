#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
struct Decai{
	int StuNum,DeMark,CaiMark;
};
int cmp(struct Decai a,struct Decai b){
	if((a.DeMark+a.CaiMark)!=(b.DeMark+b.CaiMark)) 
		return a.DeMark+a.CaiMark > b.DeMark+b.CaiMark;
	else if(a.DeMark!=b.DeMark)
		return a.DeMark > b.DeMark ;
	else
		return a.StuNum < b.StuNum ;
}
int myprint(vector <Decai> a){
	for(int i =0 ; i < a.size() ; i++ ){
		printf("%d %d %d\n",a[i].StuNum,a[i].DeMark,a[i].CaiMark);
	}
	return 0;
}
int main(){
	int N,L,H,cnt = 0;
	scanf("%d %d %d",&N,&L,&H); 
	Decai a;
	vector <Decai> b,c,d,e ; 
	for(int i = 0 ; i < N ; i++){
		scanf("%d %d %d",&a.StuNum,&a.DeMark,&a.CaiMark);
		if(a.DeMark >= L && a.CaiMark >= L){
			cnt++;
			if(a.DeMark >= H && a.CaiMark >= H){
				b.push_back(a);
			}else if(a.DeMark >= H && a.CaiMark < H)	{
				c.push_back(a);
			}else if(a.DeMark < H && a.CaiMark < H && a.DeMark >= a.CaiMark)	{
				d.push_back(a);
			}else{
				e.push_back(a);
			}		
		}	
	}
	printf("%d\n",cnt);
	sort(b.begin(),b.end(),cmp);
	sort(c.begin(),c.end(),cmp);
	sort(d.begin(),d.end(),cmp);
	sort(e.begin(),e.end(),cmp);
	myprint(b) ;myprint(c);myprint(d);myprint(e);
	return 0 ;
}
