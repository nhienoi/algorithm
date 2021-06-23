#include <iostream>
using namespace std;
void type(int arr[100][100], int n, int m);
void exprt(int arr[100][100], int n, int m);

void type(int arr[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "arr[" << n << "][" << m << "] = ";
			cin >> arr[i][j];
		}
	}
}
void exprt(int arr[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j];
			cout << endl;
		}
	}
}
int main() {
	int n, m;
	cout << "n m";
	cin >> n >> m;
	int arr[n][m];
	type(arr, n, m);
	exprt(arr, n, m);
	return 0;
}
