#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<double> boki;
    for(int i = 0; i < 3; i++)
    {
        double a; cin >> a;
        boki.push_back(a);
    }

    sort(boki.begin(), boki.end());

    if ((boki[0] + boki[1]) <= boki[2]) cout << -1 << endl;
    else{
        double a = boki[0], b = boki[1], c = boki[2];
        double p = (double)(a + b + c) / 2;
        cout << (int)(sqrt(p*(p-a)*(p-b)*(p-c)));
    }

    return 0;
}