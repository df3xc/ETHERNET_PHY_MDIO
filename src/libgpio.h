/**
 * @file gpio.h
 * @author Ethan Hayon
 *
 * This file contains the headers for gpio.c
 *
 * Licensed under the MIT License (MIT)
 * See MIT-LICENSE file for more information
 */

/********************** used by Linux Application ************************/

#ifndef _LIBGPIO_GPIO_H_
#define _LIBGPIO_GPIO_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
//#include <sys/mman.h>
#include <fcntl.h>
#include "am335x.h"
#include <unistd.h>

#define HIGH (1)
#define LOW  (0)
int init(); /*!< mmap /dev/mem into memory */

void digitalInput(PIN p);
extern void digitalOutput(PIN p);
extern int digitalWrite(PIN p, uint8_t mode);
int digitalRead(PIN p);
int analogRead(PIN p);

#endif
