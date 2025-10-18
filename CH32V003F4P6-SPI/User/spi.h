#ifndef __SPI_H
#define __SPI_H

#include <ch32v00x.h>
/* Chip select */
#define FLASH_CS_PIN  GPIO_Pin_0 // PD0



void SPI_FullDuplex_Init();
void spi_write(uint8_t data);
uint8_t spi_read();
void flash_select();
void flash_deselect();

#endif /* __SPI_H */