#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int result = 0;
	a = 0, b = 1, c = 1;
	cout << a << "," << b << "," << c << " "; 
	for (int i = 0; i <= 15; i++) {
		a = b;
		b = c;
		c = a + b;
		cout << c << ","; 
	}
	return 0;
}
