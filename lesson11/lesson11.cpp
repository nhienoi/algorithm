#include <iostream>
using namespace std;
int main() {
<<<<<<< HEAD
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        sum += 1 / i;
    }
    cout << sum;
    return 0;
}
=======
 	long long n;
    cin >> n;
    if (n < 2) {
		cout << "NO";
    }
    if (n == 2) {
		cout << "YES";
    }
    for (int i = 3; i < n; i+= 2) {
        if (n % i == 0) {
            cout << "NO";
        }
        else {
			cout << "YES";
        }
    }
    
    return 0;
}
>>>>>>> 1ba2aa13b1775b51e637e3b2b717d9d20cfaca24
