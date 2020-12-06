#include "header.h"
/**@param lampen beinhaltet alle lampen zustaende*/
unsigned char lampen;

/**@function main wechselt zwischen der Aus- und Eingabe in einer endlosschleife, die mit eingabe
 * "exit" beendet wird*/
int main() {
    char eingabe[CHAR_BIT];
    do {
        lamps(lampen);                              //Gibt Lampen Status aus
        fgets(eingabe, CHAR_BIT, stdin);
        fflush(stdin);
        if(strncmp(eingabe,"exit",4) == 0){         //Vergleicht eingabe mit 'exit'
            break;                                  //bricht programm ab bei Eingabe von 'exit'
        }
        lampen = insert(eingabe, lampen);           //fragt Benutzer eingabe ab und veraendert dementsprechend den char 'Lampen'
    }while(1);
    return 0;
}