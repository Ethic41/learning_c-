//
// Created by Dahir Muhammad Dahir on 4/11/2019.
//

#include <stdio.h>

int power(int base, int n);

int main(){
    for(int n=1; n <= 10; ++n){
        printf("%d %d %d \n", n, power(2, n), power(-3, n));
    }
}

int power(int base, int n){
    int p;

    for(p = 1; n > 0; --n){
        p *= base;
    }
    return p;
}