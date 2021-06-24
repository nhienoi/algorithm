#include <iostream>
using namespace std;
int check(int &n) {
	if (n == 0) {
		return 1;
	}
	return check(n) * check(n-1);
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x = check(n);
	cout << x;
	return 0;
}


