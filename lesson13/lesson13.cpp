#include <iostream>
using namespace std;
int main() {
    // de bai: tinh tong S = 1 - 2 + 3 -4 + 5 ...+ (3n + 1)
    int n;
    int s = 0;
    cin >> n;
    for (int i = 1; i <= 3 * n + 1; i++) {
        if (i % 2 == 0) {
            s = s - i;
        }
        else {
            s = s + i;
        }

    }
    cout << s;

    return 0;
}
