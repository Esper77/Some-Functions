#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_sqrt(int num){
    int counter;
    counter = 1;
    while (counter * counter < num)
       counter++;
    return counter;
}

int itc_skv(int num){
    if (num > 0)
        return num * num;
    return -1;
}

int itc_spr(int h, int w){
    if ((h <= 0) || (w <= 0))
        return -1;
    return h * w;
}

double itc_pow(int num, int step) {
    double result = 1;
    long long counter ;
    if (step < 0) {
        counter = -1 * step;
    }
    else{
        counter = step;
    }
    for (long long i = 0; i < counter; ++i) {
        result *= num;
    }
    if (step < 0) {
        result = 1 / result;
    }
    return result;
}


long long itc_reverse(long long number){
    long long output = 0;
	if (number < 0)
		number *= -1;
	while (number > 0) {
		output = output * 10 + number % 10;
		number /= 10;
	}
	return output;
}
