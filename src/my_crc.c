#include "my_crc.h"

#define POLY 0x07       // порождающий полином 0011 0001
#define INIT 0x00       // начальное значение регистра CRC
#define WIDTH 8         // разрядность crc

uint8_t crc8_calc(uint8_t * payload, char datalen){
//----Классический(побитовый) алгоритм------
    uint8_t res_crc = INIT;     // переменная для результата вычисления
    uint8_t buf = *payload;     // буфер для байта нагрузки (чтобы не изменять исходные данные)
    char shifted_bit = 0;
    while(datalen--){
        shifted_bit = res_crc >> (WIDTH - 1);      // достаем бит, который будет выдвинут при сдвиге
        res_crc = ((res_crc << 1) & 0xFF) | (buf >> 7);     // двигаем влево регистр crc + добавляем один бит из полезной нагрузки
        if (shifted_bit) res_crc ^= POLY;
        buf = (buf << 1) & 0xFF;
    }
    return res_crc;
//------------------------------------------
}
