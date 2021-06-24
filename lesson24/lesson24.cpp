#include <iostream>
#include <stack>
using namespace std;

void exprt1(int n);
void exprt2(int &n);

void exprt1(int n) {
	n+=120;
	cout << "\nn+=120 gia tri n sau khi thay doi la: \n";
	cout << n;
	cout << endl;
}
void exprt2(int &n) {
	n+=100;
	cout << "\nn+=100 gia tri cua n sau khi thay doi la: \n";
	cout << n;
	cout << endl;
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << "gia tri n ban dau la : " << n << endl;
	exprt1(n);
	cout << "gia tri n main la: " << n << endl;
	exprt2(n);
	cout << "gia tri n mainla : " << n << endl;
	return 0;
}
