#include <iostream>
using namespace std;
int main() {
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