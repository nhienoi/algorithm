#include <iostream>
using namespace std;
void type(int m[], int n);
void exprt(int m[], int n);
void arrang(int m[], int n);
void type(int m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "m[" << i << "]: ";
        cin >> m[i];
    }
}

void exprt(int m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "m[" << i << "]: " << m[i];
        cout << endl;
    }
}
void arrang(int m[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if ()
        }
    }      
}
int main() {
    int n;
    cout << "type n: ";
    cin >> n;
    int m[n];
    type(m, n);

    exprt(m, n);
    return 0;
}