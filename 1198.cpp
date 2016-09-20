#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int h,o,result=0;
    while(cin>>h>>o){
        if (h!=EOF && o!=EOF){
            if (h>4294967296 && o>4294967296){
                return 0;
            }
            else{
                if(h>o){
                result = h - o;
                cout << result << endl;
                }
                else{
                result = o - h;
                cout << result << endl;
                }
            }
        }
        else{
        return 0;
        }
    }
return 0;
}
