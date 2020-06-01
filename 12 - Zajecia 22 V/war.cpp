#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a = 0, i = 0;
    while(1){
        i++;
        cin >> a;
        if (a == i)
            break;
        else if (i >= n){
            i = 0;
            break;
        }
    }

    printf("%i\n", i);
    return 0;
}