#include <bits/stdc++.h>


using namespace std;

int main(){
    int H, D; cin >> H >> D;
    double a = (double)H;

    a -= (pow(D, 2) + pow(H, 2)) / (H*2);

    printf("%.2f", a);

    return 0;
}
