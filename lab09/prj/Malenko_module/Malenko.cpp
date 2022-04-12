#ifndef MODULESMALENK_H_INCLUDED
#define MODULESMALENK_H_INCLUDED
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <cmath>
#include "ModulesMalenko.h"
using namespace std;
char act;

int zap(int *days,int *pod1,int*pod2,int*pod3,int *pod4,int *podz,int *vipl){
*days= *days*8*450;
*pod1=*days*0.15;
*pod2=*days*0.02;
*pod3=*days*0.006;
*pod4=*days*0.01;
*podz = *pod1+*pod2+*pod3+*pod4;
*vipl=*days-*podz;

return 0;
}
int roz(int *r, int *us,int *es1, int *es2){
     *us= (*r / 2) - 2;
     *es1= *r + 14;
     *es2= *r + 15;
     return 0;
}
int bin(long int *n,int *v,int *res){
    bitset<32> b_n(*n);
    if(b_n[0]){
         *res= b_n.count();*v=1;
    }
    else {
         *res= 32 - b_n.count();*v=2;
    }
return 0;
}
double s_calculation(double *x, double *y, double *z){
    return ( sin(*x) / sqrt( fabs( (*y * *z) / (*x + *y) ) ) ) + (3 * pow(*y, 5));
}

#endif
