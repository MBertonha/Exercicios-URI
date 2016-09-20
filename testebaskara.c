#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double a, b, c, delta;

    cin >> a,b,c;

    delta = (b * b) - 4 * a * c;
    if (delta >= 0 && a != 0) {
        cout << ("R1 = %.5lf\n", ((b * -1) + sqrt(delta)) / (2 * a));
        cout << ("R2 = %.5lf\n", ((b * -1) - sqrt(delta)) / (2 * a));
    } else {
        cout << "Impossivel calcular\n";
    }

    return 0;
}
