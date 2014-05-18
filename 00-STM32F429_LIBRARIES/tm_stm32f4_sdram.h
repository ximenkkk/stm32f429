/**
 *	SDRAM on STM32F429 Discovery board
 *
 *	@author 	Tilen Majerle
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.com
 *	@link		http://bit.ly/1jVGY96
 *	@version 	v1.0
 *	@ide		Keil uVision
 */

#ifndef TM_SDRAM_H
#define TM_SDRAM_H 100
/**
 * Library dependencies
 * - STM32F4xx RCC
 * - STM32F4xx GPIO
 * - STM32F4xx FMC
 * - defines.h
 */
/**
 * Includes
 */
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_fmc.h"
#include "defines.h"
//SDRAM start address
#define SDRAM_START_ADR			0xD0000000
//SDRAM max memory width = 8MB
#define SDRAM_MEMORY_WIDTH		(uint32_t)0x800000

#define SDRAM_TIMEOUT			((uint32_t)0xFFFF) 

/**
 * Initialize SD ram
 *
 * Returns 0 if SDRAM was not properly configured, otherwise 1
 */
extern uint8_t TM_SDRAM_Init(void);

/**
 * Initialize SD ram used pins for FMC
 *
 * Called internally
 */
extern void TM_SDRAM_InitPins(void);

/**
 * Write 8 bit value to SDRAM
 *
 * Parameters:
 * 	- uint32_t address:
 * 		address from 0x000000 to 0x7FFFFF for 8MBytes
 * 	- uint8_t value:
 * 		value to be saved in SDRAM
 */
extern uint8_t TM_SDRAM_Write8(uint32_t address, uint8_t value);

/**
 * Read 8 bit value from SDRAM
 *
 * Parameters:
 * 	- uint32_t address
 * 		address to read from ram location
 * Return: value stored at desired location
 */
extern uint8_t TM_SDRAM_Read8(uint32_t address);

/**
 * Write 16 bit value to SDRAM
 *
 * Parameters:
 * 	- uint32_t address:
 * 		address from 0x000000 to 0x7FFFFF for 8MBytes
 * 	- uint16_t value:
 * 		value to be saved in SDRAM
 */
extern uint8_t TM_SDRAM_Write16(uint32_t address, uint16_t value);

/**
 * Read 16 bit value from SDRAM
 *
 * Parameters:
 * 	- uint32_t address
 * 		address to read from ram location
 * Return: value stored at desired location
 */
extern uint16_t TM_SDRAM_Read16(uint32_t address);

/**
 * Write 32 bit value to SDRAM
 *
 * Parameters:
 * 	- uint32_t address:
 * 		address from 0x00 to 0x7FFFFF for 8MBytes
 * 	- uint32_t value:
 * 		value to be saved in SDRAM
 */
extern uint8_t TM_SDRAM_Write32(uint32_t address, uint32_t value);

/**
 * Read 32 bit value from SDRAM
 *
 * Parameters:
 * 	- uint32_t address
 * 		address to read from ram location
 * Return: value stored at desired location
 */
extern uint32_t TM_SDRAM_Read32(uint32_t address);

#endif
