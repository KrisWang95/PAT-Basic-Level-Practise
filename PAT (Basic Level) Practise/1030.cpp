#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int n;
    float p;
    int seq[100005];
    int res = 1; // �����ʼ��Ϊ0����ɺ�������Խ�磬��ʼ���㷨������������⣬�ı��㷨��˴����ĵ��´������
    cin >> n >> p;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&seq[i]);
    }  
    sort(seq, seq+n);
//   ����㷨�ǲ�����С��Χ��ÿ�ζ���Ҫ�����ʼ������С������㷨�ᵼ�³�ʱ
//  for (int i = 0; i < n; ++i) {
//      for (int j = n-1; j > i + res - 1; --j) {
//          if (seq[j] <= product[i]) {
//              if (j - i + 1 > res) {
//                  res = j - i + 1;
//              }
//              break;
//          }
//      }
//  }

    //  ����㷨�ǲ�������Χ��ÿ������ķ�ΧԽ��ԽС����Ϊ����������ֵ����С��Χ�ڲ����ġ�
    for (int i = 0; i < n; ++i) {
        for (int j = i+res-1; j < n;++j){
            if (seq[j] <= seq[i]*p) {
                if (j-i+1 > res) {
                    res = j - i + 1;
                }
            }else{
                break;
            }
            
        }
    }
    printf("%d\n",res);
    
    
}
