#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    int x,y;
    float result=0,fat1=1,fat2=1;

    while (cin >> x >> y){
        if (x!=EOF && y!=EOF){
            x++;
            y++;
            for (int i=1;i<x;i++){
                fat1 = fat1 * i;
            }
            for (int j=1;j<y;j++){
                fat2 = fat2 * j;
            }
            result = fat1 + fat2;
            cout << result << endl;
            result=0;
        }
    }
return 0;
}
