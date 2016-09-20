#include <iostream>

using namespace std;

int main () {

int i,f; //hora final e inicial
int dura;     //hora de duracao
cin >> i;
cin >> f;
    if (f>i){
    dura = f-i;
    cout << "O JOGO DUROU " << dura << " HORA(S)" << endl;}
    else if (i>f){
    dura = (f+24)-i;
    cout << "O JOGO DUROU " << dura << " HORA(S)" << endl;}
    else{
    cout<<"O JOGO DUROU 24 HORA(S)" << endl; }

return 0;
}
