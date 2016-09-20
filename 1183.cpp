#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    cout << fixed << setprecision(1);
    double media=0.0,soma=0,x[12][12];
    char letra;

    cin >> letra;
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                cin >> x[i][j];
                if(j>i){
                soma = soma + x[i][j];
                }
            }
        }
    if (letra == 'S'){
        cout << soma << endl;
    }
    else{
        cout << soma/66.0 << endl;
    }
return 0;
}
