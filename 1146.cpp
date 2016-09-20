#include <iostream>
using namespace std;
int main () {

    int x;
    int i = 0;

    while (cin >> x && x!=0){

            for (i=1;i<x;i++){
                cout << i << " ";
            }
        cout << i++ << endl;
    }
return 0;
}
