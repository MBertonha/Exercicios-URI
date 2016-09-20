#include <iostream>

using namespace std;

int main() {

    int i, x, y, s = 0;
    int num;
    cin >> num;

    while(num--) {
        cin >> x;
        cin >> y;
        if (x < y) {
            for (i = x + 1; i < y; i++) {
                if (i % 2 != 0){
                    s += i;
                }
            }
        }
        else {
            for (i = y + 1; i < x; i++) {
                if (i % 2 != 0){
                  s += i;
                }
            }
        }
    cout << s <<endl;
    s = s - s;
    }


    return 0;
}

