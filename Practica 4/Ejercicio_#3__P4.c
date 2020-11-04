#include<stdio.h> 
int main()
{
	/*Indica el número N.*/
	int Valor_N = 12;
	int i = Valor_N;
	/*Se inicia nuestro valor en cero.*/
    int Cuadrado = 0;
    int Contador;
    /*Lo siguiente es, cualquier bit que se iran sumando,
    todos estos valores, dando como resultado el cuadrado.*/
        while(i > 0){
            if((i & 1) == 1){
                Cuadrado += Valor_N << Contador;
            }
            i = i >> 1;
            Contador++;
        }
        printf("El cuadrado es %d", Cuadrado);
        return Cuadrado;
}