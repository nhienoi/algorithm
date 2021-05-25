#include <iostream>
using namespace std;
int main() {
<<<<<<< HEAD
    cout << "hello world";


    return 0;
}
=======
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i = 1; i <= n - 2; i++) {
        cout << "*";
        for (int i = 1; i <= n - 2; i++) {
            cout << " "; 
        }
        cout << "*";
        cout << endl;
    }    
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    return 0;
}
>>>>>>> 1ba2aa13b1775b51e637e3b2b717d9d20cfaca24
