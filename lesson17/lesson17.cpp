#include <iostream>
using namespace std;
bool test(int n);

bool test(int n) {
	bool ok;
	for (int i = n; i >= 4; i / 4) {
		if (i == 4) {
			ok true;
		} else {
			ok = false;
		}
	}
	return ok;
}

int main() {
	int n;
	cout << "type n: ";
	cin >> n;
	if(test(n)) {
		cout << "luy thua cua 4:";
	} else {
		cout << "deo phai";
	}
	return 0;
}
