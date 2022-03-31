#ifndef MODULESMALENK_H_INCLUDED
#define MODULESMALENK_H_INCLUDED
#include <iostream>
#include <string>
#include <stdlib.h>
#include <bitset>
using namespace std;
int niu(){system("chcp 1251 & cls");}
char act;
void zap(){
int days=0;system("chcp 1251 & cls");
chek:
cout << "Кількість відпрацьованих днів:";
cin>> days;
if (days>14 ||days<0 ){
cout << "Кількість відпрацьованих днів має бути в районі 0-14 днів."<< endl;
goto chek;
}

days= days*8*450;
cout<< endl<< "Нарахована сума зарплати: "<<days<<" грн"<< endl;

float pod1=days*0.15;
float pod2=days*0.02;
float pod3=days*0.006;
float pod4=days*0.01;
float podz = pod1+pod2+pod3+pod4;
cout<< endl<< "Розмір вирахувaних податків: "<< podz <<" грн"<< endl;
cout << "Податок на прибуток фізособи (15%): "
         << pod1 << " грн" << endl
         << "Податок до пенсійного фонду (2%): "
         << pod2 << " грн" << endl
         << "Податок до фонду страхування на випадок безробіття (0.6%): "
         << pod3 << " грн" << endl
         << "Податок на соціально страхування у випадку втрати працезатності (1%): "
         << pod4 << " грн" << endl;

cout<< endl<< "Сума до виплати: "<<days-podz<<" грн"<< endl;
}
void roz(){
int r=0;system("chcp 1251 & cls");
chek:
cout << "Розмір за українською системою:";
cin>> r;
if(r==24||r==26||r==28||r==30||r<23||r>31){
cout<<"Немає відповідних розмірів.Введіть інщий розмір."<<endl;
goto chek;
}
switch(r){
case 23 :{
    cout<<"Введений розмір:"<<r<<endl<<
    "Розмір ЄС:37/38"<<endl<<"Розмір Великобританія,США 8" <<endl;
    break;}
case 25 :{
    cout<<"Введений розмір:"<<r<<endl<<
    "Розмір ЄС:39/40"<<endl<<"Розмір Великобританія,США 9" <<endl;
    break;}
case 27 :{
    cout<<"Введений розмір:"<<r<<endl<<
    "Розмір ЄС:41/42"<<endl<<"Розмір Великобританія,США 10" <<endl;
    break;}
case 29 :{
    cout<<"Введений розмір:"<<r<<endl<<
    "Розмір ЄС:43/44"<<endl<<"Розмір Великобританія,США 11" <<endl;
    break;}
case 31 :{
    cout<<"Введений розмір:"<<r<<endl<<
    "Розмір ЄС:45/46"<<endl<<"Розмір Великобританія,США 12" <<endl;
    break;}
default:
    goto chek;
}
}
void bin(){
long int n=0;system("chcp 1251 & cls");
chek:
cout<<"Введіть число від 0 до 7483650 : ";
cin>> n;
if (n<0||n>7483650){
    cout<<"Число не входить в діапазон."<<endl;
    goto chek;}

    bitset<32> b_n(n);
    if(b_n[0]){
        cout<<"Кількість двійкових одиниць: " << b_n.count()<<endl;
    }
    else {
        cout<<"Кількість двійкових нулів: " << 32 - b_n.count()<<endl;
    }
}
void s_calculation(){
    system("chcp 1251 & cls");
    chek2:
        cout<<endl<< "Виберіть задачу :'n'-9.1; 'm'-9.2; 'q'-9.3;";
        cout<<endl<< "Введіть 'W' або 'w' для виходу"<<endl;
        cin>> act;
        switch (act){

            case'n' :{zap();goto chek2;}
            case'm' :{roz();goto chek2;}
            case'q' :{bin();goto chek2;}
            case'w' :{exit(0) ;}
            case'W' :{exit(0);}
        }

}

#endif
