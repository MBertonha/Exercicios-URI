#include <iostream>
using namespace std;

int main () {
    int x,y;
    int soma1=0,soma2=0;

    while (cin >> x >> y){

        if (x>0 && y>0){

            if (x>y){
                for(int i=y;i<=x;i++){
                    soma1= soma1 + i;
                    cout << i << " ";
                }
                cout << "Sum=" << soma1 << endl;
                soma1= soma1 - soma1;
            }
            else if(y>x){
                for(int i=x;i<=y;i++){
                    soma2= soma2 + i;
                    cout << i << " ";
                }
                cout << "Sum=" << soma2 << endl;
                soma2=soma2-soma2;
            }
        }
        else{
            break;
        }
    }

return 0;
}

