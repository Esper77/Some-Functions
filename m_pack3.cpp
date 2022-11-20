#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_second_max_num(long long number) {
	int max2 = 0;
	int max1 = itc_max_num(number);
	if (number < 0) {
		number *= -1;
	}
	if (number < 10) {
		return -1;
	}
	while (number > 0) {
		if (number % 10 > max2 && number % 10 != max1) {
			max2 = number % 10;
		}
		number /= 10;
	}
	return max2;
}

int itc_second_simple_max_num(long long number) {
	int max2 = 0;
	int max1 = itc_max_num(number);
	if (number < 10) {
		return -1;
	}
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 > max2 && number % 10 != max1) {
			max2 = number % 10;
		}
		number /= 10;
	}
	if (max2 == 0) {
		return -1;
	}
	return max2;
}

long long itc_bin_num(long long number) {
	long long x = 1;
	while (number != 0){
		x *= 10;
		x += number % 2;
		number /= 2;
	}
	return itc_reverse(x) / 10;

}

long long itc_oct_num(long long number) {
	long long x = 1;
	while (number != 0){
		x *= 10;
		x += number % 8;
		number /= 8;
	}
	return itc_reverse(x) / 10;

}

int itc_rev_bin_num(long long number) {
	long long result = 0, counter = 0;
	while (number > 0){
		result += (number % 10 * itc_pow(2, counter));
		counter++;
		number /= 10;
	}
	return result;
}
