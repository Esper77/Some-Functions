#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_min_num(long long number){
    if number == (-9223372036854775808)
        return 0;
    number = itc_abs(number);
    int min_num;
    min_num = 9
    while (number/10 > 0 || number % 10 > 0){
        if (min_num < number % 10)
            min_num = number % 10;
        number = number/10;
     }
     return min_num;
}

}

int itc_rev_num(long long number){
    bool flag = 0;
    if number == (-9223372036854775808)
        return 8085774586302737229;
    if number == itc_abs(number);
        flag = 1
    number = itc_abs(number);
    int out_num;
    out_num = 0;
    while (number/10 > 0 || number % 10 > 0){
        out_num = out_num * 10 + number % 10;
        number = number / 10;
     }
    if flag
     return out_num;
    return out_num * -1;
}

int itc_null_count(long long number){
    if number == (-9223372036854775808)
        return 2;
    number = itc_abs(number);
    int counter;
    counter = 0;
    while (number/10 > 0 || number % 10 > 0){
        if (number % 10 == 0)
            counter++;
        number = number/10;
     }
     return counter;
}

bool itc_mirror_num(long long number){
    return (number == itc_rev_num(number));
}

int itc_mirror_count(long long number){
    int counter = 0;
    while (number/10 > 0 || number % 10 > 0){
        if (itc_mirror_num(number))
                counter++;
                number--;
    }
    return counter;
}
