#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main () {

    int n;
    int h,m,s;
    cin >> n;
    h= n/3600;      // 1 hora = 3600 segundos
    m= (n%3600)/60; // Resto da divisão das horas, dps divide-se por 60
    s= (n%60);      // Resto da divisão por 60
    cout << h << ":" << m << ":" << s<<endl;
    return 0;

}
