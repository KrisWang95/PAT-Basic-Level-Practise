#include <iostream>
using namespace std;
int main() {
    int first, k, n;
    cin >> first >> n >> k;
    int address;
    int data[100005];
    int next[100005];
    for (int i = 0; i < n; i++) {
        cin >> address;
        cin >> data[address];
        cin >> next[address];
    }
    int list[100005];
    int sum = 0;//不一定所有的输入的结点都是有用的，加个计数器
    while (first != -1) {
        list[sum++] = first;
        first = next[first];
    }
    int result[100005];
    for (int i = 0; i < sum; i++) {
        result[i] = list[i];
    }
    
    for (int i = 0; i < (sum - sum % k); i++) {
        result[i] = list[i / k * k + k - 1 - i % k]; //something strange
    }
    
    for (int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", result[i], data[result[i]], result[i + 1]); //格式化输出控制添零 
    printf("%05d %d -1", result[sum - 1], data[result[sum - 1]]);
    return 0;
}
