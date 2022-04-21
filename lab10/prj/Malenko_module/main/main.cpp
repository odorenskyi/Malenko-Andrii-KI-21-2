#include <time.h>
#include <fstream>
using namespace std;

#include <math.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <cmath>

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


int avt(string inf,string outf){
ofstream file2;
file2.open(outf);

file2   << "Розробник:          Маленко Андрій"                                        << endl
        << "ВНЗ:                Центральний Національний Технічний Університет"        << endl
        << "Місто/Країна:       Кропивницький/Україна"                                 << endl
        << "Рік розробки:       2022"                                                  << endl;
file2.close();
}
int abz(string inf,string outf){
ifstream file1;
file1.open(inf);
int ab;char S;
 while (!file1.eof())
        {
            file1.get(S);
            if (S=='\n')
                ab++;
        }
ofstream file2;
file2.open(outf,ios::app);
file2<<"Кількість абзаців: "<<ab<<endl;
file1.close();
file2.close();
}
int pov(string inf,string outf){
ifstream file1;
file1.open(inf);
string str; int ab=0,aa=0,ad=0;
 while (!file1.eof())
        {
        str="";
        file1>>str;
            if (str =="Україна"){
                ab++;}
            if (str =="університет"){
                aa++;}
            if (str =="блокнот"){
                ad++;}
        }
ofstream file2;
file2.open(outf,ios::app);
file2<<"Кількість Україна: "<<ab<<endl;
file2<<"Кількість університет: "<<aa<<endl;
file2<<"Кількість блокнот: "<<ad<<endl;
file1.close();
file2.close();
}
int krap(string inf,string outf){
ifstream file1;
file1.open(inf);
int ab =0;char S;
 while (!file1.eof())
        {
            file1.get(S);
            if (S=='.')
                ab++;
        }
ofstream file2;
file2.open(outf,ios::app);
file2<<"Кількість крапок: "<<ab-1<<endl;

file1.close();
file2.close();
}
int time(string inf,string outf){
    ofstream file2;
    file2.open(outf,ios::app);
    file2<<__TIMESTAMP__<<endl;
    file2.close();
}
int calc(string outf,double x, double y, double z){
    ofstream file2;
    file2.open(outf,ios::app);
    file2 << "Результати функції:" << s_calculation(&x,&y, &z) << endl;
    file2.close();
    return 0;
}

int binf(string outf,int num){
    ofstream file(outf, ios::app);

     int bin=0, j;

    for(j=0; num>0; j++)
    {
        bin+=(num%2)*pow(10.0,j);
        num/=2;
    }

    file<< "Число в двійковій системі:" << bin<<endl;
    return 0;
}


