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

    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        result = floor( s_calculation(valueX[i], valueY[i], valueZ[i]) * 1000) / 1000;

        if (result == expectedResult[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << ": " << endl;
        cout << "X = " << valueX[i] << endl;
        cout << "Y = " << valueY[i] << endl;
        cout << "Z = " << valueZ[i] << endl;
        cout << "Expected result: " << expectedResult[i] << endl;
        cout << "The result obtained: " << result << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }
    getch();
    return 0;
}
