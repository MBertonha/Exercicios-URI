#include <iostream>
using namespace std;

int main () {
    int x,soma=0;

    while(cin >> x){
        if(x==0){
            break;
        }
        else{
            if(x%2==0){
                for (int i=0;i<5;i++){
                    soma = soma + x;
                    x += 2;
                }
            cout << soma << endl;
            }
            else{
                x++;
                for (int i=0;i<5;i++){
                    soma = soma + x;
                    x += 2;
                }
            cout << soma << endl;
            }
           soma = soma - soma;
       }
    }
    return 0;
}
