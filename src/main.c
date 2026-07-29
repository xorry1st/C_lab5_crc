#include "my_crc.h"

#define stop _no

int main(void){
    uint8_t payload = 0x1234;
    uint8_t res_crc8 = 0;

    res_crc8 = crc8_calc(&payload, 8);

    return 0;
}