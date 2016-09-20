#include <iostream>
#include <iomanip>
using namespace std;
 int main () {

    cout << fixed << setprecision(2);
    int n;
    int h;
    double s;
    double SALARY;
    cin >> n;
    cin >> h;
    cin >> s;
    SALARY = s * h;
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << SALARY << endl;

    return 0;
 }
