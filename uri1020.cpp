#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int x;
    int anos,meses,dias;
    cin >> x;
    anos = x/365;
    meses = (x%365)/30;
    dias = x%365%30;
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    return 0;
}
