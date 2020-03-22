#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s = 0; cin >> n;
	string a, b;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		s += (a == b);
	}
	cout << s;
    return 0;
}