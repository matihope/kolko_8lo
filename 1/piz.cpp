#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;


int main()
{
    double a, b, x, y;
    cin >> a >> b >> x >> y;

    double cena_za_pole_a, cena_za_pole_b;
    cena_za_pole_a = x / (a*a * M_PI);
    cena_za_pole_b = y / (b*b * M_PI);

    if (cena_za_pole_a < cena_za_pole_b)    
        cout << "MNIEJSZA";
    else
        cout << "WIEKSZA";

    return 0;
}