#include <iostream>
#include "lista.h"

using namespace std;

int main(){
  lista lista;
  int a;
  cin >> a;
  for (int i=0;i<a;i++){
    int b;
    cin >> b;
    lista.agregar(b);
  }
  
  for (int i=0;i<a;i++){
    lista.imprimir(i);
  }
  lista.imprimir();
  return 0;
}
