#include <bits/stdc++.h>


using namespace std;

int main(){
    int a; cin >> a;
    long long b = pow(a, 2);
    long long c = pow(a/2, 2);
    long long d = b - c;
    string e = to_string(d);
    for(auto n: e)
        cout << n;

    return 0;
}
