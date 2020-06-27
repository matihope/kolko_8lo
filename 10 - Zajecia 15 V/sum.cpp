#include <iostream>
#include <algorithm>

using namespace std;

void normalize(std::string& a, std::string& b){
    while(a.length() != b.length()){
        if (a.length() < b.length())
            a = "0" + a;
        else
            b = "0" + b;
    }
}

void commalize(std::string& a, std::string& b){
    while(a.length() != b.length()){
        if (a.length() < b.length())
            a += "0";
        else
            b += "0";
    }
}

std::string add(std::string first, std::string second, bool normal){
    std::string answer;

    if (normal)
        normalize(first, second);
    else
        commalize(first, second);

    int carry = 0, maths = 0;
    for (int i = first.length()-1; i > 0; --i){
        maths = (first[i] - '0') + (second[i] - '0') + carry;
        carry = 0;
        if (maths > 9){
            carry = maths/10;
            maths %= 10;
        }
        answer = std::to_string(maths) + answer;
    }
    if (carry > 0)
        answer = std::to_string(carry) + answer;

    return answer;
}

std::string substract(std::string first, std::string second){
    // first number has to be bigger than second
    std::string answer;
    normalize(first, second);

    int carry = 0, maths = 0;
    for (int i = first.length()-1; i > 0; --i){
        maths = first[i] - '0';
        if (first[i] < second[i]){
            maths += 10;
            int j = i-1;
            while(first[j] <= '0') j--;
            while(j < i){
                first[j]--;
                if (first[j] < '0')
                    first[j] = '9';
                j++;
            }
        }
        answer = std::to_string(maths - (second[i] - '0')) + answer;
    }

    while (answer[0] == '0')
        answer.erase(answer.begin());

    return answer;
}

int main(){
    int n;
    cin >> n;

    int przecinek = 0;
    string answer = "0", curr = "0", answer_przecinek = "", curr_przecinek = "";
    char answer_sign = '+', curr_sign = '+';
    
    for (int i = 0; i < n; ++i){
        cin >> curr;

        if (curr[0] == '-' || curr[0] == '+'){
            curr_sign = curr[0];
            curr = curr.substr(1);
        }

        przecinek = curr.find(',');
        if (przecinek != string::npos){
            curr_przecinek = curr.substr(przecinek);
            curr = curr.substr(0, przecinek);
        }

        if (answer_sign == '-') {
            if (curr_sign == '-') { // -ans -curr = -(ans + curr)
                answer = add(answer, curr, true);
                answer_przecinek = add(answer, curr, false);
                answer_sign = '-';
            }
            else { // -ans +curr = -ans + curr = curr - ans;

            }
        }

        else{
            if (curr_sign == '-') { // +ans -curr

            }
            else { // +ans +curr
                
            }
        }


    }


}