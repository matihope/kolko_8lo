#include <iostream>

using namespace std;

int main (){
    int a, grazyna = 0, janusz = 0;
    while(true){
        cin >> a;
        if(a == 0) break;
        if(a%2 == 0) grazyna++;
        else janusz++;
    }
    if(janusz==grazyna) cout << "NIKT";
    else if(janusz > grazyna) cout << "JANUSZ";
    else cout << "GRAZYNA";
    return 0;
}