#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    cout << fixed << setprecision(1);
    int num;
    double result=0.0,x[12][12];
    char pao;

    cin >> num;
    cin >> pao;
        for (int i=0;i<12;i++){
            for (int j=0;j<12;j++){
            cin >> x[i][j];
                if(j == num){
                    result += x[i][j];
                }
            }
        }
    if(pao == 'S'){
         cout << result << endl;
    }
    else{
         cout << result/12.0 << endl;
    }
return 0;
}

