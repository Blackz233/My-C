#include<iostream>
#include"func.h"
using namespace std;
void main() {
	int n, r;
	while (1) {
		cout << "请输入两个数求组合数:\n";
		cin >> n >> r;
		if (n < r || n < 0)
			cout << "输入的数不符合条件！\n";
		else if (n == 0 && r == 0)
			break;
		else {
			cnr(n, r);
			cout << cnr(n, r) << endl;
		}
	}
}