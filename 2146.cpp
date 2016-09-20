#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int x;

    while (cin >> x){
        if (x != EOF){
            x--;
        }
        cout << x << endl;
    }
return 0;
}
