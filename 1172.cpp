#include <iostream>
using namespace std;

int main () {

    int x[10],i,j;


    for (i=0; i<10; i++){
        cin >> x[i];
    }
    for (j=0; j<10; j++){
        if (x[j]<=0){
            cout<< "X[" << j << "] = 1" << endl;
        }
        else{
        cout << "X[" << j << "] = " << x[j] << endl;
        }
    }

return 0;
}


