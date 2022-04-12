#include <iostream>
#include <conio.h>
#include "ModulesMalenko.h"

using namespace std;

int main(){
    double valueX[5] = { 1, 6, 5, 0.5, -12 };
    double valueY[5] = { 4, 2, 3, -4.3, -6 };
    double valueZ[5] = { 2, 2, 9, 15, 1 };

    double expectedResult[5] = { 3072.665, 95.604, 728.478, -4410.137, -23327.071 };
    string testResult = "Failed";
    double result = 0;
    cout<<"Test s_calculation: "<<endl;

    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        result = floor( s_calculation(&valueX[i], &valueY[i], &valueZ[i]) * 1000) / 1000;

        if (result == expectedResult[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1<< endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    cout<<"Test 9.1: "<<endl;
    int dayx[5]={12,3,4,20,6};
    int expectedday[5] = {35165,8792,11722,58608,17583};
    testResult = "Failed";
    result = 0;
    int pod1,pod2,pod3, pod4, podz,vipl;
    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        zap(&dayx[i],&pod1,&pod2,&pod3, &pod4, &podz, &vipl);
        result = vipl ;

        if (result == expectedday[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    cout<<"Test 9.2: "<<endl;
    int rozm[5]={25,27,29,31,23};
    int expectedzos[5] = {10,11,12,13,9};
    testResult = "Failed";
    result = 0;
    int es1,es2,us;
    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        roz(&rozm[i],&us,&es1,&es2);
        result = us ;

        if (result == expectedzos[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    cout<<"Test 9.3: "<<endl;
     long int binq[5]={777,64357,29,234213,2353};
     long int expectedbin[5] = {4,11,4,10,5};
    testResult = "Failed";
    result = 0;
    long int n=0, b_n=0;int v=0;int res=0;
    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        bin(&binq[i],&v,&res);
        result = res ;

        if (result == expectedbin[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }

    getch();
    return 0;
}
