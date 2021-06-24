#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int>lyngon) {
	while(!lyngon.empty()) {
		cout << lyngon.top();
		stack.pop();
		cout << endl;
	}
}


int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	//push, pop, top, empty, size,  
	stack<int>lyngon;
	for (int i = 0; i < n; i++) {
		lyngon.push(i);
	}
	printStack(lyngon);
	cout << "size of lyngon: " << lyngon.size();
	return 0;
} 
