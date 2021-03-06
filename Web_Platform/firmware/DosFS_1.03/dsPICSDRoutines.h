#ifndef _DSPICSDROUTINES_H
#define _DSPICSDROUTINES_H
//#include <stdlib.h>
#include "HardwareProfile.h"

#define SD_CS_EN()    SD_CS=0 
#define SD_CS_DIS()   SD_CS=1
#define SD_SPI_BUF    SPIBUF
#define SD_SPITXRX() 	while(!EEPROM_SPI_IF)
#define SD_SPI_Send(data) SD_SPI_BUF = data; SD_SPITXRX()


//uint32_t DFS_ReadSector(uint8_t unit, uint8_t *buffer, uint32_t sector, uint32_t count);
//uint32_t DFS_WriteSector(uint8_t unit, uint8_t *buffer, uint32_t sector, uint32_t count);

void SD_SPI_Init(void);

void SD_sendCMD(uint8_t ,uint32_t , uint8_t);

unsigned char SD_GET_Response(void);

unsigned char initSD(void);

#endif
