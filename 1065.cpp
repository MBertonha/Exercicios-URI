#include <iostream>

using namespace std;

int main () {

    int a,b,c,d,e;
    int par=0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    {
    if (a%2==0){
        par++;}  //ira somar 1 caso for vdd
    if (b%2==0){
        par++;}
    if (c%2==0){
        par++;}
    if (d%2==0){
        par++;}
    if (e%2==0){
        par++;}
    }
    cout <<par<<" valores pares"<<endl;
    return 0;
}

