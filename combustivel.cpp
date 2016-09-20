#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << fixed << setprecision (3);
    int t,v; //tempo de viagem e velocidade
    double s; //distancia percorrida
    double l; //litros
    double c = 12.000; //rendimento
    cin >> t;
    cin >> v;
    s = t * v;
    l = s / c;
    cout << l << endl;

    return 0;
}
