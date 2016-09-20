#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    long int FP,FH,i=0;
    long int faces=0,ligacoes=0,atomos=0;

    while (cin>>FP>>FH){
        i++;
            faces = FP + FH;
            ligacoes = ((FP*5) + (FH*6))/2;
            atomos = (ligacoes + 2) - faces;
            cout << "Molecula #" << i << ".:." << endl;
            cout << "Possui " << atomos << " atomos e " << ligacoes << " ligacoes" << endl;
    }
return 0;
}
