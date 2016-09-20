#include <iostream>

using namespace std;

int main () {

    int x,y; //inter e gremio)
    int inter=0;
    int gremio=0;
    int grenais=0;
    int empate=0;
    int resposta;

        cin >> x >> y;
        grenais++;
            if (x > y){
                inter++;
            }
            else if(y > x){
                gremio++;
            }
            else{
                empate++;
            }

        cout << "Novo grenal (1-sim 2-nao)"<<endl;
        cin >> resposta;
           oi:
                grenais++;
                cin >> x >> y;
                    if (x > y){
                        inter++;
                    }
                    else if (y > x){
                        gremio++;
                    }
                    else{
                        empate++;
                    }
             cout << "Novo grenal (1-sim 2-nao)"<<endl;
            cin >> resposta;
            if (resposta == 1){
                goto oi;
            }
            else{

        cout << grenais << " grenais"<<endl;
        cout << "Inter:" << inter << endl;
        cout << "Gremio:" << gremio << endl;
        cout << "Empates:" << empate <<endl;

        if (inter > gremio){
            cout << "Inter venceu mais"<<endl;
        }
        else if(gremio>inter){
            cout << "Gremio venceu mais" << endl;
        }
        else{
             cout<< "Nao houve vencedor"<<endl;
        }
            }
    return 0;
}

