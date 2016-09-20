#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int x;

    while(cin>>x){
        if(x!=EOF){
            if(x==0){
                cout << "vai ter copa!" << endl;
            }
            else if(x>0){
                cout << "vai ter duas!" << endl;
            }
        }
        else{
            break;
        }
    }
return 0;
}
