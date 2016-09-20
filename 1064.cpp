#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    float a,b,c,d,e,f;
    float x = 0.0;
    float soma = 0.0;
    cin >>a;
    cin >>b;
    cin >>c;
    cin >>d;
    cin >>e;
    cin >>f;
    {
    if (a >= 0.0){
        x += 1.0;
        soma += a;}

    if (b >= 0.0){
        x += 1.0;
        soma += b;}

    if (c >= 0.0){
        x += 1.0;
        soma += c;}

    if (d >= 0.0){
        x += 1.0;
        soma += d;}

    if (e >= 0.0){
        x += 1.0;
        soma+= e;}

    if (f >= 0.0){
        x += 1.0;
        soma += f;}
    }
    cout << x << " valores positivos" << endl;
    cout<<fixed<<setprecision(1);
    cout << soma/x << endl;
    return 0;
}

