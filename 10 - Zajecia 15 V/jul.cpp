#include <iostream>
#include <algorithm>

void normalize(std::string& a, std::string& b){
    while(a.length() != b.length()){
        if (a.length() < b.length())
            a = "0" + a;
        else
            b = "0" + b;
    }
}

std::string add(std::string first, std::string second){
    std::string answer;

    normalize(first, second);

    int carry = 0, maths = 0;
    for (int i = first.length()-1; i >= 0; --i){
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
    for (int i = first.length()-1; i >= 0; --i){
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

    while(answer[0] == '0')
        answer.erase(answer.begin());

    return answer;
}

std::string divide_by_2(std::string first){
    std::string answer;

    int maths = 0, carry = 0;
    for (int i = 0; i < first.length(); ++i){
        maths = (first[i] - '0') / 2;
        answer += std::to_string(maths + carry);
        carry = 0;
        if ((first[i] - '0') % 2 == 1){
            carry = 5;
        }
    }
    while(answer[0] == '0')
        answer.erase(answer.begin());

    return answer;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string a, b;
    std::cin >> a >> b;

    // answer -> a + b = 2*answer1;

    std::string answer1 = divide_by_2(add(a, b));
    std::string answer2 = substract(a, answer1);
    printf("%s\n%s\n", answer1.c_str(), answer2.c_str());
}