# Practica 4. Operaciones binarias en C 

## Objectivos

El estudiante se familiarizará con el manejo de operaciones binarias utilizando el lenguaje de programación C,
realizando una serie de problemas sencillos para su mejor comprensión.

## Instrucciones

En la siguiente práctica, se listarán distintos problemas que pueden ser resueltos con el lenguaje de programación C,
los cuales deben de ser resueltos o donde su función principal sea utilizando los operadores binarios o Bitwise, cada
uno tendrá el valor de 25% de la demostración.

### Encuentra el único elememto de un arreglo.
Dado un arreglo donde cada elemento ocurre tres veces, excepto uno que aparece una sola vez. Encuentra el elemento
único. El tiempo de complejidad es O(n) y O(1) de espacio extra. 

Examplo:
Input: arr[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3}
Output: 2

### Explicación
Para poder realizar el ejercio primero debemos inicializar los arreglos a cero, asi como cada arreglo inicial. Despues se obtienen otros dos diferentes arreglos usando operaciones lógicas como XOR, NOT, AND y OR. Al final, se eliminan los bits similares y obteniendo asi el valor unico*.
Nota*: Se puede ajustar para cualquier tamaño de arreglo.

### Multiplicaciones y divisiones
Realice un programa donde reciba 2 números enteros sin signo y permita realizar la división o la multiplicación, segun sea el caso, se hace las operaciones usando solamente operadores binarios.

### Explicación
Para ello se debe de introducir los valores con los que vamos a trabajar. Mediante el uso de operadores de desplazamiento >> & <<, es como podremos dividir y multiplicar a nuestros valores. 

### Calcule el cuadrado de un número sin utilizar ningún operador numérico.
Dado un entero N, calcule el cuadrado de un numero sin utilizar \*, / o librerías de potencias.

Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144

### Explicación
En este paso se introduce el valor del que querramos sacar su cuadrado, despues escribimos el numero dee iteraciones igual al valor inicial, en un ciclo se van a detectar todos los bits que sean iguales a '1', tomando como referencia el contador, los cuales se irán sumando al valor inicial. Aqui es donde se distribuye la potencia en una serie de sumans, y poco a poco se empezara a desplazar el valor de las iteraciones hasta que sea menor que cero, y se rompa/detenga el ciclo. 

### Generador de secuencias de Grey Code

Dado un numero N, genera los patrones de bits de 0 a 2^n-1, donde cada patrón sucessivo difiere en 1 bit.

Ejemplo:
El siguiente es para una secuencia de 2-bit (n = 2)
  00 01 11 10
3-bite (n = 3)
  000 001 011 010 110 111 101 100
4-bit (n = 4)
  0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 
  1110 1010 1011 1001 1000

### Explicación
Primero, se inicializa todo en cero, y lo que se hace en el primer ciclo es conocer la cantidad de cifras a utilizar en el espaciado del código, ya que pude variar dependiendo del número entrante. Después, en los arreglos iniciales igualados a cero, se modificarán los valores para que todo esté en binario dentro de éste, usando otro ciclo hasta que el contador rompa el ciclo. Por último, usando la primera función programada, se irán acomodando los valores en binario obtenidos anteriormente en los espacios ya generados, lo que nos permitirá visualizar el código Grey, hasta alcanzar el tope correspondiente.

### Reporte
Para esta práctica, reporta un screeshot de la demostración de cada uno de los problemas, así como adjuntando el código
del problema principal, además de explicar la solución.

### File uploads
En el repositorio de la práctica de github se adjuntará el código fuente (archivos .c) de cada uno de los problemas.

### Demonstration
Se realizará un screenshoot de cada una de la resolución de cada uno de los problemas, además se grabará un video
explicando la solución y ejecutandola para validar su comprobación.

## Conclusion
En esta práctica, apesar del tiempo que tarde en hacer que funcioanra el programa de visual studio los logre ejecutar, según las instrucciones de cada uno de ellos indicados en la práctica. El ejercicio que considero que batallé mas fue el #4, ya que involucraba muchas cosas que yo jamas he visto y menos programado. por lo que tuve que investigar por fuera el como hacerlo.
