#include <iostream>
#include <cmath>

using namespace std;

int bin2dec(string bin){
    int answer = 0;

    for (int i = 0; i < bin.size(); ++i){
        answer += pow(2, bin.size()-i-1) * (bin[i] - '0');
    }

    return answer;
}

int main(){
    int n;
    cin >> n;
    string slowo;
    cin >> slowo;
    n = slowo.length();

    int n_counter = 0, z_counter = 0;
    for (int i = 0; i < n; ++i){
        if (slowo[i] == 'n')
            n_counter++;
        else if (slowo[i] == 'z')
            z_counter++;
    }

    string answer = "";
    while(n_counter--){
        answer += "1";
    }
    while(z_counter--){
        answer += "0";
    }
    cout << answer << " " << bin2dec(answer) << endl;
}