#include <iostream>
using namespace std;

int main() {
    int num,r1,r2,cond=0;

    cin >> num;
    if (num<=10000){
        while(num--){
            cin >> r1 >> r2;
                if (r1>0 && r2>0){
                cond = r1 + r2;
                cout << cond << endl;
                }
        }
    }
return 0;
}
