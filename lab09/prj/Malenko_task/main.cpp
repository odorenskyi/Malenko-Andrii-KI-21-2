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
        cout<<endl<< "¬ибер≥ть задачу :'v'-s_calculation(); 'n'-9.1; 'm'-9.2; 'q'-9.3;";
        cout<<endl<< "¬вед≥ть 'W' або 'w' дл€ виходу"<<endl;
        cin>> act;
        switch (act){
            case'v':{cout<<s_calculation()<<endl;goto chek2;}
            case'n' :{zap();goto chek2;}
            case'm' :{roz();goto chek2;}
            case'q' :{bin();goto chek2;}
            case'w' :{exit(0);}
            case'W' :{exit(0);}
        }
printf("%c",'\a');goto chek2;}


