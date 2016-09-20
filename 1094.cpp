#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int quant;
    int x;
    int c=0,s=0,r=0;
    double soma=0;
    float a,b,h;
    char animal;

    cin >> quant;

        while (quant--){
            cin >> x >> animal;
            animal = toupper(animal);
            if (animal == 'C'){
                c = c + x;
                soma = soma + x;
                }
            else if (animal == 'R'){
                r = r + x;
                soma = soma + x;
                }
            else if (animal == 'S'){
                s = s + x;
                soma = soma + x;
                }
            }

    a = c * (100/soma);
    b = r * (100/soma);
    h = s * (100/soma);

    cout << "Total: " << soma << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << a <<" %"<< endl;
    cout << "Percentual de ratos: " << b <<" %"<< endl;
    cout << "Percentual de sapos: " << h <<" %"<< endl;

return 0;
}
