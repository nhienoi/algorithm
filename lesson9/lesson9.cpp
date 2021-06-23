#include <iostream>
using namespace std;
int main(){ 
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "this is a leap year !";
      } else {
          cout << "this is not a leap year !;";
      }

    // check cac nam nhaun trong 1 khoang thoi gian
    int y_start, y_end;
    cout << "type year start: ";
    cin >> y_start;
    cout << "type year end: ";
    cin >> y_end;
    for (int i = y_start; i < y_end; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}



