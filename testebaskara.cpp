#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    double a, b, c, delta;
    cin >> a;
    cin >> b;
    cin >> c;
    delta = (b * b) - 4 * a * c;
    if (delta >= 0 && a != 0) {
        cout << ("R1 = %.5lf\n", ((b * -1) + sqrt(delta)) / (2 * a)) <<endl;
        cout << ("R2 = %.5lf\n", ((b * -1) - sqrt(delta)) / (2 * a)) <<endl;
    } else {
        cout << "Impossivel calcular\n";
    }

    return 0;
}
