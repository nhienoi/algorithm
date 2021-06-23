#include <iostream>
using namespace std;
struct se{
	int s;
	int e;
};
int main() {
	int n, s, e;
	cout << "nhap so bo phim: ";
	cin >> n;
	se film[n];
	for (int i = 0; i < n; i++) {
		cout << "start: ";
		cin >> film[i].s;
		cout << "end: ";
		cin >> film[i].e;
	}
	for (int i = 0; i < n; i++) {
		cout << film[i].s;
		cout << endl;
		cout << film[i].e;
	}
	return 0;
}