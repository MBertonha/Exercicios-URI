#include <iostream>

using namespace std;

int main () {

    int x;
    int soma = 1;

    cin >> x;

        for (int i = 0;i < (x-1);i++ ){
           soma *= (x-i);
        }

    cout << soma << endl;
return 0;
}
