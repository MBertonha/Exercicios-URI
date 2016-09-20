#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {

    int x,y;
    double z;
    cin >> x;
    cin >> y;

    if (y%x==0|| x%y==0 ){
        cout << "Sao Multiplos" << endl;}
    else {
        cout << "Nao sao Multiplos" << endl;}
    return 0;
}
