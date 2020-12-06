//
// Created by janho on 06.12.2020.
//
#include "header.h"

void bit_clear(unsigned char*val, unsigned char bit) {
    unsigned char test_val = 0x01;
    test_val = (test_val << bit);
    *val = (*val & (~test_val));
}

void bit_set(unsigned char *val, unsigned char bit) {
    unsigned char test_val = 0x01;
    test_val = (test_val << bit);
    *val = (*val | test_val);
}