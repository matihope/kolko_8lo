#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, counter = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a;
        if(a == 1){
            counter++;
            if (counter == 2)
                break;
        }
    }
    if (counter == 1){
        cout << 1 << endl;
    }
    else if (counter == 0){
        cout << 2 << endl;
    }
    else{
        cout << 0 << endl;
    }

    cout << 2 << endl;
    cout << 1 << " " << 2;

}