#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int num,x,t=0;

    while (cin >> num){
        if(num != EOF){
            for (int i=0;i<num;i++){
                cin >> x;
                if (x>t){
                    t = x;
                }
            }
            if (t<10){
                cout << "1" << endl;
            }
            else if (t<20){
                cout << "2" << endl;
            }
            else if (t>=20){
                cout << "3" << endl;
            }
        t = 0;
        }
    }
return 0;
}
