#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <cmath>
#include "ModulesMalenko.h"
using namespace std;
int main(){
system("chcp 1251 & cls");
        chek2:
        char act;
        cout<< "������� ������ :'v'-s_calculation(); 'n'-9.1; 'm'-9.2; 'q'-9.3;";
        cout<<endl<< "������ 'W' ��� 'w' ��� ������"<<endl;
        cin>> act;
        switch (act){
            case'v':{
                double x=0; double y=0; double z=0;
                cout<<"������ x: " ;cin>> x;
                cout<<"������ y: " ;cin>> y;
                cout<<"������ z: " ;cin>> z;
                cout<< "��������� s_calculation() : ";
                cout<<s_calculation(&x,&y,&z)<<endl;
                goto chek2;}
            case'n' :{
                int days=0;
                chek:
                cout << "ʳ������ ������������� ���:";
                cin>> days;
                if (days>14 ||days<0 ){
                    cout << "ʳ������ ������������� ��� �� ���� � ����� 0-14 ���."<< endl;
                goto chek;}
                int pod1,pod2,pod3, pod4, podz,vipl;
                zap(&days, &pod1,&pod2,&pod3, &pod4, &podz, &vipl);

                cout<< endl<< "���������� ���� ��������: "<<days<<" ���"<< endl;
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
                goto chek2;}
            case'm' :{
                int r=0;
                int es1,es2,us;
                chekm:
                cout << "����� �� ���������� ��������:";
                cin>> r;
                if(r==24||r==26||r==28||r==30||r<23||r>31){
                cout<<"���� ��������� ������.������ ����� �����."<<endl;
                goto chekm;}
                roz(&r,&us,&es1,&es2);
                cout<<"����� ���������..."<<endl<<"������: " <<r<<endl<<"���,�������������: "<<us<<endl<<"��: "<<es1<<"/"<<es2<<endl;
                goto chek2;}
            case'q' :{
            long int n=0, b_n=0;
            int v=0,res=0;
            chekb:
            cout<<"������ ����� �� 0 �� 7483650 : ";
            cin>> n;
            if (n<0||n>7483650){
            cout<<"����� �� ������� � �������."<<endl;
            goto chekb;}
            bin(&n,&v,&res);
            if (v==2){cout<<"ʳ������ �������� ����: "<<res<<endl<<endl;}
            if (v==1){cout<<"ʳ������ �������� �������: "<<res<<endl<<endl;}
            goto chek2;}
            case'w' :{exit(0);}
            case'W' :{exit(0);}
        }
printf("%c",'\a');goto chek2;}


