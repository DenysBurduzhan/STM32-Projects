

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

//Clock setup
void GPIO_PeriClockControl(void);

//Init and De-Init
void GPIO_Init(void);
void GPIO_DeInit(void);

//data read/write
void GPIO_ReadFronInputPin(void);
void GPIO_ReadFronInputPort(void);
void GPIO_ReadFronOutputPin(void);
void GPIO_ReadFronOutputPort(void);
void GPIO_TogglePin(void);

//ISR cnfg and handling
void GPIO_IRQConfig(void);
void GPIO_IRQHandler(void);

#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
