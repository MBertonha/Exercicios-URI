#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << fixed << setprecision(2);
    double x;
    double y;
    double rea;
    cin >> x;{
    if (x <= 400.00){
        y = (x+(x*0.15));
        rea = (y-x);
        cout << "Novo salario: "<<y<<endl;
        cout << "Reajuste ganho: "<<rea<<endl;
        cout << "Em percentual: 15 %"<<endl;}
    else if (x <= 800.00){
        y = (x+(x*0.12));
        rea = (y-x);
        cout << "Novo salario: "<<y<<endl;
        cout << "Reajuste ganho: "<<rea<<endl;
        cout << "Em percentual: 12 %"<<endl;}
    else if (x <= 1200.00){
        y = (x+(x*0.10));
        rea = (y-x);
        cout << "Novo salario: "<<y<<endl;
        cout << "Reajuste ganho: "<<rea<<endl;
        cout << "Em percentual: 10 %"<<endl;}
    else if (x<= 2000.00){
        y = (x+(x*0.07));
        rea = (y-x);
        cout << "Novo salario: "<<y<<endl;
        cout << "Reajuste ganho: "<<rea<<endl;
        cout << "Em percentual: 7 %"<<endl;}
    else if (x >2000.00){
        y = (x+(x*0.04));
        rea = (y-x);
        cout << "Novo salario: "<< y <<endl;
        cout << "Reajuste ganho: "<<rea<<endl;
        cout << "Em percentual: 4 %"<<endl;}
    }
    return 0;
}

