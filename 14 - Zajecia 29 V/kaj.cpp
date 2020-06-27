#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int obciazenie, n, przod, tyl, counter = 0;
    cin >> obciazenie >> n;

    int wagi[30000];

    for (int i = 0; i < n; ++i)
        cin >> wagi[i];

    sort(wagi, wagi + n);

    przod = n-1;
    tyl = 0;

    while(tyl <= przod){
        if (wagi[przod] + wagi[tyl] <= obciazenie)
            tyl++;
        przod--;
        counter++;
    }

    cout << counter << endl;
}