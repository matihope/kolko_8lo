// #include <bits/stdc++.h>

// using namespace std;

// bool jest_prostokatny(vector<double> trojkat){
//     return (pow(trojkat[0], 2) + pow(trojkat[1], 2) == pow(trojkat[2], 2));
// }

// double licz_pole(vector<double>& t){
//     double p = (t[0] + t[1] + t[2]) * 0.5;
//     cout << p << endl;
//     return sqrt(p*(p-t[0])*(p-t[1])*(p-t[2]));
// }

// bool czy_pole(vector<double> trojkat, double last_pole){
//     double n_pole = licz_pole(trojkat);
//     return ((last_pole*0.8 <= n_pole) && (n_pole <= last_pole*1.2));
// }

// void inpt(vector<double>& trojkat){
//     trojkat.clear();
//     for(int i = 0; i < 3; i++){
//         double a; cin >> a;
//         trojkat.push_back(a);
//     }
//     sort(trojkat.begin(), trojkat.end());
// }

// int main(){
//     int punkty_pani = 0, punkty_pana = 0;

//     vector<double> trojkat;
//     double pole = 0;

//     bool
//     pole_sie_zgadza = false,
//     prostokatny = false,

//     ruch_pani = false;

//     do{
//         // input and test if it's a triangle
//         inpt(trojkat);
//         ruch_pani = !ruch_pani;
//         if((trojkat[0] + trojkat[1]) <= trojkat[2]) continue;

//         // points
//         if(ruch_pani) punkty_pani++;
//         else punkty_pana++;

//         if(czy_pole(trojkat, pole)){
//             punkty_pani++;
//             if(jest_prostokatny(trojkat))
//                 punkty_pani++;
//         }
//         pole = licz_pole(trojkat);

//     } while (trojkat[0] != 0 && trojkat[1] != 0 && trojkat[2] != 0);

//     cout << punkty_pani << " " << punkty_pana << endl;

//     return 0;
// }

// THE UPPER CODE SOMEHOW DOESN'T WORK :/ NO CLUE WHY

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int in, fp = 0, mp = 0;
    bool who = true; //T => m
    short test;
    double lastarea, area, p, a, b, c;
    area = 0;
    vector<int> sides;
    while (1)
    {
        lastarea = area;
        test = 0;
        sides.clear();
        who = !who; //reset lines
        for (int i = 0; i < 3; i++)
        {
            cin >> in;
            if (in == 0)
            {
                test++;
            } //input
            sides.push_back(in);
        }
        if (test == 3)
        {
            break;
        }                                 //3x0?
        sort(sides.begin(), sides.end()); //sort
        if ((sides[0] + sides[1]) <= sides[2])
        {
            continue;
        } //is it a triangle?
        
        if (who == false)
        {
            fp++;
        }
        else
        {
            mp++;
        } //+1 for the person
        a = sides[0];
        b = sides[1];
        c = sides[2];
        p = (a + b + c) * 0.5;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        if ((area >= lastarea * 0.8) && (area <= lastarea * 1.2))
        {
            if (who == false)
            {
                fp++;
            }
            else
            {
                mp++;
            }
            if (a * a + b * b == c * c)
            {
                if (who == false)
                {
                    fp++;
                }
                else
                {
                    mp++;
                }
            }
        }
    }
    cout << fp << ' ' << mp;
    return 0;
}
