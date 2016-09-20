#include <iostream>
#include <stdio.h>
#define jan 31
#define fev 29
#define mar 31
#define abr 30
#define mai 31
#define jun 30
#define jul 31
#define ags 31
#define setb 30
#define out 31
#define nov 30

using namespace std;
int main (){
    int m,d,rest=0,tot=0,pot=0;
     while (cin >> m >> d){
        if(m!= EOF && d!= EOF){
            if(m == 12){
                if (d == 24 ){
                    cout << "E vespera de natal!" << endl;
                }
                else if (d == 25){
                    cout << "E natal!" << endl;
                }
                else if (d < 24){
                    rest = 25 - d;
                    cout << "Faltam "<< rest << " dias para o natal!" << endl;
                }
                else if (d > 25 && d < 32){
                    cout << "Ja passou!" << endl;
                }
            }
            else {
                switch (m){
                    case 1:
                        pot = ((jan+fev+mar+abr+mai+jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 2:
                        pot = ((fev+mar+abr+mai+jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 3:
                        pot = ((mar+abr+mai+jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 4:
                        pot = ((abr+mai+jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 5:
                        pot = ((mai+jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 6:
                        pot = ((jun+jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 7:
                        pot = ((jul+ags+setb+out+nov)-d)+25;
                        break;
                    case 8:
                        pot = ((ags+setb+out+nov)-d)+25;
                        break;
                    case 9:
                        pot = ((setb+out+nov)-d)+25;
                        break;
                    case 10:
                        pot = ((out+nov)-d)+25;
                        break;
                    case 11:
                        pot = ((nov)-d)+25;
                        break;

                }
                tot = pot;
                cout << "Faltam "<<tot<< " dias para o natal!" << endl;
            }
        }
        rest = 0;
     }
return 0;
}
