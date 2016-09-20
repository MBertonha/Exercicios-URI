#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision (3);
    int x;    //distancia percorrida
    double y; //combustível gasto
    double z; //consumo medio
    cin >> x;
    cin >> y;
    z = x/y ;
    cout << z << " km/l" << endl;

    return 0;
}
