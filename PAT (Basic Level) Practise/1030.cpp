#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int n;
    float p;
    int seq[100005];
    int res = 1; // 这里初始化为0会造成后面数组越界，开始的算法不会有这个问题，改变算法后此处不改导致错误产生
    cin >> n >> p;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&seq[i]);
    }  
    sort(seq, seq+n);
//   这个算法是不断缩小范围，每次都需要从最大开始进行缩小。这个算法会导致超时
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

    //  这个算法是不断扩大范围，每次扩大的范围越来越小，因为满足条件的值是在小范围内波动的。
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
