#include <iostream>
using namespace std;

int main () {
    int num;

    cin >> num;
    if (num>=1 && num<=1000000){
        num--;
        while(num--){
            cout << "Ho ";
        }
        cout << "Ho!" << endl;
    }
return 0;
}
