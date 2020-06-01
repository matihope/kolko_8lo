#define number_of_fibs 15

#include <iostream>
#include <vector>

void generate_fibs(int* fibs, int index, int n){
    *(fibs+index) = *(fibs+index-2) + *(fibs+index-1);
    if (index+1 < n) generate_fibs(fibs, index+1, n);
}

int main(){
    int fibs[number_of_fibs];
    fibs[0] = 1;
    fibs[1] = 1;

    generate_fibs(fibs, 2, number_of_fibs);

    for (int& i : fibs)
        std::cout << i << " ";
    std::cout << "\n";
}