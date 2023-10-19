//exercicio_006
#include "biblaureano.h"

int fatorial( int numero );
float permuta( int n, int r);

int main(){
   int n,r;
   n = readInt("Entre com o N:");
   r = readInt("Entre com o R:");
   cout << "Resultado:" << permuta(n,r) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

float permuta( int n, int r){
   float resultado;
   resultado = fatorial(n)/(float)(fatorial(n-r));
   return resultado;
}

int fatorial(int n){
   int fatorial = 1;
   while( n > 1){
      fatorial *= n;
      --n;
   }
   return fatorial;
}
