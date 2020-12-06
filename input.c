//
// Created by janho on 05.12.2020.
//

#include "header.h"

int insert(char einfuegen[], char lampen){
    if (strncmp(&einfuegen[1], "X", 1) == 0){
        lampen |=  (1 << (strtol(einfuegen,0,0)-1));
    }else if(strncmp(&einfuegen[1], "-", 1) == 0){
        lampen &= ~(1 << (strtol(einfuegen,0,0)-1));
    }
    return lampen;
}
