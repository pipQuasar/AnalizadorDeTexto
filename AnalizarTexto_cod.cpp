/*
  En este código estará documentado el avance de mo código, además me puse algunos objetivos
    para ir empezando y cumplirlos para que el Analizador posea funcionalidad.

  Introducir un texto aleatorio y:
  a) Identificar cuál es la palabra que mas se repite y cuántas veces.
  b) Cantidad de veces que aparezca la letra 'y'.
  c) Mostrar la cantidad de veces que aparecieron comas ',' y puntos '.'. 
  d) ¿Cuántos caracteres hay en total?
  e) ¿Cuántas veces se usó espacio ' '?
  f) Informar la cantidad de mayúsculas existentes.
*/
#include <iostream>
using namespace std;

void obtenerOracion(char oracion[], int tamanio) {
  cout << "Ingrese una oracion terminada en punto: ";
  cin.getline(oracion, tamanio);
}

int main () {
 char oracion[999999];
 obtenerOracion(oracion, 999999);
 

 return 0;
}