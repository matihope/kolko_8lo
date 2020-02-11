#include <bits/stdc++.h>


using namespace std;


bool czy_jest_trojkatem(vector<double> trojkat){
    if(trojkat[0] + trojkat[1] > trojkat[2]) 
        return true;

    return false;
}

bool czy_jest_prostokatny(vector<double> trojkat){
    if(pow(trojkat[0], 2) + pow(trojkat[1], 2) == pow(trojkat[2], 2))
        return true;
    
    return false;
}


bool czy_pole(vector<double> t1, vector<double> t2){
    // t1 = nowe, t2 = stare
    double p1 = (double)(t1[0] + t1[1] + t1[2]) / 2;
    double pole1 = (sqrt(p1*(p1-t1[0])*(p1-t1[1])*(p1-t1[2])));

    double p2 = (double)(t2[0] + t2[1] + t2[2]) / 2;
    double pole2 = (sqrt(p2*(p2-t2[0])*(p2-t2[1])*(p2-t2[2])));

    if((pole2*(80.0/100.0) <= pole1) && (pole1 <= pole2*(120.0/100.0))){
        return true;
    }

    return false;
}


void pani_inpt(vector<double>& pani){
    pani.erase(pani.begin(), pani.end());
    for(int i = 0; i < 3; i++){
        double a; cin >> a; 
        pani.push_back(a);
    }
    sort(pani.begin(), pani.end());
}


void pan_inpt(vector<double>& pan){
    pan.erase(pan.begin(), pan.end());
    for(int i = 0; i < 3; i++){
        double a; cin >> a; 
        pan.push_back(a);
    }
    sort(pan.begin(), pan.end());
}


int main(){
    vector<double> pani;
    vector<double> pan;

    int punkty_pani = 0, punkty_pana = 0;

    pani_inpt(pani);

    bool 
    poprzedni_byl_trojkatem = false,
    jest_trojkatem = czy_jest_trojkatem(pani), 
    pole = false, 
    prostokatny = czy_jest_prostokatny(pani);

    do{
        if(jest_trojkatem)
        {
            punkty_pani++;
            if(pole && poprzedni_byl_trojkatem)
            {
                punkty_pani++;
                if(prostokatny) 
                    punkty_pani++;
            }
        }

        pan_inpt(pan);
        poprzedni_byl_trojkatem = jest_trojkatem;
        jest_trojkatem = czy_jest_trojkatem(pan);
        pole = czy_pole(pan, pani);
        prostokatny = czy_jest_prostokatny(pan);

        if(jest_trojkatem)
        {
            punkty_pana++;
            if(pole && poprzedni_byl_trojkatem)
            {
                punkty_pana++;
                if(prostokatny) 
                    punkty_pana++;
            }
        }

        //pani
        pani_inpt(pani);
        poprzedni_byl_trojkatem = jest_trojkatem;
        jest_trojkatem = czy_jest_trojkatem(pani);
        pole = czy_pole(pani, pan);
        prostokatny = czy_jest_prostokatny(pani);

    }while(pani[0] != 0 && pan[1] != 0);

    cout << punkty_pani << " " << punkty_pana << endl;

    return 0;
}