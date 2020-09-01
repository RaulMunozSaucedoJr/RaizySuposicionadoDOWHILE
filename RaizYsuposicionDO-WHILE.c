
//Materia: Estructura de Datos.
//Programa: Raiz y Suposici�n con funcion DO-WHILE.

//Bibliotecas
#include<stdio.h>
#include <math.h>
#include <windows.h>

//Inicia el programa.
main()
{
	
//Se declaran las variables tipo flotante.

      float datoRaiz,datoSuposicion,variableRandom,Resultado; 
      
      puts("Ingresar el numero a evaluar en la raiz cuadrada \n"); //Se imprime en pantalla un mensaje pidiendo al usuario ingresar el numero a evaluar.
       printf(" \n"); //Salto de Linea
	  scanf("%f",&datoRaiz); //Leemos y guardamos en la variable dtR
      puts("Ingrese su suposicion del resultado \n"); //Se le pide al usuario Ingrese su suposicion del resultado
       printf(" \n"); //Salto de Linea
	  scanf("%f",&datoSuposicion);//Leemos y guardamos en la variable datoSuposicion
      do 
      { //Iniciamos do.
      variableRandom = (datoRaiz / datoSuposicion+datoSuposicion)/2 ; //Formula para saber la raiz cuadrada de un numero solo sabiendo una suposicion del resultado
      Resultado= variableRandom-datoSuposicion; // asignamos a el resultado de la diferencia de datoSuposicion y variableRandom
      Resultado= fabs(Resultado); //Asignamos a Resultado a el valor absoluto del mismo Resultado
      datoSuposicion=variableRandom; //asignamos a datoSuposicion el resultado de la operacion matematica de variableRandom
      } //Terminamos do.
       while  (Resultado >= 0.00001); //Mientras Resultado NO sea mayor o igual a 0.0001 el ciclo DO se va a ejecutar
       
      printf ("El resultado correcto es: %.3f \n"  , variableRandom); //Se imprime en pantalla el resultado.
      
            system("pause");
      } //Termina el programa.
