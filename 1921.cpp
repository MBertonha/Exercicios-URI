#include <iostream>
using namespace std;
int main (){

    long long int x,d;

    cin >> x;
        if (x >= 3 && x <= 100000){
            d = (x*(x-3))/2;
            cout << d << endl;
        }
return 0;
}

