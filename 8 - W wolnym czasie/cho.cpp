#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s[] = {
		"    *",
		"   ***",
		"  *****",
		" *******",
		"    *",
		"   ***",
		"  *****",
		" *******",
		"*********"
	};
	for (string p : s) cout << p << endl;
}
