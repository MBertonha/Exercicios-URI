#include <iostream>
#include <cstdlib>
#include <cctype>
#include <time.h>
#define COW " __________\n< Acertou! >\n ----------\n        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||\n\n"
using namespace std;

//Pseudoaleatoriedade (https://pt.wikipedia.org/wiki/Pseudoaleatoriedade)
//What's this fuss about true randomness? (https://www.random.org/)

int main(){
    int a,b,c,d,e;
    int x,y,z,w,s;
    char cont;

    srand (time(NULL)); //inicia a semente aleatória com a hora atual
    cout << "Adivinhe a sequencia" << endl;
    cout << "==================" << endl;

    do {
        a =  rand() % 10 + 1; // entre 1 e 10
        b =  rand() % 10 + 1; // entre 1 e 10
        c =  rand() % 10 + 1; // entre 1 e 10
        d =  rand() % 10 + 1; // entre 1 e 10
        e =  rand() % 10 + 1; // entre 1 e 10
        cout << "Informe uma sequencia entre 1 e 10:" << endl;
        cin >> x >> y >> z >> w >> s;

            if (a == x && b == y && c == z && d == w && e == s){
                cout << COW << endl;
                //cout << "\n>>> Acertou! <<<\n" << endl;

            } else {
                cout << "Que pena, voce errou. O numero era " << a <<" "<< b <<" "<< c <<" "<< d <<" "<< e << endl;
            }

        cout << "Deseja continuar?\n[s/n]: ";
        cin >> cont;
        cont = tolower(cont); //pega o caracter e transforma em minusculo

    } while (cont != 'n');

    return 0;
}
