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
Primero, se inicializan los arreglos en cero, y después, para cada índice del arreglo inicial, se obtienen otros dos diferentes usando operaciones lógicas (XOR, NOT, AND y OR). Luego, se eliminan los bits similares y se obtiene el valor único. Se puede ajustar para cualquier tamaño de arreglo.

### Multiplicaciones y divisiones
Realice un programa donde reciba 2 números enteros sin signo y permita realizar la división o la multiplicación de los
mismos, usando solamente operadores binarios.

### Explicación
Primero, se deben introducir los números a multiplicar y dividir, y, mediante el uso de operadores de desplazamiento, se modifican los valores de binario de éstos, y obtienen los resultados correctos. Sin embargo, un detalle importante es que el segundo número operando debe ser la raíz del verdadero, porque es lo que involucra el desplazamiento de bits.

### Calcule el cuadrado de un número sin utilizar ningún operador numérico.

Dado un entero N, calcule el cuadrado de un numero sin utilizar \*, / o librerías de potencias.

Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144

### Explicación
Primero, se introduce el valor del que querramos sacar su cuadrado, y luego, con un número de iteraciones igual al valor que escribimos, en un ciclo se van a detectar todos los bits que sean uno tomando como referencia el contador, los cuales se irán sumando al valor inicial, distribuyendo la potencia en una serie de sumandos, y poco a poco se irá desplazando el valor de las iteraciones hasta que sea menor que cero, y se rompa el ciclo. 

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
En esta práctica, todos los códigos lograron ser ejecutados, según las instrucciones de cada uno para su realización. En prácticamente todas hubo problemas, más que nada, en relación a la inicialización de variables y estructura del código. También tuve complicaciones para cumplir con los requisitos que pedían los ejercicios dos y tres, pues me daba cuenta de que usé algo que no debía, y eso lo tuve que cambiar. Estuvo más complicado el cuatro, pues involucraba muchas cosas que yo no conocía y que tuve que investigar por mi cuenta. Hubiera preferido que los ejercicios hayan sido más fáciles, pues, al menos yo, sí batallé con la lógica y manera para resolverlos.
