#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int x,y;

    cin >> x;
    if (x>5 && x<2000){
        for (int i=2;i<=x;i+=2){
            y = pow(i,2);
            cout << i << "^2 = "<< y << endl;
        }
    }

return 0;
}
