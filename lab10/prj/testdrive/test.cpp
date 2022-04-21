#include <iostream>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <cstring>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>
#include <bitset>
#include "ModulesMalenko.h"

using namespace std;

int main(){system("chcp 1251 & cls");
{
    string inf = "test1.1.txt";
    string outf = "test1.2.txt";
    string expected1 = "test1.3.txt";

    avt(inf,outf);
    abz(inf,outf);
    pov(inf,outf);

    ifstream file(outf);
    if(!file.is_open())  cout<<"ERROR"<<endl;
    string text1 = "";
    string line;
    while (getline(file, line)){
        text1 += line + '\n';}
    file.close();

    ifstream file4(expected1);
    if(!file4.is_open())  cout<<"ERROR"<<endl;
    string text2 = "";
    while (getline(file4, line)){
        text2 += line + '\n';}
    file4.close();


    cout<<"Результат тестування 10.1: ";
    if (text1==text2){cout<<"Pass"<<endl;}
    if (text1!=text2){cout<<"Fail"<<endl;}

}
{
    string inf = "test2.1.txt";
    string outf = "test2.2.txt";
    string expected1 = "test2.3.txt";

    krap(inf,outf);

    ifstream file(outf);
    if(!file.is_open())  cout<<"ERROR"<<endl;
    string text1 = "";
    string line;
    while (getline(file, line)){
        text1 += line + '\n';}
    file.close();

    ifstream file4(expected1);
    if(!file4.is_open())  cout<<"ERROR"<<endl;
    string text2 = "";
    while (getline(file4, line)){
        text2 += line + '\n';}
    file4.close();


    cout<<"Результат тестування 10.2: ";
    if (text1==text2){cout<<"Pass"<<endl;}
    if (text1!=text2){cout<<"Fail"<<endl;}

}
{
    string inf = "test3.1.txt";
    string outf = "test3.2.txt";
    string expected1 = "test3.3.txt";

    calc(outf,3,2,1);
    binf(outf,432);

    ifstream file(outf);
    if(!file.is_open())  cout<<"ERROR"<<endl;
    string text1 = "";
    string line;
    while (getline(file, line)){
        text1 += line + '\n';}
    file.close();

    ifstream file4(expected1);
    if(!file4.is_open())  cout<<"ERROR"<<endl;
    string text2 = "";
    while (getline(file4, line)){
        text2 += line + '\n';}
    file4.close();


    cout<<"Результат тестування 10.3: ";
    if (text1==text2){cout<<"Pass"<<endl;}
    if (text1!=text2){cout<<"Fail"<<endl;}

}
{
      string inf = "test3.1.1.txt";
    string outf = "test3.1.2.txt";
    string expected1 = "test3.1.3.txt";

    calc(outf,1,3,1);
    binf(outf,112);

    ifstream file(outf);
    if(!file.is_open())  cout<<"ERROR"<<endl;
    string text1 = "";
    string line;
    while (getline(file, line)){
        text1 += line + '\n';}
    file.close();

    ifstream file4(expected1);
    if(!file4.is_open())  cout<<"ERROR"<<endl;
    string text2 = "";
    while (getline(file4, line)){
        text2 += line + '\n';}
    file4.close();


    cout<<"Результат тестування 10.3: ";
    if (text1==text2){cout<<"Pass"<<endl;}
    if (text1!=text2){cout<<"Fail"<<endl;}

}
    getch();
    return 0;

}
