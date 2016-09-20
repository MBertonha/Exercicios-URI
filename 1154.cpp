#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision(2);

    int x;
    int soma=0;
    float result;
    float con=0.0;

        while (x > 0){
            cin >> x;
            if (x >= 0){
            con+=1.0;
            soma+= x;
            }
        }
    result = soma/con;
    cout << result ;

return 0;
}
