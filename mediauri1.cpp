#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 cout << fixed << setprecision(5);
    double n1;
    double n2;
    double MEDIA;
    cin >> n1;
    cin >> n2;
    MEDIA = ((n1*3.5)+(n2*7.5))/11;
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
