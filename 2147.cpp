#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    cout << fixed << setprecision(2);
    double tempo=0.09;
    int num;
    string nome;

    cin >> num;
    while (num--){
        cin >> nome;
            for (int i=0;i<nome.length();i++){
                char o = nome[i];

                if (o == 'e'){
                    tempo = tempo + 0.01;
                }
            }

        tempo = tempo - 0.01;
        cout << tempo << endl;
        tempo = 0.09;
    }
return 0;
}
