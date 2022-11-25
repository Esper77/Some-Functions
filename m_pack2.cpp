#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_min_num(long long number){
    int min = 10;
	if (number == 0) {
		return 0;
	}
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 < min) {
			min = number % 10;
		}
		number /= 10;
	}
	return min;
}



int itc_rev_num(long long number){
    return itc_reverse(itc_len_num(number));
}

int itc_null_count(long long number){
    int counter = 0;
	if (number < 0) {
		number *= -1;
	}
	if (number == 0) {
		return 1;
	}
	while (number > 0) {
		if (number % 10 == 0) {
			counter++;
		}
		number /= 10;
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
