#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>

#define PINGA       0.5
#define DOLLY       1.5
#define COCA        4.5
#define COROTE      2.2
#define ESPETO      3.0
#define TORRESMO    7.0
#define TOD         2.5
#define SUCO        3.0

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    double conta = 0;
    int pedido = 0;
    int code = 0;
    int idade,mesa,garcon;
    string gar;
    string nome, sobrenome;
    char resp='n';
    aqui:
    cout << "Insira seu nome e sobrenome: " << endl;
    cin >> nome >> sobrenome;
    cout << "Insira sua idade: " << endl;
    cin >> idade;
    cout << "Insira o numero da mesa: " << endl;
    cin >> mesa;

    srand (time(NULL));
                garcon =  rand() % 5 + 1;
                switch (garcon){
                    case 1:
                        gar = "Marcos";
                        break;
                    case 2:
                        gar = "Jobson";
                        break;
                    case 3:
                        gar = "Pedro";
                        break;
                    case 4:
                        gar = "Jose";
                        break;
                    case 5:
                        gar = "Mario";
                        break;
                }

    if (idade >= 18){
        while (pedido != 9){
            system("cls"); //limpa a tela
            cout << "#####################" << endl;
            cout << "#   BAR SEM LONA    #" << endl;
            cout << "#####################" << endl << endl;
            cout << "-------CARDÁPIO------" << endl;
            cout << "[1] Pinga: R$ \t"<< PINGA << endl;
            cout << "[2] Dolly: R$ \t"<< DOLLY << endl;
            cout << "[3] Coca Cola: R$ \t"<< COCA << endl;
            cout << "[4] Corotinho: R$ \t"<< COROTE << endl;
            cout << "[5] Espetinho: R$ \t"<< ESPETO << endl;
            cout << "[6] Torresmo: R$ \t"<< TORRESMO << endl;
            cout << "---------------------" << endl;
            cout << "[9] SAIR" << endl;
            cout << "---------------------" << endl;
            cout << "Sua escolha: ";
            cin >> pedido;

            switch (pedido)
            {
                case 1:
                    conta += PINGA;
                    break;
                case 2:
                    conta += DOLLY;
                    break;
                case 3:
                    conta += COCA;
                    break;
                case 4:
                    conta += COROTE;
                    break;
                case 5:
                    conta += ESPETO;
                    break;
                case 6:
                    conta += TORRESMO;
                    break;
            }
        }
    }
    else{
        while (pedido != 9){
            system("cls"); //limpa a tela
            cout << "#####################" << endl;
            cout << "#   BAR SEM LONA    #" << endl;
            cout << "#####################" << endl << endl;
            cout << "-------CARDÁPIO------" << endl;
            cout << "[1] Suco: R$ \t"<< SUCO << endl;
            cout << "[2] Dolly: R$ \t"<< DOLLY << endl;
            cout << "[3] Coca Cola: R$ \t"<< COCA << endl;
            cout << "[4] Todinho: R$ \t"<< TOD << endl;
            cout << "[5] Espetinho: R$ \t"<< ESPETO << endl;
            cout << "[6] Torresmo: R$ \t"<< TORRESMO << endl;
            cout << "---------------------" << endl;
            cout << "[9] SAIR" << endl;
            cout << "---------------------" << endl;
            cout << "Sua escolha: ";
            cin >> pedido;

            switch (pedido)
            {
                case 1:
                    conta += SUCO;
                    break;
                case 2:
                    conta += DOLLY;
                    break;
                case 3:
                    conta += COCA;
                    break;
                case 4:
                    conta += TOD;
                    break;
                case 5:
                    conta += ESPETO;
                    break;
                case 6:
                    conta += TORRESMO;
                    break;
            }
        }
    }



    cout << "Cliente: " << nome <<" "<<sobrenome<< endl;
    cout << "Como deseja pagar ?" << endl << endl;
    cout << "[7] A vista no dinheiro ?" << endl;
    cout << "[8] Cartao de debito ?" << endl;
    cin >> code;

        if (code == 7){
            system("cls");
            cout << "Cliente: " << nome <<" "<<sobrenome<< endl;
            cout << "Mesa: " << mesa << endl;
            cout << "Garçon: " << gar <<endl;
            cout << "Total da conta: R$"<< conta << endl;
    }
        else if (code == 8){
            system("cls");
            conta = conta + (conta*0,15);
            cout << "Cliente: " << nome <<" "<<sobrenome<< endl;
            cout << "Mesa: " << mesa << endl;
            cout << "Garçon: " << gar <<endl;
            cout << "Total da conta: R$"<< conta << endl << endl;
    }


    cout << "Deseja algo a mais Sr(a) [s/n] ?" << endl;
    cin >> resp;
    system("cls");
    if (resp != 'n'){
          goto aqui;
        }
    else {
        cout << "O Bar Sem Lona" << endl;
        cout << "Agradece sua visita" << endl;
        cout << "Volte sempre!" << endl << endl;
    }
    return 0;
}
