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
        cout<< "Виберіть задачу :'v'-s_calculation(); 'n'-9.1; 'm'-9.2; 'q'-9.3;";
        cout<<endl<< "Введіть 'W' або 'w' для виходу"<<endl;
        cin>> act;
        switch (act){
            case'v':{
                double x=0; double y=0; double z=0;
                cout<<"Введіть x: " ;cin>> x;
                cout<<"Введіть y: " ;cin>> y;
                cout<<"Введіть z: " ;cin>> z;
                cout<< "Результат s_calculation() : ";
                cout<<s_calculation(&x,&y,&z)<<endl;
                goto chek2;}
            case'n' :{
                int days=0;
                chek:
                cout << "Кількість відпрацьованих днів:";
                cin>> days;
                if (days>14 ||days<0 ){
                    cout << "Кількість відпрацьованих днів має бути в районі 0-14 днів."<< endl;
                goto chek;}
                int pod1,pod2,pod3, pod4, podz,vipl;
                zap(&days, &pod1,&pod2,&pod3, &pod4, &podz, &vipl);

                cout<< endl<< "Нарахована сума зарплати: "<<days<<" грн"<< endl;
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
                goto chek2;}
            case'm' :{
                int r=0;
                int es1,es2,us;
                chekm:
                cout << "Розмір за українською системою:";
                cin>> r;
                if(r==24||r==26||r==28||r==30||r<23||r>31){
                cout<<"Немає відповідних розмірів.Введіть інщий розмір."<<endl;
                goto chekm;}
                roz(&r,&us,&es1,&es2);
                cout<<"Розмір шкарпеток..."<<endl<<"Україна: " <<r<<endl<<"США,Великобританія: "<<us<<endl<<"ЄС: "<<es1<<"/"<<es2<<endl;
                goto chek2;}
            case'q' :{
            long int n=0, b_n=0;
            int v=0,res=0;
            chekb:
            cout<<"Введіть число від 0 до 7483650 : ";
            cin>> n;
            if (n<0||n>7483650){
            cout<<"Число не входить в діапазон."<<endl;
            goto chekb;}
            bin(&n,&v,&res);
            if (v==2){cout<<"Кількість двійкових нулів: "<<res<<endl<<endl;}
            if (v==1){cout<<"Кількість двійкових одиниць: "<<res<<endl<<endl;}
            goto chek2;}
            case'w' :{exit(0);}
            case'W' :{exit(0);}
        }
printf("%c",'\a');goto chek2;}


