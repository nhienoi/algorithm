#include <iostream>
using namespace std;
int factorial(unsigned long long  n) {
	if(n == 0) {
		return 1;
	}
	return n * factorial(n-1);
}
int main() {
	unsigned long long a;
	cout << "please type a !: ";
	cin >> a;
	unsigned long long result = factorial(a);
	cout << "the result is :" << " " << result;
	return 0;
}
