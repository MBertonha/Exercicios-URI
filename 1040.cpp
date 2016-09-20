#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

    int main () {
    cout << fixed << setprecision(1) ;
    double n1,n2,n3,n4;
    double m1,m2,nota_exame,result;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4; {
    m1 =((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if (m1>=7){
        cout << "Media: " << m1 <<endl;
        cout << "Aluno aprovado." <<endl;}
    else if (m1<4) {
        cout << "Media: " << m1 <<endl;
        cout << "Aluno reprovado." <<endl;}

    else {{
        cin >> nota_exame;
        m2 = (nota_exame+m1)/2;}
        if (m2>=5){
            cout << "Media: " << m1 <<endl;
            cout << "Aluno em exame." <<endl;
            cout << "Nota do exame: " << nota_exame <<endl;
            cout << "Aluno aprovado." <<endl;
            cout << "Media final: " << m2 << endl ;}
        else {
            cout << "Media: " << m1 << endl;
            cout << "Aluno em exame." << endl;
            cout << "Nota do exame: " << nota_exame << endl;
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << m2 << endl;}}

    }
    return 0;
    }
