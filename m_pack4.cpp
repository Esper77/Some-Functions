#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_covert_num(long long number, int ss) {
	long long out = 1;
	while (number){
		out *= 10;
		out += number % ss;
		number /= ss;
	}
	return itc_reverse(out) / 10;

}
int itc_rev_covert_num(long long number, int ss) {
	long long result = 0, counter = 0;
	while (number > 0) {
		result += (number % 10 * itc_pow(ss, counter));
		number /= 10;
		counter++;
	}
	return result;
}
