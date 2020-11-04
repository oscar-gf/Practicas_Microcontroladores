#include <stdio.h>
#include <math.h>

int main(){
    unsigned int Primer_Numero;
    unsigned int Segundo_Numero;
    unsigned int Rltdo_Multiplicar;
    unsigned int Rltdo_Dividir;
    /*Ahora se introducen los números aqui abajo.*/
    Primer_Numero = 8;
    Segundo_Numero = 2; 
    /*´Para efectuar las operaciones de multiplicar y dividir, esto involucra hacer cambios de bits, 
    es necesario elevar al cuadrado el segundo valor introducido por, si se pone un 2 saldra un 4.*/ 
    Rltdo_Multiplicar = Primer_Numero << Segundo_Numero;
    Rltdo_Dividir = Primer_Numero >> Segundo_Numero; 
    
    printf("El resultado de la multiplicacion es %d \n", Rltdo_Multiplicar);
	printf("El resultado de la division es %d \n", Rltdo_Dividir); 