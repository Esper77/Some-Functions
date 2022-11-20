#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

void itc_num_print(int number){
    cout << number;
}

int itc_len_num(long long number){
    if (number == 0)
        return 1;
    int counter;
    counter = 0;
    number = itc_abs(number);
    if (number > 0){
    while (number/10 > 0){
        counter++;
        number = number/10;
        }
    }
    else {
        while (number/10 < 0){
        counter++;
        number = number/10;

        }
    }
    return counter + 1;
}

int itc_sum_num(long long number){
    if (number == 0)
        return 0;
    if number == (-2147483648)
        return 40;
    number = itc_abs(number);
    int counter;
    counter = 0;
    while (number/10 > 0 || number % 10 > 0){
        counter = counter + number%10;
        number = number/10;
     }
     return counter;
}

long long itc_multi_num(long long number){
    if number == (-29223372036854775808)
        return 0;
    number = itc_abs(number);
    int counter;
    counter = 1;
    while (number/10 > 0 || number % 10 > 0){
        counter = counter * number%10;
        number = number/10;
     }
     return counter;
}

int itc_max_num(long long number){
    if number == (-9223372036854775808)
        return 9;
    number = itc_abs(number);
    int max_num;
    max_num = 0;
    while (number/10 > 0 || number % 10 > 0){
        if (max_num < number % 10)
            max_num = number % 10;
        number = number/10;
     }
     return max_num;
}

