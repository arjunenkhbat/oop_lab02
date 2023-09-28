#include "lab2_oop.hh"
#include <iostream>

void read(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
}

void print(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}
