#include <iostream>

using namespace std;

int main () {

    int code;
    int x=0,y=0,z=0;

    while (code != 4){
        pao:
        cin >> code;
         if (code==1){
            x++;
         }
         else if (code==2){
            y++;
         }
         else if (code==3){
            z++;
         }
         else if (code==4){
            break;
         }
         else{
            goto pao;
         }
    }

     cout << "MUITO OBRIGADO" << endl;
     cout << "Alcool: " <<x<<endl;
     cout << "Gasolina: " <<y<<endl;
     cout << "Diesel: " <<z<<endl;

return 0;
}
