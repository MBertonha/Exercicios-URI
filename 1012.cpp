#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    cout << fixed << setprecision (3);
    double a , b , c ;
    double pi=3.14159;
    double x , y ,z ,w ,k;
    cin >> a;
    cin >> b;
    cin >> c;
    x=(a*c)/2;      //area triangulo
    y=pi*c*c;       //area circulo
    z=(a+b)*c/2;    //area trapezio
    w=b*b;          //area quadrado
    k=a*b;          //area retangulo
    cout << "TRIANGULO: " << x << endl;
    cout << "CIRCULO: " << y << endl;
    cout << "TRAPEZIO: " << z << endl;
    cout << "QUADRADO: " << w << endl;
    cout << "RETANGULO: " << k << endl;

return 0;

}
