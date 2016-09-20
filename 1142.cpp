#include <iostream>

using namespace std;

int main () {
    int x=0;
    int n;

    cin >> n;

    for(x=1;x<=n*4;x++){
        cout << x <<" "<< x+1<<" " << x+2<<" " << "PUM" << endl;
        x+=3;
                }

return 0;
}
