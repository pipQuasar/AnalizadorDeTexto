/*
  En este código estará documentado el avance de mo código, además me puse algunos objetivos
    para ir empezando y cumplirlos para que el Analizador posea funcionalidad.

  Introducir un texto aleatorio y:
  a) Cantidad de veces que aparezca la letra 'y' y en qué posición aparecieron.
  b) Mostrar la cantidad de veces que aparecieron comas ','. 
  c) ¿Cuántos caracteres hay en total?
  d) ¿Cuántas veces se usó espacio ' '?
  e) Informar la cantidad de mayúsculas existentes
  f) 
*/
#include <iostream>
#include <cctype>
using namespace std;

void obtenerOracion(char oracion[], int tamanio) {
  cout << "Ingrese una oracion terminada en punto: ";
  cin.getline(oracion, tamanio);
}

int main () {
 char oracion[999999];
 obtenerOracion(oracion, 999999);
 // a)
  int contador_y = 0;
  int posiciones_y[100];
 // b)
  int contador_comas = 0;
 // c)
  int contador_caracteres = 0;
 // d)
  int contador_espacios = 0;
 // e)
  int cantidad_mayusculas = 0;

 for (int c = 0; oracion[c] != '\0'; c++)
  {  
  if (tolower(oracion[c]) == 'y'){
    posiciones_y[contador_y] = c;
    contador_y++; 
  }
  if (isupper(oracion[c])) cantidad_mayusculas++; 
  if (oracion[c] == ',') contador_comas++;
  if (oracion[c] == ' ') contador_espacios++;
  contador_caracteres++;
 }
 

 cout << "Cantidad de 'y': " << contador_y << "\nY aparece en los caracteres: "; // a)
 for (int i = 0; i < contador_y; i++)
 {
  cout << posiciones_y[i] << "\t";
 }
 cout << "\n";

 cout << "Hubo un total de " << contador_comas << " comas\n"; // b)
 cout << "Hay un total de " << contador_caracteres << " caracteres\n"; // c)
 cout << "Aparecieron un total de " << contador_espacios << " espacios\n"; // d)
 cout << "Total de mayusculas: " << cantidad_mayusculas << "\n"; // e)
 return 0;
}
