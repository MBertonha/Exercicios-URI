#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int x,y; //dia 1 e dia 2
    string dia,a;
    int dias,horas,minutos,segundos;
    int h1, h2, m1, m2, s1, s2; //horas, minutos e segundos
    cin >> dia >> x;
    cin >> h1 >> a >> m1 >> a >> s1;
    cin >> dia >> y;
    cin >> h2 >> a >> m2 >> a >> s2;
    s1 = s2-s1;
    m1 = m2-m1;
    h1 = h2-h1;
    x = y-x;
    if (s1<0){
        s1+=60;
        m1--;}
    if (m1<0){
        m1+=60;
        h1--;}
    if (h1<0){
        h1+=24;
        x--;}
    cout<<x<<" dia(s)"<<endl;
    cout<<h1<<" hora(s)"<<endl;
    cout<<m1<<" minuto(s)"<<endl;
    cout<<s1<<" segundo(s)"<<endl;
    return 0;
}
