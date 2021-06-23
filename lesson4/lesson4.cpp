#include <iostream>
using namespace std;
int main() {

	// sum of sn = 1 + 1/2 + 1/3 + 1/4 + 1/5 +...1/n
	int n;
	cin >> n;
	int sum = 0;	
	for (int i = 1;i < n; i++) {
		sum += 1/i;
	}
	cout << "total: " << sum;
	return 0;
}
