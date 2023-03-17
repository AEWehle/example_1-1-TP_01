#include "mbed.h"
#include "arm_book_lib.h"

/*
 *@author AMetzinger 
 *@author AWehle
 *@brief utilizar el ejemplo 1 del libro para aprender a cargar un codigo a la placa
*/
int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;

// entre el punto 10 y 11 hay que conectarse con la cuenta de github,
// esto es desde source control -> tres puntitos -> connect to github
// a partir de ahi ya va a dejarte pushear
    printf("%s\n","Hello World");
    
    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
    return 0;
}