#include <stdio.h> 
int Unico_Elemento(int Arreglo[], int n) 
{ 
    int Primer_Arreglo = 0;
    int Segundo_Arreglo = 0; 
    int Valor_Unico; 
    /*Se inicializan los arreglos en cero.*/
  
    for(int i = 0; i < n; i++) { 

        Segundo_Arreglo = Segundo_Arreglo | (Primer_Arreglo & Arreglo[i]); 
        /*Mediante un OR, guardar los bits de los primeros dos arreglos.*/
        Primer_Arreglo = Primer_Arreglo ^ Arreglo[i]; 
        /*Convertir todo a números impares usando un XOR.*/
        Valor_Unico = ~(Primer_Arreglo & Segundo_Arreglo); 
        /*Eliminar los bits comunes de los arreglos previos.*/
        Primer_Arreglo &= Valor_Unico; 
        /*Borrar los bits comunes del primer arreglo.*/
        Segundo_Arreglo &= Valor_Unico; 
        /*Borrar los bits comunes del segundo arreglo.*/
    } 
    return Primer_Arreglo; 
} 
int main() 
{ 
    /*Agregar el arreglo aquí abajo.*/
	int Arreglo[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3}; 
    int n = sizeof(Arreglo) / sizeof(Arreglo[0]); 
    printf("El elemento unico es %d ", Unico_Elemento(Arreglo, n)); 
} 