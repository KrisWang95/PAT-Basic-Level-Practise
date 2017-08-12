#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double r1,p1,r2,p2,A,B;
	cin >> r1 >> p1 >> r2 >> p2;
	r1 = r1 * r2;
	p1 = p1 + p2;
	A = r1 * cos(p1);
	B = r1 * sin(p1);
	if (A + 0.005 >= 0 && A < 0) //评论区有指出因为是四舍五入所以改成A + 0.005更合适
        printf("0.00");
    else
        printf("%.2f", A);
    if(B >= 0)
        printf("+%.2fi", B);
    else if (B + 0.01 >= 0 && B < 0)
        printf("+0.00i");
    else
        printf("%.2fi", B);
    return 0;
}
