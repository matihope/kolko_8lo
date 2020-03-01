#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> patyki;
    for(int i = 0; i < 3; i++)
    {
        int a; cin >> a;
        patyki.push_back(a);
    }

    sort(patyki.begin(), patyki.end());

    if (patyki[0] == patyki[1] && patyki[1] == patyki[2]) cout << 2 << endl;
    else if ((pow(patyki[0], 2) + pow(patyki[1], 2)) == pow(patyki[2], 2)) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}