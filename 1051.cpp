#include <iostream>
#include <iomanip>


using namespace std;

int main () {
    cout << fixed << setprecision(2);
    double salary;
    double imposto;       //total a ser pago
    cin >> salary;

    if (salary <= 2000.00){
        cout << "Isento" << endl;}

    else if (salary <= 3000.00){
        imposto = ((salary - 2000.00)*0.08);
        cout <<"R$ " << imposto <<endl;}

    else if (salary <= 4500.00){
        imposto = ((salary - 3000.00)*0.18+(1000.00*0.08));
        cout << "R$ " << imposto <<endl;}

    else {
        imposto = ((salary - 4500.00)*0.28 +(1000.00*0.08)+(1500.00*0.18));
        cout << "R$ " <<imposto <<endl; }

        return 0;
}
