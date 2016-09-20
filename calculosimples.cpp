#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int a1, b1, a2, b2;
    float c1, c2, m;

    cin >> a1;
    cin >> b1;
    cin >> c1;
    cin >> a2;
    cin >> b2;
    cin >> c2;


    m = ((b1 * c1) + (b2 * c2));


    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << m <<endl;
    return 0;
}
