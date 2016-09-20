#include <iostream>
#include <iomanip>

using namespace std;

int main () {

cout << fixed << setprecision(1);
    int num;
    double n1=0,n2=0,n3=0;
    double media;

    cin >> num;

    while (num--){
        cin >> n1 >> n2 >> n3;
        media = ((n1*2)+(n2*3)+(n3*5))/10;
        cout << media << endl;
    }
    return 0;
}


