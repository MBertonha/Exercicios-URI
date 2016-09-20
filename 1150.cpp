#include <iostream>
using namespace std;

int main (){
    int x,z, cont1=0, cont2=0;
    cin >> x;
    cin >> z;

        while (z <= x){
            cin >> z;

        }
        for(int i=x;i<z;i++){
                 cont2 = cont2 + i;
                 cont1++;
                 if (cont2 > z){
                      break;
                    }

        }
   cout << cont1 << endl;

    return 0;

}
