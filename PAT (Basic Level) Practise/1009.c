#include<stdio.h>
int main(){
  char str[90];
  char c;
  int i=0,j=0;
  int start,end;
  while((c=getchar())!='\n'){
    str[i++]=c;
  }
  end=i-1;
  for(i=89;i>=0;i--){
    if(i==0){
        start=0;
        for(j=start;j<=end;j++){
        putchar(str[j]);
      }
    }
    if(str[i]==' '){
      start=i+1;
      for(j=start;j<=end;j++){
        putchar(str[j]);
      }
      end=start-2;
      putchar(' ');
    }
    
  }
  return 0;
}

