#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int *Arreglo, Contador = 0;

void Conversion_Binario(int a, int n)
{
    /*Se generan los espacios que tendrá el código Grey,
      dependiendo del valor en su entrada.*/

	static char b[9];
    b[0] = '\0';

    int c;
    for (c = 128; c > 0; c >>= 1)
    {
        strcat(b, ((a & c) == c) ? "1" : "0");
    }
    int i = 8 - n;
	while(i < 8){
    	printf("%c", b[i]);
    	i++;
    }
}

int Codigo_Grey(int n)
{
	/* En este punto del codigo, se modifica el arreglo para que
	todos los valores se presenten en binario.*/
	int k, i;
	Arreglo[Contador++] = 0;
	Arreglo[Contador++] = 1;
	for(i = 1; i < n; i++){
		k = Contador - 1;
		while(k >= 0){
			Arreglo[Contador++] = Arreglo[k--] | 1 << i;
		}
	}	
} 

main()
{
	int n, i;
	printf("\nEscribe el valor de n\n");
	scanf("%d",&n);
	Arreglo = (int*)malloc(pow(2,n)*sizeof(int));
	Codigo_Grey(n);
	for(i = 0; i < Contador; i++){
		Conversion_Binario(Arreglo[i], n);
		printf("\n");
	}
}