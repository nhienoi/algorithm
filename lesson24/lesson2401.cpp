#include <iostream>
#include <stack>
using namespace std;
void pushh(stack<int> a, int n);
void exprt(stack<int> a, int n);

void pushh(stack<int> &a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "type phan tu thu " << i << ": ";
		int b;
		cin >> b;
		cin >> a.push(b);
	}
}
void exprt(stack<int> a, int n) {
	cout << "/////////////////////////\n";
	for (int i = 0; i < n; i++) {
		cout << a.top() << endl;
		a.pop();
	}
}

int main() {
	int n;
	cout << "n: ";
	cin >> n;
	stack<int> headDick;
	pushh(headDick, n);
	exprt(headDick, n);
	return 0;
}
