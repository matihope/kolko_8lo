#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m; cin >> n;
	string s; cin >> s;

	m = s.length();
	while (--n) {
		cin >> s;
		m = max(m, int(s.length()));
	}

	cout << m << endl;
}