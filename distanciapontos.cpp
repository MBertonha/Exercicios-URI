#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main () {

cout << fixed << setprecision(4);
double x1,y1;
double x2,y2;
double distancia;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout << distancia << endl;

return 0;
}
