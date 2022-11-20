#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_abs(int a){
    if (a < 0)
        return (a * (-1));
    return a;
}

void itc_name(){
    cout << "Stas";
}

void itc_fio(){
    itc_name();
    cout << " Rumyantsev Vyacheslavovich";
}

double itc_fabs(double a){
    if (a < 0)
        return (a * (-1.0));
    return a;
}

int itc_revnbr(int num){
    return num % 10 * 100 + num / 10 % 10 * 10 + num / 100;
}
