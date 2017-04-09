#include "Pila.h"

int main(){
   int ValorInsertado;
   int Opcion;
   int Dato;
   int Ref;
   
     cout<<"Selecciona la opción que desees realizar "<<end1; //Se inserta en un menú las funciones que puede
     cout<<"1) Crear Pila"<<end1;                             //Realizar la pila
     cout<<"2) Insertar Valor"<<end1;
     cout<<"3) Borrar Valor"<<end1;
     cout<<"4) Buscar Valor"<<end1;
     cout<<"5) Mostrar Pila"<<end1;
     cout<<"6) Salir"<<end1;
     cin<<ValorInsertado;
      
      if (Opcion <1 || Opcion > 6){             //Se limita el menú
         cout<<"Opción no válida"<<end1;
         return Opcion;
       }
      do{
         switch (ValorInsertado){                              //Se crean los casos posibles con las funciones
         case '1':                                             //Que debe realizar cada caso
            Pila p = Pila();
            if (p.IsVacio()){
               cout<<"Error al generar la pila"<<end1;
            }
               cout<<"Se creó lista"<<end1;
         break;
         case '2':
            cout<<"Ingresa Dato a la Pila"<<end1;
            cin>>Dato;
            p.Push(Dato);
         break;
         case '3':
            cout<<"Ingresa Dato a Borrar"<<end1;
            p.Pop();
         break;
         case '4':
            cout<<"Selecciona Dato a Buscar"<<end1;
            cin>>Dato
            p.Buscar(Dato);
         break;
         case '5':
            cout<<"Pila:"<<end1;
            p.MostrarPila();
         break;
      }while (Opcion!=6);
         cout<<"Gracias"<<end1;
}