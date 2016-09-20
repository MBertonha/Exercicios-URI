#include <iostream>
using namespace std;
int main(){
    int x, con, pos;
    cin >> x;
    int pao[x];
    con = 1000;
    pos = 0;

    for(int i = 0; i < x; i++){
        cin >> pao[i];
            if(pao[i] < con){
                con = pao[i];
                pos = i;
            }
    }
    cout << "Menor valor: " << con <<endl;
    cout << "Posicao: " << pos <<endl;
return 0;
}
