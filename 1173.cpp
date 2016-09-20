#include <iostream>
using namespace std;

int main () {

    int x[10];
    int j=0;

    cin >> x[0];

    for (int i=1;i<10;i++){

        x[i] = x[j]*2;
        j++;
        }
    for (int i=0;i<10;i++){
        cout <<"N[" << i << "] = "<< x[i] << endl;
    }



return 0;
}
