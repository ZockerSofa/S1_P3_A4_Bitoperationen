#include "header.h"

int bit_test(unsigned char val, unsigned char bit) {
    unsigned char test_val = 0x01;
    test_val = (test_val << bit);
    if ((val & test_val) == 0)
        return 0;
    else
        return 1;
}

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

int main() {
    unsigned char Lampen;
    //Lampen ausschalten
    for (int i = 0; i <= 7; i++) {
        bit_set(&Lampen, i);
    }
    char eingabe[MAX];
    do {
        printf("| L1 | L2 | L3 | L4 | L5 | L6 | L7 | L8 | \n");
        for (int i = 0; i <= 7; i++) {
            if (bit_test(Lampen, i) == 0) {
                printf("| X  ");
            } else
                printf("| -  ");
        }
        printf("|\n");
        fgets(eingabe, MAX, stdin);

        if (eingabe[1] == 'X') {
            bit_clear(&Lampen, eingabe[0] - 49);
        } else
            bit_set(&Lampen, eingabe[0] - 49);
    }
    while (eingabe[1] == 'X' || eingabe[1] == '-');
}

