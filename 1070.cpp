#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    if (n%2==0){
        cout << n+1 <<endl;
        cout << n+3 <<endl;
        cout << n+5 <<endl;
        cout << n+7 <<endl;
        cout << n+9 <<endl;
        cout << n+11 <<endl;}
    else{
        cout << n <<endl;
        cout << n+2 <<endl;
        cout << n+4 <<endl;
        cout << n+6 <<endl;
        cout << n+8 <<endl;
        cout << n+10 <<endl;}

        return 0;
}

