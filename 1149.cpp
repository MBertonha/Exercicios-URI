#include <iostream>
using namespace std;
int main () {

    int a,n;
    int soma=0;

    cin >> a;
    aqui:
    cin >> n;
    if (n<=0){
        goto aqui;
    }
    for (int i=1;i<=n;i++){
        soma = soma + a;
        a++;
    }

    cout << soma << endl;

return 0;
}

