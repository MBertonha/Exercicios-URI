#include <iostream>
using namespace std;

int main () {

    int x, y;

    cin >> x >> y;
    if (x>0 && x<20 && y>x && y<100000){

        for (int i=1;i<=y;i++){
            for (int j=1;j<x;j++){
                cout << i << " ";
                i++;
            }
            cout << i << "\n";

        }
    }
return 0;
}
