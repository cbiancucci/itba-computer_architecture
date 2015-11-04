#ifndef IO_HEADER
#define IO_HEADER

#include <stdint.h>

void outb(uint16_t port, uint8_t data);

uint8_t inb(uint16_t port);

void playsound();

#endif