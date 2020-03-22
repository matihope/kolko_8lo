#include <iostream>
#include <algorithm>

using namespace std;


bool comp(const char &a, const char &b){
    if(a == 32) return false;
    if(b == 32) return true;

    if (a >= 97 && b < 97)
        return a-32 < b+32;

    if (b >= 97 && a < 97)
        return a+32 < b-32;

    return a < b;
}


int main(){
    int n;
    cin >> n; 

    string thing = "";
    string a;

    getline(cin, a); 
    while(n--){
        getline(cin, a);
        thing += a;
    }

    sort(thing.begin(), thing.end(), comp);

    int counter = -1;
    char curr, prev;
    curr = thing[0];
    for(char c : thing){
        if(c == 32) break;

        prev = curr;
        curr = c;

        if(prev == curr) counter++;
        else{
            cout << prev << " " << counter+1 << endl;
            counter = 0;
        } 
    }

    return 0;
}