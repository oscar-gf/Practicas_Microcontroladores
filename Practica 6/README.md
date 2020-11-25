# Practice 6. Parallel Ports (GPIOs)

## Objectives
he   student   will   become   familiar   with   the   basic instructions for configure and operate the Microcontroller input/output ports.

## Introduction

Microcontrollers are all around  he world. Each day, Microcontrollers, are more present in the many aspects of our lives: in our work, inside our houses, and in more. We can find them controlling small devices like cellphones, microwaves, washing machines, and televisions.

A microcontroller is one device or chip that is used to govern one or more processes. For example, the controller that regulates the room temperature of an air conditioner; it has a sensor that continuously measures the internal temperature and, when the preset limits are exceeded, it generates the necessary signals to adjust the temperature.

## State of the Art

### The practices and the PIC microcontroller

The main objective of this practices is to provide students the foundation to fully understand the operation of the PIC18F45K50 microcontroller. This will be achieved through 11 documents that will guide the reader to create their own electronic card or Printed Circuit Board (PCB) and to be able to program it; in order to, execute different functions.

The advantages of ta PIC microcontroller to others on the market, which is why it will be used throughout this manual, are as follows:

- Easy to operate.
- There is enough documentation to work with it and it’s easy to obtain it.
- The price is comparatively lower than its competitors.
- It has a high operating speed.
- Development tools are cheap and easy to use.
- There are a variety of hardware that can record, erase and check the behavior of PIC.
- Once you learn to handle a PIC, it will easier to handle any other models of microcontrollers.


### MPLAB X
MPLAB X Integrated Development Environment (IDE) is an expandable, highly configurable software program that incorporates powerful tools to help you discover, configure, develop, debug and qualify embedded designs for most of Microchip’s microcontrollers and digital signal controllers. MPLAB X IDE works seamlessly with the MPLAB development ecosystem of software and tools, many of which are completely free. 

### CURIOSITY development board
The Curiosity HPC Development Board is a 8-bit prototyping board. It is designed from the ground-up to take full advantage of Microchip’s MPLAB® X integrated development environment. The Curiosity Development Board supports Microchip’s 28- and 40-pin 8-bit PIC MCUs. Programming/debugging is accomplished through the PICkit On Board (PKOB), eliminating the need for an external programming/debugging tool.


## Results

In this section, you must report the outcomes of the laboratory activities.

###  Whack-a-mole: Software implementation.

1. Create a new project in the MPLAB X IDE for the “Curiosity” board (PIC18F45K50  microcontroller). 

2. Start your C program with the “LIBRARIEs/HEADERs SECTION”section. In this section you will invoque  all  libraries  and/or  headers  neededusing  the pre-processor directive“#include”.

3. Continue  your C code with the “DIRECTIVEs SECTION”section. In this section you will make configurations using the pre-processor directive“#define”, for example: #define \_XTAL\_FREQ 1000000

4. Next write the “DATA TYPEs SECTION” section. In this section, you will make the declaration of the enumeration tag and defines the set of named integer identifiers. Use the "enum"declaration (as an alternative of #define), for example instead of use numbers 2 and 8, in your program you will usebbase, and limit, declaring: 

```c
enum exponent {  
    bbase   = 2,
    limit    = 8 
};

```

5. Now write the “FUNCTIONsDECLARATION” section. Your code must be structured. Write all function prototypesfor all user defined functions you will use. For example, if you need a function to configure the microcontroller ports, declare as follows: 

```c
void portsInit( void );
```

6. It is time for the “MAIN”section. In your C code main function drive the LEDs of your “minimum card system” to represent that a toy mole has appeared, incontinuous and random fashion, by turning on one LED out of set LED\_0 to LED\_7. To emulates the use of a mallet to hit the toy moles and send themback into their holes,player will push one push-button of your “minimum card system”, so you must be able to read the buttons state. Suppose that the mole appear at LED\_4 and player pushes in time the  button\_4, you  must indicate the match by displaying on the LEDs the "Knight Rider (larson  display)" effect. A flow diagram of the whack-a-mole code as shown:

![Figure 1](./img/fig1.png)

7. Last step is to write the “FUNCTIONs” section. In this section, you must write all function definitions of all user declared functions. Your final codestructuremust look to the concept as shown

![Figure 2](./img/fig2.png)

### Whack-a-mole: Hardware implementation.

8. Connect PortB of PIC18 to the LEDs set of your “minimum card system”. Connect PortD of the microcontroller to the push-buttons set of your “minimum card system” (Proteus). Your connection must look like shown above. 

![Figure 3](./img/fig3.png)

### Report
For this practice, add to the Result Section the following:
    - image of the BUILD SUCCESSFUL window.
    - image of each modified register for the portInit() function when you debug the code step by step. TIP: Put a breakpoint at the first line of the porInit( ) function and open the IO window (Window → Debugging → IO View). Also, modify the Conclusions Section and your names at the top of the document.
    - image of the connections between the Curiositiy board and  your  minimum  card  system (Proteus).  The  image must contain a short description, and a footnote.
    - description of the problems found and solutions.

### File uploads
Commit and push the file main.c created once you completed all the steps of the document in the repository.

### Demonstration
Record a video of the practice’s functionality and upload it on youtube. The video must contain a short explanation. 
Video: https://youtu.be/ubAMnI1avx0

## Conclusion

En esta practica segumis viendo los usos e implementaciones con MPLAB, siendo mas especificos es el programar un juego conocido como "Whac-a-mole" donde el objetivo es golpear cuando se encienda una luz usando una funcion llamada pow(). El principal problema que tuve con esta practica fue simulalor ya que pues no tenia entendio el como hacerlo ya que no contamos con nuestra Curiosity Board. A los profesores se les ocurrio de cierta manera, debido a la pandemia, utilizar un software de simulacion conocido como Protheus donde al principio pudimos ver el como podiamos diseñar circuitos como en el KiCad y de ese modo hacer una conexión entre ambos programas. Sin embargo, en el momento de intentar hacer esta practica hace unos dias habia vencido la licencia por parte de la institucion y no pude comprobar de manera simulada si funcionaba o no el codigo. 

Pero nos dimos cuenta que aunque no pudieramos interactuar con el simulador podiamos ver si habia cambios en los LATA para ver si prendia el LED y al acabo del tiempo, o en este caso brincado de linea el led se apagaba. Me hubiera gusta realizar esta practica durante la clase y con un curiosity board para poder jugar y aprender mientras lo hacia.