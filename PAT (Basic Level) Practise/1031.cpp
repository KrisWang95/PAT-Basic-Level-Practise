#include<iostream>
#include<string>
using namespace std;
int main() {
	int num, flag = 1;
	cin >> num;
	string id[num];
	for (int i = 0; i < num; i++)
		cin >> id[i];
	for (int j = 0; j < num; j++) {
		int sum = 0, z;
		int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
		char M[12] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2', '\0' };
		for (int i = 0; i < 17; i++) {
			sum += (id[j][i] - '0') * weight[i];
		}
		z = sum % 11;
		if (M[z] != id[j][17]) {
			cout << id[j] << endl;
			flag = 0;
		}
	}
	if (flag) {
	cout << "All passed";
	}
}
