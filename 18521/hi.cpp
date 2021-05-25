#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double x = 12.2123123123;
	cout << x;
	cout << endl;
	cout << setprecision(10) << x;
	cout << x;
	return 0;
}
