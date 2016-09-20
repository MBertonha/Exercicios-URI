#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << fixed << setprecision(3);
    int r;
    double VOLUME;
    double pi = 3.14159;
    cin >> r;

    VOLUME = (4/3.0)*pi*r*r*r ;

    cout << "VOLUME = " << VOLUME << endl;


    return 0;

}
