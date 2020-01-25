#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int times = abs(a - c) * abs(b - d);

    cout << times << endl;

    return 0;
}