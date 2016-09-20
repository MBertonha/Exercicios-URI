#include <iostream>
using namespace std;
int main (){
    long long fib[61];
    int t,n;

    cin >> t;
    fib[0] = 0;
    fib[1] = 1;
        for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        }

        while(t--){
        cin >>n;
            if (n>=0 && n<=60){
            cout << "Fib(" << n << ") = " << fib[n]<<endl;
            }
        }
return 0;
}
