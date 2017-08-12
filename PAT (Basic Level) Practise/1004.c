#include<stdio.h> 
typedef struct _info{
	char name[20];
	char StuNum[20];
	int marks;
}INFO;

int main(){
	int num,i = 0 , maxI = 0, minI = 0;
	scanf("%d",&num);
	INFO StuInfo[num];
	for(i = 0;i < num;i++){
		scanf("%s %s %d",StuInfo[i].name,StuInfo[i].StuNum,&StuInfo[i].marks);
	}
	int max = StuInfo[0].marks;
	int min = StuInfo[0].marks;
	for(i = 0;i < num;i++){
		if(max < StuInfo[i].marks){
			max = StuInfo[i].marks;
			maxI = i;
		}
		if(min > StuInfo[i].marks){
			min = StuInfo[i].marks;
			minI = i;
		}	
	}
	printf("%s %s\n%s %s",StuInfo[maxI].name,StuInfo[maxI].StuNum,StuInfo[minI].name,StuInfo[minI].StuNum);
	return 0;
} 
