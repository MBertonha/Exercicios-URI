#include <iostream>
using namespace std;

int main () {

    int num,x;
    int con = 0;

    cin >> num;

    if (num >= 1 && num <= 100){
        while (num--){
            cin >> x;

            if (x>1 && x<=10000000){

                for(int i=1;i<=x;i++){

                    if (x%i==0){
                        con++;
                    }
                }
                if (con == 2){
                    cout << x << " eh primo" << endl;
                }
                else{
                    cout << x << " nao eh primo" << endl;
                }
            }
            con = con - con;
        }
    }
return 0;
}


