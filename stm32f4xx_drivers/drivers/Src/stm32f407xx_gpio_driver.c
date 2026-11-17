#include "../Inc/stm32f407xx_gpio_driver.h"
/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t state){
	if(state == ENABLE){
		if(pGPIOx == GPIOA){
			GPIOA_PCLK_EN();
		}else if(pGPIOx == GPIOB){
			GPIOB_PCLK_EN();
		}else if(pGPIOx == GPIOC){
			GPIOC_PCLK_EN();
		}else if(pGPIOx == GPIOD){
			GPIOD_PCLK_EN();
		}else if(pGPIOx == GPIOE){
			GPIOE_PCLK_EN();
		}else if(pGPIOx == GPIOF){
			GPIOF_PCLK_EN();
		}else if(pGPIOx == GPIOG){
			GPIOG_PCLK_EN();
		}else if(pGPIOx == GPIOH){
			GPIOH_PCLK_EN();
		}else if(pGPIOx == GPIOI){
			GPIOI_PCLK_EN();
		}
	} else {
		if (pGPIOx == GPIOA) {
			GPIOA_PCLK_DI();
		} else if (pGPIOx == GPIOB) {
			GPIOB_PCLK_DI();
		} else if (pGPIOx == GPIOC) {
			GPIOC_PCLK_DI();
		} else if (pGPIOx == GPIOD) {
			GPIOD_PCLK_DI();
		} else if (pGPIOx == GPIOE) {
			GPIOE_PCLK_DI();
		} else if (pGPIOx == GPIOF) {
			GPIOF_PCLK_DI();
		} else if (pGPIOx == GPIOG) {
			GPIOG_PCLK_DI();
		} else if (pGPIOx == GPIOH) {
			GPIOH_PCLK_DI();
		} else if (pGPIOx == GPIOI) {
			GPIOI_PCLK_DI();
		}
	}
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_Init(GPIO_handle_t *pGPIOHandle){
	uint32_t temp = 0;
	if(pGPIOHandle->GPIO_cnfg.GPIO_PinMode <= GPIO_MODE_ANALOG){
		temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinMode << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
		pGPIOHandle->pGPIOx->MODER &=~ (0x3 << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
		pGPIOHandle->pGPIOx->MODER |= temp;
	}else{
		//IT case
	}

	temp = 0;
	temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinSpeed << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->OSPEEDR &=~ (0x3 << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->OSPEEDR |= temp;

	temp = 0;
	temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinPuPd << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->PUPDR &=~ (0x3 << (2 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->PUPDR |= temp;

	temp = 0;
	temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinOPType << pGPIOHandle->GPIO_cnfg.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OTYPER &=~ (0x1 << pGPIOHandle->GPIO_cnfg.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OTYPER |= temp;

	temp = 0;
	if(pGPIOHandle->GPIO_cnfg.GPIO_PinMode == GPIO_MODE_ALTFUN){
		if(pGPIOHandle->GPIO_cnfg.GPIO_PinNumber < 8){
			temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinALTFuncMode << (4 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->AFRL &=~ (0xF << (4 * pGPIOHandle->GPIO_cnfg.GPIO_PinNumber));
			pGPIOHandle->pGPIOx->AFRL |= temp;
		}else{
			temp = (pGPIOHandle->GPIO_cnfg.GPIO_PinALTFuncMode << (4 * (pGPIOHandle->GPIO_cnfg.GPIO_PinNumber-8)));
			pGPIOHandle->pGPIOx->AFRH &=~ (0xF << (4 * (pGPIOHandle->GPIO_cnfg.GPIO_PinNumber-8)));
			pGPIOHandle->pGPIOx->AFRH |= temp;
		}
	}
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx){

	if(pGPIOx == GPIOA){
		GPIOA_RESET_PORT();
	}else if(pGPIOx == GPIOB){
		GPIOB_RESET_PORT();
	}else if(pGPIOx == GPIOC){
		GPIOC_RESET_PORT();
	}else if(pGPIOx == GPIOD){
		GPIOD_RESET_PORT();
	}else if(pGPIOx == GPIOE){
		GPIOE_RESET_PORT();
	}else if(pGPIOx == GPIOF){
		GPIOF_RESET_PORT();
	}else if(pGPIOx == GPIOG){
		GPIOG_RESET_PORT();
	}else if(pGPIOx == GPIOH){
		GPIOH_RESET_PORT();
	}else if(pGPIOx == GPIOI){
		GPIOI_RESET_PORT();
	}
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t value){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t value){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_TogglePin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t state){
	;
}

/*
 * @fn        - GPIO_PeriClockControl
 *
 * @brief     - this function enables or disables peripheral clock for GPIO port
 *
 * @param[0]  - base address of the gpio peripheral
 * @param[1]  - ENABLE or DISEBLE value
 * @param[2]  -
 *
 * @return    - none
 *
 * @Note      - none
 */
void GPIO_IRQHandler(uint8_t PinNumber){
	;
}
