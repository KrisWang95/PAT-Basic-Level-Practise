#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b;
	getline(cin, a); // 为了防止第一行是空的，不能用cin >> a,用getline(cin, a)
	getline(cin, b);
	int flag = a.find('+') == string::npos ? 1 : 0;
	int none = 1;
	for (int i = 0; i < b.size(); i++) {
		if (a.find((b[i] <= 'z' && b[i] >= 'a') ? b[i] - 32 : b[i]) ==string::npos) {
			if (flag || (b[i] > 'Z' || b[i] < 'A')) {
				cout << b[i];
			}
		}
	}
	if (none)
		cout << endl;
	return 0;
}
