#include <iostream>
#include <set>

int main(){
    int myints[] = {5, 3, 4, 1, 2};
    std::set<int> test(myints, myints + 5);

    std::cout << test.begin() << std::endl;

    // for(iter = test.begin(); iter != test.end(); ++iter) {
    //     std::cout << *iter << " " << &iter << std::endl;
    // }

    // std::cout << std::distance(test.begin(), iter) << std::endl;

    return 0;
}