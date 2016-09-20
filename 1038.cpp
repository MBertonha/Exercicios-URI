#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {
cout << fixed << setprecision(2);
    int cod;
    int quant;
    double valor;
    cin >> cod;
    cin >> quant;
    if (cod == 1) {
        valor = quant*4.00;
        cout << "Total: R$ " << valor << endl;}
    else if(cod == 2){
        valor = quant*4.50;
        cout << "Total: R$ " << valor << endl;}
    else if (cod == 3){
        valor = quant*5.00;
        cout << "Total: R$ " << valor << endl;}
    else if(cod == 4){
        valor = quant*2.00;
        cout << "Total: R$ " << valor << endl;}
    else if(cod == 5){
        valor = quant*1.50;
        cout << "Total: R$ " << valor << endl;}

        return 0;


}
