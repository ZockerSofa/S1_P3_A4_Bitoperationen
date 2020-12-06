//
// Created by janho on 06.12.2020.
//
#include "header.h"

int bit_test(unsigned char val, unsigned char bit) {
    unsigned char test_val = 0x01;
    test_val = (test_val << bit);
    if ((val & test_val) == 0)
        return 0;
    else
        return 1;
}