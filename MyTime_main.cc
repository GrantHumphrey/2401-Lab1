#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    MyTime time1;
    MyTime time2;
    int num;
    cout << "Enter a time: " << endl;
    cin >> time1;
    cout << "Enter a time: " << endl;
    cin >> time2;
    cout << "Enter a scalar: " << endl;
    cin >> num;
    cout << "time1: " << time1 << endl;
    cout << "time2: " << time2 << endl;
    cout << "Addition: " << (time1 + time2) << endl;
    cout << "Subtraction: " << (time1 - time2) << endl;
    cout << "Multiplication: " << (time1 * 2) << endl;
    cout << "Division: " << (time1 / 2) << endl;
    cout << "Compare: " << (time1 == time2) << endl;
    cout << "Less than or equal to: " << (time1 <= time2) << endl;
    cout << "Less than: " << (time1 < time2) << endl;

}