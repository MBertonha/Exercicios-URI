#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main () {
    cout << fixed << setprecision (2);
    double x,y;
    cin >> x;
    cin >> y;
    {
    if (x>0 && y>0)
        cout << "Q1" <<endl;

    else if (x>0 && y<0)
        cout << "Q4" <<endl;

    else if (x<0 && y>0)
        cout << "Q2" <<endl;

    else if (x<0 && y<0)
        cout << "Q3" <<endl;

    else if (x==0 && y!=0)
        cout << "Eixo Y" <<endl;

    else if (x!=0 && y==0)
        cout << "Eixo X" <<endl;

    else if (x==0 && y==0)
        cout << "Origem" <<endl;
    }
    return 0;
}
