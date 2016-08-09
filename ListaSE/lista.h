#include<iostream>

using namespace std;

class nodo{

  public: 
    int dato;
    nodo* sig;
    nodo(int dato){
    this->dato=dato;
    sig=NULL;
  }
};

class lista { 
  public: 
    nodo* inicio;
    nodo* fin;
    lista (){
      inicio=NULL;
      fin=NULL;
    }
    void agregar(int a){
      
      if (inicio==NULL){
        inicio = new nodo(a);
        fin = inicio;
      }
      
      else {
        nodo* temp= new nodo(a);
        fin->sig=temp ;
        fin = fin-> sig;
      }
      
    }
   void imprimir(int c){
     nodo* temp=inicio;
     while (c!=0){
       temp=temp -> sig ; 
       c-=1;
     }
     cout << temp -> dato << endl;
   }
   void imprimir(){
     nodo* temp=inicio;
     while (temp!=NULL){
       cout << temp -> dato << " ";
       temp=temp -> sig ; 
     }
     cout << endl;
   }
};
