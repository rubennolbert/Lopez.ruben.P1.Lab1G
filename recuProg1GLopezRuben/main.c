#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
infectados(int), recuperados(int) y muertos(int).
 Desarrollar una función llamada actualizarRecuperados que reciba el país y
 los recuperados del dia y que acumule estos a los que ya tiene el país.
  La función no devuelve nada. */

  /*
  2. Crear una función que se llame invertirCadena que reciba una
  cadena de caracteres como parámetro y su responsabilidad es invertir
  los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU */

  /*
  3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres
   como parámetro y su responsabilidad es ordenarlos caracteres de manera ascendente
   dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" */


   void invertirCadena(char cadena[]);
   void ordenarCaracteres(char cadena[]);
int main()
{
    char nombre [] = "UTN-FRA";

    invertirCadena(nombre);


    return 0;
}

  void invertirCadena(char cadena[])
  {
      int todoOk = 0;
      char auxCadena;

      if(cadena != NULL)
      {
          for(int i=0; i < 10 - 1; i++)
          {
              for(int j = i + 1; j < 10; j++)
              {
                  if(cadena[i] < cadena[j])
                  {
                      auxCadena = cadena[i];
                      cadena[i] = cadena[j];
                      cadena[j] = auxCadena;
                  }


              }
          }
          todoOk = 1;
      }

    printf("%s", cadena);

      return todoOk;
  }


  void ordenarCaracteres(char cadena[])
  {
      int todoOk = 0;
      char auxCadena;


  }
