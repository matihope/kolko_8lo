#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, k, a;
	cin >> x >> k >> a;

	if (x % (k + a) - k >= 0) cout << 0 << endl;
	else cout << 1 << endl;
	return 0;
}