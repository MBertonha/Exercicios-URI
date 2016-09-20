#include <iostream>
using namespace std;

int main (){

    int num,x,soma=0;

    cin >> num;

    while (num--){
        cin >> x;

        for (int i=1;i<=x;i++){
             if (x%i == 0){
                 soma = soma + i;
            }
        }
         soma = soma - x;
        if (soma != x){
                cout << x << " nao eh perfeito" << endl;
        }
        else if (soma == x){
            cout << x << " eh perfeito" << endl;
        }
        soma = soma - soma;
    }
    return 0;

}
