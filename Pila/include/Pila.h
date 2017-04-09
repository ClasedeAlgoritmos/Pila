#include "Nodo.h"

class Pila{
public:
   //Atributo
	Nodo* Tope;
   //Constructores
	Pila(int Dato);
   Pila();
   bool IsVacio();
	void Push(int Dato);
	int Pop();
   Nodo* Buscar (int Dato);
   void MostrarPila();
}