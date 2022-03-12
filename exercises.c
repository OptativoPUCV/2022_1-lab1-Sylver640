#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//#include "exercises.h"

/* 
Ejercicio 1.
Función que recibe 3 parámetros (a, b y c), 
y en c almacena el valor de la suma de a más b.
*/

void suma(int a, int b, int * c) 
{
   //scanf("%i", &a);
   //scanf("%i", &b);
   int aux = a+b;
   *c = aux;
}   

/*
Esta función suma los N primeros números del arreglo a
*/
int sumaN(int a[], int N) {
    int i;
    int tot = 0;

    for(i = 0; i < N; i++) {
      tot += a[i];
    }

    return tot;
}

/*
Ejercicio 2.
Esta función debe sumar los últimos m números del 
arreglo a y almacena el resultado en *suma.
Utilice la función sumaN.
*/

void sumaNultimos(int a[], int n, int m, int * suma) 
{
   //Últimos m números de un arreglo de n numeros = Empezar en la posición (n-m)
   //Llevar a la función el arreglo desde la posición (n-m)
   int i;
   int ultimasPosiciones = (n-m);
   int aux = 0;

   for (i = 0; i < ultimasPosiciones; i++)
   {
      aux = *(a+(n-1));
      *(a+i) = aux;
      n--;
   }

   *suma = sumaN(a, m);
}

/*
Ejercicio 3.
Considerando la estructura Persona, programe la función
crearPersona(...), la cual crea una nueva persona con 
los datos correspondientes y retorna un puntero al dato 
recién creado.
*/
typedef struct {
  char nombre[30];
  char rut[11];
  int edad;
} Persona;


Persona* crearPersona(char nombre[], char rut[], int edad) 
{
   Persona *personaLocal = malloc(sizeof(Persona));
   strcpy(personaLocal->nombre, nombre);
   strcpy(personaLocal->rut, rut);
   personaLocal->edad = edad;
   return personaLocal;
}

/*
Ejercicio 4.
Considerando la estructura "Vector", escriba 
la función Vector* crearVector(int n), la cual crea 
un vector con capacidad `n`, reserva la memoria 
correspondiente para el arreglo con `n` datos 
inicializados en 0 y luego retorna el vector creado.
*/
typedef struct {
   int * datos; // arreglo dinámico
   int capacidad; // capacidad del arreglo
} Vector;

Vector * crearVector(int n) 
{
   Vector *vectorLocal = NULL;
   vectorLocal = (Vector *) calloc(n, sizeof(Vector));
   if (vectorLocal == NULL)
      exit(1);

   vectorLocal->capacidad = n;
   vectorLocal->datos = (int *) calloc(vectorLocal->capacidad, sizeof(int));

   return vectorLocal;
}

/*
Ejercicio 5a.
Programe la función void asignarValor(Vector * v, int i, int valor), 
la cual asigna el valor a la posición i del vector v.
*/
void asignarValor(Vector * v, int i, int valor) 
{
   for (int posicion; posicion < v->capacidad; posicion++)
   {
      if (v->datos[posicion] == i)
      {
         v->datos[posicion] = valor;
         return;
      }
   }
}

/*
Ejercicio 6.
Programe la función int obtenerValor(Vector * v, int i), 
la cual retorna el valor en la posición i del vector v.
*/
int obtenerValor(Vector * v, int i) 
{
   int valorObtenido;
   for (int posicion; posicion < v->capacidad; posicion++)
   {
      if (v->datos[posicion] == i)
      {
         valorObtenido = v->datos[posicion];
      }
   }
   
   return valorObtenido;
}

/*
Ejercicio 7.
Función que suma los vectores `a` y `b` y 
actualiza el vector `c` con el resultado de la suma.
*/
void sumaV(Vector * a, Vector * b, Vector * c) 
{

}

/*
Ejercicio 8.
Use las operaciones implementadas de vectores para 
sumar (a1,a2)+(b1+b2). Almacene el resultado en el vector c.
*/
void sumaV2(int a1, int a2, int b1, int b2, Vector *c)
{

}
