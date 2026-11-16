

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

typedef struct{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinPuPd;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinALTFuncMode;
}GPIO_PinCnfg_t;

//handle structure for gpio pin
typedef struct{
	GPIO_RegDef_t *pGPIOx;
	GPIO_PinCnfg_t GPIO_cnfg;
}GPIO_handle_t;


#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
