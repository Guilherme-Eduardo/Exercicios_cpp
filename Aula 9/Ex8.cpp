#include "biblaureano.h"
int main(){

    string caractere = readString("INFORMME UM CARACTERE: ");
    int linhas = readInt ("INFORME O NUMERO DE LINHAS: ");

    int contador = 1;

    while(contador <= linhas){

        int i = 1;
        while (i <= contador){
            cout << caractere;
            i++;
        }
        cout << endl;

        contador++;


    }

    return 0;
}
