#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    double t;
    cin >> t;
    if      (0<=t && t<=25){
    cout << "Intervalo [0,25]" << endl;}

    else if (25<t && t<=50){
    cout << "Intervalo (25,50]" << endl;}

    else if (50<t && t<=75){
    cout << "Intervalo (50,75]" << endl;}

    else if (75<t && t<=100){
    cout << "Intervalo (75,100]" << endl;}

    else {
    cout << "Fora de intervalo" << endl; }

    return 0;
}
