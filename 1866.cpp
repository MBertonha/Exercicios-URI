#include <iostream>
using namespace std;

int main () {
    int num,x;

    cin >> x;
        while(x--){
        cin >> num;
            if(num>=1 && num<=1000){
                if (num%2==0){
                    cout << "0" << endl;
                }
                else{
                    cout << "1" << endl;
                }
            }
        }
return 0;
}
