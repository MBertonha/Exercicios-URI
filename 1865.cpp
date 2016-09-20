#include <iostream>
using namespace std;

int main () {
    int forca,num;
    string nome;

    cin >> num;
    while(num--){
        cin >> nome >> forca;
            if(forca>=1 && forca<=25000){
                if(nome == "Thor"){
                    cout << "Y" << endl;
                }
                else{
                    cout << "N" << endl;
                }
            }
            else{
                break;
            }
    }
return 0;
}
