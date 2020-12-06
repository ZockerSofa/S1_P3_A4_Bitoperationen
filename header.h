//
// Created by janho on 05.12.2020.
//

#ifndef S1_P3_A4_BITOPERATIONEN_HEADER_H
#define S1_P3_A4_BITOPERATIONEN_HEADER_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/**@function lamps gibt den Lampen-Status aus durch bit-shifting*/
void lamps(char);
/**@function insert fragt Benutzer-Eingabe ab und veraendert dementsprechend den char "lampen"*/
int insert(char* einfuegen, char lampen);

#endif //S1_P3_A4_BITOPERATIONEN_HEADER_H
