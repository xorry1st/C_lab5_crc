#include <stdio.h>

#include "my_crc.h"

int main(void){
    uint8_t payload = 0x34;
    uint8_t res_crc8 = 0;

    res_crc8 = crc8_calc(&payload, 8);
    printf("%02X\n", res_crc8);
    getchar();

    return 0;
}