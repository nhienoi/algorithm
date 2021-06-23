#include <iostream>
using namespace std;
void check(se film[], int n);

struct se{
	int s;
	int e;
};

void check(se film[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (film[i].e <= film[i+1]) {
			count++;
		} else {
			
		}
	}
	cout << count;
}

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
		cout << endl;
	}
	check(se film[], int n);
	return 0;
}