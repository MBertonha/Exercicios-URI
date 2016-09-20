#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main () {
    cout << fixed << setprecision (5);
    double a,b,c;
    double delta;
    cin >> a;
    cin >> b;
    cin >> c;
    delta = (b * b) - 4 * a * c;
    if (a == 0 || delta < 0) {
            cout << "Impossivel calcular" << endl; }

    else  {
        cout << "R1 = " << ((b * -1) + sqrt(delta)) / (2 * a)  << endl;
        cout << "R2 = " << ((b * -1) - sqrt(delta)) / (2 * a) << endl;
        }

return 0;
}
