#include<iostream>
#include"func.h"
using namespace std;
void main() {
	int n, r;
	while (1) {
		cout << "�������������������:\n";
		cin >> n >> r;
		if (n < r || n < 0)
			cout << "�������������������\n";
		else if (n == 0 && r == 0)
			break;
		else {
			cnr(n, r);
			cout << cnr(n, r) << endl;
		}
	}
}