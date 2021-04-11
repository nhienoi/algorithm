#include <iostream>
#include <iomanip>
using namespace std;

int exponential(int c, int d) {
    	int lt = 1;
    	for (int i = 1; i <= d; i++) {
            lt *= c;
        }
    return lt;
}

int factorial(int a) {
    int gt = 1;
    for (int i = a; i > 0; i--) {
        gt *= i;
    }
    return gt;
}


int main() {
    int x,n;
    cin >> x >> n;
	double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += exponential(x,i) / factorial(i);
    }
    cout << fixed << setprecision(2) << sum;
	return 0;
}