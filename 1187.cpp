#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    cout << fixed << setprecision(1);
    double media=0.0,soma=0,x[12][12];
    char letra;
    int num=0;

    cin >> letra;
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                cin >> x[i][j];
                num = i + j;
                if(j>i && num<11){
                soma = soma + x[i][j];
                }
            }
        }
    if (letra == 'S'){
        cout << soma << endl;
    }
    else{
        cout << soma/30.0 << endl;
    }
return 0;
}

