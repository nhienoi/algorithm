#include <iostream>
#include <string>
using namespace std;

///////////////
// PROTOTYPE //
///////////////

bool isTime(int n);
void again(int n);
void check(se film[], int n);

///////////////
// STRUCTURE //
///////////////

struct se{
	int s;
	int e;
};

/////////////
// PROCESS //
/////////////

bool isTime(int n) {
	bool ok = true;
	if (n > 24 || n < 0) {
		ok = false;
	}
	return ok;
}

void again(int n, short type) {
	cout << "value is not true, type again" << endl;
	if (type == 0) {
		cout << "start: ";
	} 
	if (type == 1) {
		cout << "end: ";
	}
	cin >> n;
	isTime(n);
	if (!isTime(n)) {
		again(n, type);
	}
}
 void check(se f[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (f[i].e <= f[i+1].s) {
			count++;
		}
	}
	cout << count;
}
//////////
// MAIN //
//////////

int main(){
	int n, s, e;
	string t;
	short type;
	cout << "nhap so bo phim: ";
	cin >> n;
	se film[n];
	for (int i = 0; i < n; i++) {
		bool ok;
		cout << "start: ";
		cin >> film[i].s;
		if (!isTime(film[i].s)) {
			type = 0;
			again(film[i].s, type);
		}
		cout << "end: ";
		cin >> film[i].e;
		if (!isTime(film[i].e)) {
			type = 1;
			again(film[i].e, type);
		}
	}
	for (int i = 0; i < n; i++) {
		if(film[i].s >= 13 || film[i].e >= 13) {
			if (film[i].s >= 13) {			
				film[i].s = film[i].s - 12;
			}
			if (film[i].e >= 13) {
				film[i].e = film[i].e - 12;
			}
			t = "pm";
		} else {
			t = "am";
		}

		cout << "bo phim thu " << i + 1 << ": ";
		cout << "start: " << film[i].s << t;
		cout << "\t";
		cout << "end: " <<  film[i].e << t;
		cout << "\t";
		cout << endl;
	}
	check(film, n);
	return 0;
}

