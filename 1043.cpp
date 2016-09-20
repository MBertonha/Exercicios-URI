#include <iostream>
#include <iomanip>

using namespace std;

int main ()

    cout<<fixed<<setprecision(1);
    double a,b,c;
    double perimetro;
    double area;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a<b+c && b<c+a && c<b+a){
        perimetro = a+b+c;
        cout <<"Perimetro = "<<perimetro<<endl;}

    else{
        area = ((a+b)*c)/2;
        cout <<"Area = "<<area<<endl;}

    return 0;
}
