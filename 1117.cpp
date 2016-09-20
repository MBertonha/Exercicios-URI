#include <iostream>
#include <iomanip>
using namespace std;
int main () {

    cout << fixed << setprecision(2);
    double x,y;
    double soma=0;

    aqui:
    cin >> x;

    if (x>=0 && x<=10){
        ali:
        cin >> y;

        if (y>=0 && y<=10){
            soma = (x + y)/2;
        }
        else{
           cout << "nota invalida" << endl;
            goto ali;
        }
    }

    else{
        cout << "nota invalida" << endl;
        goto aqui;
    }
    cout << "media = " << soma << endl;

return 0;
}
