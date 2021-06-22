#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n);

bool isPrime(int n) {
	bool ok = true;
	if (n <= 1) {
		ok = false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ok = false;
	}
	return ok;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
	return 0;
}