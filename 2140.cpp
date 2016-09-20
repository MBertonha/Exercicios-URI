#include <iostream>
using namespace std;
int main (){
    int x,y,t=0;
        while (x!=0 && y!=0){
            cin >> x >> y;
            if (x==0 && y==0){
                return 0;
            }
            t = y - x;
                if (t==4||t==7||t==10||t==12||t==15||t==20||t==22||t==25||t==30||t==40||t==52||t==55||t==60||t==70||t==100||t==102||t==105||t==110||t==120||t==150||t==200){
                    cout << "possible" << endl;
                }
                else{
                    cout << "impossible" << endl;
                }
        }
return 0;
}
