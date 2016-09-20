#include <iostream>
using namespace std;

int main (){

    int num;
    int x;
    int in=0,out=0;

    cin >> num;

    if (num < 10000){
        while (num--){
            cin >> x;

            if (x> -10000000 && x<10000000){
                if (x>=10 && x<=20){
                    in++;
                }
                else{
                    out++;
                }
            }
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;

return 0;
}
