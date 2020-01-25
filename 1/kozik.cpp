#include <bits/stdc++.h>

using namespace std;


int main()
{
    double k, w, m;
    cin >> k >> w >> m;

    int times = ceil((w-k)/m);

    cout << times << endl;

    return 0;
}