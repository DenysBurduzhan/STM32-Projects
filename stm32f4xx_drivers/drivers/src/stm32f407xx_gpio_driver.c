#include "stm32f407xx_gpio_driver.h"
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
			GPIOA_PCLK_EN();
		} else if (pGPIOx == GPIOB) {
			GPIOB_PCLK_EN();
		} else if (pGPIOx == GPIOC) {
			GPIOC_PCLK_EN();
		} else if (pGPIOx == GPIOD) {
			GPIOD_PCLK_EN();
		} else if (pGPIOx == GPIOE) {
			GPIOE_PCLK_EN();
		} else if (pGPIOx == GPIOF) {
			GPIOF_PCLK_EN();
		} else if (pGPIOx == GPIOG) {
			GPIOG_PCLK_EN();
		} else if (pGPIOx == GPIOH) {
			GPIOH_PCLK_EN();
		} else if (pGPIOx == GPIOI) {
			GPIOI_PCLK_EN();
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
void GPIO_DeInit(GPIO_RegDef_t *pGPIOHandle){
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
