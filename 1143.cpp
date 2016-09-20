#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int x;

    cin >> x;
    if (x > 0 && x < 1000){
        for (int i=1;i<=x;i++){
            cout << i << " " << pow(i,2) << " " << pow(i,3) << endl;
        }
    }
return 0;
}
