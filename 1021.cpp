#include <iostream>

using namespace std;
int main () {

    double x; //valor total
    int a,aux,fax;

    cin >> x;{
    a = x;
    x = 100*x;
    fax = x;


    cout << "NOTAS:" <<endl;
    cout << a/100 << " nota(s) de R$ 100.00"<<endl;
    aux = (a%100);
    cout << aux/50 << " nota(s) de R$ 50.00"<<endl;
    aux = (aux%50);
    cout << (aux/20) << " nota(s) de R$ 20.00"<<endl;
    aux = (aux%20);
    cout << aux/10 << " nota(s) de R$ 10.00"<<endl;
    aux = (aux%10);
    cout << aux/5 << " nota(s) de R$ 5.00"<<endl;
    aux = (aux%5);
    cout << aux/2 << " nota(s) de R$ 2.00"<<endl;
    aux = (aux%2);

    cout << "MOEDAS:" <<endl;

    cout << aux/1 << " moeda(s) de R$ 1.00"<<endl;
    fax = (fax%100);
    cout << fax/50 << " moeda(s) de R$ 0.50"<<endl;
    fax = (fax%50);
    cout << fax/25 << " moeda(s) de R$ 0.25"<<endl;
    fax = (fax%25);
    cout << fax/10 << " moeda(s) de R$ 0.10"<<endl;
    fax = (fax%10);
    cout << fax/5 << " moeda(s) de R$ 0.05"<<endl;
    fax = (fax%5);
    cout << fax/1 << " moeda(s) de R$ 0.01" <<endl;
    }
    return 0;

}

