#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, b, l;
    cin >> a >> b >> l;

    int times = (a * 10 + b * 20) / l;

    cout << (times*10) << endl;

    return 0;
}