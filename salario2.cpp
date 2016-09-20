#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main () {

    cout << fixed << setprecision(2);
    string nome;
    double S;
    double V;
    double x;
    cin >> nome;
    cin >> S;
    cin >> V;
    x = S + (15*V)/100;
    cout << "TOTAL = R$ " << x << endl;

    return 0;

}
