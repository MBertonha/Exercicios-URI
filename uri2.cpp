#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 cout << fixed << setprecision(4);
    double pi=3.14159;
    double raio;
    double area;
    cin >> raio;
    area = pi*(raio*raio);
    cout << "A=" <<area << endl;
    return 0;
}
