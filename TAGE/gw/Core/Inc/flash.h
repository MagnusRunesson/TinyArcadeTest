#ifndef _FLASH_H_
#define _FLASH_H_

#include "stm32h7xx_hal.h"

#if __cplusplus
extern "C" {
#endif

void flash_memory_map(OSPI_HandleTypeDef *hospi1);

#ifdef __cplusplus
}
#endif

#endif
