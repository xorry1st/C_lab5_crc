#ifndef MY_CRC_H
#define MY_CRC_H
#include <stdint.h>

uint8_t crc8_calc(uint8_t * payload, char datalen);     // payload - передаваемое сообщение; 
                                                        // datalen - длина сообщения в битах;

#endif