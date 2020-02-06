#include <bits/stdc++.h>
using namespace std;
int main(){
    double H, D; cin >> H >> D;
    H -= (pow(D, 2) + pow(H, 2)) / (H*2);
    printf("%.2f", H);
    return 0;
}