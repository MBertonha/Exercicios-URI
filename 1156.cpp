#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << fixed << setprecision(2);
    double x=1.0;
    double y=3.0;
    double z=2.0;

    for (y=3.0;y<=39.0;y+=2.0){
        x = x + (y/z);
        z*=2.0;
    }
    cout << x << endl;
return 0;
}

