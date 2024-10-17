#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  int sairDoPrograma = 0, escolhaUsuario;
  
  while(sairDoPrograma == 0) {
    cout << "\n** CALCULADORA FINANCEIRA **" << endl;
    cout << "[ 1 ] Juro Simples\n[ 2 ] Juro Composto\n[ 3 ] Sair" << endl;
    cout << "\nInforme o número referente ao juroz: ";
    cin >> escolhaUsuario;

    
    switch(escolhaUsuario) {
      case 1: {
        float capital, taxa, juroSimples, capitalFinal;
        int tempo, escolhaTempoUsuario;
        
        cout << "\n** JURO SIMPLES **" << endl;
        cout << "Informe o capital inicial: ";
        cin >> capital;
        cout << "Informe a taxa de juro ao ano: ";
        cin >> taxa;
        cout << "O tempo de aplicação sera: \n[ 1 ] Mês\n[ 2 ] Ano" << endl;
        cout << "Informe o número referente a sua escolha: ";
        cin >> escolhaTempoUsuario;
        if(escolhaTempoUsuario == 1) {
          cout << "Informe a quantidade de Mêses: ";
          cin >> tempo;
          
          juroSimples = capital * ((taxa / 12) / 100) * tempo - capital;
          capitalFinal = juroSimples + capital;

          cout << fixed << setprecision(2);
          cout << "\nO valor do juro simples será: " << juroSimples << "R$" << endl;
          cout << "O capital final será: " << capitalFinal << "R$" << endl;
        } else if(escolhaTempoUsuario == 2) {
          cout << "Informe a quantidade de anos: ";
          cin >> tempo;
          
          juroSimples = capital * ((taxa / 12) / 100) * (tempo * 12) - capital;
          capitalFinal = juroSimples + capital;

          cout << fixed << setprecision(2);
          cout << "\nO valor do juro simples será: " << juroSimples << "R$" << endl;
          cout << "O capital final será: " << capitalFinal << "R$" << endl;
        } else {
          cout << "\nComando Inválido" << endl;
        }
        
        break;
      }
      case 2: {
        float capital, taxa, juroComposto, capitalFinal;
        int tempo, escolhaTempoUsario;
        
        cout << "\n** JURO COMPOSTO **" << endl;
        cout << "Informe o capital inicial: ";
        cin >> capital;
        cout << "Informe a taxa de juro por ano: ";
        cin >> taxa;
        cout << "O tempo de aplicação será: \n[ 1 ] Mês\n[ 2 ] Anos" << endl;
        cout << "Informe o número referente a sua escolha: ";
        cin >> escolhaTempoUsario;
        if(escolhaTempoUsario == 1) {
          cout << "Informe a quatidade de mêses: ";
          cin >> tempo;

          juroComposto = capital * (pow((1 + (taxa / 100)), tempo)) - capital;
          capitalFinal = juroComposto + capital;

          cout << fixed << setprecision(2);
          cout << "\nO valor do juro composto será: " << juroComposto << "R$" << endl;
          cout << "O capital final será: " << capitalFinal << "R$" << endl;
        } else if(escolhaTempoUsario == 2) {
          cout << "Informe a quatidade de anos: ";
          cin >> tempo;

          tempo = tempo * 12;
          juroComposto = capital * (pow((1 + ((taxa / 100) / 12)), tempo)) - capital;
          capitalFinal = juroComposto + capital;

          cout << fixed << setprecision(2);
          cout << "\nO valor do juro composto será: " << juroComposto << "R$" << endl;
          cout << "O capital final será: " << capitalFinal << "R$" << endl;
        } else {
          cout << "\nValor INVÁLIDO" << endl;
        }
        
        break;
      }
      case 3: {
        sairDoPrograma = 1;
        return sairDoPrograma;
        break;
      }
      default: {
        cout << "\n** Comando INVÁLIDO **" << endl;
      }
    }
  }

  return 0;
}
