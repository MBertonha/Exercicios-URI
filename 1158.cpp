#include <iostream>

using namespace std;

int main(){
 int x, y, n, soma=0;
 cin >> n;

   while (n--){
     cin >> x >> y;

       if (x%2!=0){
          for (int i=0 ;i<y;i++){
            soma = soma + x;
            x += 2;
          }
          cout << soma << endl;
       }

       else if (x%2==0){
            x++;
           for (int i=0 ;i<y;i++){
            soma = soma + x;
            x += 2;
            }
            cout << soma << endl;
       }
    soma = soma - soma;
   }

return 0;
}
