

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define __vol volatile


#define FLASH_BASE_ADDR 0x08000000U
#define SRAM1_BASE_ADDR 0x20000000U
#define SRAM SRAM1_BASE_ADDR
#define SRAM2_BASE_ADDR 0x20001c00U
#define ROM  0x1FFF0000U


#define PERIPHERAL_BASE_ADDR 0x40000000U
#define APB1_BUS_ADDR PERIPHERAL_BASE_ADDR
#define APB2_BUS_ADDR 0x40010000U
#define AHB1_BUS_ADDR 0x40020000U
#define AHB2_BUS_ADDR 0x50000000U


//AHB1
#define GPIOA_ADDR AHB1_BUS_ADDR
#define GPIOB_ADDR 0x40020400U
#define GPIOC_ADDR 0x40020800U
#define GPIOD_ADDR 0x40020C00U
#define GPIOE_ADDR 0x40021000U
#define GPIOF_ADDR 0x40021400U
#define GPIOG_ADDR 0x40021800U
#define GPIOH_ADDR 0x40021C00U
#define GPIOI_ADDR 0x40022000U
#define GPIOJ_ADDR 0x40022400U
#define GPIOK_ADDR 0x40022800U

#define RCC_BASEADDR 0x40023800U

//APB1

#define I2C1_ADDR 0x40005400U
#define I2C2_ADDR 0x40005800U
#define I2C3_ADDR 0x40005C00U
#define SPI2_ADDR 0x40003800U
#define SPI3_ADDR 0x40003C00U
#define USART2_ADDR 0x40004400U
#define USART3_ADDR 0x40004800U
#define UART4_ADDR 0x40004C00U
#define UART5_ADDR 0x40005000U

//APB2
#define USART1_ADDR 0x40011000U
#define USART6_ADDR 0x40011400U
#define SPI1_ADDR 0x40013000U
#define SYSCFG_ADDR 0x40013800U
#define EXTI_ADDR 0x40013C00U


//Peripheral structures
//SPI1 peripheral regs
//#define SPI_CR1 (SPI1_ADDR + 0x00)
//#define SPI_CR2 (SPI1_ADDR + 0x04)
//#define SPI_SR (SPI1_ADDR + 0x08)
//#define SPI_DR (SPI1_ADDR + 0x0C)
//#define SPI_CRCPR (SPI1_ADDR + 0x10)
//#define SPI_RXCRCR (SPI1_ADDR + 0x14)
//#define SPI_TXCRCR (SPI1_ADDR + 0x18)
//#define SPI_I2SCFGR (SPI1_ADDR + 0x1C)
//#define SPI_I2SPR (SPI1_ADDR + 0x20)

typedef struct{
	__vol uint32_t MODER;
	__vol uint32_t OTYPER;
	__vol uint32_t OSPEEDR;
	__vol uint32_t PUPDR;
	__vol uint32_t IDR;
	__vol uint32_t ODR;
	__vol uint32_t BSRR;
	__vol uint32_t LCKR;
	__vol uint32_t AFRL;
	__vol uint32_t AFRH;
}GPIO_RegDef_t;

typedef struct{
	__vol uint32_t RCC_CR;
	__vol uint32_t RCC_PLLCFGR;
	__vol uint32_t RCC_CFGR;
	__vol uint32_t RCC_CIR;
	__vol uint32_t RCC_AHB1RSTR;
	__vol uint32_t RCC_AHB2RSTR;
	__vol uint32_t RCC_AHB3RSTR;
	__vol uint32_t RESERVED0;
	__vol uint32_t RCC_APB1RSTR;
	__vol uint32_t RCC_APB2RSTR;
	__vol uint32_t RESERVED1;
	__vol uint32_t RESERVED2;
	__vol uint32_t RCC_AHB1ENR;
	__vol uint32_t RCC_AHB2ENR;
	__vol uint32_t RCC_AHB3ENR;
	__vol uint32_t RESERVED3;
	__vol uint32_t RCC_APB1ENR;
	__vol uint32_t RCC_APB2ENR;
	__vol uint32_t RESERVED4;
	__vol uint32_t RESERVED5;
	__vol uint32_t RCC_AHB1LPENR;
	__vol uint32_t RCC_AHB2LPENR;
	__vol uint32_t RCC_AHB3LPENR;
	__vol uint32_t RCC_APB1LPENR;
	__vol uint32_t RCC_APB2LPENR;
	__vol uint32_t RESERVED6;
	__vol uint32_t RESERVED7;
	__vol uint32_t RCC_BDCR;
	__vol uint32_t RCC_CSR;
	__vol uint32_t RESERVED8;
	__vol uint32_t RESERVED9;
	__vol uint32_t RCC_SSCGR;
	__vol uint32_t RCC_PLLI2SCFGR;
}RCC_RegDef_t;

//defines peripheral regs for structures
#define GPIOA (GPIO_RegDef_t*)GPIOA_ADDR
#define GPIOB (GPIO_RegDef_t*)GPIOB_ADDR
#define GPIOC (GPIO_RegDef_t*)GPIOC_ADDR
#define GPIOD (GPIO_RegDef_t*)GPIOD_ADDR
#define GPIOE (GPIO_RegDef_t*)GPIOE_ADDR
#define GPIOF (GPIO_RegDef_t*)GPIOF_ADDR
#define GPIOG (GPIO_RegDef_t*)GPIOG_ADDR
#define GPIOH (GPIO_RegDef_t*)GPIOH_ADDR
#define GPIOI (GPIO_RegDef_t*)GPIOI_ADDR
#define GPIOJ (GPIO_RegDef_t*)GPIOJ_ADDR
#define GPIOK (GPIO_RegDef_t*)GPIOK_ADDR

#define RCC (RCC_RegDef_t*)RCC_BASEADDR

//GPIO_RegDef_t *gpio_a_cnfg = GPIOA;//example
//RCC_RegDef_t *rcc_cnfg = RCC;//example

//Clock enable macros for GPIOx
#define GPIOA_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN() (RCC->RCC_AHB1ENR |= (1 << 8))







#endif /* INC_STM32F407XX_H_ */


