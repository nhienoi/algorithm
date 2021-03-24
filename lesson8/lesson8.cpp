#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch(c) {
        case '+': {
                      cout << a + b;
                      break;
                  }
        case '-': {
                      cout << a - b;
                      break;
                  }
        case '*': {
                      cout << a * b;
                      break;
                  }
        case '/': {   if( a == 0) {
                      cout << "Math Error";
                  }
                  else {
                      double x = (double)a / b;
                      cout << setprecision(2) << fixed << x;
                  }
                       break;
                  }
    }
    return 0;
}
