#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    cout << fixed << setprecision(1);
    double x, y;
    int num;
    double resp;

    cin >> num;

    while (num--){
        cin >> x >> y;

        if (y==0){
            cout << "divisao impossivel" << endl;
        }
        else{
            resp = x/y;
            cout << resp << endl;
        }
    }
return 0;
}
