#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string word; cin >> word;
    int n; cin >> n;
    --n;

    string fib = "b";
    string fib_b1 = "a";
    string fib_b2 = "b";
    while(--n){
        fib = fib_b1 + fib_b2;
        fib_b2 = fib_b1;
        fib_b1 = fib;
    }

    int lw = word.length();
    int lw2 = fib.length();
    int lw2lw = lw2 - lw;

    int score = 0;

    int i = 0;
    while(i <= lw2lw){
        if(word == fib.substr(i, lw)){
            score++;
        }
        ++i;
    }

    printf("%i\n", score);

    return 0;
}
