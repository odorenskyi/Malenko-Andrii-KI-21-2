#ifndef ModulesMalenko
#define ModulesMalenko
#include <cmath>
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
cout << "ʳ������ ������������� ���:";
cin>> days;
if (days>14 ||days<0 ){
cout << "ʳ������ ������������� ��� �� ���� � ����� 0-14 ���."<< endl;
goto chek;
}

days= days*8*450;
cout<< endl<< "���������� ���� ��������: "<<days<<" ���"<< endl;

float pod1=days*0.15;
float pod2=days*0.02;
float pod3=days*0.006;
float pod4=days*0.01;
float podz = pod1+pod2+pod3+pod4;
cout<< endl<< "����� �������a��� �������: "<< podz <<" ���"<< endl;
cout << "������� �� �������� �������� (15%): "
         << pod1 << " ���" << endl
         << "������� �� ��������� ����� (2%): "
         << pod2 << " ���" << endl
         << "������� �� ����� ����������� �� ������� ��������� (0.6%): "
         << pod3 << " ���" << endl
         << "������� �� ��������� ����������� � ������� ������ ������������ (1%): "
         << pod4 << " ���" << endl;

cout<< endl<< "���� �� �������: "<<days-podz<<" ���"<< endl;
}
void roz(){
int r=0;system("chcp 1251 & cls");
chek:
cout << "����� �� ���������� ��������:";
cin>> r;
if(r==24||r==26||r==28||r==30||r<23||r>31){
cout<<"���� ��������� ������.������ ����� �����."<<endl;
goto chek;
}
switch(r){
case 23 :{
    cout<<"�������� �����:"<<r<<endl<<
    "����� ��:37/38"<<endl<<"����� �������������,��� 8" <<endl;
    break;}
case 25 :{
    cout<<"�������� �����:"<<r<<endl<<
    "����� ��:39/40"<<endl<<"����� �������������,��� 9" <<endl;
    break;}
case 27 :{
    cout<<"�������� �����:"<<r<<endl<<
    "����� ��:41/42"<<endl<<"����� �������������,��� 10" <<endl;
    break;}
case 29 :{
    cout<<"�������� �����:"<<r<<endl<<
    "����� ��:43/44"<<endl<<"����� �������������,��� 11" <<endl;
    break;}
case 31 :{
    cout<<"�������� �����:"<<r<<endl<<
    "����� ��:45/46"<<endl<<"����� �������������,��� 12" <<endl;
    break;}
default:
    goto chek;
}
}
void bin(){
long int n=0;system("chcp 1251 & cls");
chek:
cout<<"������ ����� �� 0 �� 7483650 : ";
cin>> n;
if (n<0||n>7483650){
    cout<<"����� �� ������� � �������."<<endl;
    goto chek;}

    bitset<32> b_n(n);
    if(b_n[0]){
        cout<<"ʳ������ �������� �������: " << b_n.count()<<endl;
    }
    else {
        cout<<"ʳ������ �������� ����: " << 32 - b_n.count()<<endl;
    }
}
double s_calculation(double x, double y, double z){
    return ( sin(x) / sqrt( fabs( (y * z) / (x + y) ) ) ) + (3 * pow(y, 5));
}


#endif
