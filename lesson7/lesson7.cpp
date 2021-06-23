#include <iostream>
#include <math.h>
using namespace std;
int main() {
    // giai pt bac 2
    // +) vo nghiem: no
    // +) vo so nghiem: inf
    // +) pt co nghiem 
    //ax^2 + bx + c = 0 
    int a, b, c, x1, x2, delta;
    cin >> a >> b >> c;
    delta = b*b - 4 * a * c;
    if (delta < 0) {
        cout << "NO";
    }
    else if (delta = 0) {
        x1 = x2 = -b / 2 *a;
        cout << x1;

    }
    else {
        x1 = ( -b + sqrt(delta)) / 2*a;
        x2 = ( -b - sqrt(delta)) / 2*a;
        cout << x1 << " " << x2;
    }

    if ( a == 0 && b == 0) {
        cout << "INF";
    }
    return 0;
}
