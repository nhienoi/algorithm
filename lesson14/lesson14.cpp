#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        cout << "so hoan hao";
    }
    else {
        cout << "khong phai so hoan hao";
    }
    return 0;
}