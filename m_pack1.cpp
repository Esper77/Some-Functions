#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

void itc_num_print(int number){
    cout << number;
}

int itc_len_num(long long number) {
	long long counter = 0;
	if (number < 0) {
		number *= -1;
	}
	if (number == 0) {
		return 1;
	}
	while (number > 0) {
		counter++;
		number /= 10;
	}
	return counter;
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

