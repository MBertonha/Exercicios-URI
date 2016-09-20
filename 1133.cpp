#include <iostream>
using namespace std;
int main() {

    int x,y;

    cin >> x;
    cin >> y;

    if (x>y){
        for (int i=y;i<x;i++){
            if (i%5 == 3 || i%5 == 2){
                cout << i << endl;
            }
        }
    }
    else if (y>x){
        for (int j=x;j<y;j++){
            if (j%5 == 3 || j%5 == 2){
                cout << j << endl;
            }
        }
    }
return 0;
}
