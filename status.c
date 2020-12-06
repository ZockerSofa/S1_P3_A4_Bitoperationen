//
// Created by janho on 05.12.2020.
//

#include "header.h"

void lamps(char lampen){
    for(int i = 1; i <= CHAR_BIT;i++){      //Formatierung fuer Lampen-Nummerierung
        printf("| L%d ",i );
    }
    printf("|\n");
    for (int j=0; j <= CHAR_BIT-1; j++){    //Ausgabe des inhalts bzw. Lampen zustands
        if((1<<j) & lampen){
            printf("| X  ");
        }else{
            printf("| -  ");
        }
    }
    printf("|\n");
    fflush(stdout);
}
