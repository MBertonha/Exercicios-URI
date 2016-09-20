#include <iostream>

using namespace std;

int main () {
    int a,b;
    int c,d;
    int dura;
    int h,m;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    {
    int inicio = (a*60)+b; //inicio em minutos, por isso multiplica por 60
    int fim = (c*60)+d;    // fim em minutos, por isso multiplica por 60
    int dura = 0;

    if ( a <= c){
        dura = fim - inicio;
    if (dura == 0){
        h = 24;
        m = dura%60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m <<" MINUTO(S)" <<endl;}
    else{
        h = (dura - dura%60)/60;
        m = dura%60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m <<" MINUTO(S)" <<endl;}
        }
    else {
        dura = (24*60 - inicio) + fim;
        h = (dura - dura%60)/60;
        m = dura%60;
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m <<" MINUTO(S)" <<endl;}
    }
        return 0;
}
