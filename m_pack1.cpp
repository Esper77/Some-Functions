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
    long long sum = 0;
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

long long itc_multi_num(long long number){
    long long mult = 1;
	if (number == 0) {
		return 0;
	}
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		mult *= number % 10;
		number /= 10;
	}
	return mult;
}

int itc_max_num(long long number){
    int max = 0;
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 > max) {
			max = number % 10;
		}
		number /= 10;
	}
	return max;
}

