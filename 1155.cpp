#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << fixed << setprecision(2);
    double x=0.0;

    for (int i=1;i<=100;i++){
        x = x + (1.0/i);
    }
    cout << x << endl;
return 0;
}
