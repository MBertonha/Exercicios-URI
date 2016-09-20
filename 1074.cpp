#include <iostream>

using namespace std;

int main () {
    int n;
    int x;
    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> x;
            if (x == 0){
            cout <<"NULL"<<endl;}
            else{
            if (x%2 == 0)
            cout <<"EVEN";
            else
            cout <<"ODD";

            if(x<0)
            cout <<" NEGATIVE"<<endl;
            else
            cout <<" POSITIVE"<<endl;}
                }
    return 0;
    }

