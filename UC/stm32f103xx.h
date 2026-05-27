
 @ General BIT constants
.equ	BIT0,			(0x00000001)
.equ	BIT1,			(0x00000002)
.equ	BIT2,			(0x00000004)
.equ	BIT3,			(0x00000008)
.equ	BIT4,			(0x00000010)
.equ	BIT5,			(0x00000020)
.equ	BIT6,			(0x00000040)
.equ	BIT7,			(0x00000080)
.equ	BIT8,			(0x00000100)
.equ	BIT9,			(0x00000200)
.equ	BIT10,			(0x00000400)
.equ	BIT11,			(0x00000800)
.equ	BIT12,			(0x00001000)
.equ	BIT13,			(0x00002000)
.equ	BIT14,			(0x00004000)
.equ	BIT15,			(0x00008000)
.equ	BIT16,			(0x00010000)
.equ	BIT17,			(0x00020000)
.equ	BIT18,			(0x00040000)
.equ	BIT19,			(0x00080000)
.equ	BIT20,			(0x00100000)
.equ	BIT21,			(0x00200000)
.equ	BIT22,			(0x00400000)
.equ	BIT23,			(0x00800000)
.equ	BIT24,			(0x01000000)
.equ	BIT25,			(0x02000000)
.equ	BIT26,			(0x04000000)
.equ	BIT27,			(0x08000000)
.equ	BIT28,			(0x10000000)
.equ	BIT29,			(0x20000000)
.equ	BIT30,			(0x40000000)
.equ	BIT31,			(0x80000000)


.equ    Pin0,       	 (BIT0)
.equ    Pin1,       	 (BIT1)
.equ    Pin2,       	 (BIT2)
.equ    Pin3,       	 (BIT3)
.equ    Pin4,       	 (BIT4)
.equ    Pin5,       	 (BIT5)
.equ    Pin6,       	 (BIT6)
.equ    Pin7,       	 (BIT7)
.equ    Pin8,       	 (BIT8)
.equ    Pin9,       	 (BIT9)
.equ    Pin10,      	 (BIT10)
.equ    Pin11,      	 (BIT11)
.equ    Pin12,      	 (BIT12)
.equ    Pin13,			 (BIT13)
.equ    Pin14,      	 (BIT14)
.equ    Pin15,      	 (BIT15)



@ EXTI constants

.equ EXTI_IMR_IMR0,         (BIT0)
.equ EXTI_IMR_IMR1,         (BIT1)
.equ EXTI_IMR_IMR2,         (BIT2)
.equ EXTI_IMR_IMR3,         (BIT3)
.equ EXTI_IMR_IMR4,         (BIT4)
.equ EXTI_IMR_IMR5,         (BIT5)
.equ EXTI_IMR_IMR6,         (BIT6)
.equ EXTI_IMR_IMR7,         (BIT7)
.equ EXTI_IMR_IMR8,         (BIT8)
.equ EXTI_IMR_IMR9,         (BIT9)
.equ EXTI_IMR_IMR10,        (BIT10)
.equ EXTI_IMR_IMR11,        (BIT11)
.equ EXTI_IMR_IMR12,        (BIT11)
.equ EXTI_IMR_IMR13,        (BIT13)
.equ EXTI_IMR_IMR14,        (BIT14)
.equ EXTI_IMR_IMR15,        (BIT15)
.equ EXTI_IMR_IMR16,        (BIT16)
.equ EXTI_IMR_IMR17,        (BIT17)
.equ EXTI_IMR_IMR18,        (BIT18)
.equ EXTI_IMR_IMR19,        (BIT19)

.equ EXTI_RTSR_TR0,         (BIT0)
.equ EXTI_RTSR_TR1,         (BIT1)
.equ EXTI_RTSR_TR2,         (BIT2)
.equ EXTI_RTSR_TR3,         (BIT3)
.equ EXTI_RTSR_TR4,         (BIT4)
.equ EXTI_RTSR_TR5,         (BIT5)
.equ EXTI_RTSR_TR6,         (BIT6)
.equ EXTI_RTSR_TR7,         (BIT7)
.equ EXTI_RTSR_TR8,         (BIT8)
.equ EXTI_RTSR_TR9,         (BIT9)
.equ EXTI_RTSR_TR10,        (BIT10)
.equ EXTI_RTSR_TR11,        (BIT11)
.equ EXTI_RTSR_TR12,        (BIT12)
.equ EXTI_RTSR_TR13,        (BIT13)
.equ EXTI_RTSR_TR14,        (BIT14)
.equ EXTI_RTSR_TR15,        (BIT15)
.equ EXTI_RTSR_TR16,        (BIT16)
.equ EXTI_RTSR_TR17,        (BIT17)
.equ EXTI_RTSR_TR18,        (BIT18)
.equ EXTI_RTSR_TR19,        (BIT19)


.equ EXTI_FTSR_TR0,         (BIT0)
.equ EXTI_FTSR_TR1,         (BIT1)
.equ EXTI_FTSR_TR2,         (BIT2)
.equ EXTI_FTSR_TR3,         (BIT3)
.equ EXTI_FTSR_TR4,         (BIT4)
.equ EXTI_FTSR_TR5,         (BIT5)
.equ EXTI_FTSR_TR6,         (BIT6)
.equ EXTI_FTSR_TR7,         (BIT7)
.equ EXTI_FTSR_TR8,         (BIT8)
.equ EXTI_FTSR_TR9,         (BIT9)
.equ EXTI_FTSR_TR10,        (BIT10)
.equ EXTI_FTSR_TR11,        (BIT11)
.equ EXTI_FTSR_TR12,        (BIT12)
.equ EXTI_FTSR_TR13,        (BIT13)
.equ EXTI_FTSR_TR14,        (BIT14)
.equ EXTI_FTSR_TR15,        (BIT15)
.equ EXTI_FTSR_TR16,        (BIT16)
.equ EXTI_FTSR_TR17,        (BIT17)
.equ EXTI_FTSR_TR18,        (BIT18)
.equ EXTI_FTSR_TR19,        (BIT19)




@ GPIO constants
.equ GPIO_CRL_CNF7,         (BIT31 | BIT30)
.equ GPIO_CRL_CNF6,         (BIT27 | BIT26)
.equ GPIO_CRL_CNF5,         (BIT23 | BIT22)
.equ GPIO_CRL_CNF4,         (BIT19 | BIT18)
.equ GPIO_CRL_CNF3,         (BIT15 | BIT14)
.equ GPIO_CRL_CNF2,         (BIT11 | BIT10)
.equ GPIO_CRL_CNF1,         (BIT7 | BIT6)
.equ GPIO_CRL_CNF0,         (BIT3 | BIT2)

.equ GPIO_CRL_MODE7,        (BIT29 | BIT28)
.equ GPIO_CRL_MODE6,        (BIT25 | BIT24)
.equ GPIO_CRL_MODE5,        (BIT21 | BIT20)
.equ GPIO_CRL_MODE4,        (BIT17 | BIT16)
.equ GPIO_CRL_MODE3,        (BIT13 | BIT12)
.equ GPIO_CRL_MODE2,        (BIT9 | BIT8)
.equ GPIO_CRL_MODE1,        (BIT5 | BIT4)
.equ GPIO_CRL_MODE0,        (BIT1 | BIT0)

.equ GPIO_CRL_CNF7_0,       (BIT30)
.equ GPIO_CRL_CNF7_1,       (BIT31)
.equ GPIO_CRL_CNF6_0,       (BIT26)
.equ GPIO_CRL_CNF6_1,       (BIT27)
.equ GPIO_CRL_CNF5_0,       (BIT22)
.equ GPIO_CRL_CNF5_1,       (BIT23)
.equ GPIO_CRL_CNF4_0,       (BIT18)
.equ GPIO_CRL_CNF4_1,       (BIT19)
.equ GPIO_CRL_CNF3_0,       (BIT14)
.equ GPIO_CRL_CNF3_1,       (BIT15)
.equ GPIO_CRL_CNF2_0,       (BIT10)
.equ GPIO_CRL_CNF2_1,       (BIT11)
.equ GPIO_CRL_CNF1_0,       (BIT6)
.equ GPIO_CRL_CNF1_1,       (BIT7)
.equ GPIO_CRL_CNF0_0,       (BIT2)
.equ GPIO_CRL_CNF0_1,       (BIT3)

.equ GPIO_CRL_MODE7_0,      (BIT28)
.equ GPIO_CRL_MODE7_1,      (BIT29)
.equ GPIO_CRL_MODE6_0,      (BIT24)
.equ GPIO_CRL_MODE6_1,      (BIT25)
.equ GPIO_CRL_MODE5_0,      (BIT20)
.equ GPIO_CRL_MODE5_1,      (BIT21)
.equ GPIO_CRL_MODE4_0,      (BIT16)
.equ GPIO_CRL_MODE4_1,      (BIT17)
.equ GPIO_CRL_MODE3_0,      (BIT12)
.equ GPIO_CRL_MODE3_1,      (BIT13)
.equ GPIO_CRL_MODE2_0,      (BIT8)
.equ GPIO_CRL_MODE2_1,      (BIT9)
.equ GPIO_CRL_MODE1_0,      (BIT4)
.equ GPIO_CRL_MODE1_1,      (BIT5)
.equ GPIO_CRL_MODE0_0,      (BIT0)
.equ GPIO_CRL_MODE0_1,      (BIT1)

.equ GPIO_CRH_CNF15,        (BIT31 | BIT30)
.equ GPIO_CRH_CNF14,        (BIT27 | BIT26)
.equ GPIO_CRH_CNF13,        (BIT23 | BIT22)
.equ GPIO_CRH_CNF12,        (BIT19 | BIT18)
.equ GPIO_CRH_CNF11,        (BIT15 | BIT14)
.equ GPIO_CRH_CNF10,        (BIT11 | BIT10)
.equ GPIO_CRH_CNF9,         (BIT7  | BIT6)
.equ GPIO_CRH_CNF8,         (BIT3  | BIT2)

.equ GPIO_CRH_MODE15,       (BIT29 | BIT28)
.equ GPIO_CRH_MODE14,       (BIT25 | BIT24)
.equ GPIO_CRH_MODE13,       (BIT21 | BIT20)
.equ GPIO_CRH_MODE12,       (BIT17 | BIT16)
.equ GPIO_CRH_MODE11,       (BIT13 | BIT12)
.equ GPIO_CRH_MODE10,       (BIT9  | BIT8)
.equ GPIO_CRH_MODE9,        (BIT5  | BIT4)
.equ GPIO_CRH_MODE8,        (BIT1  | BIT0)

.equ GPIO_CRH_CNF15_0,      (BIT30)
.equ GPIO_CRH_CNF15_1,      (BIT31)
.equ GPIO_CRH_CNF14_0,      (BIT26)
.equ GPIO_CRH_CNF14_1,      (BIT27)
.equ GPIO_CRH_CNF13_0,      (BIT22)
.equ GPIO_CRH_CNF13_1,      (BIT23)
.equ GPIO_CRH_CNF12_0,      (BIT18)
.equ GPIO_CRH_CNF12_1,      (BIT19)
.equ GPIO_CRH_CNF11_0,      (BIT14)
.equ GPIO_CRH_CNF11_1,      (BIT15)
.equ GPIO_CRH_CNF10_0,      (BIT10)
.equ GPIO_CRH_CNF10_1,      (BIT11)
.equ GPIO_CRH_CNF9_0,       (BIT6)
.equ GPIO_CRH_CNF9_1,       (BIT7)
.equ GPIO_CRH_CNF8_0,       (BIT2)
.equ GPIO_CRH_CNF8_1,       (BIT3)

.equ GPIO_CRH_MODE15_0,     (BIT28)
.equ GPIO_CRH_MODE15_1,     (BIT29)
.equ GPIO_CRH_MODE14_0,     (BIT24)
.equ GPIO_CRH_MODE14_1,     (BIT25)
.equ GPIO_CRH_MODE13_0,     (BIT20)
.equ GPIO_CRH_MODE13_1,     (BIT21)
.equ GPIO_CRH_MODE12_0,     (BIT16)
.equ GPIO_CRH_MODE12_1,     (BIT17)
.equ GPIO_CRH_MODE11_0,     (BIT12)
.equ GPIO_CRH_MODE11_1,     (BIT13)
.equ GPIO_CRH_MODE10_0,     (BIT8)
.equ GPIO_CRH_MODE10_1,     (BIT9)
.equ GPIO_CRH_MODE9_0,      (BIT4)
.equ GPIO_CRH_MODE9_1,      (BIT5)
.equ GPIO_CRH_MODE8_0,      (BIT0)
.equ GPIO_CRH_MODE8_1,      (BIT1)

.equ GPIO_BSRR_BR15,        (BIT15 << 16)
.equ GPIO_BSRR_BR14,        (BIT14 << 16)
.equ GPIO_BSRR_BR13,        (BIT13 << 16)
.equ GPIO_BSRR_BR12,        (BIT12 << 16)
.equ GPIO_BSRR_BR11,        (BIT11 << 16)
.equ GPIO_BSRR_BR10,        (BIT10 << 16)
.equ GPIO_BSRR_BR9,         (BIT9  << 16)
.equ GPIO_BSRR_BR8,         (BIT8  << 16)
.equ GPIO_BSRR_BR7,         (BIT7  << 16)
.equ GPIO_BSRR_BR6,         (BIT6  << 16)
.equ GPIO_BSRR_BR5,         (BIT5  << 16)
.equ GPIO_BSRR_BR4,         (BIT4  << 16)
.equ GPIO_BSRR_BR3,         (BIT3  << 16)
.equ GPIO_BSRR_BR2,         (BIT2  << 16)
.equ GPIO_BSRR_BR1,         (BIT1  << 16)
.equ GPIO_BSRR_BR0,         (BIT0  << 16)

.equ GPIO_BSRR_BS15,        (BIT15)
.equ GPIO_BSRR_BS14,        (BIT14)
.equ GPIO_BSRR_BS13,        (BIT13)
.equ GPIO_BSRR_BS12,        (BIT12)
.equ GPIO_BSRR_BS11,        (BIT11)
.equ GPIO_BSRR_BS10,        (BIT10)
.equ GPIO_BSRR_BS9,         (BIT9)
.equ GPIO_BSRR_BS8,         (BIT8)
.equ GPIO_BSRR_BS7,         (BIT7)
.equ GPIO_BSRR_BS6,         (BIT6)
.equ GPIO_BSRR_BS5,         (BIT5)
.equ GPIO_BSRR_BS4,         (BIT4)
.equ GPIO_BSRR_BS3,         (BIT3)
.equ GPIO_BSRR_BS2,         (BIT2)
.equ GPIO_BSRR_BS1,         (BIT1)
.equ GPIO_BSRR_BS0,         (BIT0)

.equ GPIO_Pin_0,            (BIT0)
.equ GPIO_Pin_1,            (BIT1)
.equ GPIO_Pin_2,            (BIT2)
.equ GPIO_Pin_3,            (BIT3)
.equ GPIO_Pin_4,            (BIT4)
.equ GPIO_Pin_5,            (BIT5)
.equ GPIO_Pin_6,            (BIT6)
.equ GPIO_Pin_7,            (BIT7)
.equ GPIO_Pin_8,            (BIT8)
.equ GPIO_Pin_9,            (BIT9)
.equ GPIO_Pin_10,           (BIT10)
.equ GPIO_Pin_11,           (BIT11)
.equ GPIO_Pin_12,           (BIT12)
.equ GPIO_Pin_13,           (BIT13)
.equ GPIO_Pin_14,           (BIT14)
.equ GPIO_Pin_15,           (BIT15)

@ RCC constants

.equ RCC_APB2ENR_IOPGEN,    (BIT8)
.equ RCC_APB2ENR_IOPFEN,    (BIT7)
.equ RCC_APB2ENR_IOPEEN,    (BIT6)
.equ RCC_APB2ENR_IOPDEN,    (BIT5)
.equ RCC_APB2ENR_IOPCEN,    (BIT4)
.equ RCC_APB2ENR_IOPBEN,    (BIT3)
.equ RCC_APB2ENR_IOPAEN,    (BIT2)


@ SysTick constants
.equ SysTick_CTRL_CLKSOURCE,(1 << 2)
.equ SysTick_CTRL_TICKINT,	(1 << 1)
.equ SysTick_CTRL_ENABLE,	(1 << 0)



.equ __CM3_REV,				(0x0200)		@ Core revision r2p0
.equ __MPU_PRESENT,			(0x00)			@ Other STM32 devices do not provide MPU
.equ __NVIC_PRIO_BITS,		(0x04)			@ STM32 uses 4 bits for the priority levels
.equ __Vendor_SysTickConfig,(0x00)			@ Set to 1 if different SysTick Config is used


@*********************************************************
@************** Interrupt number definition **************
@*********************************************************

@ Cortex-M3
.equ NonMaskableInt_IRQn,	(-14)
.equ HardFault_IRQn,		(-13)
.equ MemoryManagement_IRQn,	(-12)
.equ BusFault_IRQn,			(-11)
.equ UsageFault_IRQn,		(-10)
.equ SVCall_IRQn,			(-5)
.equ DebugMonitor_IRQn,		(-4)
.equ PenSV_IRQn,			(-2)
.equ SysTick_IRQn,			(-1)

@ STM32 specific
.equ WWDG_IRQn,				(0)
.equ PVD_IRQn,				(1)
.equ TAMPER_IRQn,			(2)
.equ RTC_IRQn,				(3)
.equ FLASH_IRQn,			(4)
.equ RCC_IRQn,				(5)

@*********************************************************
@********* Preemption Priority Group *********************
@*********************************************************
.equ NVIC_PRIORITYGROUP_0,	(0x7)		@ 0 bits for pre-emption priority; 4 bits for subpriority
.equ NVIC_PRIORITYGROUP_1,	(0x6)		@ 1 bits for pre-emption priority; 3 bits for subpriority
.equ NVIC_PRIORITYGROUP_2,	(0x5)		@ 2 bits for pre-emption priority; 2 bits for subpriority
.equ NVIC_PRIORITYGROUP_3,	(0x4)		@ 3 bits for pre-emption priority; 1 bits for subpriority
.equ NVIC_PRIORITYGROUP_4,	(0x3)		@ 4 bits for pre-emption priority; 0 bits for subpriority

@*********************************************************
@******************** Define bases ***********************
@*********************************************************

@ Core hardware
.equ SCS_BASE,				(0xE000E000)	@ Sytem Control Space Base Address
.equ ITM_BASE,				(0xE0000000)	@ ITM base address
.equ DWT_BASE,				(0xE0001000)
.equ TPI_BASE,				(0xE0040000)
.equ CoreDebug_BASE,		(0xE000EDF0)
.equ SysTick_BASE,			(SCS_BASE + 0x0010)
.equ NVIC_BASE,				(SCS_BASE + 0x0100)
.equ SCB_BASE,				(SCS_BASE + 0x0D00)	@ System Control Block base address


.equ PERIPH_BASE,           (0x40000000)

@ Bus: AHB
.equ FLASH_BASE,            (0x40022000)
.equ RCC_BASE,              (0x40021000)
.equ DMA2_BASE,             (0x40020400)
.equ DMA1_BASE,             (0x40020000)
.equ SDIO_BASE,             (0x40018000)

@ Bus: APB2
.equ TIM11_BASE,            (0x40015400)
.equ TIM10_BASE,            (0x40015000)
.equ TIM9_BASE,             (0x40014C00)
.equ ADC3_BASE,             (0x40013C00)
.equ USART1_BASE,           (0x40013800)
.equ TIM8_BASE,             (0x40013400)
.equ SPI1_BASE,             (0x40013000)
.equ TIM1_BASE,             (0x40012800)
.equ ADC2_BASE,             (0x40012800)
.equ ADC1_BASE,             (0x40012400)
.equ GPIOG_BASE,            (0x40012000)
.equ GPIOF_BASE,            (0x40011C00)
.equ GPIOE_BASE,            (0x40011800)
.equ GPIOD_BASE,            (0x40011400)
.equ GPIOC_BASE,            (0x40011000)
.equ GPIOB_BASE,            (0x40010C00)
.equ GPIOA_BASE,            (0x40010800)
.equ EXTI_BASE,             (0x40010400)
.equ AFIO_BASE,             (0x40010000)

@ Bus: APB1
.equ DAC_BASE,              (0x40007400)
.equ PWR_BASE,              (0x40007000)
.equ BKP_BASE,              (0x40006C00)
.equ bxCAN1_BASE,           (0x40006400)
.equ bxCAN2_BASE,           (0x40006800)
.equ SharedUSBCANSRAM_BASE, (0x40006000)
.equ I2C2_BASE,             (0x40005800)
.equ I2C1_BASE,             (0x40005400)
.equ UART5_BASE,            (0x40005000)
.equ UART4_BASE,            (0x40004C00)
.equ USART3_BASE,           (0x40004800)
.equ USART2_BASE,           (0x40004400)
.equ SPI3_BASE,             (0x40003C00)
.equ SPI2_BASE,             (0x40003800)
.equ IWDG_BASE,             (0x40003000)
.equ WWDG_BASE,             (0x40002C00)
.equ RTC_BASE,              (0x40002800)
.equ TIM14_BASE,            (0x40002000)
.equ TIM13_BASE,            (0x40001C00)
.equ TIM12_BASE,            (0x40001800)
.equ TIM7_BASE,             (0x40001400)
.equ TIM6_BASE,             (0x40001000)
.equ TIM5_BASE,             (0x40000C00)
.equ TIM4_BASE,             (0x40000800)
.equ TIM3_BASE,             (0x40000400)
.equ TIM2_BASE,             (0x40000000)



@*********************************************************
@***************** Register addresses ********************
@*********************************************************

.equ SCB_CPUID,				(SCB_BASE + 0x00)	@ (R/ ) CPUID base register
.equ SCB_ICSR,				(SCB_BASE + 0x04)	@ (R/W) Interrupt Control and State register
.equ SCB_VTOR,				(SCB_BASE + 0x08)	@ (R/W) Vector Table Offset register
.equ SCB_AIRCR,				(SCB_BASE + 0x0C)	@ (R/W) Application Interrrupt and Reset register
.equ SCB_SCR,				(SCB_BASE + 0x10)	@ (R/W) System Control register
.equ SCB_CCR,				(SCB_BASE + 0x14)	@ (R/W) Configuration Control register
.equ SCB_SHP_BASE,			(SCB_BASE + 0x18)	@ (R/W) System Handlers Priority registers
.equ SCB_SHCSR,				(SCB_BASE + 0x24)	@ (R/W) System Handler Control and State register
.equ SCB_CFSR,				(SCB_BASE + 0x28)	@ (R/W) Configurable Fault Status register
.equ SCB_HFSR,				(SCB_BASE + 0x2C)	@ (R/W) HardFault Status register
.equ SCB_DFSR,				(SCB_BASE + 0x30)	@ (R/W) Debug Fault Status register
.equ SCB_MMFAR,				(SCB_BASE + 0x34)	@ (R/W) MemManage Fault address register
.equ SCB_BFAR,				(SCB_BASE + 0x38)	@ (R/W) BusFault address register
.equ SCB_AFSR,				(SCB_BASE + 0x3C)	@ (R/W) Auxiliary Fault Status register
.equ SCB_PFR_BASE,			(SCB_BASE + 0x40)	@ (R/ ) Processor Feature register
.equ SCB_DFR,				(SCB_BASE + 0x48)	@ (R/ ) Debug Feature register
.equ SCB_ADR,				(SCB_BASE + 0x4C)	@ (R/ ) Auxiliary Feature register
.equ SCB_MMFR_BASE,			(SCB_BASE + 0x50)	@ (R/ ) Memory Model Feature register
.equ SCB_ISAR_BASE,			(SCB_BASE + 0x60)	@ (R/ ) Instruction Set Attributes register
.equ SCB_CPACR,				(SCB_BASE + 0x88)	@ (R/ ) Coprocessor Access Control Register

.equ SCB_SHP_SysTick_IRQn,	(SCB_SHP_BASE + 11) @(SCB_SHP_BASE + ((SysTick_IRQn) & 0xF) - 4)

.equ SysTick_CTRL,			(SysTick_BASE + 0x00)
.equ SysTick_LOAD,			(SysTick_BASE + 0x04)
.equ SysTick_VAL,			(SysTick_BASE + 0x08)
.equ SysTick_CALIB,			(Systick_BASE + 0x0C)

.equ FLASH_ACR,				(FLASH_BASE + 0x00)

.equ CRC_DR,                (CRC_BASE + 0x00)
.equ CRC_IDR,               (CRC_BASE + 0x04)
.equ CRC_CR,                (CRC_BASE + 0x08)

.equ PWR_CR,                (PWR_BASE + 0x00)
.equ PWR_CSR,               (PWR_BASE + 0x04)

.equ BKP_DR1,               (BKP_BASE + 0x04)
.equ BKP_DR2,               (BKP_BASE + 0x08)
.equ BKP_DR3,               (BKP_BASE + 0x0C)
.equ BKP_DR4,               (BKP_BASE + 0x10)
.equ BKP_DR5,               (BKP_BASE + 0x14)
.equ BKP_DR6,               (BKP_BASE + 0x18)
.equ BKP_DR7,               (BKP_BASE + 0x1C)
.equ BKP_DR8,               (BKP_BASE + 0x20)
.equ BKP_DR9,               (BKP_BASE + 0x24)
.equ BKP_DR10,              (BKP_BASE + 0x28)
.equ BKP_RTCCR,             (BKP_BASE + 0x2C)
.equ BKP_CR,                (BKP_BASE + 0x30)
.equ BKP_CSR,               (BKP_BASE + 0x34)
.equ BKP_DR11,              (BKP_BASE + 0x40)
.equ BKP_DR12,              (BKP_BASE + 0x44)
.equ BKP_DR13,              (BKP_BASE + 0x48)
.equ BKP_DR14,              (BKP_BASE + 0x4C)
.equ BKP_DR15,              (BKP_BASE + 0x50)
.equ BKP_DR16,              (BKP_BASE + 0x54)
.equ BKP_DR17,              (BKP_BASE + 0x58)
.equ BKP_DR18,              (BKP_BASE + 0x5C)
.equ BKP_DR19,              (BKP_BASE + 0x60)
.equ BKP_DR20,              (BKP_BASE + 0x64)
.equ BKP_DR21,              (BKP_BASE + 0x68)
.equ BKP_DR22,              (BKP_BASE + 0x6C)
.equ BKP_DR23,              (BKP_BASE + 0x70)
.equ BKP_DR24,              (BKP_BASE + 0x74)
.equ BKP_DR25,              (BKP_BASE + 0x78)
.equ BKP_DR26,              (BKP_BASE + 0x7C)
.equ BKP_DR27,              (BKP_BASE + 0x80)
.equ BKP_DR28,              (BKP_BASE + 0x84)
.equ BKP_DR29,              (BKP_BASE + 0x88)
.equ BKP_DR30,              (BKP_BASE + 0x8C)
.equ BKP_DR31,              (BKP_BASE + 0x90)
.equ BKP_DR32,              (BKP_BASE + 0x94)
.equ BKP_DR33,              (BKP_BASE + 0x98)
.equ BKP_DR34,              (BKP_BASE + 0x9C)
.equ BKP_DR35,              (BKP_BASE + 0xA0)
.equ BKP_DR36,              (BKP_BASE + 0xA4)
.equ BKP_DR37,              (BKP_BASE + 0xA8)
.equ BKP_DR38,              (BKP_BASE + 0xAC)
.equ BKP_DR39,              (BKP_BASE + 0xB0)
.equ BKP_DR40,              (BKP_BASE + 0xB4)
.equ BKP_DR41,              (BKP_BASE + 0xB8)
.equ BKP_DR42,              (BKP_BASE + 0xBC)


.equ RCC_CR_Addr,                (RCC_BASE + 0x00)
.equ RCC_CFGR_Addr,              (RCC_BASE + 0x04)
.equ RCC_CIR_Addr,               (RCC_BASE + 0x08)
.equ RCC_APB2RSTR_Addr,          (RCC_BASE + 0x0C)
.equ RCC_APB1RSTR_Addr,          (RCC_BASE + 0x10)
.equ RCC_AHBENR_Addr,            (RCC_BASE + 0x14)
.equ RCC_APB2ENR_Addr,           (RCC_BASE + 0x18)
.equ RCC_APB1ENR_Addr,           (RCC_BASE + 0x1C)
.equ RCC_BDCR_Addr,              (RCC_BASE + 0x20)
.equ RCC_CSR_Addr,               (RCC_BASE + 0x24)


.equ GPIOC_CRL,             (GPIOC_BASE + 0x00)
.equ GPIOC_CRH,             (GPIOC_BASE + 0x04)
.equ GPIOC_IDR,             (GPIOC_BASE + 0x08)
.equ GPIOC_ODR,             (GPIOC_BASE + 0x0C)
.equ GPIOC_BSRR,            (GPIOC_BASE + 0x10)
.equ GPIOC_BRR,             (GPIOC_BASE + 0x14)
.equ GPIOC_LCKR,            (GPIOC_BASE + 0x18)

.equ GPIOB_CRL,             (GPIOB_BASE + 0x00)
.equ GPIOB_CRH,             (GPIOB_BASE + 0x04)
.equ GPIOB_IDR,             (GPIOB_BASE + 0x08)
.equ GPIOB_ODR,             (GPIOB_BASE + 0x0C)
.equ GPIOB_BSRR,            (GPIOB_BASE + 0x10)
.equ GPIOB_BRR,             (GPIOB_BASE + 0x14)
.equ GPIOB_LCKR,            (GPIOB_BASE + 0x18)

.equ GPIOA_CRL,             (GPIOA_BASE + 0x00)
.equ GPIOA_CRH,             (GPIOA_BASE + 0x04)
.equ GPIOA_IDR,             (GPIOA_BASE + 0x08)
.equ GPIOA_ODR,             (GPIOA_BASE + 0x0C)
.equ GPIOA_BSRR,            (GPIOA_BASE + 0x10)
.equ GPIOA_BRR,             (GPIOA_BASE + 0x14)
.equ GPIOA_LCKR,            (GPIOA_BASE + 0x18)

.equ AFIO_EVCR,             (AFIO_BASE + 0x00)
.equ AFIO_MAPR,             (AFIO_BASE + 0x04)
.equ AFIO_EXTICR1,          (AFIO_BASE + 0x08)
.equ AFIO_EXTICR2,          (AFIO_BASE + 0x0C)
.equ AFIO_EXTICR3,          (AFIO_BASE + 0x10)
.equ AFIO_EXTICR4,          (AFIO_BASE + 0x14)
.equ AFIO_MAPR2,            (AFIO_BASE + 0x1C)

.equ EXTI_IMR,              (EXTI_BASE + 0x00)
.equ EXTI_EMR,              (EXTI_BASE + 0x04)
.equ EXTI_RTSR,             (EXTI_BASE + 0x08)
.equ EXTI_FTSR,       		(EXTI_BASE + 0x0C)
.equ EXTI_SWIER,            (EXTI_BASE + 0x10)
.equ EXTI_PR,               (EXTI_BASE + 0x14)

.equ ADC1_SR,               (ADC1_BASE + 0x00)
.equ ADC1_CR1,              (ADC1_BASE + 0x04)
.equ ADC1_CR2,              (ADC1_BASE + 0x08)
.equ ADC1_SMPR1,            (ADC1_BASE + 0x0C)
.equ ADC1_SMPR2,            (ADC1_BASE + 0x10)
.equ ADC1_JOFR1,            (ADC1_BASE + 0x14)
.equ ADC1_JOFR2,            (ADC1_BASE + 0x18)
.equ ADC1_JOFR3,            (ADC1_BASE + 0x1C)
.equ ADC1_JOFR4,            (ADC1_BASE + 0x20)
.equ ADC1_HTR,              (ADC1_BASE + 0x24)
.equ ADC1_LTR,              (ADC1_BASE + 0x28)
.equ ADC1_SQR1,             (ADC1_BASE + 0x2C)
.equ ADC1_SQR2,             (ADC1_BASE + 0x30)
.equ ADC1_SQR3,             (ADC1_BASE + 0x34)
.equ ADC1_JSQR,             (ADC1_BASE + 0x38)
.equ ADC1_JDR1,             (ADC1_BASE + 0x3C)
.equ ADC1_JDR2,             (ADC1_BASE + 0x40)
.equ ADC1_JDR3,             (ADC1_BASE + 0x44)
.equ ADC1_JDR4,             (ADC1_BASE + 0x48)
.equ ADC1_DR,               (ADC1_BASE + 0x4C)

.equ ADC2_SR,               (ADC2_BASE + 0x00)
.equ ADC2_CR1,              (ADC2_BASE + 0x04)
.equ ADC2_CR2,              (ADC2_BASE + 0x08)
.equ ADC2_SMPR1,            (ADC2_BASE + 0x0C)
.equ ADC2_SMPR2,            (ADC2_BASE + 0x10)
.equ ADC2_JOFR1,            (ADC2_BASE + 0x14)
.equ ADC2_JOFR2,            (ADC2_BASE + 0x18)
.equ ADC2_JOFR3,            (ADC2_BASE + 0x1C)
.equ ADC2_JOFR4,            (ADC2_BASE + 0x20)
.equ ADC2_HTR,              (ADC2_BASE + 0x24)
.equ ADC2_LTR,              (ADC2_BASE + 0x28)
.equ ADC2_SQR1,             (ADC2_BASE + 0x2C)
.equ ADC2_SQR2,             (ADC2_BASE + 0x30)
.equ ADC2_SQR3,             (ADC2_BASE + 0x34)
.equ ADC2_JSQR,             (ADC2_BASE + 0x38)
.equ ADC2_JDR1,             (ADC2_BASE + 0x3C)
.equ ADC2_JDR2,             (ADC2_BASE + 0x40)
.equ ADC2_JDR3,             (ADC2_BASE + 0x44)
.equ ADC2_JDR4,             (ADC2_BASE + 0x48)
.equ ADC2_DR,               (ADC2_BASE + 0x4C)

.equ ADC3_SR,               (ADC3_BASE + 0x00)
.equ ADC3_CR1,              (ADC3_BASE + 0x04)
.equ ADC3_CR2,              (ADC3_BASE + 0x08)
.equ ADC3_SMPR1,            (ADC3_BASE + 0x0C)
.equ ADC3_SMPR2,            (ADC3_BASE + 0x10)
.equ ADC3_JOFR1,            (ADC3_BASE + 0x14)
.equ ADC3_JOFR2,            (ADC3_BASE + 0x18)
.equ ADC3_JOFR3,            (ADC3_BASE + 0x1C)
.equ ADC3_JOFR4,            (ADC3_BASE + 0x20)
.equ ADC3_HTR,              (ADC3_BASE + 0x24)
.equ ADC3_LTR,              (ADC3_BASE + 0x28)
.equ ADC3_SQR1,             (ADC3_BASE + 0x2C)
.equ ADC3_SQR2,             (ADC3_BASE + 0x30)
.equ ADC3_SQR3,             (ADC3_BASE + 0x34)
.equ ADC3_JSQR,             (ADC3_BASE + 0x38)
.equ ADC3_JDR1,             (ADC3_BASE + 0x3C)
.equ ADC3_JDR2,             (ADC3_BASE + 0x40)
.equ ADC3_JDR3,             (ADC3_BASE + 0x44)
.equ ADC3_JDR4,             (ADC3_BASE + 0x48)
.equ ADC3_DR,               (ADC3_BASE + 0x4C)

.equ TIM1_CR1,              (TIM1_BASE + 0x00)
.equ TIM1_CR2,              (TIM1_BASE + 0x04)
.equ TIM1_SMCR,             (TIM1_BASE + 0x08)
.equ TIM1_DIER,             (TIM1_BASE + 0x0C)
.equ TIM1_SR,               (TIM1_BASE + 0x10)
.equ TIM1_EGR,              (TIM1_BASE + 0x14)
.equ TIM1_CCMR1,            (TIM1_BASE + 0x18)
.equ TIM1_CCMR2,            (TIM1_BASE + 0x1C)
.equ TIM1_CCER,             (TIM1_BASE + 0x20)
.equ TIM1_CNT,              (TIM1_BASE + 0x24)
.equ TIM1_PSC,              (TIM1_BASE + 0x28)
.equ TIM1_ARR,              (TIM1_BASE + 0x2C)
.equ TIM1_RCR,              (TIM1_BASE + 0x30)
.equ TIM1_CCR1,             (TIM1_BASE + 0x34)
.equ TIM1_CCR2,             (TIM1_BASE + 0x38)
.equ TIM1_CCR3,             (TIM1_BASE + 0x3C)
.equ TIM1_CCR4,             (TIM1_BASE + 0x40)
.equ TIM1_BDTR,             (TIM1_BASE + 0x44)
.equ TIM1_DCR,              (TIM1_BASE + 0x48)
.equ TIM1_DMAR,             (TIM1_BASE + 0x4C)

.equ TIM2_CR1,              (TIM2_BASE + 0x00)
.equ TIM2_CR2,              (TIM2_BASE + 0x04)
.equ TIM2_SMCR,             (TIM2_BASE + 0x08)
.equ TIM2_DIER,             (TIM2_BASE + 0x0C)
.equ TIM2_SR,               (TIM2_BASE + 0x10)
.equ TIM2_EGR,              (TIM2_BASE + 0x14)
.equ TIM2_CCMR1,            (TIM2_BASE + 0x18)
.equ TIM2_CCMR2,            (TIM2_BASE + 0x1C)
.equ TIM2_CCER,             (TIM2_BASE + 0x20)
.equ TIM2_CNT,              (TIM2_BASE + 0x24)
.equ TIM2_PSC,              (TIM2_BASE + 0x28)
.equ TIM2_ARR,              (TIM2_BASE + 0x2C)
.equ TIM2_RCR,              (TIM2_BASE + 0x30)
.equ TIM2_CCR1,             (TIM2_BASE + 0x34)
.equ TIM2_CCR2,             (TIM2_BASE + 0x38)
.equ TIM2_CCR3,             (TIM2_BASE + 0x3C)
.equ TIM2_CCR4,             (TIM2_BASE + 0x40)
.equ TIM2_BDTR,             (TIM2_BASE + 0x44)
.equ TIM2_DCR,              (TIM2_BASE + 0x48)
.equ TIM2_DMAR,             (TIM2_BASE + 0x4C)

.equ TIM8_CR1,              (TIM8_BASE + 0x00)
.equ TIM8_CR2,              (TIM8_BASE + 0x04)
.equ TIM8_SMCR,             (TIM8_BASE + 0x08)
.equ TIM8_DIER,             (TIM8_BASE + 0x0C)
.equ TIM8_SR,               (TIM8_BASE + 0x10)
.equ TIM8_EGR,              (TIM8_BASE + 0x14)
.equ TIM8_CCMR1,            (TIM8_BASE + 0x18)
.equ TIM8_CCMR2,            (TIM8_BASE + 0x1C)
.equ TIM8_CCER,             (TIM8_BASE + 0x20)
.equ TIM8_CNT,              (TIM8_BASE + 0x24)
.equ TIM8_PSC,              (TIM8_BASE + 0x28)
.equ TIM8_ARR,              (TIM8_BASE + 0x2C)
.equ TIM8_RCR,              (TIM8_BASE + 0x30)
.equ TIM8_CCR1,             (TIM8_BASE + 0x34)
.equ TIM8_CCR2,             (TIM8_BASE + 0x38)
.equ TIM8_CCR3,             (TIM8_BASE + 0x3C)
.equ TIM8_CCR4,             (TIM8_BASE + 0x40)
.equ TIM8_BDTR,             (TIM8_BASE + 0x44)
.equ TIM8_DCR,              (TIM8_BASE + 0x48)
.equ TIM8_DMAR,             (TIM8_BASE + 0x4C)

@*********************************************************
@***************** Defining constants ********************
@*********************************************************


@ FLASH constants
.equ FLASH_ACR_PRFTBS,		(BIT5)
.equ FLASH_ACR_PRFTBE,		(BIT4)
.equ FLASH_ACR_HLFCYA,		(BIT3)
.equ FLASH_ACR_LATENCY,		(BIT2 | BIT1 | BIT0)

.equ FLASH_ACR_LATENCY_0,	(BIT0)
.equ FLASH_ACR_LATENCY_1,	(BIT1)
.equ FLASH_ACR_LATENCY_2,	(BIT2)


/**************************************************************************//**
 * @file     core_cm3.h
 * @brief    CMSIS Cortex-M3 Core Peripheral Access Layer Header File
 * @version  V5.0.8
 * @date     04. June 2018
 ******************************************************************************/

.equ	SCS_BASE         ,   (0xE000E000UL)                            /*!< System Control Space Base Address */
.equ	ITM_BASE         ,   (0xE0000000UL)                            /*!< ITM Base Address */
.equ	DWT_BASE         ,   (0xE0001000UL)                            /*!< DWT Base Address */
.equ	TPI_BASE         ,   (0xE0040000UL)                            /*!< TPI Base Address */
.equ	CoreDebug_BASE   ,   (0xE000EDF0UL)                            /*!< Core Debug Base Address */
.equ	SysTick_BASE     ,   (SCS_BASE +  0x0010UL)                    /*!< SysTick Base Address */
.equ	NVIC_BASE        ,   (SCS_BASE +  0x0100UL)                    /*!< NVIC Base Address */
.equ	SCB_BASE         ,   (SCS_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */


//typedef struct
//{
//  __IOM uint32_t ISER[8U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
//        uint32_t RESERVED0[24U];
//  __IOM uint32_t ICER[8U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
//        uint32_t RSERVED1[24U];
//  __IOM uint32_t ISPR[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
//        uint32_t RESERVED2[24U];
//  __IOM uint32_t ICPR[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
//        uint32_t RESERVED3[24U];
//  __IOM uint32_t IABR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
//        uint32_t RESERVED4[56U];
//  __IOM uint8_t  IP[240U];               /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
//       uint32_t RESERVED5[644U];
//  __OM  uint32_t STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
//}  NVIC_Type;
.equ	NVIC_ISER1    ,    (NVIC_BASE  +  0x00) // NVIC->ISER[0]
.equ	NVIC_ISER2    ,    (NVIC_BASE  +  0x04) // NVIC->ISER[1]

.equ	NVIC_ICER1    ,    (NVIC_BASE  +  0x80) // NVIC->ICER[0] //128
.equ	NVIC_ICER2    ,    (NVIC_BASE  +  0x84) // NVIC->ICER[1] //132

.equ	NVIC    ,     NVIC_BASE

/**
  ******************************************************************************
  * @file    stm32f103xb.h
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M3 Device Peripheral Access Layer Header File.
  *          This file contains all the peripheral register's definitions bits
  *          definitions and memory mapping for STM32F1xx devices.
  *
  *          This file contains:
  *           - Data structures and the address mapping for all peripherals
  *           - Peripheral's registers declarations and bits definition
  *           - Macros to access peripheral's registers hardware
  *
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software it is provided AS-IS.
  *
  ******************************************************************************






/** @addtogroup Configuration_section_for_CMSIS
  * @{
  */
/**
  * @brief Configuration of the Cortex-M3 Processor and Core Peripherals
 */
.equ	__CM3_REV,				0x0200U  /*!< Core Revision r2p0                           */
.equ	__MPU_PRESENT,			0        /*!< Other STM32 devices does not provide an MPU  */
.equ	__NVIC_PRIO_BITS,		4U       /*!< STM32 uses 4 Bits for the Priority Levels    */
.equ	__Vendor_SysTickConfig,	0        /*!< Set to 1 if different SysTick Config is used */



/** @addtogroup Peripheral_interrupt_number_definition
  * @{
  */

/**
 * @brief STM32F10x Interrupt Number Definition according to the selected device
 *        in @ref Library_configuration_section
 */

 /*!< Interrupt Number Definition */
//typedef enum
/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
.equ	NonMaskableInt_IRQn,	-14    /*!< 2 Non Maskable Interrupt                             */
.equ	HardFault_IRQn,			-13    /*!< 3 Cortex-M3 Hard Fault Interrupt                     */
.equ	MemoryManagement_IRQn,	-12    /*!< 4 Cortex-M3 Memory Management Interrupt              */
.equ	BusFault_IRQn,			-11    /*!< 5 Cortex-M3 Bus Fault Interrupt                      */
.equ	UsageFault_IRQn,		-10    /*!< 6 Cortex-M3 Usage Fault Interrupt                    */
.equ	SVCall_IRQn,			-5     /*!< 11 Cortex-M3 SV Call Interrupt                       */
.equ	DebugMonitor_IRQn,		-4     /*!< 12 Cortex-M3 Debug Monitor Interrupt                 */
.equ	PendSV_IRQn,			-2     /*!< 14 Cortex-M3 Pend SV Interrupt                       */
.equ	SysTick_IRQn,			-1     /*!< 15 Cortex-M3 System Tick Interrupt                   */

/******  STM32 specific Interrupt Numbers *********************************************************/
.equ	WWDG_IRQn,				0      /*!< Window WatchDog Interrupt                            */
.equ	PVD_IRQn,				1      /*!< PVD through EXTI Line detection Interrupt            */
.equ	TAMPER_IRQn,			2      /*!< Tamper Interrupt                                     */
.equ	RTC_IRQn,				3      /*!< RTC global Interrupt                                 */
.equ	FLASH_IRQn,				4      /*!< FLASH global Interrupt                               */
.equ	RCC_IRQn,				5      /*!< RCC global Interrupt                                 */
.equ	EXTI0_IRQn,				6      /*!< EXTI Line0 Interrupt                                 */
.equ	EXTI1_IRQn,				7      /*!< EXTI Line1 Interrupt                                 */
.equ	EXTI2_IRQn,				8      /*!< EXTI Line2 Interrupt                                 */
.equ	EXTI3_IRQn,				9      /*!< EXTI Line3 Interrupt                                 */
.equ	EXTI4_IRQn,				10     /*!< EXTI Line4 Interrupt                                 */
.equ	DMA1_Channel1_IRQn,		11     /*!< DMA1 Channel 1 global Interrupt                      */
.equ	DMA1_Channel2_IRQn,		12     /*!< DMA1 Channel 2 global Interrupt                      */
.equ	DMA1_Channel3_IRQn,		13     /*!< DMA1 Channel 3 global Interrupt                      */
.equ	DMA1_Channel4_IRQn,		14     /*!< DMA1 Channel 4 global Interrupt                      */
.equ	DMA1_Channel5_IRQn,		15     /*!< DMA1 Channel 5 global Interrupt                      */
.equ	DMA1_Channel6_IRQn,		16     /*!< DMA1 Channel 6 global Interrupt                      */
.equ	DMA1_Channel7_IRQn,		17     /*!< DMA1 Channel 7 global Interrupt                      */
.equ	ADC1_2_IRQn,			18     /*!< ADC1 and ADC2 global Interrupt                       */
.equ	USB_HP_CAN1_TX_IRQn,	19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
.equ	USB_LP_CAN1_RX0_IRQn,	20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
.equ	CAN1_RX1_IRQn,			21     /*!< CAN1 RX1 Interrupt                                   */
.equ	CAN1_SCE_IRQn,			22     /*!< CAN1 SCE Interrupt                                   */
.equ	EXTI9_5_IRQn,			23     /*!< External Line[9:5] Interrupts                        */
.equ	TIM1_BRK_IRQn,			24     /*!< TIM1 Break Interrupt                                 */
.equ	TIM1_UP_IRQn,			25     /*!< TIM1 Update Interrupt                                */
.equ	TIM1_TRG_COM_IRQn,		26     /*!< TIM1 Trigger and Commutation Interrupt               */
.equ	TIM1_CC_IRQn,			27     /*!< TIM1 Capture Compare Interrupt                       */
.equ	TIM2_IRQn,				28     /*!< TIM2 global Interrupt                                */
.equ	TIM3_IRQn,				29     /*!< TIM3 global Interrupt                                */
.equ	TIM4_IRQn,				30     /*!< TIM4 global Interrupt                                */
.equ	I2C1_EV_IRQn,			31     /*!< I2C1 Event Interrupt                                 */
.equ	I2C1_ER_IRQn,			32     /*!< I2C1 Error Interrupt                                 */
.equ	I2C2_EV_IRQn,			33     /*!< I2C2 Event Interrupt                                 */
.equ	I2C2_ER_IRQn,			34     /*!< I2C2 Error Interrupt                                 */
.equ	SPI1_IRQn,				35     /*!< SPI1 global Interrupt                                */
.equ	SPI2_IRQn,				36     /*!< SPI2 global Interrupt                                */
.equ	USART1_IRQn,			37     /*!< USART1 global Interrupt                              */
.equ	USART2_IRQn,			38     /*!< USART2 global Interrupt                              */
.equ	USART3_IRQn,			39     /*!< USART3 global Interrupt                              */
.equ	EXTI15_10_IRQn,			40     /*!< External Line[15:10] Interrupts                      */
.equ	RTC_Alarm_IRQn,			41     /*!< RTC Alarm through EXTI Line Interrupt                */
.equ	USBWakeUp_IRQn,			42     /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */
//IRQn_Type

//#include "core_cm3.h"
//#include "system_stm32f1xx.h"
//#include <stdint.h>

/** @addtogroup Peripheral_registers_structures
  * @{
  */


//brief Analog to Digital Converter
.equ	ADC_SR,		0
.equ	ADC_CR1,	4
.equ	ADC_CR2,	8
.equ	ADC_SMPR1,	12
.equ	ADC_SMPR2,	16
.equ	ADC_JOFR1,	20
.equ	ADC_JOFR2,	24
.equ	ADC_JOFR3,	28
.equ	ADC_JOFR4,	32
.equ	ADC_HTR,	36
.equ	ADC_LTR,	40
.equ	ADC_SQR1,	44
.equ	ADC_SQR2,	48
.equ	ADC_SQR3,	52
.equ	ADC_JSQR,	56
.equ	ADC_JDR1,	60
.equ	ADC_JDR2,	64
.equ	ADC_JDR3,	68
.equ	ADC_JDR4,	72
.equ	ADC_DR,		76
//ADC_TypeDef



.equ	ADC_Common_SR,	0  /*!< ADC status register    used for ADC multimode (bits common to several ADC instances). Address offset: ADC1 base address         */
.equ	ADC_Common_CR1,	4  /*!< ADC control register 1 used for ADC multimode (bits common to several ADC instances). Address offset: ADC1 base address + 0x04  */
.equ	ADC_Common_CR2,	8  /*!< ADC control register 2 used for ADC multimode (bits common to several ADC instances). Address offset: ADC1 base address + 0x08  */
//RESERVED[16]
.equ	ADC_Common_DR,	76 /*!< ADC data register      used for ADC multimode (bits common to several ADC instances). Address offset: ADC1 base address + 0x4C  */
//ADC_Common_TypeDef


//brief Backup Registers
//RESERVED0	  		0
.equ	BKP_DR1,	4
.equ	BKP_DR2,	8
.equ	BKP_DR3,	12
.equ	BKP_DR4,	16
.equ	BKP_DR5,	20
.equ	BKP_DR6,	24
.equ	BKP_DR7,	28
.equ	BKP_DR8,	32
.equ	BKP_DR9,	36
.equ	BKP_DR10,	40
.equ	BKP_RTCCR,	44
.equ	BKP_CR,		48
.equ	BKP_CSR,	52
//BKP_TypeDef

/**
  * @brief Controller Area Network TxMailBox
  */



.equ	CAN_TxMailBox_TIR,	0
.equ	CAN_TxMailBox_TDTR,	4
.equ	CAN_TxMailBox_TDLR,	8
.equ	CAN_TxMailBox_TDHR,	12
//CAN_TxMailBox_TypeDef


//brief Controller Area Network FIFOMailBox
 .equ	CAN_FIFOMailBox_RIR,	0
.equ	CAN_FIFOMailBox_RDTR,	4
.equ	CAN_FIFOMailBox_RDLR,	8
.equ	CAN_FIFOMailBox_RDHR,	12
//CAN_FIFOMailBox_TypeDef


//brief Controller Area Network FilterRegister
.equ	CAN_FilterRegister_FR1,	0
.equ	CAN_FilterRegister_FR2,	4
//CAN_FilterRegister_TypeDef


//brief Controller Area Network
.equ	CAN_MCR,	0
.equ	CAN_MSR,	4
.equ	CAN_TSR,	8
.equ	CAN_RF0R,	12
.equ	CAN_RF1R,	16
.equ	CAN_IER,	20
.equ	CAN_ESR,	24
.equ	CAN_BTR,	28
//RESERVED0[88]
//.equ CAN_TxMailBox_TypeDef sTxMailBox[3]
//.equ  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2]
//RESERVED1[12]
//.equ FMR
//.equ FM1R
//RESERVED2
//.equ FS1R
//RESERVED3
//.equ FFA1R
//RESERVED4
//.equ FA1R
//RESERVED5[8]
//.equ  CAN_FilterRegister_TypeDef sFilterRegister[14]
//CAN_TypeDef


//brief CRC calculation unit
.equ	CRC_DR,		0x00  /*!< CRC Data register                            Address offset: 0x00 */
.equ	CRC_IDR,	0x04  /*IO uint8_t!< CRC Independent data register Address offset:      0x04 */
//RESERVED0  		0x05  /*!< uint8_t       Reserved                       Address offset: 0x05 */
//RESERVED1 	 	0x06  /*!< uint16_t      Reserved                       Address offset: 0x06 */
.equ	CRC_CR,		0x08  /*!< CRC Control register                         Address offset: 0x08 */
//CRC_TypeDef


//brief Debug MCU
.equ	DBGMCU_IDCODE,	0
.equ	DBGMCU_CR,		4
//DBGMCU_TypeDef


//brief DMA Controller
.equ	DMA_Channel_CCR,	0
.equ	DMA_Channel_CNDTR,	4
.equ	DMA_Channel_CPAR,	8
.equ	DMA_Channel_CMAR,	12
//DMA_Channel_TypeDef



.equ	DMA_ISR,	0
.equ	DMA_IFCR,	4
//DMA_TypeDef



//brief External Interrupt/Event Controller

.equ	EXTI_IMRn,	0
.equ	EXTI_EMRn,	4
.equ	EXTI_RTSRn,	8
.equ	EXTI_FTSRn,	12
.equ	EXTI_SWIERn,	16
.equ	EXTI_PRn,	20
//EXTI_TypeDef


//brief FLASH Registers
.equ	FLASH_ACR,		0
.equ	FLASH_KEYR,		4
.equ	FLASH_OPTKEYR,	8
.equ	FLASH_SR,		12
.equ	FLASH_CR,		16
.equ	FLASH_AR,		20
//.equ RESERVED		 	24
.equ	FLASH_OBR,		28
.equ	FLASH_WRPR,		32
//FLASH_TypeDef


//brief Option Bytes Registers
.equ	OB_RDP,	0	   		//__IO uint16_t
.equ	OB_USER,	2		    //__IO uint16_t
.equ	OB_Data0,	4	   		//__IO uint16_t
.equ	OB_Data1,	6	   		//__IO uint16_t
.equ	OB_WRP0,	8		    //__IO uint16_t
.equ	OB_WRP1,	10	    //__IO uint16_t
.equ	OB_WRP2,	12	    //__IO uint16_t
.equ	OB_WRP3,	14	    //__IO uint16_t
//OB_TypeDef


//brief General Purpose I/O
.equ	GPIO_CRL,	0
.equ	GPIO_CRH,	4
.equ	GPIO_IDR,	8
.equ	GPIO_ODR,	12
.equ	GPIO_BSRR,	16
.equ	GPIO_BRR,	20
.equ	GPIO_LCKR,	24
//GPIO_TypeDef


//brief Alternate Function I/O
.equ	AFIO_EVCR,	0
.equ	AFIO_MAPR,	4
//.equ EXTICR[4]		 8  12  16  20
//RESERVED0			     24
.equ	AFIO_MAPR2,	28
//AFIO_TypeDef



//brief Inter Integrated Circuit Interface
.equ	I2C_CR1,	0
.equ	I2C_CR2,	4
.equ	I2C_OAR1,	8
.equ	I2C_OAR2,	12
.equ	I2C_DR,	16
.equ	I2C_SR1,	20
.equ	I2C_SR2,	24
.equ	I2C_CCR,	28
.equ	I2C_TRISE,	32
//I2C_TypeDef


//brief Independent WATCHDOG
.equ	IWDG_KR,	0   /*!< Key register                                Address offset: 0x00 */
.equ	IWDG_PR,	4   /*!< Prescaler register                          Address offset: 0x04 */
.equ	IWDG_RLR,	8   /*!< Reload register                             Address offset: 0x08 */
.equ	IWDG_SR,	12  /*!< Status register                             Address offset: 0x0C */
//IWDG_TypeDef


//brief Power Control
.equ	PWR_CR,		0
.equ	PWR_CSR,	4
//PWR_TypeDef


//brief Reset and Clock Control
.equ	RCC_CRn,		0
.equ	RCC_CFGRn,		4
.equ	RCC_CIRn,		8
.equ	RCC_APB2RSTRn,	12
.equ	RCC_APB1RSTRn,	16
.equ	RCC_AHBENRn,	20
.equ	RCC_APB2ENRn,	24
.equ	RCC_APB1ENRn,	28
.equ	RCC_BDCRn,		32
.equ	RCC_CSRn,		36
//RCC_TypeDef

.equ RCC_CR,                (RCC_BASE + 0x00)
.equ RCC_CFGR,              (RCC_BASE + 0x04)
.equ RCC_CIR,               (RCC_BASE + 0x08)
.equ RCC_APB2RSTR,          (RCC_BASE + 0x0C)
.equ RCC_APB1RSTR,          (RCC_BASE + 0x10)
.equ RCC_AHBENR,            (RCC_BASE + 0x14)
.equ RCC_APB2ENR,           (RCC_BASE + 0x18)
.equ RCC_APB1ENR,           (RCC_BASE + 0x1C)
.equ RCC_BDCR,              (RCC_BASE + 0x20)
.equ RCC_CSR,               (RCC_BASE + 0x24)

//brief Real-Time Clock
.equ	RTC_CRH,	0
.equ	RTC_CRL,	4
.equ	RTC_PRLH,	8
.equ	RTC_PRLL,	12
.equ	RTC_DIVH,	16
.equ	RTC_DIVL,	20
.equ	RTC_CNTH,	24
.equ	RTC_CNTL,	28
.equ	RTC_ALRH,	32
.equ	RTC_ALRL,	36
//RTC_TypeDef

//@brief Serial Peripheral Interface
.equ	SPI_CR1,		0
.equ	SPI_CR2,		4
.equ	SPI_SR,			8
.equ	SPI_DR,			12
.equ	SPI_CRCPR,		16
.equ	SPI_RXCRCR,		20
.equ	SPI_TXCRCR,		24
.equ	SPI_I2SCFGR,	28
//SPI_TypeDef

// @brief TIM Timers
.equ	TIM_CR1,	0    /*!< TIM control register 1                      Address offset: 0x00 */
.equ	TIM_CR2,	4    /*!< TIM control register 2                      Address offset: 0x04 */
.equ	TIM_SMCR,	8    /*!< TIM slave Mode Control register             Address offset: 0x08 */
.equ	TIM_DIER,	12    /*!< TIM DMA/interrupt enable register           Address offset: 0x0C */
.equ	TIM_SR,		16    /*!< TIM status register                         Address offset: 0x10 */
.equ	TIM_EGR,	20    /*!< TIM event generation register               Address offset: 0x14 */
.equ	TIM_CCMR1,	24    /*!< TIM  capture/compare mode register 1        Address offset: 0x18 */
.equ	TIM_CCMR2,	28    /*!< TIM  capture/compare mode register 2        Address offset: 0x1C */
.equ	TIM_CCER,	32    /*!< TIM capture/compare enable register         Address offset: 0x20 */
.equ	TIM_CNT,	36    /*!< TIM counter register                        Address offset: 0x24 */
.equ	TIM_PSC,	40    /*!< TIM prescaler register                      Address offset: 0x28 */
.equ	TIM_ARR,	44    /*!< TIM auto-reload register                    Address offset: 0x2C */
.equ	TIM_RCR,	48    /*!< TIM  repetition counter register            Address offset: 0x30 */
.equ	TIM_CCR1,	52    /*!< TIM capture/compare register 1              Address offset: 0x34 */
.equ	TIM_CCR2,	56    /*!< TIM capture/compare register 2              Address offset: 0x38 */
.equ	TIM_CCR3,	60    /*!< TIM capture/compare register 3              Address offset: 0x3C */
.equ	TIM_CCR4,	64    /*!< TIM capture/compare register 4              Address offset: 0x40 */
.equ	TIM_BDTR,	68    /*!< TIM break and dead-time register            Address offset: 0x44 */
.equ	TIM_DCR,	72    /*!< TIM DMA control register                    Address offset: 0x48 */
.equ	TIM_DMAR,	76    /*!< TIM DMA address for full transfer register  Address offset: 0x4C */
.equ	TIM_OR,		80    /*!< TIM option register                         Address offset: 0x50 */
//TIM_TypeDef



//@brief Universal Synchronous Asynchronous Receiver Transmitter
.equ	USART_SR,		0     /*!< USART Status register                   Address offset: 0x00 */
.equ	USART_DR,		4     /*!< USART Data register                     Address offset: 0x04 */
.equ	USART_BRR,	8     /*!< USART Baud rate register                Address offset: 0x08 */
.equ	USART_CR1,	12    /*!< USART Control register 1                Address offset: 0x0C */
.equ	USART_CR2,	16    /*!< USART Control register 2                Address offset: 0x10 */
.equ	USART_CR3,	20    /*!< USART Control register 3                Address offset: 0x14 */
.equ	USART_GTPR,	24    /*!< USART Guard time and prescaler register Address offset: 0x18 */
//USART_TypeDef

/**
  * @brief Universal Serial Bus Full Speed Device
  */


.equ	USB_EP0R,	0x00       	/*!__IO uint16_t < USB Endpoint 0 register             Address offset: 0x00 */
//RESERVED0          		   	/*!__IO uint16_t < Reserved */
.equ	USB_EP1R,	0x04       	/*!__IO uint16_t < USB Endpoint 1 register             Address offset: 0x04 */
//RESERVED1            			/*!__IO uint16_t < Reserved */
.equ	USB_EP2R,	0x08       	/*!__IO uint16_t < USB Endpoint 2 register             Address offset: 0x08 */
//RESERVED2            			/*!__IO uint16_t < Reserved */
.equ	USB_EP3R,	0x0C       	/*!__IO uint16_t < USB Endpoint 3 register             Address offset: 0x0C */
//RESERVED3            			/*!__IO uint16_t < Reserved */
.equ	USB_EP4R,	0x10      	/*!__IO uint16_t < USB Endpoint 4 register             Address offset: 0x10 */
//RESERVED4            			/*!__IO uint16_t < Reserved */
.equ	USB_EP5R,	0x14       	/*!__IO uint16_t < USB Endpoint 5 register             Address offset: 0x14 */
//RESERVED5            			/*!__IO uint16_t < Reserved */
.equ	USB_EP6R,	0x18       	/*!__IO uint16_t < USB Endpoint 6 register             Address offset: 0x18 */
//RESERVED6            			/*!__IO uint16_t < Reserved */
.equ	USB_EP7R,	0x1C       	/*!__IO uint16_t < USB Endpoint 7 register             Address offset: 0x1C */
//RESERVED7[17]        			/*!__IO uint16_t < Reserved */
.equ	USB_CNTR,	0x40       	/*!__IO uint16_t < Control register                    Address offset: 0x40 */
//RESERVED8            			/*!__IO uint16_t < Reserved */
.equ	USB_ISTR,	0x44       	/*!__IO uint16_t < Interrupt status register           Address offset: 0x44 */
//RESERVED9            			/*!__IO uint16_t < Reserved */
.equ	USB_FNR,	0x48       	/*!__IO uint16_t < Frame number register               Address offset: 0x48 */
//RESERVEDA            			/*!__IO uint16_t < Reserved */
.equ	USB_DADDR,	0x4C       	/*!__IO uint16_t < Device address register             Address offset: 0x4C */
//RESERVEDB            			/*!__IO uint16_t < Reserved */
.equ	USB_BTABLE,	0x50       	/*!__IO uint16_t < Buffer Table address register       Address offset: 0x50 */
//RESERVEDC            			/*!__IO uint16_t < Reserved */
//USB_TypeDef


// @brief Window WATCHDOG
.equ	WWDG_CR,	0 /*!< WWDG Control register       Address offset: 0x00 */
.equ	WWDG_CFR,	4 /*!< WWDG Configuration register Address offset: 0x04 */
.equ	WWDG_SR,	8 /*!< WWDG Status register        Address offset: 0x08 */
//WWDG_TypeDef



//@addtogroup Peripheral_memory_map

.equ	FLASH_BASE,			0x08000000UL /*!< FLASH base address in the alias region */
.equ	FLASH_BANK1_END,	0x0801FFFFUL /*!< FLASH END address of bank1 */
.equ	SRAM_BASE,			0x20000000UL /*!< SRAM base address in the alias region */
.equ	PERIPH_BASE,		0x40000000UL /*!< Peripheral base address in the alias region */

.equ	SRAM_BB_BASE,		0x22000000UL /*!< SRAM base address in the bit-band region */
.equ	PERIPH_BB_BASE,		0x42000000UL /*!< Peripheral base address in the bit-band region */


/*!< Peripheral memory map */
.equ	APB1PERIPH_BASE,	PERIPH_BASE
.equ	APB2PERIPH_BASE,	(PERIPH_BASE + 0x00010000UL)
.equ	AHBPERIPH_BASE,		(PERIPH_BASE + 0x00020000UL)

.equ	TIM2_BASE,			(APB1PERIPH_BASE + 0x00000000UL)
.equ	TIM3_BASE,			(APB1PERIPH_BASE + 0x00000400UL)
.equ	TIM4_BASE,			(APB1PERIPH_BASE + 0x00000800UL)
.equ	RTC_BASE,			(APB1PERIPH_BASE + 0x00002800UL)
.equ	WWDG_BASE,			(APB1PERIPH_BASE + 0x00002C00UL)
.equ	IWDG_BASE,			(APB1PERIPH_BASE + 0x00003000UL)
.equ	SPI2_BASE,			(APB1PERIPH_BASE + 0x00003800UL)
.equ	USART2_BASE,		(APB1PERIPH_BASE + 0x00004400UL)
.equ	USART3_BASE,		(APB1PERIPH_BASE + 0x00004800UL)
.equ	I2C1_BASE,			(APB1PERIPH_BASE + 0x00005400UL)
.equ	I2C2_BASE,			(APB1PERIPH_BASE + 0x00005800UL)
.equ	CAN1_BASE,			(APB1PERIPH_BASE + 0x00006400UL)
.equ	BKP_BASE,			(APB1PERIPH_BASE + 0x00006C00UL)
.equ	PWR_BASE,			(APB1PERIPH_BASE + 0x00007000UL)
.equ	AFIO_BASE,			(APB2PERIPH_BASE + 0x00000000UL)
.equ	EXTI_BASE,			(APB2PERIPH_BASE + 0x00000400UL)
.equ	GPIOA_BASE,			(APB2PERIPH_BASE + 0x00000800UL)
.equ	GPIOB_BASE,			(APB2PERIPH_BASE + 0x00000C00UL)
.equ	GPIOC_BASE,			(APB2PERIPH_BASE + 0x00001000UL)
.equ	GPIOD_BASE,			(APB2PERIPH_BASE + 0x00001400UL)
.equ	GPIOE_BASE,			(APB2PERIPH_BASE + 0x00001800UL)
.equ	ADC1_BASE,			(APB2PERIPH_BASE + 0x00002400UL)
.equ	ADC2_BASE,			(APB2PERIPH_BASE + 0x00002800UL)
.equ	TIM1_BASE,			(APB2PERIPH_BASE + 0x00002C00UL)
.equ	SPI1_BASE,			(APB2PERIPH_BASE + 0x00003000UL)
.equ	USART1_BASE,		(APB2PERIPH_BASE + 0x00003800UL)


.equ	DMA1_BASE,			(AHBPERIPH_BASE + 0x00000000UL)
.equ	DMA1_Channel1_BASE,	(AHBPERIPH_BASE + 0x00000008UL)
.equ	DMA1_Channel2_BASE,	(AHBPERIPH_BASE + 0x0000001CUL)
.equ	DMA1_Channel3_BASE,	(AHBPERIPH_BASE + 0x00000030UL)
.equ	DMA1_Channel4_BASE,	(AHBPERIPH_BASE + 0x00000044UL)
.equ	DMA1_Channel5_BASE,	(AHBPERIPH_BASE + 0x00000058UL)
.equ	DMA1_Channel6_BASE,	(AHBPERIPH_BASE + 0x0000006CUL)
.equ	DMA1_Channel7_BASE,	(AHBPERIPH_BASE + 0x00000080UL)
.equ	RCC_BASE,			(AHBPERIPH_BASE + 0x00001000UL)
.equ	CRC_BASE,			(AHBPERIPH_BASE + 0x00003000UL)

.equ	FLASH_R_BASE,		(AHBPERIPH_BASE + 0x00002000UL) /*!< Flash registers base address */
.equ	FLASHSIZE_BASE,		0x1FFFF7E0UL    /*!< FLASH Size register base address */
.equ	UID_BASE,			0x1FFFF7E8UL    /*!< Unique device ID register base address */
.equ	OB_BASE,			0x1FFFF800UL    /*!< Flash Option Bytes base address */



.equ	DBGMCU_BASE,		0xE0042000UL /*!< Debug MCU registers base address */

/* USB device FS */
.equ	USB_BASE,			(APB1PERIPH_BASE + 0x00005C00UL) /*!< USB_IP Peripheral Registers base address */
.equ	USB_PMAADDR,		(APB1PERIPH_BASE + 0x00006000UL) /*!< USB_IP Packet Memory Area base address */


/**
  * @}
  */

/** @addtogroup Peripheral_declaration
  * @{
  */

.equ	TIM2,			(TIM2_BASE)
.equ	TIM3,			(TIM3_BASE)
.equ	TIM4,			(TIM4_BASE)
.equ	RTC,			(RTC_BASE)
.equ	WWDG,			(WWDG_BASE)
.equ	IWDG,			(IWDG_BASE)
.equ	SPI2,			(SPI2_BASE)
.equ	USART2,			(USART2_BASE)
.equ	USART3,			(USART3_BASE)
.equ	I2C1,			(I2C1_BASE)
.equ	I2C2,			(I2C2_BASE)
.equ	USB,			(USB_BASE)
.equ	CAN1,			(CAN1_BASE)
.equ	BKP,			(BKP_BASE)
.equ	PWR,			(PWR_BASE)
.equ	AFIO,			(AFIO_BASE)
.equ	EXTI,			(EXTI_BASE)
.equ	GPIOA,			(GPIOA_BASE)
.equ	GPIOB,			(GPIOB_BASE)
.equ	GPIOC,			(GPIOC_BASE)
.equ	GPIOD,			(GPIOD_BASE)
.equ	GPIOE,			(GPIOE_BASE)
.equ	ADC1,			(ADC1_BASE)
.equ	ADC2,			(ADC2_BASE)
.equ	ADC12_COMMON,	(ADC1_BASE)
.equ	TIM1,			(TIM1_BASE)
.equ	SPI1,			(SPI1_BASE)
.equ	USART1,			(USART1_BASE)
.equ	DMA1,			(DMA1_BASE)
.equ	DMA1_Channel1,	(DMA1_Channel1_BASE)
.equ	DMA1_Channel2,	(DMA1_Channel2_BASE)
.equ	DMA1_Channel3,	(DMA1_Channel3_BASE)
.equ	DMA1_Channel4,	(DMA1_Channel4_BASE)
.equ	DMA1_Channel5,	(DMA1_Channel5_BASE)
.equ	DMA1_Channel6,	(DMA1_Channel6_BASE)
.equ	DMA1_Channel7,	(DMA1_Channel7_BASE)
.equ	RCC,			(RCC_BASE)
.equ	CRC,			(CRC_BASE)
.equ	FLASH,			(FLASH_R_BASE)
.equ	OB,				(OB_BASE)
.equ	DBGMCU,			(DBGMCU_BASE)


/**
  * @}
  */

/** @addtogroup Exported_constants
  * @{
  */

  /** @addtogroup Hardware_Constant_Definition
    * @{
    */
.equ	LSI_STARTUP_TIME,	85U /*!< LSI Maximum startup time in us */
  /**
    * @}
    */

  /** @addtogroup Peripheral_Registers_Bits_Definition
  * @{
  */

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                       CRC calculation unit (CRC)                           */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CRC_DR register  *********************/
.equ	CRC_DR_DR_Pos,		0
.equ	CRC_DR_DR_Msk,		(0xFFFFFFFFUL << CRC_DR_DR_Pos)     /*!< 0xFFFFFFFF */
.equ	CRC_DR_DR,			CRC_DR_DR_Msk                      /*!< Data register bits */

/*******************  Bit definition for CRC_IDR register  ********************/
.equ	CRC_IDR_IDR_Pos,	0
.equ	CRC_IDR_IDR_Msk,	(0xFFUL << CRC_IDR_IDR_Pos)         /*!< 0x000000FF */
.equ	CRC_IDR_IDR,		CRC_IDR_IDR_Msk                    /*!< General-purpose 8-bit data register bits */

/********************  Bit definition for CRC_CR register  ********************/
.equ	CRC_CR_RESET_Pos,	0
.equ	CRC_CR_RESET_Msk,	(0x1UL << CRC_CR_RESET_Pos)         /*!< 0x00000001 */
.equ	CRC_CR_RESET,		CRC_CR_RESET_Msk                   /*!< RESET bit */

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/
.equ	PWR_CR_LPDS_Pos,	0
.equ	PWR_CR_LPDS_Msk,	(0x1UL << PWR_CR_LPDS_Pos)          /*!< 0x00000001 */
.equ	PWR_CR_LPDS,	PWR_CR_LPDS_Msk                    /*!< Low-Power Deepsleep */
.equ	PWR_CR_PDDS_Pos,	(1U)
.equ	PWR_CR_PDDS_Msk,	(0x1UL << PWR_CR_PDDS_Pos)          /*!< 0x00000002 */
.equ	PWR_CR_PDDS,	PWR_CR_PDDS_Msk                    /*!< Power Down Deepsleep */
.equ	PWR_CR_CWUF_Pos,	(2U)
.equ	PWR_CR_CWUF_Msk,	(0x1UL << PWR_CR_CWUF_Pos)          /*!< 0x00000004 */
.equ	PWR_CR_CWUF,	PWR_CR_CWUF_Msk                    /*!< Clear Wakeup Flag */
.equ	PWR_CR_CSBF_Pos,	(3U)
.equ	PWR_CR_CSBF_Msk,	(0x1UL << PWR_CR_CSBF_Pos)          /*!< 0x00000008 */
.equ	PWR_CR_CSBF,	PWR_CR_CSBF_Msk                    /*!< Clear Standby Flag */
.equ	PWR_CR_PVDE_Pos,	(4U)
.equ	PWR_CR_PVDE_Msk,	(0x1UL << PWR_CR_PVDE_Pos)          /*!< 0x00000010 */
.equ	PWR_CR_PVDE,		PWR_CR_PVDE_Msk                    /*!< Power Voltage Detector Enable */

.equ	PWR_CR_PLS_Pos,	(5U)
.equ	PWR_CR_PLS_Msk,	(0x7UL << PWR_CR_PLS_Pos)           /*!< 0x000000E0 */
.equ	PWR_CR_PLS,		PWR_CR_PLS_Msk                     /*!< PLS[2:0] bits (PVD Level Selection) */
.equ	PWR_CR_PLS_0,	(0x1UL << PWR_CR_PLS_Pos)           /*!< 0x00000020 */
.equ	PWR_CR_PLS_1,	(0x2UL << PWR_CR_PLS_Pos)           /*!< 0x00000040 */
.equ	PWR_CR_PLS_2,	(0x4UL << PWR_CR_PLS_Pos)           /*!< 0x00000080 */

/*!< PVD level configuration */
.equ	PWR_CR_PLS_LEV0,	0x00000000U                           /*!< PVD level 2.2V */
.equ	PWR_CR_PLS_LEV1,	0x00000020U                           /*!< PVD level 2.3V */
.equ	PWR_CR_PLS_LEV2,	0x00000040U                           /*!< PVD level 2.4V */
.equ	PWR_CR_PLS_LEV3,	0x00000060U                           /*!< PVD level 2.5V */
.equ	PWR_CR_PLS_LEV4,	0x00000080U                           /*!< PVD level 2.6V */
.equ	PWR_CR_PLS_LEV5,	0x000000A0U                           /*!< PVD level 2.7V */
.equ	PWR_CR_PLS_LEV6,	0x000000C0U                           /*!< PVD level 2.8V */
.equ	PWR_CR_PLS_LEV7,	0x000000E0U                           /*!< PVD level 2.9V */

/* Legacy defines */
.equ	PWR_CR_PLS_2V2,		PWR_CR_PLS_LEV0
.equ	PWR_CR_PLS_2V3,		PWR_CR_PLS_LEV1
.equ	PWR_CR_PLS_2V4,		PWR_CR_PLS_LEV2
.equ	PWR_CR_PLS_2V5,		PWR_CR_PLS_LEV3
.equ	PWR_CR_PLS_2V6,		PWR_CR_PLS_LEV4
.equ	PWR_CR_PLS_2V7,		PWR_CR_PLS_LEV5
.equ	PWR_CR_PLS_2V8,		PWR_CR_PLS_LEV6
.equ	PWR_CR_PLS_2V9,		PWR_CR_PLS_LEV7

.equ	PWR_CR_DBP_Pos,		(8U)
.equ	PWR_CR_DBP_Msk,		(0x1UL << PWR_CR_DBP_Pos)           /*!< 0x00000100 */
.equ	PWR_CR_DBP,			PWR_CR_DBP_Msk                     /*!< Disable Backup Domain write protection */


/*******************  Bit definition for PWR_CSR register  ********************/
.equ	PWR_CSR_WUF_Pos,	0
.equ	PWR_CSR_WUF_Msk,	(0x1UL << PWR_CSR_WUF_Pos)          /*!< 0x00000001 */
.equ	PWR_CSR_WUF,		PWR_CSR_WUF_Msk                    /*!< Wakeup Flag */
.equ	PWR_CSR_SBF_Pos,	(1U)
.equ	PWR_CSR_SBF_Msk,	(0x1UL << PWR_CSR_SBF_Pos)          /*!< 0x00000002 */
.equ	PWR_CSR_SBF,		PWR_CSR_SBF_Msk                    /*!< Standby Flag */
.equ	PWR_CSR_PVDO_Pos,	(2U)
.equ	PWR_CSR_PVDO_Msk,	(0x1UL << PWR_CSR_PVDO_Pos)         /*!< 0x00000004 */
.equ	PWR_CSR_PVDO,		PWR_CSR_PVDO_Msk                   /*!< PVD Output */
.equ	PWR_CSR_EWUP_Pos,	(8U)
.equ	PWR_CSR_EWUP_Msk,	(0x1UL << PWR_CSR_EWUP_Pos)         /*!< 0x00000100 */
.equ	PWR_CSR_EWUP,		PWR_CSR_EWUP_Msk                   /*!< Enable WKUP pin */

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
.equ	BKP_DR1_D_Pos,	0
.equ	BKP_DR1_D_Msk,	(0xFFFFUL << BKP_DR1_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR1_D,		BKP_DR1_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR2 register  ********************/
.equ	BKP_DR2_D_Pos,	0
.equ	BKP_DR2_D_Msk,	(0xFFFFUL << BKP_DR2_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR2_D,		BKP_DR2_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR3 register  ********************/
.equ	BKP_DR3_D_Pos,	0
.equ	BKP_DR3_D_Msk,	(0xFFFFUL << BKP_DR3_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR3_D,		BKP_DR3_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR4 register  ********************/
.equ	BKP_DR4_D_Pos,	0
.equ	BKP_DR4_D_Msk,	(0xFFFFUL << BKP_DR4_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR4_D,		BKP_DR4_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR5 register  ********************/
.equ	BKP_DR5_D_Pos,	0
.equ	BKP_DR5_D_Msk,	(0xFFFFUL << BKP_DR5_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR5_D,		BKP_DR5_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR6 register  ********************/
.equ	BKP_DR6_D_Pos,	0
.equ	BKP_DR6_D_Msk,	(0xFFFFUL << BKP_DR6_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR6_D,		BKP_DR6_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR7 register  ********************/
.equ	BKP_DR7_D_Pos,	0
.equ	BKP_DR7_D_Msk,	(0xFFFFUL << BKP_DR7_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR7_D,		BKP_DR7_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR8 register  ********************/
.equ	BKP_DR8_D_Pos,	0
.equ	BKP_DR8_D_Msk,	(0xFFFFUL << BKP_DR8_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR8_D,		BKP_DR8_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR9 register  ********************/
.equ	BKP_DR9_D_Pos,	0
.equ	BKP_DR9_D_Msk,	(0xFFFFUL << BKP_DR9_D_Pos)         /*!< 0x0000FFFF */
.equ	BKP_DR9_D,		BKP_DR9_D_Msk                      /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
.equ	BKP_DR10_D_Pos,	0
.equ	BKP_DR10_D_Msk,	(0xFFFFUL << BKP_DR10_D_Pos)        /*!< 0x0000FFFF */
.equ	BKP_DR10_D,		BKP_DR10_D_Msk                     /*!< Backup data */

.equ	RTC_BKP_NUMBER,	10

/******************  Bit definition for BKP_RTCCR register  *******************/
.equ	BKP_RTCCR_CAL_Pos,	0
.equ	BKP_RTCCR_CAL_Msk,	(0x7FUL << BKP_RTCCR_CAL_Pos)       /*!< 0x0000007F */
.equ	BKP_RTCCR_CAL,		BKP_RTCCR_CAL_Msk                  /*!< Calibration value */
.equ	BKP_RTCCR_CCO_Pos,	(7U)
.equ	BKP_RTCCR_CCO_Msk,	(0x1UL << BKP_RTCCR_CCO_Pos)        /*!< 0x00000080 */
.equ	BKP_RTCCR_CCO,		BKP_RTCCR_CCO_Msk                  /*!< Calibration Clock Output */
.equ	BKP_RTCCR_ASOE_Pos,	(8U)
.equ	BKP_RTCCR_ASOE_Msk,	(0x1UL << BKP_RTCCR_ASOE_Pos)       /*!< 0x00000100 */
.equ	BKP_RTCCR_ASOE,		BKP_RTCCR_ASOE_Msk                 /*!< Alarm or Second Output Enable */
.equ	BKP_RTCCR_ASOS_Pos,	(9U)
.equ	BKP_RTCCR_ASOS_Msk,	(0x1UL << BKP_RTCCR_ASOS_Pos)       /*!< 0x00000200 */
.equ	BKP_RTCCR_ASOS,		BKP_RTCCR_ASOS_Msk                 /*!< Alarm or Second Output Selection */

/********************  Bit definition for BKP_CR register  ********************/
.equ	BKP_CR_TPE_Pos,		0
.equ	BKP_CR_TPE_Msk,		(0x1UL << BKP_CR_TPE_Pos)           /*!< 0x00000001 */
.equ	BKP_CR_TPE,			BKP_CR_TPE_Msk                     /*!< TAMPER pin enable */
.equ	BKP_CR_TPAL_Pos,	(1U)
.equ	BKP_CR_TPAL_Msk,	(0x1UL << BKP_CR_TPAL_Pos)          /*!< 0x00000002 */
.equ	BKP_CR_TPAL,		BKP_CR_TPAL_Msk                    /*!< TAMPER pin active level */

/*******************  Bit definition for BKP_CSR register  ********************/
.equ	BKP_CSR_CTE_Pos,	0
.equ	BKP_CSR_CTE_Msk,	(0x1UL << BKP_CSR_CTE_Pos)          /*!< 0x00000001 */
.equ	BKP_CSR_CTE,		BKP_CSR_CTE_Msk                    /*!< Clear Tamper event */
.equ	BKP_CSR_CTI_Pos,	(1U)
.equ	BKP_CSR_CTI_Msk,	(0x1UL << BKP_CSR_CTI_Pos)          /*!< 0x00000002 */
.equ	BKP_CSR_CTI,		BKP_CSR_CTI_Msk                    /*!< Clear Tamper Interrupt */
.equ	BKP_CSR_TPIE_Pos,	(2U)
.equ	BKP_CSR_TPIE_Msk,	(0x1UL << BKP_CSR_TPIE_Pos)         /*!< 0x00000004 */
.equ	BKP_CSR_TPIE,		BKP_CSR_TPIE_Msk                   /*!< TAMPER Pin interrupt enable */
.equ	BKP_CSR_TEF_Pos,	(8U)
.equ	BKP_CSR_TEF_Msk,	(0x1UL << BKP_CSR_TEF_Pos)          /*!< 0x00000100 */
.equ	BKP_CSR_TEF,		BKP_CSR_TEF_Msk                    /*!< Tamper Event Flag */
.equ	BKP_CSR_TIF_Pos,	(9U)
.equ	BKP_CSR_TIF_Msk,	(0x1UL << BKP_CSR_TIF_Pos)          /*!< 0x00000200 */
.equ	BKP_CSR_TIF,		BKP_CSR_TIF_Msk                    /*!< Tamper Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
.equ	RCC_CR_HSION_Pos,	0
.equ	RCC_CR_HSION_Msk,	(0x1UL << RCC_CR_HSION_Pos)        /*!< 0x00000001 */
.equ	RCC_CR_HSION,		RCC_CR_HSION_Msk                  /*!< Internal High Speed clock enable */
.equ	RCC_CR_HSIRDY_Pos,	(1U)
.equ	RCC_CR_HSIRDY_Msk,	(0x1UL << RCC_CR_HSIRDY_Pos)       /*!< 0x00000002 */
.equ	RCC_CR_HSIRDY,		RCC_CR_HSIRDY_Msk                 /*!< Internal High Speed clock ready flag */
.equ	RCC_CR_HSITRIM_Pos,	(3U)
.equ	RCC_CR_HSITRIM_Msk,	(0x1FUL << RCC_CR_HSITRIM_Pos)     /*!< 0x000000F8 */
.equ	RCC_CR_HSITRIM,		RCC_CR_HSITRIM_Msk                /*!< Internal High Speed clock trimming */
.equ	RCC_CR_HSICAL_Pos,	(8U)
.equ	RCC_CR_HSICAL_Msk,	(0xFFUL << RCC_CR_HSICAL_Pos)      /*!< 0x0000FF00 */
.equ	RCC_CR_HSICAL,		RCC_CR_HSICAL_Msk                 /*!< Internal High Speed clock Calibration */
.equ	RCC_CR_HSEON_Pos,	(16U)
.equ	RCC_CR_HSEON_Msk,	(0x1UL << RCC_CR_HSEON_Pos)        /*!< 0x00010000 */
.equ	RCC_CR_HSEON,		RCC_CR_HSEON_Msk                  /*!< External High Speed clock enable */
.equ	RCC_CR_HSERDY_Pos,	(17U)
.equ	RCC_CR_HSERDY_Msk,	(0x1UL << RCC_CR_HSERDY_Pos)       /*!< 0x00020000 */
.equ	RCC_CR_HSERDY,		RCC_CR_HSERDY_Msk                 /*!< External High Speed clock ready flag */
.equ	RCC_CR_HSEBYP_Pos,	(18U)
.equ	RCC_CR_HSEBYP_Msk,	(0x1UL << RCC_CR_HSEBYP_Pos)       /*!< 0x00040000 */
.equ	RCC_CR_HSEBYP,		RCC_CR_HSEBYP_Msk                 /*!< External High Speed clock Bypass */
.equ	RCC_CR_CSSON_Pos,	(19U)
.equ	RCC_CR_CSSON_Msk,	(0x1UL << RCC_CR_CSSON_Pos)        /*!< 0x00080000 */
.equ	RCC_CR_CSSON,		RCC_CR_CSSON_Msk                  /*!< Clock Security System enable */
.equ	RCC_CR_PLLON_Pos,	(24U)
.equ	RCC_CR_PLLON_Msk,	(0x1UL << RCC_CR_PLLON_Pos)        /*!< 0x01000000 */
.equ	RCC_CR_PLLON,		RCC_CR_PLLON_Msk                  /*!< PLL enable */
.equ	RCC_CR_PLLRDY_Pos,	(25U)
.equ	RCC_CR_PLLRDY_Msk,	(0x1UL << RCC_CR_PLLRDY_Pos)       /*!< 0x02000000 */
.equ	RCC_CR_PLLRDY,		RCC_CR_PLLRDY_Msk                 /*!< PLL clock ready flag */


/*******************  Bit definition for RCC_CFGR register  *******************/
/*!< SW configuration */
.equ	RCC_CFGR_SW_Pos,	0
.equ	RCC_CFGR_SW_Msk,	(0x3UL << RCC_CFGR_SW_Pos)         /*!< 0x00000003 */
.equ	RCC_CFGR_SW,		RCC_CFGR_SW_Msk                   /*!< SW[1:0] bits (System clock Switch) */
.equ	RCC_CFGR_SW_0,		(0x1UL << RCC_CFGR_SW_Pos)         /*!< 0x00000001 */
.equ	RCC_CFGR_SW_1,		(0x2UL << RCC_CFGR_SW_Pos)         /*!< 0x00000002 */

.equ	RCC_CFGR_SW_HSI,	0x00000000U                       /*!< HSI selected as system clock */
.equ	RCC_CFGR_SW_HSE,	0x00000001U                       /*!< HSE selected as system clock */
.equ	RCC_CFGR_SW_PLL,	0x00000002U                       /*!< PLL selected as system clock */

/*!< SWS configuration */
.equ	RCC_CFGR_SWS_Pos,	(2U)
.equ	RCC_CFGR_SWS_Msk,	(0x3UL << RCC_CFGR_SWS_Pos)        /*!< 0x0000000C */
.equ	RCC_CFGR_SWS,		RCC_CFGR_SWS_Msk                  /*!< SWS[1:0] bits (System Clock Switch Status) */
.equ	RCC_CFGR_SWS_0,		(0x1UL << RCC_CFGR_SWS_Pos)        /*!< 0x00000004 */
.equ	RCC_CFGR_SWS_1,		(0x2UL << RCC_CFGR_SWS_Pos)        /*!< 0x00000008 */

.equ	RCC_CFGR_SWS_HSI,	0x00000000U                       /*!< HSI oscillator used as system clock */
.equ	RCC_CFGR_SWS_HSE,	0x00000004U                       /*!< HSE oscillator used as system clock */
.equ	RCC_CFGR_SWS_PLL,	0x00000008U                       /*!< PLL used as system clock */

/*!< HPRE configuration */
.equ	RCC_CFGR_HPRE_Pos,	(4U)
.equ	RCC_CFGR_HPRE_Msk,	(0xFUL << RCC_CFGR_HPRE_Pos)       /*!< 0x000000F0 */
.equ	RCC_CFGR_HPRE,		RCC_CFGR_HPRE_Msk                 /*!< HPRE[3:0] bits (AHB prescaler) */
.equ	RCC_CFGR_HPRE_0,	(0x1UL << RCC_CFGR_HPRE_Pos)       /*!< 0x00000010 */
.equ	RCC_CFGR_HPRE_1,	(0x2UL << RCC_CFGR_HPRE_Pos)       /*!< 0x00000020 */
.equ	RCC_CFGR_HPRE_2,	(0x4UL << RCC_CFGR_HPRE_Pos)       /*!< 0x00000040 */
.equ	RCC_CFGR_HPRE_3,	(0x8UL << RCC_CFGR_HPRE_Pos)       /*!< 0x00000080 */

.equ	RCC_CFGR_HPRE_DIV1,		0x00000000U                       /*!< SYSCLK not divided */
.equ	RCC_CFGR_HPRE_DIV2,		0x00000080U                       /*!< SYSCLK divided by 2 */
.equ	RCC_CFGR_HPRE_DIV4,		0x00000090U                       /*!< SYSCLK divided by 4 */
.equ	RCC_CFGR_HPRE_DIV8,		0x000000A0U                       /*!< SYSCLK divided by 8 */
.equ	RCC_CFGR_HPRE_DIV16,	0x000000B0U                       /*!< SYSCLK divided by 16 */
.equ	RCC_CFGR_HPRE_DIV64,	0x000000C0U                       /*!< SYSCLK divided by 64 */
.equ	RCC_CFGR_HPRE_DIV128,	0x000000D0U                       /*!< SYSCLK divided by 128 */
.equ	RCC_CFGR_HPRE_DIV256,	0x000000E0U                       /*!< SYSCLK divided by 256 */
.equ	RCC_CFGR_HPRE_DIV512,	0x000000F0U                       /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
.equ	RCC_CFGR_PPRE1_Pos,	(8U)
.equ	RCC_CFGR_PPRE1_Msk,	(0x7UL << RCC_CFGR_PPRE1_Pos)      /*!< 0x00000700 */
.equ	RCC_CFGR_PPRE1,		RCC_CFGR_PPRE1_Msk                /*!< PRE1[2:0] bits (APB1 prescaler) */
.equ	RCC_CFGR_PPRE1_0,	(0x1UL << RCC_CFGR_PPRE1_Pos)      /*!< 0x00000100 */
.equ	RCC_CFGR_PPRE1_1,	(0x2UL << RCC_CFGR_PPRE1_Pos)      /*!< 0x00000200 */
.equ	RCC_CFGR_PPRE1_2,	(0x4UL << RCC_CFGR_PPRE1_Pos)      /*!< 0x00000400 */

.equ	RCC_CFGR_PPRE1_DIV1,	0x00000000U                       /*!< HCLK not divided */
.equ	RCC_CFGR_PPRE1_DIV2,	0x00000400U                       /*!< HCLK divided by 2 */
.equ	RCC_CFGR_PPRE1_DIV4,	0x00000500U                       /*!< HCLK divided by 4 */
.equ	RCC_CFGR_PPRE1_DIV8,	0x00000600U                       /*!< HCLK divided by 8 */
.equ	RCC_CFGR_PPRE1_DIV16,	0x00000700U                       /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
.equ	RCC_CFGR_PPRE2_Pos,	(11U)
.equ	RCC_CFGR_PPRE2_Msk,	(0x7UL << RCC_CFGR_PPRE2_Pos)      /*!< 0x00003800 */
.equ	RCC_CFGR_PPRE2,		RCC_CFGR_PPRE2_Msk                /*!< PRE2[2:0] bits (APB2 prescaler) */
.equ	RCC_CFGR_PPRE2_0,	(0x1UL << RCC_CFGR_PPRE2_Pos)      /*!< 0x00000800 */
.equ	RCC_CFGR_PPRE2_1,	(0x2UL << RCC_CFGR_PPRE2_Pos)      /*!< 0x00001000 */
.equ	RCC_CFGR_PPRE2_2,	(0x4UL << RCC_CFGR_PPRE2_Pos)      /*!< 0x00002000 */

.equ	RCC_CFGR_PPRE2_DIV1,	0x00000000U                       /*!< HCLK not divided */
.equ	RCC_CFGR_PPRE2_DIV2,	0x00002000U                       /*!< HCLK divided by 2 */
.equ	RCC_CFGR_PPRE2_DIV4,	0x00002800U                       /*!< HCLK divided by 4 */
.equ	RCC_CFGR_PPRE2_DIV8,	0x00003000U                       /*!< HCLK divided by 8 */
.equ	RCC_CFGR_PPRE2_DIV16,	0x00003800U                       /*!< HCLK divided by 16 */

/*!< ADCPPRE configuration */
.equ	RCC_CFGR_ADCPRE_Pos,	(14U)
.equ	RCC_CFGR_ADCPRE_Msk,	(0x3UL << RCC_CFGR_ADCPRE_Pos)     /*!< 0x0000C000 */
.equ	RCC_CFGR_ADCPRE,		RCC_CFGR_ADCPRE_Msk               /*!< ADCPRE[1:0] bits (ADC prescaler) */
.equ	RCC_CFGR_ADCPRE_0,		(0x1UL << RCC_CFGR_ADCPRE_Pos)     /*!< 0x00004000 */
.equ	RCC_CFGR_ADCPRE_1,		(0x2UL << RCC_CFGR_ADCPRE_Pos)     /*!< 0x00008000 */

.equ	RCC_CFGR_ADCPRE_DIV2,	0x00000000U                       /*!< PCLK2 divided by 2 */
.equ	RCC_CFGR_ADCPRE_DIV4,	0x00004000U                       /*!< PCLK2 divided by 4 */
.equ	RCC_CFGR_ADCPRE_DIV6,	0x00008000U                       /*!< PCLK2 divided by 6 */
.equ	RCC_CFGR_ADCPRE_DIV8,	0x0000C000U                       /*!< PCLK2 divided by 8 */

.equ	RCC_CFGR_PLLSRC_Pos,	(16U)
.equ	RCC_CFGR_PLLSRC_Msk,	(0x1UL << RCC_CFGR_PLLSRC_Pos)     /*!< 0x00010000 */
.equ	RCC_CFGR_PLLSRC,		RCC_CFGR_PLLSRC_Msk               /*!< PLL entry clock source */

.equ	RCC_CFGR_PLLXTPRE_Pos,	(17U)
.equ	RCC_CFGR_PLLXTPRE_Msk,	(0x1UL << RCC_CFGR_PLLXTPRE_Pos)   /*!< 0x00020000 */
.equ	RCC_CFGR_PLLXTPRE,		RCC_CFGR_PLLXTPRE_Msk             /*!< HSE divider for PLL entry */

/*!< PLLMUL configuration */
.equ	RCC_CFGR_PLLMULL_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL_Msk,	(0xFUL << RCC_CFGR_PLLMULL_Pos)    /*!< 0x003C0000 */
.equ	RCC_CFGR_PLLMULL,		RCC_CFGR_PLLMULL_Msk              /*!< PLLMUL[3:0] bits (PLL multiplication factor) */
.equ	RCC_CFGR_PLLMULL_0,		(0x1UL << RCC_CFGR_PLLMULL_Pos)    /*!< 0x00040000 */
.equ	RCC_CFGR_PLLMULL_1,		(0x2UL << RCC_CFGR_PLLMULL_Pos)    /*!< 0x00080000 */
.equ	RCC_CFGR_PLLMULL_2,		(0x4UL << RCC_CFGR_PLLMULL_Pos)    /*!< 0x00100000 */
.equ	RCC_CFGR_PLLMULL_3,		(0x8UL << RCC_CFGR_PLLMULL_Pos)    /*!< 0x00200000 */

.equ	RCC_CFGR_PLLXTPRE_HSE,	0x00000000U                      /*!< HSE clock not divided for PLL entry */
.equ	RCC_CFGR_PLLXTPRE_HSE_DIV2,	0x00020000U                      /*!< HSE clock divided by 2 for PLL entry */

.equ	RCC_CFGR_PLLMULL2,		0x00000000U                       /*!< PLL input clock*2 */
.equ	RCC_CFGR_PLLMULL3_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL3_Msk,	(0x1UL << RCC_CFGR_PLLMULL3_Pos)   /*!< 0x00040000 */
.equ	RCC_CFGR_PLLMULL3,		RCC_CFGR_PLLMULL3_Msk             /*!< PLL input clock*3 */
.equ	RCC_CFGR_PLLMULL4_Pos,	(19U)
.equ	RCC_CFGR_PLLMULL4_Msk,	(0x1UL << RCC_CFGR_PLLMULL4_Pos)   /*!< 0x00080000 */
.equ	RCC_CFGR_PLLMULL4,		RCC_CFGR_PLLMULL4_Msk             /*!< PLL input clock*4 */
.equ	RCC_CFGR_PLLMULL5_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL5_Msk,	(0x3UL << RCC_CFGR_PLLMULL5_Pos)   /*!< 0x000C0000 */
.equ	RCC_CFGR_PLLMULL5,		RCC_CFGR_PLLMULL5_Msk             /*!< PLL input clock*5 */
.equ	RCC_CFGR_PLLMULL6_Pos,	(20U)
.equ	RCC_CFGR_PLLMULL6_Msk,	(0x1UL << RCC_CFGR_PLLMULL6_Pos)   /*!< 0x00100000 */
.equ	RCC_CFGR_PLLMULL6,		RCC_CFGR_PLLMULL6_Msk             /*!< PLL input clock*6 */
.equ	RCC_CFGR_PLLMULL7_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL7_Msk,	(0x5UL << RCC_CFGR_PLLMULL7_Pos)   /*!< 0x00140000 */
.equ	RCC_CFGR_PLLMULL7,		RCC_CFGR_PLLMULL7_Msk             /*!< PLL input clock*7 */
.equ	RCC_CFGR_PLLMULL8_Pos,	(19U)
.equ	RCC_CFGR_PLLMULL8_Msk,	(0x3UL << RCC_CFGR_PLLMULL8_Pos)   /*!< 0x00180000 */
.equ	RCC_CFGR_PLLMULL8,		RCC_CFGR_PLLMULL8_Msk             /*!< PLL input clock*8 */
.equ	RCC_CFGR_PLLMULL9_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL9_Msk,	(0x7UL << RCC_CFGR_PLLMULL9_Pos)   /*!< 0x001C0000 */
.equ	RCC_CFGR_PLLMULL9,		RCC_CFGR_PLLMULL9_Msk             /*!< PLL input clock*9 */
.equ	RCC_CFGR_PLLMULL10_Pos,	(21U)
.equ	RCC_CFGR_PLLMULL10_Msk,	(0x1UL << RCC_CFGR_PLLMULL10_Pos)  /*!< 0x00200000 */
.equ	RCC_CFGR_PLLMULL10,		RCC_CFGR_PLLMULL10_Msk            /*!< PLL input clock10 */
.equ	RCC_CFGR_PLLMULL11_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL11_Msk,	(0x9UL << RCC_CFGR_PLLMULL11_Pos)  /*!< 0x00240000 */
.equ	RCC_CFGR_PLLMULL11,		RCC_CFGR_PLLMULL11_Msk            /*!< PLL input clock*11 */
.equ	RCC_CFGR_PLLMULL12_Pos,	(19U)
.equ	RCC_CFGR_PLLMULL12_Msk,	(0x5UL << RCC_CFGR_PLLMULL12_Pos)  /*!< 0x00280000 */
.equ	RCC_CFGR_PLLMULL12,		RCC_CFGR_PLLMULL12_Msk            /*!< PLL input clock*12 */
.equ	RCC_CFGR_PLLMULL13_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL13_Msk,	(0xBUL << RCC_CFGR_PLLMULL13_Pos)  /*!< 0x002C0000 */
.equ	RCC_CFGR_PLLMULL13,		RCC_CFGR_PLLMULL13_Msk            /*!< PLL input clock*13 */
.equ	RCC_CFGR_PLLMULL14_Pos,	(20U)
.equ	RCC_CFGR_PLLMULL14_Msk,	(0x3UL << RCC_CFGR_PLLMULL14_Pos)  /*!< 0x00300000 */
.equ	RCC_CFGR_PLLMULL14,		RCC_CFGR_PLLMULL14_Msk            /*!< PLL input clock*14 */
.equ	RCC_CFGR_PLLMULL15_Pos,	(18U)
.equ	RCC_CFGR_PLLMULL15_Msk,	(0xDUL << RCC_CFGR_PLLMULL15_Pos)  /*!< 0x00340000 */
.equ	RCC_CFGR_PLLMULL15,		RCC_CFGR_PLLMULL15_Msk            /*!< PLL input clock*15 */
.equ	RCC_CFGR_PLLMULL16_Pos,	(19U)
.equ	RCC_CFGR_PLLMULL16_Msk,	(0x7UL << RCC_CFGR_PLLMULL16_Pos)  /*!< 0x00380000 */
.equ	RCC_CFGR_PLLMULL16,		RCC_CFGR_PLLMULL16_Msk            /*!< PLL input clock*16 */
.equ	RCC_CFGR_USBPRE_Pos,	(22U)
.equ	RCC_CFGR_USBPRE_Msk,	(0x1UL << RCC_CFGR_USBPRE_Pos)     /*!< 0x00400000 */
.equ	RCC_CFGR_USBPRE,		RCC_CFGR_USBPRE_Msk               /*!< USB Device prescaler */

/*!< MCO configuration */
.equ	RCC_CFGR_MCO_Pos,	(24U)
.equ	RCC_CFGR_MCO_Msk,	(0x7UL << RCC_CFGR_MCO_Pos)        /*!< 0x07000000 */
.equ	RCC_CFGR_MCO,	RCC_CFGR_MCO_Msk                  /*!< MCO[2:0] bits (Microcontroller Clock Output) */
.equ	RCC_CFGR_MCO_0,	(0x1UL << RCC_CFGR_MCO_Pos)        /*!< 0x01000000 */
.equ	RCC_CFGR_MCO_1,	(0x2UL << RCC_CFGR_MCO_Pos)        /*!< 0x02000000 */
.equ	RCC_CFGR_MCO_2,	(0x4UL << RCC_CFGR_MCO_Pos)        /*!< 0x04000000 */

.equ	RCC_CFGR_MCO_NOCLOCK,	0x00000000U                        /*!< No clock */
.equ	RCC_CFGR_MCO_SYSCLK,	0x04000000U                        /*!< System clock selected as MCO source */
.equ	RCC_CFGR_MCO_HSI,	0x05000000U                        /*!< HSI clock selected as MCO source */
.equ	RCC_CFGR_MCO_HSE,	0x06000000U                        /*!< HSE clock selected as MCO source  */
.equ	RCC_CFGR_MCO_PLLCLK_DIV2,	0x07000000U                        /*!< PLL clock divided by 2 selected as MCO source */

 /* Reference defines */
.equ	RCC_CFGR_MCOSEL,	RCC_CFGR_MCO
.equ	RCC_CFGR_MCOSEL_0,	RCC_CFGR_MCO_0
.equ	RCC_CFGR_MCOSEL_1,	RCC_CFGR_MCO_1
.equ	RCC_CFGR_MCOSEL_2,	RCC_CFGR_MCO_2
.equ	RCC_CFGR_MCOSEL_NOCLOCK,	RCC_CFGR_MCO_NOCLOCK
.equ	RCC_CFGR_MCOSEL_SYSCLK,	RCC_CFGR_MCO_SYSCLK
.equ	RCC_CFGR_MCOSEL_HSI,	RCC_CFGR_MCO_HSI
.equ	RCC_CFGR_MCOSEL_HSE,	RCC_CFGR_MCO_HSE
.equ	RCC_CFGR_MCOSEL_PLL_DIV2,	RCC_CFGR_MCO_PLLCLK_DIV2

/*!<******************  Bit definition for RCC_CIR register  ********************/
.equ	RCC_CIR_LSIRDYF_Pos,	0
.equ	RCC_CIR_LSIRDYF_Msk,	(0x1UL << RCC_CIR_LSIRDYF_Pos)     /*!< 0x00000001 */
.equ	RCC_CIR_LSIRDYF,	RCC_CIR_LSIRDYF_Msk               /*!< LSI Ready Interrupt flag */
.equ	RCC_CIR_LSERDYF_Pos,	(1U)
.equ	RCC_CIR_LSERDYF_Msk,	(0x1UL << RCC_CIR_LSERDYF_Pos)     /*!< 0x00000002 */
.equ	RCC_CIR_LSERDYF,	RCC_CIR_LSERDYF_Msk               /*!< LSE Ready Interrupt flag */
.equ	RCC_CIR_HSIRDYF_Pos,	(2U)
.equ	RCC_CIR_HSIRDYF_Msk,	(0x1UL << RCC_CIR_HSIRDYF_Pos)     /*!< 0x00000004 */
.equ	RCC_CIR_HSIRDYF,	RCC_CIR_HSIRDYF_Msk               /*!< HSI Ready Interrupt flag */
.equ	RCC_CIR_HSERDYF_Pos,	(3U)
.equ	RCC_CIR_HSERDYF_Msk,	(0x1UL << RCC_CIR_HSERDYF_Pos)     /*!< 0x00000008 */
.equ	RCC_CIR_HSERDYF,	RCC_CIR_HSERDYF_Msk               /*!< HSE Ready Interrupt flag */
.equ	RCC_CIR_PLLRDYF_Pos,	(4U)
.equ	RCC_CIR_PLLRDYF_Msk,	(0x1UL << RCC_CIR_PLLRDYF_Pos)     /*!< 0x00000010 */
.equ	RCC_CIR_PLLRDYF,	RCC_CIR_PLLRDYF_Msk               /*!< PLL Ready Interrupt flag */
.equ	RCC_CIR_CSSF_Pos,	(7U)
.equ	RCC_CIR_CSSF_Msk,	(0x1UL << RCC_CIR_CSSF_Pos)        /*!< 0x00000080 */
.equ	RCC_CIR_CSSF,	RCC_CIR_CSSF_Msk                  /*!< Clock Security System Interrupt flag */
.equ	RCC_CIR_LSIRDYIE_Pos,	(8U)
.equ	RCC_CIR_LSIRDYIE_Msk,	(0x1UL << RCC_CIR_LSIRDYIE_Pos)    /*!< 0x00000100 */
.equ	RCC_CIR_LSIRDYIE,	RCC_CIR_LSIRDYIE_Msk              /*!< LSI Ready Interrupt Enable */
.equ	RCC_CIR_LSERDYIE_Pos,	(9U)
.equ	RCC_CIR_LSERDYIE_Msk,	(0x1UL << RCC_CIR_LSERDYIE_Pos)    /*!< 0x00000200 */
.equ	RCC_CIR_LSERDYIE,	RCC_CIR_LSERDYIE_Msk              /*!< LSE Ready Interrupt Enable */
.equ	RCC_CIR_HSIRDYIE_Pos,	(10U)
.equ	RCC_CIR_HSIRDYIE_Msk,	(0x1UL << RCC_CIR_HSIRDYIE_Pos)    /*!< 0x00000400 */
.equ	RCC_CIR_HSIRDYIE,	RCC_CIR_HSIRDYIE_Msk              /*!< HSI Ready Interrupt Enable */
.equ	RCC_CIR_HSERDYIE_Pos,	(11U)
.equ	RCC_CIR_HSERDYIE_Msk,	(0x1UL << RCC_CIR_HSERDYIE_Pos)    /*!< 0x00000800 */
.equ	RCC_CIR_HSERDYIE,	RCC_CIR_HSERDYIE_Msk              /*!< HSE Ready Interrupt Enable */
.equ	RCC_CIR_PLLRDYIE_Pos,	(12U)
.equ	RCC_CIR_PLLRDYIE_Msk,	(0x1UL << RCC_CIR_PLLRDYIE_Pos)    /*!< 0x00001000 */
.equ	RCC_CIR_PLLRDYIE,	RCC_CIR_PLLRDYIE_Msk              /*!< PLL Ready Interrupt Enable */
.equ	RCC_CIR_LSIRDYC_Pos,	(16U)
.equ	RCC_CIR_LSIRDYC_Msk,	(0x1UL << RCC_CIR_LSIRDYC_Pos)     /*!< 0x00010000 */
.equ	RCC_CIR_LSIRDYC,	RCC_CIR_LSIRDYC_Msk               /*!< LSI Ready Interrupt Clear */
.equ	RCC_CIR_LSERDYC_Pos,	(17U)
.equ	RCC_CIR_LSERDYC_Msk,	(0x1UL << RCC_CIR_LSERDYC_Pos)     /*!< 0x00020000 */
.equ	RCC_CIR_LSERDYC,	RCC_CIR_LSERDYC_Msk               /*!< LSE Ready Interrupt Clear */
.equ	RCC_CIR_HSIRDYC_Pos,	(18U)
.equ	RCC_CIR_HSIRDYC_Msk,	(0x1UL << RCC_CIR_HSIRDYC_Pos)     /*!< 0x00040000 */
.equ	RCC_CIR_HSIRDYC,	RCC_CIR_HSIRDYC_Msk               /*!< HSI Ready Interrupt Clear */
.equ	RCC_CIR_HSERDYC_Pos,	(19U)
.equ	RCC_CIR_HSERDYC_Msk,	(0x1UL << RCC_CIR_HSERDYC_Pos)     /*!< 0x00080000 */
.equ	RCC_CIR_HSERDYC,	RCC_CIR_HSERDYC_Msk               /*!< HSE Ready Interrupt Clear */
.equ	RCC_CIR_PLLRDYC_Pos,	(20U)
.equ	RCC_CIR_PLLRDYC_Msk,	(0x1UL << RCC_CIR_PLLRDYC_Pos)     /*!< 0x00100000 */
.equ	RCC_CIR_PLLRDYC,	RCC_CIR_PLLRDYC_Msk               /*!< PLL Ready Interrupt Clear */
.equ	RCC_CIR_CSSC_Pos,	(23U)
.equ	RCC_CIR_CSSC_Msk,	(0x1UL << RCC_CIR_CSSC_Pos)        /*!< 0x00800000 */
.equ	RCC_CIR_CSSC,	RCC_CIR_CSSC_Msk                  /*!< Clock Security System Interrupt Clear */


/*****************  Bit definition for RCC_APB2RSTR register  *****************/
.equ	RCC_APB2RSTR_AFIORST_Pos,	0
.equ	RCC_APB2RSTR_AFIORST_Msk,	(0x1UL << RCC_APB2RSTR_AFIORST_Pos) /*!< 0x00000001 */
.equ	RCC_APB2RSTR_AFIORST,	RCC_APB2RSTR_AFIORST_Msk          /*!< Alternate Function I/O reset */
.equ	RCC_APB2RSTR_IOPARST_Pos,	(2U)
.equ	RCC_APB2RSTR_IOPARST_Msk,	(0x1UL << RCC_APB2RSTR_IOPARST_Pos) /*!< 0x00000004 */
.equ	RCC_APB2RSTR_IOPARST,	RCC_APB2RSTR_IOPARST_Msk          /*!< I/O port A reset */
.equ	RCC_APB2RSTR_IOPBRST_Pos,	(3U)
.equ	RCC_APB2RSTR_IOPBRST_Msk,	(0x1UL << RCC_APB2RSTR_IOPBRST_Pos) /*!< 0x00000008 */
.equ	RCC_APB2RSTR_IOPBRST,	RCC_APB2RSTR_IOPBRST_Msk          /*!< I/O port B reset */
.equ	RCC_APB2RSTR_IOPCRST_Pos,	(4U)
.equ	RCC_APB2RSTR_IOPCRST_Msk,	(0x1UL << RCC_APB2RSTR_IOPCRST_Pos) /*!< 0x00000010 */
.equ	RCC_APB2RSTR_IOPCRST,	RCC_APB2RSTR_IOPCRST_Msk          /*!< I/O port C reset */
.equ	RCC_APB2RSTR_IOPDRST_Pos,	(5U)
.equ	RCC_APB2RSTR_IOPDRST_Msk,	(0x1UL << RCC_APB2RSTR_IOPDRST_Pos) /*!< 0x00000020 */
.equ	RCC_APB2RSTR_IOPDRST,	RCC_APB2RSTR_IOPDRST_Msk          /*!< I/O port D reset */
.equ	RCC_APB2RSTR_ADC1RST_Pos,	(9U)
.equ	RCC_APB2RSTR_ADC1RST_Msk,	(0x1UL << RCC_APB2RSTR_ADC1RST_Pos) /*!< 0x00000200 */
.equ	RCC_APB2RSTR_ADC1RST,	RCC_APB2RSTR_ADC1RST_Msk          /*!< ADC 1 interface reset */

.equ	RCC_APB2RSTR_ADC2RST_Pos,	(10U)
.equ	RCC_APB2RSTR_ADC2RST_Msk,	(0x1UL << RCC_APB2RSTR_ADC2RST_Pos) /*!< 0x00000400 */
.equ	RCC_APB2RSTR_ADC2RST,	RCC_APB2RSTR_ADC2RST_Msk          /*!< ADC 2 interface reset */

.equ	RCC_APB2RSTR_TIM1RST_Pos,	(11U)
.equ	RCC_APB2RSTR_TIM1RST_Msk,	(0x1UL << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000800 */
.equ	RCC_APB2RSTR_TIM1RST,	RCC_APB2RSTR_TIM1RST_Msk          /*!< TIM1 Timer reset */
.equ	RCC_APB2RSTR_SPI1RST_Pos,	(12U)
.equ	RCC_APB2RSTR_SPI1RST_Msk,	(0x1UL << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
.equ	RCC_APB2RSTR_SPI1RST,	RCC_APB2RSTR_SPI1RST_Msk          /*!< SPI 1 reset */
.equ	RCC_APB2RSTR_USART1RST_Pos,	(14U)
.equ	RCC_APB2RSTR_USART1RST_Msk,	(0x1UL << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00004000 */
.equ	RCC_APB2RSTR_USART1RST,	RCC_APB2RSTR_USART1RST_Msk        /*!< USART1 reset */


.equ	RCC_APB2RSTR_IOPERST_Pos,	(6U)
.equ	RCC_APB2RSTR_IOPERST_Msk,	(0x1UL << RCC_APB2RSTR_IOPERST_Pos) /*!< 0x00000040 */
.equ	RCC_APB2RSTR_IOPERST,	RCC_APB2RSTR_IOPERST_Msk          /*!< I/O port E reset */




/*****************  Bit definition for RCC_APB1RSTR register  *****************/
.equ	RCC_APB1RSTR_TIM2RST_Pos,	0
.equ	RCC_APB1RSTR_TIM2RST_Msk,	(0x1UL << RCC_APB1RSTR_TIM2RST_Pos) /*!< 0x00000001 */
.equ	RCC_APB1RSTR_TIM2RST,	RCC_APB1RSTR_TIM2RST_Msk          /*!< Timer 2 reset */
.equ	RCC_APB1RSTR_TIM3RST_Pos,	(1U)
.equ	RCC_APB1RSTR_TIM3RST_Msk,	(0x1UL << RCC_APB1RSTR_TIM3RST_Pos) /*!< 0x00000002 */
.equ	RCC_APB1RSTR_TIM3RST,	RCC_APB1RSTR_TIM3RST_Msk          /*!< Timer 3 reset */
.equ	RCC_APB1RSTR_WWDGRST_Pos,	(11U)
.equ	RCC_APB1RSTR_WWDGRST_Msk,	(0x1UL << RCC_APB1RSTR_WWDGRST_Pos) /*!< 0x00000800 */
.equ	RCC_APB1RSTR_WWDGRST,	RCC_APB1RSTR_WWDGRST_Msk          /*!< Window Watchdog reset */
.equ	RCC_APB1RSTR_USART2RST_Pos,	(17U)
.equ	RCC_APB1RSTR_USART2RST_Msk,	(0x1UL << RCC_APB1RSTR_USART2RST_Pos) /*!< 0x00020000 */
.equ	RCC_APB1RSTR_USART2RST,	RCC_APB1RSTR_USART2RST_Msk        /*!< USART 2 reset */
.equ	RCC_APB1RSTR_I2C1RST_Pos,	(21U)
.equ	RCC_APB1RSTR_I2C1RST_Msk,	(0x1UL << RCC_APB1RSTR_I2C1RST_Pos) /*!< 0x00200000 */
.equ	RCC_APB1RSTR_I2C1RST,	RCC_APB1RSTR_I2C1RST_Msk          /*!< I2C 1 reset */

.equ	RCC_APB1RSTR_CAN1RST_Pos,	(25U)
.equ	RCC_APB1RSTR_CAN1RST_Msk,	(0x1UL << RCC_APB1RSTR_CAN1RST_Pos) /*!< 0x02000000 */
.equ	RCC_APB1RSTR_CAN1RST,	RCC_APB1RSTR_CAN1RST_Msk          /*!< CAN1 reset */

.equ	RCC_APB1RSTR_BKPRST_Pos,	(27U)
.equ	RCC_APB1RSTR_BKPRST_Msk,	(0x1UL << RCC_APB1RSTR_BKPRST_Pos) /*!< 0x08000000 */
.equ	RCC_APB1RSTR_BKPRST,	RCC_APB1RSTR_BKPRST_Msk           /*!< Backup interface reset */
.equ	RCC_APB1RSTR_PWRRST_Pos,	(28U)
.equ	RCC_APB1RSTR_PWRRST_Msk,	(0x1UL << RCC_APB1RSTR_PWRRST_Pos) /*!< 0x10000000 */
.equ	RCC_APB1RSTR_PWRRST,	RCC_APB1RSTR_PWRRST_Msk           /*!< Power interface reset */

.equ	RCC_APB1RSTR_TIM4RST_Pos,	(2U)
.equ	RCC_APB1RSTR_TIM4RST_Msk,	(0x1UL << RCC_APB1RSTR_TIM4RST_Pos) /*!< 0x00000004 */
.equ	RCC_APB1RSTR_TIM4RST,	RCC_APB1RSTR_TIM4RST_Msk          /*!< Timer 4 reset */
.equ	RCC_APB1RSTR_SPI2RST_Pos,	(14U)
.equ	RCC_APB1RSTR_SPI2RST_Msk,	(0x1UL << RCC_APB1RSTR_SPI2RST_Pos) /*!< 0x00004000 */
.equ	RCC_APB1RSTR_SPI2RST,	RCC_APB1RSTR_SPI2RST_Msk          /*!< SPI 2 reset */
.equ	RCC_APB1RSTR_USART3RST_Pos,	(18U)
.equ	RCC_APB1RSTR_USART3RST_Msk,	(0x1UL << RCC_APB1RSTR_USART3RST_Pos) /*!< 0x00040000 */
.equ	RCC_APB1RSTR_USART3RST,	RCC_APB1RSTR_USART3RST_Msk        /*!< USART 3 reset */
.equ	RCC_APB1RSTR_I2C2RST_Pos,	(22U)
.equ	RCC_APB1RSTR_I2C2RST_Msk,	(0x1UL << RCC_APB1RSTR_I2C2RST_Pos) /*!< 0x00400000 */
.equ	RCC_APB1RSTR_I2C2RST,	RCC_APB1RSTR_I2C2RST_Msk          /*!< I2C 2 reset */

.equ	RCC_APB1RSTR_USBRST_Pos,	(23U)
.equ	RCC_APB1RSTR_USBRST_Msk,	(0x1UL << RCC_APB1RSTR_USBRST_Pos) /*!< 0x00800000 */
.equ	RCC_APB1RSTR_USBRST,	RCC_APB1RSTR_USBRST_Msk           /*!< USB Device reset */






/******************  Bit definition for RCC_AHBENR register  ******************/
.equ	RCC_AHBENR_DMA1EN_Pos,	0
.equ	RCC_AHBENR_DMA1EN_Msk,	(0x1UL << RCC_AHBENR_DMA1EN_Pos)   /*!< 0x00000001 */
.equ	RCC_AHBENR_DMA1EN,	RCC_AHBENR_DMA1EN_Msk             /*!< DMA1 clock enable */
.equ	RCC_AHBENR_SRAMEN_Pos,	(2U)
.equ	RCC_AHBENR_SRAMEN_Msk,	(0x1UL << RCC_AHBENR_SRAMEN_Pos)   /*!< 0x00000004 */
.equ	RCC_AHBENR_SRAMEN,	RCC_AHBENR_SRAMEN_Msk             /*!< SRAM interface clock enable */
.equ	RCC_AHBENR_FLITFEN_Pos,	(4U)
.equ	RCC_AHBENR_FLITFEN_Msk,	(0x1UL << RCC_AHBENR_FLITFEN_Pos)  /*!< 0x00000010 */
.equ	RCC_AHBENR_FLITFEN,	RCC_AHBENR_FLITFEN_Msk            /*!< FLITF clock enable */
.equ	RCC_AHBENR_CRCEN_Pos,	(6U)
.equ	RCC_AHBENR_CRCEN_Msk,	(0x1UL << RCC_AHBENR_CRCEN_Pos)    /*!< 0x00000040 */
.equ	RCC_AHBENR_CRCEN,	RCC_AHBENR_CRCEN_Msk              /*!< CRC clock enable */




/******************  Bit definition for RCC_APB2ENR register  *****************/
.equ	RCC_APB2ENR_AFIOEN_Pos,	0
.equ	RCC_APB2ENR_AFIOEN_Msk,	(0x1UL << RCC_APB2ENR_AFIOEN_Pos)  /*!< 0x00000001 */
.equ	RCC_APB2ENR_AFIOEN,	RCC_APB2ENR_AFIOEN_Msk            /*!< Alternate Function I/O clock enable */
.equ	RCC_APB2ENR_IOPAEN_Pos,	(2U)
.equ	RCC_APB2ENR_IOPAEN_Msk,	(0x1UL << RCC_APB2ENR_IOPAEN_Pos)  /*!< 0x00000004 */
.equ	RCC_APB2ENR_IOPAEN,	RCC_APB2ENR_IOPAEN_Msk            /*!< I/O port A clock enable */
.equ	RCC_APB2ENR_IOPBEN_Pos,	(3U)
.equ	RCC_APB2ENR_IOPBEN_Msk,	(0x1UL << RCC_APB2ENR_IOPBEN_Pos)  /*!< 0x00000008 */
.equ	RCC_APB2ENR_IOPBEN,	RCC_APB2ENR_IOPBEN_Msk            /*!< I/O port B clock enable */
.equ	RCC_APB2ENR_IOPCEN_Pos,	(4U)
.equ	RCC_APB2ENR_IOPCEN_Msk,	(0x1UL << RCC_APB2ENR_IOPCEN_Pos)  /*!< 0x00000010 */
.equ	RCC_APB2ENR_IOPCEN,	RCC_APB2ENR_IOPCEN_Msk            /*!< I/O port C clock enable */
.equ	RCC_APB2ENR_IOPDEN_Pos,	(5U)
.equ	RCC_APB2ENR_IOPDEN_Msk,	(0x1UL << RCC_APB2ENR_IOPDEN_Pos)  /*!< 0x00000020 */
.equ	RCC_APB2ENR_IOPDEN,	RCC_APB2ENR_IOPDEN_Msk            /*!< I/O port D clock enable */
.equ	RCC_APB2ENR_ADC1EN_Pos,	(9U)
.equ	RCC_APB2ENR_ADC1EN_Msk,	(0x1UL << RCC_APB2ENR_ADC1EN_Pos)  /*!< 0x00000200 */
.equ	RCC_APB2ENR_ADC1EN,	RCC_APB2ENR_ADC1EN_Msk            /*!< ADC 1 interface clock enable */

.equ	RCC_APB2ENR_ADC2EN_Pos,	(10U)
.equ	RCC_APB2ENR_ADC2EN_Msk,	(0x1UL << RCC_APB2ENR_ADC2EN_Pos)  /*!< 0x00000400 */
.equ	RCC_APB2ENR_ADC2EN,	RCC_APB2ENR_ADC2EN_Msk            /*!< ADC 2 interface clock enable */

.equ	RCC_APB2ENR_TIM1EN_Pos,	(11U)
.equ	RCC_APB2ENR_TIM1EN_Msk,	(0x1UL << RCC_APB2ENR_TIM1EN_Pos)  /*!< 0x00000800 */
.equ	RCC_APB2ENR_TIM1EN,	RCC_APB2ENR_TIM1EN_Msk            /*!< TIM1 Timer clock enable */
.equ	RCC_APB2ENR_SPI1EN_Pos,	(12U)
.equ	RCC_APB2ENR_SPI1EN_Msk,	(0x1UL << RCC_APB2ENR_SPI1EN_Pos)  /*!< 0x00001000 */
.equ	RCC_APB2ENR_SPI1EN,	RCC_APB2ENR_SPI1EN_Msk            /*!< SPI 1 clock enable */
.equ	RCC_APB2ENR_USART1EN_Pos,	(14U)
.equ	RCC_APB2ENR_USART1EN_Msk,	(0x1UL << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00004000 */
.equ	RCC_APB2ENR_USART1EN,	RCC_APB2ENR_USART1EN_Msk          /*!< USART1 clock enable */


.equ	RCC_APB2ENR_IOPEEN_Pos,	(6U)
.equ	RCC_APB2ENR_IOPEEN_Msk,	(0x1UL << RCC_APB2ENR_IOPEEN_Pos)  /*!< 0x00000040 */
.equ	RCC_APB2ENR_IOPEEN,	RCC_APB2ENR_IOPEEN_Msk            /*!< I/O port E clock enable */




/*****************  Bit definition for RCC_APB1ENR register  ******************/
.equ	RCC_APB1ENR_TIM2EN_Pos,	0
.equ	RCC_APB1ENR_TIM2EN_Msk,	(0x1UL << RCC_APB1ENR_TIM2EN_Pos)  /*!< 0x00000001 */
.equ	RCC_APB1ENR_TIM2EN,	RCC_APB1ENR_TIM2EN_Msk            /*!< Timer 2 clock enabled*/
.equ	RCC_APB1ENR_TIM3EN_Pos,	(1U)
.equ	RCC_APB1ENR_TIM3EN_Msk,	(0x1UL << RCC_APB1ENR_TIM3EN_Pos)  /*!< 0x00000002 */
.equ	RCC_APB1ENR_TIM3EN,	RCC_APB1ENR_TIM3EN_Msk            /*!< Timer 3 clock enable */
.equ	RCC_APB1ENR_WWDGEN_Pos,	(11U)
.equ	RCC_APB1ENR_WWDGEN_Msk,	(0x1UL << RCC_APB1ENR_WWDGEN_Pos)  /*!< 0x00000800 */
.equ	RCC_APB1ENR_WWDGEN,	RCC_APB1ENR_WWDGEN_Msk            /*!< Window Watchdog clock enable */
.equ	RCC_APB1ENR_USART2EN_Pos,	(17U)
.equ	RCC_APB1ENR_USART2EN_Msk,	(0x1UL << RCC_APB1ENR_USART2EN_Pos) /*!< 0x00020000 */
.equ	RCC_APB1ENR_USART2EN,	RCC_APB1ENR_USART2EN_Msk          /*!< USART 2 clock enable */
.equ	RCC_APB1ENR_I2C1EN_Pos,	(21U)
.equ	RCC_APB1ENR_I2C1EN_Msk,	(0x1UL << RCC_APB1ENR_I2C1EN_Pos)  /*!< 0x00200000 */
.equ	RCC_APB1ENR_I2C1EN,	RCC_APB1ENR_I2C1EN_Msk            /*!< I2C 1 clock enable */

.equ	RCC_APB1ENR_CAN1EN_Pos,	(25U)
.equ	RCC_APB1ENR_CAN1EN_Msk,	(0x1UL << RCC_APB1ENR_CAN1EN_Pos)  /*!< 0x02000000 */
.equ	RCC_APB1ENR_CAN1EN,	RCC_APB1ENR_CAN1EN_Msk            /*!< CAN1 clock enable */

.equ	RCC_APB1ENR_BKPEN_Pos,	(27U)
.equ	RCC_APB1ENR_BKPEN_Msk,	(0x1UL << RCC_APB1ENR_BKPEN_Pos)   /*!< 0x08000000 */
.equ	RCC_APB1ENR_BKPEN,	RCC_APB1ENR_BKPEN_Msk             /*!< Backup interface clock enable */
.equ	RCC_APB1ENR_PWREN_Pos,	(28U)
.equ	RCC_APB1ENR_PWREN_Msk,	(0x1UL << RCC_APB1ENR_PWREN_Pos)   /*!< 0x10000000 */
.equ	RCC_APB1ENR_PWREN,	RCC_APB1ENR_PWREN_Msk             /*!< Power interface clock enable */

.equ	RCC_APB1ENR_TIM4EN_Pos,	(2U)
.equ	RCC_APB1ENR_TIM4EN_Msk,	(0x1UL << RCC_APB1ENR_TIM4EN_Pos)  /*!< 0x00000004 */
.equ	RCC_APB1ENR_TIM4EN,	RCC_APB1ENR_TIM4EN_Msk            /*!< Timer 4 clock enable */
.equ	RCC_APB1ENR_SPI2EN_Pos,	(14U)
.equ	RCC_APB1ENR_SPI2EN_Msk,	(0x1UL << RCC_APB1ENR_SPI2EN_Pos)  /*!< 0x00004000 */
.equ	RCC_APB1ENR_SPI2EN,	RCC_APB1ENR_SPI2EN_Msk            /*!< SPI 2 clock enable */
.equ	RCC_APB1ENR_USART3EN_Pos,	(18U)
.equ	RCC_APB1ENR_USART3EN_Msk,	(0x1UL << RCC_APB1ENR_USART3EN_Pos) /*!< 0x00040000 */
.equ	RCC_APB1ENR_USART3EN,	RCC_APB1ENR_USART3EN_Msk          /*!< USART 3 clock enable */
.equ	RCC_APB1ENR_I2C2EN_Pos,	(22U)
.equ	RCC_APB1ENR_I2C2EN_Msk,	(0x1UL << RCC_APB1ENR_I2C2EN_Pos)  /*!< 0x00400000 */
.equ	RCC_APB1ENR_I2C2EN,	RCC_APB1ENR_I2C2EN_Msk            /*!< I2C 2 clock enable */

.equ	RCC_APB1ENR_USBEN_Pos,	(23U)
.equ	RCC_APB1ENR_USBEN_Msk,	(0x1UL << RCC_APB1ENR_USBEN_Pos)   /*!< 0x00800000 */
.equ	RCC_APB1ENR_USBEN,		RCC_APB1ENR_USBEN_Msk             /*!< USB Device clock enable */






/*******************  Bit definition for RCC_BDCR register  *******************/
.equ	RCC_BDCR_LSEON_Pos,		0
.equ	RCC_BDCR_LSEON_Msk,		(0x1UL << RCC_BDCR_LSEON_Pos)      /*!< 0x00000001 */
.equ	RCC_BDCR_LSEON,			RCC_BDCR_LSEON_Msk                /*!< External Low Speed oscillator enable */
.equ	RCC_BDCR_LSERDY_Pos,	(1U)
.equ	RCC_BDCR_LSERDY_Msk,	(0x1UL << RCC_BDCR_LSERDY_Pos)     /*!< 0x00000002 */
.equ	RCC_BDCR_LSERDY,		RCC_BDCR_LSERDY_Msk               /*!< External Low Speed oscillator Ready */
.equ	RCC_BDCR_LSEBYP_Pos,	(2U)
.equ	RCC_BDCR_LSEBYP_Msk,	(0x1UL << RCC_BDCR_LSEBYP_Pos)     /*!< 0x00000004 */
.equ	RCC_BDCR_LSEBYP,		RCC_BDCR_LSEBYP_Msk               /*!< External Low Speed oscillator Bypass */

.equ	RCC_BDCR_RTCSEL_Pos,	(8U)
.equ	RCC_BDCR_RTCSEL_Msk,	(0x3UL << RCC_BDCR_RTCSEL_Pos)     /*!< 0x00000300 */
.equ	RCC_BDCR_RTCSEL,		RCC_BDCR_RTCSEL_Msk               /*!< RTCSEL[1:0] bits (RTC clock source selection) */
.equ	RCC_BDCR_RTCSEL_0,		(0x1UL << RCC_BDCR_RTCSEL_Pos)     /*!< 0x00000100 */
.equ	RCC_BDCR_RTCSEL_1,		(0x2UL << RCC_BDCR_RTCSEL_Pos)     /*!< 0x00000200 */

/*!< RTC configuration */
.equ	RCC_BDCR_RTCSEL_NOCLOCK,	0x00000000U                       /*!< No clock */
.equ	RCC_BDCR_RTCSEL_LSE,		0x00000100U                       /*!< LSE oscillator clock used as RTC clock */
.equ	RCC_BDCR_RTCSEL_LSI,		0x00000200U                       /*!< LSI oscillator clock used as RTC clock */
.equ	RCC_BDCR_RTCSEL_HSE,		0x00000300U                       /*!< HSE oscillator clock divided by 128 used as RTC clock */

.equ	RCC_BDCR_RTCEN_Pos,	(15U)
.equ	RCC_BDCR_RTCEN_Msk,	(0x1UL << RCC_BDCR_RTCEN_Pos)      /*!< 0x00008000 */
.equ	RCC_BDCR_RTCEN,	RCC_BDCR_RTCEN_Msk                /*!< RTC clock enable */
.equ	RCC_BDCR_BDRST_Pos,	(16U)
.equ	RCC_BDCR_BDRST_Msk,	(0x1UL << RCC_BDCR_BDRST_Pos)      /*!< 0x00010000 */
.equ	RCC_BDCR_BDRST,		RCC_BDCR_BDRST_Msk                /*!< Backup domain software reset  */

/*******************  Bit definition for RCC_CSR register  ********************/
.equ	RCC_CSR_LSION_Pos,		0
.equ	RCC_CSR_LSION_Msk,		(0x1UL << RCC_CSR_LSION_Pos)       /*!< 0x00000001 */
.equ	RCC_CSR_LSION,			RCC_CSR_LSION_Msk                 /*!< Internal Low Speed oscillator enable */
.equ	RCC_CSR_LSIRDY_Pos,		(1U)
.equ	RCC_CSR_LSIRDY_Msk,		(0x1UL << RCC_CSR_LSIRDY_Pos)      /*!< 0x00000002 */
.equ	RCC_CSR_LSIRDY,			RCC_CSR_LSIRDY_Msk                /*!< Internal Low Speed oscillator Ready */
.equ	RCC_CSR_RMVF_Pos,		(24U)
.equ	RCC_CSR_RMVF_Msk,		(0x1UL << RCC_CSR_RMVF_Pos)        /*!< 0x01000000 */
.equ	RCC_CSR_RMVF,			RCC_CSR_RMVF_Msk                  /*!< Remove reset flag */
.equ	RCC_CSR_PINRSTF_Pos,	(26U)
.equ	RCC_CSR_PINRSTF_Msk,	(0x1UL << RCC_CSR_PINRSTF_Pos)     /*!< 0x04000000 */
.equ	RCC_CSR_PINRSTF,		RCC_CSR_PINRSTF_Msk               /*!< PIN reset flag */
.equ	RCC_CSR_PORRSTF_Pos,	(27U)
.equ	RCC_CSR_PORRSTF_Msk,	(0x1UL << RCC_CSR_PORRSTF_Pos)     /*!< 0x08000000 */
.equ	RCC_CSR_PORRSTF,		RCC_CSR_PORRSTF_Msk               /*!< POR/PDR reset flag */
.equ	RCC_CSR_SFTRSTF_Pos,	(28U)
.equ	RCC_CSR_SFTRSTF_Msk,	(0x1UL << RCC_CSR_SFTRSTF_Pos)     /*!< 0x10000000 */
.equ	RCC_CSR_SFTRSTF,		RCC_CSR_SFTRSTF_Msk               /*!< Software Reset flag */
.equ	RCC_CSR_IWDGRSTF_Pos,	(29U)
.equ	RCC_CSR_IWDGRSTF_Msk,	(0x1UL << RCC_CSR_IWDGRSTF_Pos)    /*!< 0x20000000 */
.equ	RCC_CSR_IWDGRSTF,		RCC_CSR_IWDGRSTF_Msk              /*!< Independent Watchdog reset flag */
.equ	RCC_CSR_WWDGRSTF_Pos,	(30U)
.equ	RCC_CSR_WWDGRSTF_Msk,	(0x1UL << RCC_CSR_WWDGRSTF_Pos)    /*!< 0x40000000 */
.equ	RCC_CSR_WWDGRSTF,		RCC_CSR_WWDGRSTF_Msk              /*!< Window watchdog reset flag */
.equ	RCC_CSR_LPWRRSTF_Pos,	(31U)
.equ	RCC_CSR_LPWRRSTF_Msk,	(0x1UL << RCC_CSR_LPWRRSTF_Pos)    /*!< 0x80000000 */
.equ	RCC_CSR_LPWRRSTF,		RCC_CSR_LPWRRSTF_Msk              /*!< Low-Power reset flag */



/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function I/O                  */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
.equ	GPIO_CRL_MODE_Pos,	0
.equ	GPIO_CRL_MODE_Msk,	(0x33333333UL << GPIO_CRL_MODE_Pos) /*!< 0x33333333 */
.equ	GPIO_CRL_MODE,		GPIO_CRL_MODE_Msk                 /*!< Port x mode bits */

.equ	GPIO_CRL_MODE0_Pos,	0
.equ	GPIO_CRL_MODE0_Msk,	(0x3UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000003 */
.equ	GPIO_CRL_MODE0,		GPIO_CRL_MODE0_Msk                /*!< MODE0[1:0] bits (Port x mode bits pin 0) */
.equ	GPIO_CRL_MODE0_0,	(0x1UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000001 */
.equ	GPIO_CRL_MODE0_1,	(0x2UL << GPIO_CRL_MODE0_Pos)      /*!< 0x00000002 */

.equ	GPIO_CRL_MODE1_Pos,	(4U)
.equ	GPIO_CRL_MODE1_Msk,	(0x3UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000030 */
.equ	GPIO_CRL_MODE1,		GPIO_CRL_MODE1_Msk                /*!< MODE1[1:0] bits (Port x mode bits pin 1) */
.equ	GPIO_CRL_MODE1_0,	(0x1UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000010 */
.equ	GPIO_CRL_MODE1_1,	(0x2UL << GPIO_CRL_MODE1_Pos)      /*!< 0x00000020 */

.equ	GPIO_CRL_MODE2_Pos,	(8U)
.equ	GPIO_CRL_MODE2_Msk,	(0x3UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000300 */
.equ	GPIO_CRL_MODE2,		GPIO_CRL_MODE2_Msk                /*!< MODE2[1:0] bits (Port x mode bits pin 2) */
.equ	GPIO_CRL_MODE2_0,	(0x1UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000100 */
.equ	GPIO_CRL_MODE2_1,	(0x2UL << GPIO_CRL_MODE2_Pos)      /*!< 0x00000200 */

.equ	GPIO_CRL_MODE3_Pos,	(12U)
.equ	GPIO_CRL_MODE3_Msk,	(0x3UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00003000 */
.equ	GPIO_CRL_MODE3,		GPIO_CRL_MODE3_Msk                /*!< MODE3[1:0] bits (Port x mode bits pin 3) */
.equ	GPIO_CRL_MODE3_0,	(0x1UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00001000 */
.equ	GPIO_CRL_MODE3_1,	(0x2UL << GPIO_CRL_MODE3_Pos)      /*!< 0x00002000 */

.equ	GPIO_CRL_MODE4_Pos,	(16U)
.equ	GPIO_CRL_MODE4_Msk,	(0x3UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00030000 */
.equ	GPIO_CRL_MODE4,		GPIO_CRL_MODE4_Msk                /*!< MODE4[1:0] bits (Port x mode bits pin 4) */
.equ	GPIO_CRL_MODE4_0,	(0x1UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00010000 */
.equ	GPIO_CRL_MODE4_1,	(0x2UL << GPIO_CRL_MODE4_Pos)      /*!< 0x00020000 */

.equ	GPIO_CRL_MODE5_Pos,	(20U)
.equ	GPIO_CRL_MODE5_Msk,	(0x3UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00300000 */
.equ	GPIO_CRL_MODE5,		GPIO_CRL_MODE5_Msk                /*!< MODE5[1:0] bits (Port x mode bits pin 5) */
.equ	GPIO_CRL_MODE5_0,	(0x1UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00100000 */
.equ	GPIO_CRL_MODE5_1,	(0x2UL << GPIO_CRL_MODE5_Pos)      /*!< 0x00200000 */

.equ	GPIO_CRL_MODE6_Pos,	(24U)
.equ	GPIO_CRL_MODE6_Msk,	(0x3UL << GPIO_CRL_MODE6_Pos)      /*!< 0x03000000 */
.equ	GPIO_CRL_MODE6,		GPIO_CRL_MODE6_Msk                /*!< MODE6[1:0] bits (Port x mode bits pin 6) */
.equ	GPIO_CRL_MODE6_0,	(0x1UL << GPIO_CRL_MODE6_Pos)      /*!< 0x01000000 */
.equ	GPIO_CRL_MODE6_1,	(0x2UL << GPIO_CRL_MODE6_Pos)      /*!< 0x02000000 */

.equ	GPIO_CRL_MODE7_Pos,	(28U)
.equ	GPIO_CRL_MODE7_Msk,	(0x3UL << GPIO_CRL_MODE7_Pos)      /*!< 0x30000000 */
.equ	GPIO_CRL_MODE7,		GPIO_CRL_MODE7_Msk                /*!< MODE7[1:0] bits (Port x mode bits pin 7) */
.equ	GPIO_CRL_MODE7_0,	(0x1UL << GPIO_CRL_MODE7_Pos)      /*!< 0x10000000 */
.equ	GPIO_CRL_MODE7_1,	(0x2UL << GPIO_CRL_MODE7_Pos)      /*!< 0x20000000 */

.equ	GPIO_CRL_CNF_Pos,	(2U)
.equ	GPIO_CRL_CNF_Msk,	(0x33333333UL << GPIO_CRL_CNF_Pos) /*!< 0xCCCCCCCC */
.equ	GPIO_CRL_CNF,		GPIO_CRL_CNF_Msk                  /*!< Port x configuration bits */

.equ	GPIO_CRL_CNF0_Pos,	(2U)
.equ	GPIO_CRL_CNF0_Msk,	(0x3UL << GPIO_CRL_CNF0_Pos)       /*!< 0x0000000C */
.equ	GPIO_CRL_CNF0,		GPIO_CRL_CNF0_Msk                 /*!< CNF0[1:0] bits (Port x configuration bits pin 0) */
.equ	GPIO_CRL_CNF0_0,	(0x1UL << GPIO_CRL_CNF0_Pos)       /*!< 0x00000004 */
.equ	GPIO_CRL_CNF0_1,	(0x2UL << GPIO_CRL_CNF0_Pos)       /*!< 0x00000008 */

.equ	GPIO_CRL_CNF1_Pos,	(6U)
.equ	GPIO_CRL_CNF1_Msk,	(0x3UL << GPIO_CRL_CNF1_Pos)       /*!< 0x000000C0 */
.equ	GPIO_CRL_CNF1,		GPIO_CRL_CNF1_Msk                 /*!< CNF1[1:0] bits (Port x configuration bits pin 1) */
.equ	GPIO_CRL_CNF1_0,	(0x1UL << GPIO_CRL_CNF1_Pos)       /*!< 0x00000040 */
.equ	GPIO_CRL_CNF1_1,	(0x2UL << GPIO_CRL_CNF1_Pos)       /*!< 0x00000080 */

.equ	GPIO_CRL_CNF2_Pos,	(10U)
.equ	GPIO_CRL_CNF2_Msk,	(0x3UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000C00 */
.equ	GPIO_CRL_CNF2,		GPIO_CRL_CNF2_Msk                 /*!< CNF2[1:0] bits (Port x configuration bits pin 2) */
.equ	GPIO_CRL_CNF2_0,	(0x1UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000400 */
.equ	GPIO_CRL_CNF2_1,	(0x2UL << GPIO_CRL_CNF2_Pos)       /*!< 0x00000800 */

.equ	GPIO_CRL_CNF3_Pos,	(14U)
.equ	GPIO_CRL_CNF3_Msk,	(0x3UL << GPIO_CRL_CNF3_Pos)       /*!< 0x0000C000 */
.equ	GPIO_CRL_CNF3,		GPIO_CRL_CNF3_Msk                 /*!< CNF3[1:0] bits (Port x configuration bits pin 3) */
.equ	GPIO_CRL_CNF3_0,	(0x1UL << GPIO_CRL_CNF3_Pos)       /*!< 0x00004000 */
.equ	GPIO_CRL_CNF3_1,	(0x2UL << GPIO_CRL_CNF3_Pos)       /*!< 0x00008000 */

.equ	GPIO_CRL_CNF4_Pos,	(18U)
.equ	GPIO_CRL_CNF4_Msk,	(0x3UL << GPIO_CRL_CNF4_Pos)       /*!< 0x000C0000 */
.equ	GPIO_CRL_CNF4,		GPIO_CRL_CNF4_Msk                 /*!< CNF4[1:0] bits (Port x configuration bits pin 4) */
.equ	GPIO_CRL_CNF4_0,	(0x1UL << GPIO_CRL_CNF4_Pos)       /*!< 0x00040000 */
.equ	GPIO_CRL_CNF4_1,	(0x2UL << GPIO_CRL_CNF4_Pos)       /*!< 0x00080000 */

.equ	GPIO_CRL_CNF5_Pos,	(22U)
.equ	GPIO_CRL_CNF5_Msk,	(0x3UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00C00000 */
.equ	GPIO_CRL_CNF5,		GPIO_CRL_CNF5_Msk                 /*!< CNF5[1:0] bits (Port x configuration bits pin 5) */
.equ	GPIO_CRL_CNF5_0,	(0x1UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00400000 */
.equ	GPIO_CRL_CNF5_1,	(0x2UL << GPIO_CRL_CNF5_Pos)       /*!< 0x00800000 */

.equ	GPIO_CRL_CNF6_Pos,	(26U)
.equ	GPIO_CRL_CNF6_Msk,	(0x3UL << GPIO_CRL_CNF6_Pos)       /*!< 0x0C000000 */
.equ	GPIO_CRL_CNF6,		GPIO_CRL_CNF6_Msk                 /*!< CNF6[1:0] bits (Port x configuration bits pin 6) */
.equ	GPIO_CRL_CNF6_0,	(0x1UL << GPIO_CRL_CNF6_Pos)       /*!< 0x04000000 */
.equ	GPIO_CRL_CNF6_1,	(0x2UL << GPIO_CRL_CNF6_Pos)       /*!< 0x08000000 */

.equ	GPIO_CRL_CNF7_Pos,	(30U)
.equ	GPIO_CRL_CNF7_Msk,	(0x3UL << GPIO_CRL_CNF7_Pos)       /*!< 0xC0000000 */
.equ	GPIO_CRL_CNF7,		GPIO_CRL_CNF7_Msk                 /*!< CNF7[1:0] bits (Port x configuration bits pin 7) */
.equ	GPIO_CRL_CNF7_0,	(0x1UL << GPIO_CRL_CNF7_Pos)       /*!< 0x40000000 */
.equ	GPIO_CRL_CNF7_1,	(0x2UL << GPIO_CRL_CNF7_Pos)       /*!< 0x80000000 */

/*******************  Bit definition for GPIO_CRH register  *******************/
.equ	GPIO_CRH_MODE_Pos,	0
.equ	GPIO_CRH_MODE_Msk,	(0x33333333UL << GPIO_CRH_MODE_Pos) /*!< 0x33333333 */
.equ	GPIO_CRH_MODE,	GPIO_CRH_MODE_Msk                 /*!< Port x mode bits */

.equ	GPIO_CRH_MODE8_Pos,	0
.equ	GPIO_CRH_MODE8_Msk,	(0x3UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000003 */
.equ	GPIO_CRH_MODE8,	GPIO_CRH_MODE8_Msk                /*!< MODE8[1:0] bits (Port x mode bits pin 8) */
.equ	GPIO_CRH_MODE8_0,	(0x1UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000001 */
.equ	GPIO_CRH_MODE8_1,	(0x2UL << GPIO_CRH_MODE8_Pos)      /*!< 0x00000002 */

.equ	GPIO_CRH_MODE9_Pos,	(4U)
.equ	GPIO_CRH_MODE9_Msk,	(0x3UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000030 */
.equ	GPIO_CRH_MODE9,		GPIO_CRH_MODE9_Msk                /*!< MODE9[1:0] bits (Port x mode bits pin 9) */
.equ	GPIO_CRH_MODE9_0,	(0x1UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000010 */
.equ	GPIO_CRH_MODE9_1,	(0x2UL << GPIO_CRH_MODE9_Pos)      /*!< 0x00000020 */

.equ	GPIO_CRH_MODE10_Pos,	(8U)
.equ	GPIO_CRH_MODE10_Msk,	(0x3UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000300 */
.equ	GPIO_CRH_MODE10,		GPIO_CRH_MODE10_Msk               /*!< MODE10[1:0] bits (Port x mode bits pin 10) */
.equ	GPIO_CRH_MODE10_0,		(0x1UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000100 */
.equ	GPIO_CRH_MODE10_1,		(0x2UL << GPIO_CRH_MODE10_Pos)     /*!< 0x00000200 */

.equ	GPIO_CRH_MODE11_Pos,	(12U)
.equ	GPIO_CRH_MODE11_Msk,	(0x3UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00003000 */
.equ	GPIO_CRH_MODE11,		GPIO_CRH_MODE11_Msk               /*!< MODE11[1:0] bits (Port x mode bits pin 11) */
.equ	GPIO_CRH_MODE11_0,		(0x1UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00001000 */
.equ	GPIO_CRH_MODE11_1,		(0x2UL << GPIO_CRH_MODE11_Pos)     /*!< 0x00002000 */

.equ	GPIO_CRH_MODE12_Pos,	(16U)
.equ	GPIO_CRH_MODE12_Msk,	(0x3UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00030000 */
.equ	GPIO_CRH_MODE12,		GPIO_CRH_MODE12_Msk               /*!< MODE12[1:0] bits (Port x mode bits pin 12) */
.equ	GPIO_CRH_MODE12_0,		(0x1UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00010000 */
.equ	GPIO_CRH_MODE12_1,		(0x2UL << GPIO_CRH_MODE12_Pos)     /*!< 0x00020000 */

.equ	GPIO_CRH_MODE13_Pos,	(20U)
.equ	GPIO_CRH_MODE13_Msk,	(0x3UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00300000 */
.equ	GPIO_CRH_MODE13,		GPIO_CRH_MODE13_Msk               /*!< MODE13[1:0] bits (Port x mode bits pin 13) */
.equ	GPIO_CRH_MODE13_0,		(0x1UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00100000 */
.equ	GPIO_CRH_MODE13_1,		(0x2UL << GPIO_CRH_MODE13_Pos)     /*!< 0x00200000 */

.equ	GPIO_CRH_MODE14_Pos,	(24U)
.equ	GPIO_CRH_MODE14_Msk,	(0x3UL << GPIO_CRH_MODE14_Pos)     /*!< 0x03000000 */
.equ	GPIO_CRH_MODE14,		GPIO_CRH_MODE14_Msk               /*!< MODE14[1:0] bits (Port x mode bits pin 14) */
.equ	GPIO_CRH_MODE14_0,		(0x1UL << GPIO_CRH_MODE14_Pos)     /*!< 0x01000000 */
.equ	GPIO_CRH_MODE14_1,		(0x2UL << GPIO_CRH_MODE14_Pos)     /*!< 0x02000000 */

.equ	GPIO_CRH_MODE15_Pos,	(28U)
.equ	GPIO_CRH_MODE15_Msk,	(0x3UL << GPIO_CRH_MODE15_Pos)     /*!< 0x30000000 */
.equ	GPIO_CRH_MODE15,		GPIO_CRH_MODE15_Msk               /*!< MODE15[1:0] bits (Port x mode bits pin 15) */
.equ	GPIO_CRH_MODE15_0,		(0x1UL << GPIO_CRH_MODE15_Pos)     /*!< 0x10000000 */
.equ	GPIO_CRH_MODE15_1,		(0x2UL << GPIO_CRH_MODE15_Pos)     /*!< 0x20000000 */

.equ	GPIO_CRH_CNF_Pos,		(2U)
.equ	GPIO_CRH_CNF_Msk,		(0x33333333UL << GPIO_CRH_CNF_Pos) /*!< 0xCCCCCCCC */
.equ	GPIO_CRH_CNF,			GPIO_CRH_CNF_Msk                  /*!< Port x configuration bits */

.equ	GPIO_CRH_CNF8_Pos,	(2U)
.equ	GPIO_CRH_CNF8_Msk,	(0x3UL << GPIO_CRH_CNF8_Pos)       /*!< 0x0000000C */
.equ	GPIO_CRH_CNF8,		GPIO_CRH_CNF8_Msk                 /*!< CNF8[1:0] bits (Port x configuration bits pin 8) */
.equ	GPIO_CRH_CNF8_0,	(0x1UL << GPIO_CRH_CNF8_Pos)       /*!< 0x00000004 */
.equ	GPIO_CRH_CNF8_1,	(0x2UL << GPIO_CRH_CNF8_Pos)       /*!< 0x00000008 */

.equ	GPIO_CRH_CNF9_Pos,	(6U)
.equ	GPIO_CRH_CNF9_Msk,	(0x3UL << GPIO_CRH_CNF9_Pos)       /*!< 0x000000C0 */
.equ	GPIO_CRH_CNF9,		GPIO_CRH_CNF9_Msk                 /*!< CNF9[1:0] bits (Port x configuration bits pin 9) */
.equ	GPIO_CRH_CNF9_0,	(0x1UL << GPIO_CRH_CNF9_Pos)       /*!< 0x00000040 */
.equ	GPIO_CRH_CNF9_1,	(0x2UL << GPIO_CRH_CNF9_Pos)       /*!< 0x00000080 */

.equ	GPIO_CRH_CNF10_Pos,	(10U)
.equ	GPIO_CRH_CNF10_Msk,	(0x3UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000C00 */
.equ	GPIO_CRH_CNF10,		GPIO_CRH_CNF10_Msk                /*!< CNF10[1:0] bits (Port x configuration bits pin 10) */
.equ	GPIO_CRH_CNF10_0,	(0x1UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000400 */
.equ	GPIO_CRH_CNF10_1,	(0x2UL << GPIO_CRH_CNF10_Pos)      /*!< 0x00000800 */

.equ	GPIO_CRH_CNF11_Pos,	(14U)
.equ	GPIO_CRH_CNF11_Msk,	(0x3UL << GPIO_CRH_CNF11_Pos)      /*!< 0x0000C000 */
.equ	GPIO_CRH_CNF11,		GPIO_CRH_CNF11_Msk                /*!< CNF11[1:0] bits (Port x configuration bits pin 11) */
.equ	GPIO_CRH_CNF11_0,	(0x1UL << GPIO_CRH_CNF11_Pos)      /*!< 0x00004000 */
.equ	GPIO_CRH_CNF11_1,	(0x2UL << GPIO_CRH_CNF11_Pos)      /*!< 0x00008000 */

.equ	GPIO_CRH_CNF12_Pos,	(18U)
.equ	GPIO_CRH_CNF12_Msk,	(0x3UL << GPIO_CRH_CNF12_Pos)      /*!< 0x000C0000 */
.equ	GPIO_CRH_CNF12,		GPIO_CRH_CNF12_Msk                /*!< CNF12[1:0] bits (Port x configuration bits pin 12) */
.equ	GPIO_CRH_CNF12_0,	(0x1UL << GPIO_CRH_CNF12_Pos)      /*!< 0x00040000 */
.equ	GPIO_CRH_CNF12_1,	(0x2UL << GPIO_CRH_CNF12_Pos)      /*!< 0x00080000 */

.equ	GPIO_CRH_CNF13_Pos,	(22U)
.equ	GPIO_CRH_CNF13_Msk,	(0x3UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00C00000 */
.equ	GPIO_CRH_CNF13,		GPIO_CRH_CNF13_Msk                /*!< CNF13[1:0] bits (Port x configuration bits pin 13) */
.equ	GPIO_CRH_CNF13_0,	(0x1UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00400000 */
.equ	GPIO_CRH_CNF13_1,	(0x2UL << GPIO_CRH_CNF13_Pos)      /*!< 0x00800000 */

.equ	GPIO_CRH_CNF14_Pos,	(26U)
.equ	GPIO_CRH_CNF14_Msk,	(0x3UL << GPIO_CRH_CNF14_Pos)      /*!< 0x0C000000 */
.equ	GPIO_CRH_CNF14,		GPIO_CRH_CNF14_Msk                /*!< CNF14[1:0] bits (Port x configuration bits pin 14) */
.equ	GPIO_CRH_CNF14_0,	(0x1UL << GPIO_CRH_CNF14_Pos)      /*!< 0x04000000 */
.equ	GPIO_CRH_CNF14_1,	(0x2UL << GPIO_CRH_CNF14_Pos)      /*!< 0x08000000 */

.equ	GPIO_CRH_CNF15_Pos,	(30U)
.equ	GPIO_CRH_CNF15_Msk,	(0x3UL << GPIO_CRH_CNF15_Pos)      /*!< 0xC0000000 */
.equ	GPIO_CRH_CNF15,		GPIO_CRH_CNF15_Msk                /*!< CNF15[1:0] bits (Port x configuration bits pin 15) */
.equ	GPIO_CRH_CNF15_0,	(0x1UL << GPIO_CRH_CNF15_Pos)      /*!< 0x40000000 */
.equ	GPIO_CRH_CNF15_1,	(0x2UL << GPIO_CRH_CNF15_Pos)      /*!< 0x80000000 */

/*!<******************  Bit definition for GPIO_IDR register  *******************/
.equ	GPIO_IDR_IDR0_Pos,	0
.equ	GPIO_IDR_IDR0_Msk,	(0x1UL << GPIO_IDR_IDR0_Pos)       /*!< 0x00000001 */
.equ	GPIO_IDR_IDR0,		GPIO_IDR_IDR0_Msk                 /*!< Port input data bit 0 */
.equ	GPIO_IDR_IDR1_Pos,	(1U)
.equ	GPIO_IDR_IDR1_Msk,	(0x1UL << GPIO_IDR_IDR1_Pos)       /*!< 0x00000002 */
.equ	GPIO_IDR_IDR1,		GPIO_IDR_IDR1_Msk                 /*!< Port input data bit 1 */
.equ	GPIO_IDR_IDR2_Pos,	(2U)
.equ	GPIO_IDR_IDR2_Msk,	(0x1UL << GPIO_IDR_IDR2_Pos)       /*!< 0x00000004 */
.equ	GPIO_IDR_IDR2,		GPIO_IDR_IDR2_Msk                 /*!< Port input data bit 2 */
.equ	GPIO_IDR_IDR3_Pos,	(3U)
.equ	GPIO_IDR_IDR3_Msk,	(0x1UL << GPIO_IDR_IDR3_Pos)       /*!< 0x00000008 */
.equ	GPIO_IDR_IDR3,		GPIO_IDR_IDR3_Msk                 /*!< Port input data bit 3 */
.equ	GPIO_IDR_IDR4_Pos,	(4U)
.equ	GPIO_IDR_IDR4_Msk,	(0x1UL << GPIO_IDR_IDR4_Pos)       /*!< 0x00000010 */
.equ	GPIO_IDR_IDR4,		GPIO_IDR_IDR4_Msk                 /*!< Port input data bit 4 */
.equ	GPIO_IDR_IDR5_Pos,	(5U)
.equ	GPIO_IDR_IDR5_Msk,	(0x1UL << GPIO_IDR_IDR5_Pos)       /*!< 0x00000020 */
.equ	GPIO_IDR_IDR5,		GPIO_IDR_IDR5_Msk                 /*!< Port input data bit 5 */
.equ	GPIO_IDR_IDR6_Pos,	(6U)
.equ	GPIO_IDR_IDR6_Msk,	(0x1UL << GPIO_IDR_IDR6_Pos)       /*!< 0x00000040 */
.equ	GPIO_IDR_IDR6,		GPIO_IDR_IDR6_Msk                 /*!< Port input data bit 6 */
.equ	GPIO_IDR_IDR7_Pos,	(7U)
.equ	GPIO_IDR_IDR7_Msk,	(0x1UL << GPIO_IDR_IDR7_Pos)       /*!< 0x00000080 */
.equ	GPIO_IDR_IDR7,		GPIO_IDR_IDR7_Msk                 /*!< Port input data bit 7 */
.equ	GPIO_IDR_IDR8_Pos,	(8U)
.equ	GPIO_IDR_IDR8_Msk,	(0x1UL << GPIO_IDR_IDR8_Pos)       /*!< 0x00000100 */
.equ	GPIO_IDR_IDR8,		GPIO_IDR_IDR8_Msk                 /*!< Port input data bit 8 */
.equ	GPIO_IDR_IDR9_Pos,	(9U)
.equ	GPIO_IDR_IDR9_Msk,	(0x1UL << GPIO_IDR_IDR9_Pos)       /*!< 0x00000200 */
.equ	GPIO_IDR_IDR9,		GPIO_IDR_IDR9_Msk                 /*!< Port input data bit 9 */
.equ	GPIO_IDR_IDR10_Pos,	(10U)
.equ	GPIO_IDR_IDR10_Msk,	(0x1UL << GPIO_IDR_IDR10_Pos)      /*!< 0x00000400 */
.equ	GPIO_IDR_IDR10,		GPIO_IDR_IDR10_Msk                /*!< Port input data bit 10 */
.equ	GPIO_IDR_IDR11_Pos,	(11U)
.equ	GPIO_IDR_IDR11_Msk,	(0x1UL << GPIO_IDR_IDR11_Pos)      /*!< 0x00000800 */
.equ	GPIO_IDR_IDR11,	GPIO_IDR_IDR11_Msk                /*!< Port input data bit 11 */
.equ	GPIO_IDR_IDR12_Pos,	(12U)
.equ	GPIO_IDR_IDR12_Msk,	(0x1UL << GPIO_IDR_IDR12_Pos)      /*!< 0x00001000 */
.equ	GPIO_IDR_IDR12,	GPIO_IDR_IDR12_Msk                /*!< Port input data bit 12 */
.equ	GPIO_IDR_IDR13_Pos,	(13U)
.equ	GPIO_IDR_IDR13_Msk,	(0x1UL << GPIO_IDR_IDR13_Pos)      /*!< 0x00002000 */
.equ	GPIO_IDR_IDR13,	GPIO_IDR_IDR13_Msk                /*!< Port input data bit 13 */
.equ	GPIO_IDR_IDR14_Pos,	(14U)
.equ	GPIO_IDR_IDR14_Msk,	(0x1UL << GPIO_IDR_IDR14_Pos)      /*!< 0x00004000 */
.equ	GPIO_IDR_IDR14,	GPIO_IDR_IDR14_Msk                /*!< Port input data bit 14 */
.equ	GPIO_IDR_IDR15_Pos,	(15U)
.equ	GPIO_IDR_IDR15_Msk,	(0x1UL << GPIO_IDR_IDR15_Pos)      /*!< 0x00008000 */
.equ	GPIO_IDR_IDR15,	GPIO_IDR_IDR15_Msk                /*!< Port input data bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
.equ	GPIO_ODR_ODR0_Pos,	0
.equ	GPIO_ODR_ODR0_Msk,	(0x1UL << GPIO_ODR_ODR0_Pos)       /*!< 0x00000001 */
.equ	GPIO_ODR_ODR0,	GPIO_ODR_ODR0_Msk                 /*!< Port output data bit 0 */
.equ	GPIO_ODR_ODR1_Pos,	(1U)
.equ	GPIO_ODR_ODR1_Msk,	(0x1UL << GPIO_ODR_ODR1_Pos)       /*!< 0x00000002 */
.equ	GPIO_ODR_ODR1,	GPIO_ODR_ODR1_Msk                 /*!< Port output data bit 1 */
.equ	GPIO_ODR_ODR2_Pos,	(2U)
.equ	GPIO_ODR_ODR2_Msk,	(0x1UL << GPIO_ODR_ODR2_Pos)       /*!< 0x00000004 */
.equ	GPIO_ODR_ODR2,	GPIO_ODR_ODR2_Msk                 /*!< Port output data bit 2 */
.equ	GPIO_ODR_ODR3_Pos,	(3U)
.equ	GPIO_ODR_ODR3_Msk,	(0x1UL << GPIO_ODR_ODR3_Pos)       /*!< 0x00000008 */
.equ	GPIO_ODR_ODR3,	GPIO_ODR_ODR3_Msk                 /*!< Port output data bit 3 */
.equ	GPIO_ODR_ODR4_Pos,	(4U)
.equ	GPIO_ODR_ODR4_Msk,	(0x1UL << GPIO_ODR_ODR4_Pos)       /*!< 0x00000010 */
.equ	GPIO_ODR_ODR4,	GPIO_ODR_ODR4_Msk                 /*!< Port output data bit 4 */
.equ	GPIO_ODR_ODR5_Pos,	(5U)
.equ	GPIO_ODR_ODR5_Msk,	(0x1UL << GPIO_ODR_ODR5_Pos)       /*!< 0x00000020 */
.equ	GPIO_ODR_ODR5,	GPIO_ODR_ODR5_Msk                 /*!< Port output data bit 5 */
.equ	GPIO_ODR_ODR6_Pos,	(6U)
.equ	GPIO_ODR_ODR6_Msk,	(0x1UL << GPIO_ODR_ODR6_Pos)       /*!< 0x00000040 */
.equ	GPIO_ODR_ODR6,	GPIO_ODR_ODR6_Msk                 /*!< Port output data bit 6 */
.equ	GPIO_ODR_ODR7_Pos,	(7U)
.equ	GPIO_ODR_ODR7_Msk,	(0x1UL << GPIO_ODR_ODR7_Pos)       /*!< 0x00000080 */
.equ	GPIO_ODR_ODR7,	GPIO_ODR_ODR7_Msk                 /*!< Port output data bit 7 */
.equ	GPIO_ODR_ODR8_Pos,	(8U)
.equ	GPIO_ODR_ODR8_Msk,	(0x1UL << GPIO_ODR_ODR8_Pos)       /*!< 0x00000100 */
.equ	GPIO_ODR_ODR8,	GPIO_ODR_ODR8_Msk                 /*!< Port output data bit 8 */
.equ	GPIO_ODR_ODR9_Pos,	(9U)
.equ	GPIO_ODR_ODR9_Msk,	(0x1UL << GPIO_ODR_ODR9_Pos)       /*!< 0x00000200 */
.equ	GPIO_ODR_ODR9,	GPIO_ODR_ODR9_Msk                 /*!< Port output data bit 9 */
.equ	GPIO_ODR_ODR10_Pos,	(10U)
.equ	GPIO_ODR_ODR10_Msk,	(0x1UL << GPIO_ODR_ODR10_Pos)      /*!< 0x00000400 */
.equ	GPIO_ODR_ODR10,	GPIO_ODR_ODR10_Msk                /*!< Port output data bit 10 */
.equ	GPIO_ODR_ODR11_Pos,	(11U)
.equ	GPIO_ODR_ODR11_Msk,	(0x1UL << GPIO_ODR_ODR11_Pos)      /*!< 0x00000800 */
.equ	GPIO_ODR_ODR11,	GPIO_ODR_ODR11_Msk                /*!< Port output data bit 11 */
.equ	GPIO_ODR_ODR12_Pos,	(12U)
.equ	GPIO_ODR_ODR12_Msk,	(0x1UL << GPIO_ODR_ODR12_Pos)      /*!< 0x00001000 */
.equ	GPIO_ODR_ODR12,	GPIO_ODR_ODR12_Msk                /*!< Port output data bit 12 */
.equ	GPIO_ODR_ODR13_Pos,	(13U)
.equ	GPIO_ODR_ODR13_Msk,	(0x1UL << GPIO_ODR_ODR13_Pos)      /*!< 0x00002000 */
.equ	GPIO_ODR_ODR13,	GPIO_ODR_ODR13_Msk                /*!< Port output data bit 13 */
.equ	GPIO_ODR_ODR14_Pos,	(14U)
.equ	GPIO_ODR_ODR14_Msk,	(0x1UL << GPIO_ODR_ODR14_Pos)      /*!< 0x00004000 */
.equ	GPIO_ODR_ODR14,	GPIO_ODR_ODR14_Msk                /*!< Port output data bit 14 */
.equ	GPIO_ODR_ODR15_Pos,	(15U)
.equ	GPIO_ODR_ODR15_Msk,	(0x1UL << GPIO_ODR_ODR15_Pos)      /*!< 0x00008000 */
.equ	GPIO_ODR_ODR15,	GPIO_ODR_ODR15_Msk                /*!< Port output data bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
.equ	GPIO_BSRR_BS0_Pos,	0
.equ	GPIO_BSRR_BS0_Msk,	(0x1UL << GPIO_BSRR_BS0_Pos)       /*!< 0x00000001 */
.equ	GPIO_BSRR_BS0,	GPIO_BSRR_BS0_Msk                 /*!< Port x Set bit 0 */
.equ	GPIO_BSRR_BS1_Pos,	(1U)
.equ	GPIO_BSRR_BS1_Msk,	(0x1UL << GPIO_BSRR_BS1_Pos)       /*!< 0x00000002 */
.equ	GPIO_BSRR_BS1,	GPIO_BSRR_BS1_Msk                 /*!< Port x Set bit 1 */
.equ	GPIO_BSRR_BS2_Pos,	(2U)
.equ	GPIO_BSRR_BS2_Msk,	(0x1UL << GPIO_BSRR_BS2_Pos)       /*!< 0x00000004 */
.equ	GPIO_BSRR_BS2,	GPIO_BSRR_BS2_Msk                 /*!< Port x Set bit 2 */
.equ	GPIO_BSRR_BS3_Pos,	(3U)
.equ	GPIO_BSRR_BS3_Msk,	(0x1UL << GPIO_BSRR_BS3_Pos)       /*!< 0x00000008 */
.equ	GPIO_BSRR_BS3,	GPIO_BSRR_BS3_Msk                 /*!< Port x Set bit 3 */
.equ	GPIO_BSRR_BS4_Pos,	(4U)
.equ	GPIO_BSRR_BS4_Msk,	(0x1UL << GPIO_BSRR_BS4_Pos)       /*!< 0x00000010 */
.equ	GPIO_BSRR_BS4,	GPIO_BSRR_BS4_Msk                 /*!< Port x Set bit 4 */
.equ	GPIO_BSRR_BS5_Pos,	(5U)
.equ	GPIO_BSRR_BS5_Msk,	(0x1UL << GPIO_BSRR_BS5_Pos)       /*!< 0x00000020 */
.equ	GPIO_BSRR_BS5,	GPIO_BSRR_BS5_Msk                 /*!< Port x Set bit 5 */
.equ	GPIO_BSRR_BS6_Pos,	(6U)
.equ	GPIO_BSRR_BS6_Msk,	(0x1UL << GPIO_BSRR_BS6_Pos)       /*!< 0x00000040 */
.equ	GPIO_BSRR_BS6,	GPIO_BSRR_BS6_Msk                 /*!< Port x Set bit 6 */
.equ	GPIO_BSRR_BS7_Pos,	(7U)
.equ	GPIO_BSRR_BS7_Msk,	(0x1UL << GPIO_BSRR_BS7_Pos)       /*!< 0x00000080 */
.equ	GPIO_BSRR_BS7,	GPIO_BSRR_BS7_Msk                 /*!< Port x Set bit 7 */
.equ	GPIO_BSRR_BS8_Pos,	(8U)
.equ	GPIO_BSRR_BS8_Msk,	(0x1UL << GPIO_BSRR_BS8_Pos)       /*!< 0x00000100 */
.equ	GPIO_BSRR_BS8,	GPIO_BSRR_BS8_Msk                 /*!< Port x Set bit 8 */
.equ	GPIO_BSRR_BS9_Pos,	(9U)
.equ	GPIO_BSRR_BS9_Msk,	(0x1UL << GPIO_BSRR_BS9_Pos)       /*!< 0x00000200 */
.equ	GPIO_BSRR_BS9,	GPIO_BSRR_BS9_Msk                 /*!< Port x Set bit 9 */
.equ	GPIO_BSRR_BS10_Pos,	(10U)
.equ	GPIO_BSRR_BS10_Msk,	(0x1UL << GPIO_BSRR_BS10_Pos)      /*!< 0x00000400 */
.equ	GPIO_BSRR_BS10,	GPIO_BSRR_BS10_Msk                /*!< Port x Set bit 10 */
.equ	GPIO_BSRR_BS11_Pos,	(11U)
.equ	GPIO_BSRR_BS11_Msk,	(0x1UL << GPIO_BSRR_BS11_Pos)      /*!< 0x00000800 */
.equ	GPIO_BSRR_BS11,	GPIO_BSRR_BS11_Msk                /*!< Port x Set bit 11 */
.equ	GPIO_BSRR_BS12_Pos,	(12U)
.equ	GPIO_BSRR_BS12_Msk,	(0x1UL << GPIO_BSRR_BS12_Pos)      /*!< 0x00001000 */
.equ	GPIO_BSRR_BS12,	GPIO_BSRR_BS12_Msk                /*!< Port x Set bit 12 */
.equ	GPIO_BSRR_BS13_Pos,	(13U)
.equ	GPIO_BSRR_BS13_Msk,	(0x1UL << GPIO_BSRR_BS13_Pos)      /*!< 0x00002000 */
.equ	GPIO_BSRR_BS13,	GPIO_BSRR_BS13_Msk                /*!< Port x Set bit 13 */
.equ	GPIO_BSRR_BS14_Pos,	(14U)
.equ	GPIO_BSRR_BS14_Msk,	(0x1UL << GPIO_BSRR_BS14_Pos)      /*!< 0x00004000 */
.equ	GPIO_BSRR_BS14,	GPIO_BSRR_BS14_Msk                /*!< Port x Set bit 14 */
.equ	GPIO_BSRR_BS15_Pos,	(15U)
.equ	GPIO_BSRR_BS15_Msk,	(0x1UL << GPIO_BSRR_BS15_Pos)      /*!< 0x00008000 */
.equ	GPIO_BSRR_BS15,	GPIO_BSRR_BS15_Msk                /*!< Port x Set bit 15 */

.equ	GPIO_BSRR_BR0_Pos,	(16U)
.equ	GPIO_BSRR_BR0_Msk,	(0x1UL << GPIO_BSRR_BR0_Pos)       /*!< 0x00010000 */
.equ	GPIO_BSRR_BR0,	GPIO_BSRR_BR0_Msk                 /*!< Port x Reset bit 0 */
.equ	GPIO_BSRR_BR1_Pos,	(17U)
.equ	GPIO_BSRR_BR1_Msk,	(0x1UL << GPIO_BSRR_BR1_Pos)       /*!< 0x00020000 */
.equ	GPIO_BSRR_BR1,	GPIO_BSRR_BR1_Msk                 /*!< Port x Reset bit 1 */
.equ	GPIO_BSRR_BR2_Pos,	(18U)
.equ	GPIO_BSRR_BR2_Msk,	(0x1UL << GPIO_BSRR_BR2_Pos)       /*!< 0x00040000 */
.equ	GPIO_BSRR_BR2,	GPIO_BSRR_BR2_Msk                 /*!< Port x Reset bit 2 */
.equ	GPIO_BSRR_BR3_Pos,	(19U)
.equ	GPIO_BSRR_BR3_Msk,	(0x1UL << GPIO_BSRR_BR3_Pos)       /*!< 0x00080000 */
.equ	GPIO_BSRR_BR3,	GPIO_BSRR_BR3_Msk                 /*!< Port x Reset bit 3 */
.equ	GPIO_BSRR_BR4_Pos,	(20U)
.equ	GPIO_BSRR_BR4_Msk,	(0x1UL << GPIO_BSRR_BR4_Pos)       /*!< 0x00100000 */
.equ	GPIO_BSRR_BR4,	GPIO_BSRR_BR4_Msk                 /*!< Port x Reset bit 4 */
.equ	GPIO_BSRR_BR5_Pos,	(21U)
.equ	GPIO_BSRR_BR5_Msk,	(0x1UL << GPIO_BSRR_BR5_Pos)       /*!< 0x00200000 */
.equ	GPIO_BSRR_BR5,	GPIO_BSRR_BR5_Msk                 /*!< Port x Reset bit 5 */
.equ	GPIO_BSRR_BR6_Pos,	(22U)
.equ	GPIO_BSRR_BR6_Msk,	(0x1UL << GPIO_BSRR_BR6_Pos)       /*!< 0x00400000 */
.equ	GPIO_BSRR_BR6,	GPIO_BSRR_BR6_Msk                 /*!< Port x Reset bit 6 */
.equ	GPIO_BSRR_BR7_Pos,	(23U)
.equ	GPIO_BSRR_BR7_Msk,	(0x1UL << GPIO_BSRR_BR7_Pos)       /*!< 0x00800000 */
.equ	GPIO_BSRR_BR7,	GPIO_BSRR_BR7_Msk                 /*!< Port x Reset bit 7 */
.equ	GPIO_BSRR_BR8_Pos,	(24U)
.equ	GPIO_BSRR_BR8_Msk,	(0x1UL << GPIO_BSRR_BR8_Pos)       /*!< 0x01000000 */
.equ	GPIO_BSRR_BR8,	GPIO_BSRR_BR8_Msk                 /*!< Port x Reset bit 8 */
.equ	GPIO_BSRR_BR9_Pos,	(25U)
.equ	GPIO_BSRR_BR9_Msk,	(0x1UL << GPIO_BSRR_BR9_Pos)       /*!< 0x02000000 */
.equ	GPIO_BSRR_BR9,	GPIO_BSRR_BR9_Msk                 /*!< Port x Reset bit 9 */
.equ	GPIO_BSRR_BR10_Pos,	(26U)
.equ	GPIO_BSRR_BR10_Msk,	(0x1UL << GPIO_BSRR_BR10_Pos)      /*!< 0x04000000 */
.equ	GPIO_BSRR_BR10,	GPIO_BSRR_BR10_Msk                /*!< Port x Reset bit 10 */
.equ	GPIO_BSRR_BR11_Pos,	(27U)
.equ	GPIO_BSRR_BR11_Msk,	(0x1UL << GPIO_BSRR_BR11_Pos)      /*!< 0x08000000 */
.equ	GPIO_BSRR_BR11,	GPIO_BSRR_BR11_Msk                /*!< Port x Reset bit 11 */
.equ	GPIO_BSRR_BR12_Pos,	(28U)
.equ	GPIO_BSRR_BR12_Msk,	(0x1UL << GPIO_BSRR_BR12_Pos)      /*!< 0x10000000 */
.equ	GPIO_BSRR_BR12,	GPIO_BSRR_BR12_Msk                /*!< Port x Reset bit 12 */
.equ	GPIO_BSRR_BR13_Pos,	(29U)
.equ	GPIO_BSRR_BR13_Msk,	(0x1UL << GPIO_BSRR_BR13_Pos)      /*!< 0x20000000 */
.equ	GPIO_BSRR_BR13,	GPIO_BSRR_BR13_Msk                /*!< Port x Reset bit 13 */
.equ	GPIO_BSRR_BR14_Pos,	(30U)
.equ	GPIO_BSRR_BR14_Msk,	(0x1UL << GPIO_BSRR_BR14_Pos)      /*!< 0x40000000 */
.equ	GPIO_BSRR_BR14,	GPIO_BSRR_BR14_Msk                /*!< Port x Reset bit 14 */
.equ	GPIO_BSRR_BR15_Pos,	(31U)
.equ	GPIO_BSRR_BR15_Msk,	(0x1UL << GPIO_BSRR_BR15_Pos)      /*!< 0x80000000 */
.equ	GPIO_BSRR_BR15,	GPIO_BSRR_BR15_Msk                /*!< Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
.equ	GPIO_BRR_BR0_Pos,	0
.equ	GPIO_BRR_BR0_Msk,	(0x1UL << GPIO_BRR_BR0_Pos)        /*!< 0x00000001 */
.equ	GPIO_BRR_BR0,	GPIO_BRR_BR0_Msk                  /*!< Port x Reset bit 0 */
.equ	GPIO_BRR_BR1_Pos,	(1U)
.equ	GPIO_BRR_BR1_Msk,	(0x1UL << GPIO_BRR_BR1_Pos)        /*!< 0x00000002 */
.equ	GPIO_BRR_BR1,	GPIO_BRR_BR1_Msk                  /*!< Port x Reset bit 1 */
.equ	GPIO_BRR_BR2_Pos,	(2U)
.equ	GPIO_BRR_BR2_Msk,	(0x1UL << GPIO_BRR_BR2_Pos)        /*!< 0x00000004 */
.equ	GPIO_BRR_BR2,	GPIO_BRR_BR2_Msk                  /*!< Port x Reset bit 2 */
.equ	GPIO_BRR_BR3_Pos,	(3U)
.equ	GPIO_BRR_BR3_Msk,	(0x1UL << GPIO_BRR_BR3_Pos)        /*!< 0x00000008 */
.equ	GPIO_BRR_BR3,	GPIO_BRR_BR3_Msk                  /*!< Port x Reset bit 3 */
.equ	GPIO_BRR_BR4_Pos,	(4U)
.equ	GPIO_BRR_BR4_Msk,	(0x1UL << GPIO_BRR_BR4_Pos)        /*!< 0x00000010 */
.equ	GPIO_BRR_BR4,	GPIO_BRR_BR4_Msk                  /*!< Port x Reset bit 4 */
.equ	GPIO_BRR_BR5_Pos,	(5U)
.equ	GPIO_BRR_BR5_Msk,	(0x1UL << GPIO_BRR_BR5_Pos)        /*!< 0x00000020 */
.equ	GPIO_BRR_BR5,	GPIO_BRR_BR5_Msk                  /*!< Port x Reset bit 5 */
.equ	GPIO_BRR_BR6_Pos,	(6U)
.equ	GPIO_BRR_BR6_Msk,	(0x1UL << GPIO_BRR_BR6_Pos)        /*!< 0x00000040 */
.equ	GPIO_BRR_BR6,	GPIO_BRR_BR6_Msk                  /*!< Port x Reset bit 6 */
.equ	GPIO_BRR_BR7_Pos,	(7U)
.equ	GPIO_BRR_BR7_Msk,	(0x1UL << GPIO_BRR_BR7_Pos)        /*!< 0x00000080 */
.equ	GPIO_BRR_BR7,	GPIO_BRR_BR7_Msk                  /*!< Port x Reset bit 7 */
.equ	GPIO_BRR_BR8_Pos,	(8U)
.equ	GPIO_BRR_BR8_Msk,	(0x1UL << GPIO_BRR_BR8_Pos)        /*!< 0x00000100 */
.equ	GPIO_BRR_BR8,	GPIO_BRR_BR8_Msk                  /*!< Port x Reset bit 8 */
.equ	GPIO_BRR_BR9_Pos,	(9U)
.equ	GPIO_BRR_BR9_Msk,	(0x1UL << GPIO_BRR_BR9_Pos)        /*!< 0x00000200 */
.equ	GPIO_BRR_BR9,	GPIO_BRR_BR9_Msk                  /*!< Port x Reset bit 9 */
.equ	GPIO_BRR_BR10_Pos,	(10U)
.equ	GPIO_BRR_BR10_Msk,	(0x1UL << GPIO_BRR_BR10_Pos)       /*!< 0x00000400 */
.equ	GPIO_BRR_BR10,	GPIO_BRR_BR10_Msk                 /*!< Port x Reset bit 10 */
.equ	GPIO_BRR_BR11_Pos,	(11U)
.equ	GPIO_BRR_BR11_Msk,	(0x1UL << GPIO_BRR_BR11_Pos)       /*!< 0x00000800 */
.equ	GPIO_BRR_BR11,	GPIO_BRR_BR11_Msk                 /*!< Port x Reset bit 11 */
.equ	GPIO_BRR_BR12_Pos,	(12U)
.equ	GPIO_BRR_BR12_Msk,	(0x1UL << GPIO_BRR_BR12_Pos)       /*!< 0x00001000 */
.equ	GPIO_BRR_BR12,	GPIO_BRR_BR12_Msk                 /*!< Port x Reset bit 12 */
.equ	GPIO_BRR_BR13_Pos,	(13U)
.equ	GPIO_BRR_BR13_Msk,	(0x1UL << GPIO_BRR_BR13_Pos)       /*!< 0x00002000 */
.equ	GPIO_BRR_BR13,	GPIO_BRR_BR13_Msk                 /*!< Port x Reset bit 13 */
.equ	GPIO_BRR_BR14_Pos,	(14U)
.equ	GPIO_BRR_BR14_Msk,	(0x1UL << GPIO_BRR_BR14_Pos)       /*!< 0x00004000 */
.equ	GPIO_BRR_BR14,	GPIO_BRR_BR14_Msk                 /*!< Port x Reset bit 14 */
.equ	GPIO_BRR_BR15_Pos,	(15U)
.equ	GPIO_BRR_BR15_Msk,	(0x1UL << GPIO_BRR_BR15_Pos)       /*!< 0x00008000 */
.equ	GPIO_BRR_BR15,	GPIO_BRR_BR15_Msk                 /*!< Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
.equ	GPIO_LCKR_LCK0_Pos,	0
.equ	GPIO_LCKR_LCK0_Msk,	(0x1UL << GPIO_LCKR_LCK0_Pos)      /*!< 0x00000001 */
.equ	GPIO_LCKR_LCK0,	GPIO_LCKR_LCK0_Msk                /*!< Port x Lock bit 0 */
.equ	GPIO_LCKR_LCK1_Pos,	(1U)
.equ	GPIO_LCKR_LCK1_Msk,	(0x1UL << GPIO_LCKR_LCK1_Pos)      /*!< 0x00000002 */
.equ	GPIO_LCKR_LCK1,	GPIO_LCKR_LCK1_Msk                /*!< Port x Lock bit 1 */
.equ	GPIO_LCKR_LCK2_Pos,	(2U)
.equ	GPIO_LCKR_LCK2_Msk,	(0x1UL << GPIO_LCKR_LCK2_Pos)      /*!< 0x00000004 */
.equ	GPIO_LCKR_LCK2,	GPIO_LCKR_LCK2_Msk                /*!< Port x Lock bit 2 */
.equ	GPIO_LCKR_LCK3_Pos,	(3U)
.equ	GPIO_LCKR_LCK3_Msk,	(0x1UL << GPIO_LCKR_LCK3_Pos)      /*!< 0x00000008 */
.equ	GPIO_LCKR_LCK3,	GPIO_LCKR_LCK3_Msk                /*!< Port x Lock bit 3 */
.equ	GPIO_LCKR_LCK4_Pos,	(4U)
.equ	GPIO_LCKR_LCK4_Msk,	(0x1UL << GPIO_LCKR_LCK4_Pos)      /*!< 0x00000010 */
.equ	GPIO_LCKR_LCK4,	GPIO_LCKR_LCK4_Msk                /*!< Port x Lock bit 4 */
.equ	GPIO_LCKR_LCK5_Pos,	(5U)
.equ	GPIO_LCKR_LCK5_Msk,	(0x1UL << GPIO_LCKR_LCK5_Pos)      /*!< 0x00000020 */
.equ	GPIO_LCKR_LCK5,	GPIO_LCKR_LCK5_Msk                /*!< Port x Lock bit 5 */
.equ	GPIO_LCKR_LCK6_Pos,	(6U)
.equ	GPIO_LCKR_LCK6_Msk,	(0x1UL << GPIO_LCKR_LCK6_Pos)      /*!< 0x00000040 */
.equ	GPIO_LCKR_LCK6,	GPIO_LCKR_LCK6_Msk                /*!< Port x Lock bit 6 */
.equ	GPIO_LCKR_LCK7_Pos,	(7U)
.equ	GPIO_LCKR_LCK7_Msk,	(0x1UL << GPIO_LCKR_LCK7_Pos)      /*!< 0x00000080 */
.equ	GPIO_LCKR_LCK7,	GPIO_LCKR_LCK7_Msk                /*!< Port x Lock bit 7 */
.equ	GPIO_LCKR_LCK8_Pos,	(8U)
.equ	GPIO_LCKR_LCK8_Msk,	(0x1UL << GPIO_LCKR_LCK8_Pos)      /*!< 0x00000100 */
.equ	GPIO_LCKR_LCK8,	GPIO_LCKR_LCK8_Msk                /*!< Port x Lock bit 8 */
.equ	GPIO_LCKR_LCK9_Pos,	(9U)
.equ	GPIO_LCKR_LCK9_Msk,	(0x1UL << GPIO_LCKR_LCK9_Pos)      /*!< 0x00000200 */
.equ	GPIO_LCKR_LCK9,	GPIO_LCKR_LCK9_Msk                /*!< Port x Lock bit 9 */
.equ	GPIO_LCKR_LCK10_Pos,	(10U)
.equ	GPIO_LCKR_LCK10_Msk,	(0x1UL << GPIO_LCKR_LCK10_Pos)     /*!< 0x00000400 */
.equ	GPIO_LCKR_LCK10,	GPIO_LCKR_LCK10_Msk               /*!< Port x Lock bit 10 */
.equ	GPIO_LCKR_LCK11_Pos,	(11U)
.equ	GPIO_LCKR_LCK11_Msk,	(0x1UL << GPIO_LCKR_LCK11_Pos)     /*!< 0x00000800 */
.equ	GPIO_LCKR_LCK11,	GPIO_LCKR_LCK11_Msk               /*!< Port x Lock bit 11 */
.equ	GPIO_LCKR_LCK12_Pos,	(12U)
.equ	GPIO_LCKR_LCK12_Msk,	(0x1UL << GPIO_LCKR_LCK12_Pos)     /*!< 0x00001000 */
.equ	GPIO_LCKR_LCK12,	GPIO_LCKR_LCK12_Msk               /*!< Port x Lock bit 12 */
.equ	GPIO_LCKR_LCK13_Pos,	(13U)
.equ	GPIO_LCKR_LCK13_Msk,	(0x1UL << GPIO_LCKR_LCK13_Pos)     /*!< 0x00002000 */
.equ	GPIO_LCKR_LCK13,	GPIO_LCKR_LCK13_Msk               /*!< Port x Lock bit 13 */
.equ	GPIO_LCKR_LCK14_Pos,	(14U)
.equ	GPIO_LCKR_LCK14_Msk,	(0x1UL << GPIO_LCKR_LCK14_Pos)     /*!< 0x00004000 */
.equ	GPIO_LCKR_LCK14,	GPIO_LCKR_LCK14_Msk               /*!< Port x Lock bit 14 */
.equ	GPIO_LCKR_LCK15_Pos,	(15U)
.equ	GPIO_LCKR_LCK15_Msk,	(0x1UL << GPIO_LCKR_LCK15_Pos)     /*!< 0x00008000 */
.equ	GPIO_LCKR_LCK15,	GPIO_LCKR_LCK15_Msk               /*!< Port x Lock bit 15 */
.equ	GPIO_LCKR_LCKK_Pos,	(16U)
.equ	GPIO_LCKR_LCKK_Msk,	(0x1UL << GPIO_LCKR_LCKK_Pos)      /*!< 0x00010000 */
.equ	GPIO_LCKR_LCKK,	GPIO_LCKR_LCKK_Msk                /*!< Lock key */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for AFIO_EVCR register  *******************/
.equ	AFIO_EVCR_PIN_Pos,	0
.equ	AFIO_EVCR_PIN_Msk,	(0xFUL << AFIO_EVCR_PIN_Pos)       /*!< 0x0000000F */
.equ	AFIO_EVCR_PIN,	AFIO_EVCR_PIN_Msk                 /*!< PIN[3:0] bits (Pin selection) */
.equ	AFIO_EVCR_PIN_0,	(0x1UL << AFIO_EVCR_PIN_Pos)       /*!< 0x00000001 */
.equ	AFIO_EVCR_PIN_1,	(0x2UL << AFIO_EVCR_PIN_Pos)       /*!< 0x00000002 */
.equ	AFIO_EVCR_PIN_2,	(0x4UL << AFIO_EVCR_PIN_Pos)       /*!< 0x00000004 */
.equ	AFIO_EVCR_PIN_3,	(0x8UL << AFIO_EVCR_PIN_Pos)       /*!< 0x00000008 */

/*!< PIN configuration */
.equ	AFIO_EVCR_PIN_PX0,	0x00000000U                       /*!< Pin 0 selected */
.equ	AFIO_EVCR_PIN_PX1_Pos,	0
.equ	AFIO_EVCR_PIN_PX1_Msk,	(0x1UL << AFIO_EVCR_PIN_PX1_Pos)   /*!< 0x00000001 */
.equ	AFIO_EVCR_PIN_PX1,	AFIO_EVCR_PIN_PX1_Msk             /*!< Pin 1 selected */
.equ	AFIO_EVCR_PIN_PX2_Pos,	(1U)
.equ	AFIO_EVCR_PIN_PX2_Msk,	(0x1UL << AFIO_EVCR_PIN_PX2_Pos)   /*!< 0x00000002 */
.equ	AFIO_EVCR_PIN_PX2,	AFIO_EVCR_PIN_PX2_Msk             /*!< Pin 2 selected */
.equ	AFIO_EVCR_PIN_PX3_Pos,	0
.equ	AFIO_EVCR_PIN_PX3_Msk,	(0x3UL << AFIO_EVCR_PIN_PX3_Pos)   /*!< 0x00000003 */
.equ	AFIO_EVCR_PIN_PX3,	AFIO_EVCR_PIN_PX3_Msk             /*!< Pin 3 selected */
.equ	AFIO_EVCR_PIN_PX4_Pos,	(2U)
.equ	AFIO_EVCR_PIN_PX4_Msk,	(0x1UL << AFIO_EVCR_PIN_PX4_Pos)   /*!< 0x00000004 */
.equ	AFIO_EVCR_PIN_PX4,	AFIO_EVCR_PIN_PX4_Msk             /*!< Pin 4 selected */
.equ	AFIO_EVCR_PIN_PX5_Pos,	0
.equ	AFIO_EVCR_PIN_PX5_Msk,	(0x5UL << AFIO_EVCR_PIN_PX5_Pos)   /*!< 0x00000005 */
.equ	AFIO_EVCR_PIN_PX5,	AFIO_EVCR_PIN_PX5_Msk             /*!< Pin 5 selected */
.equ	AFIO_EVCR_PIN_PX6_Pos,	(1U)
.equ	AFIO_EVCR_PIN_PX6_Msk,	(0x3UL << AFIO_EVCR_PIN_PX6_Pos)   /*!< 0x00000006 */
.equ	AFIO_EVCR_PIN_PX6,	AFIO_EVCR_PIN_PX6_Msk             /*!< Pin 6 selected */
.equ	AFIO_EVCR_PIN_PX7_Pos,	0
.equ	AFIO_EVCR_PIN_PX7_Msk,	(0x7UL << AFIO_EVCR_PIN_PX7_Pos)   /*!< 0x00000007 */
.equ	AFIO_EVCR_PIN_PX7,	AFIO_EVCR_PIN_PX7_Msk             /*!< Pin 7 selected */
.equ	AFIO_EVCR_PIN_PX8_Pos,	(3U)
.equ	AFIO_EVCR_PIN_PX8_Msk,	(0x1UL << AFIO_EVCR_PIN_PX8_Pos)   /*!< 0x00000008 */
.equ	AFIO_EVCR_PIN_PX8,	AFIO_EVCR_PIN_PX8_Msk             /*!< Pin 8 selected */
.equ	AFIO_EVCR_PIN_PX9_Pos,	0
.equ	AFIO_EVCR_PIN_PX9_Msk,	(0x9UL << AFIO_EVCR_PIN_PX9_Pos)   /*!< 0x00000009 */
.equ	AFIO_EVCR_PIN_PX9,	AFIO_EVCR_PIN_PX9_Msk             /*!< Pin 9 selected */
.equ	AFIO_EVCR_PIN_PX10_Pos,	(1U)
.equ	AFIO_EVCR_PIN_PX10_Msk,	(0x5UL << AFIO_EVCR_PIN_PX10_Pos)  /*!< 0x0000000A */
.equ	AFIO_EVCR_PIN_PX10,	AFIO_EVCR_PIN_PX10_Msk            /*!< Pin 10 selected */
.equ	AFIO_EVCR_PIN_PX11_Pos,	0
.equ	AFIO_EVCR_PIN_PX11_Msk,	(0xBUL << AFIO_EVCR_PIN_PX11_Pos)  /*!< 0x0000000B */
.equ	AFIO_EVCR_PIN_PX11,	AFIO_EVCR_PIN_PX11_Msk            /*!< Pin 11 selected */
.equ	AFIO_EVCR_PIN_PX12_Pos,	(2U)
.equ	AFIO_EVCR_PIN_PX12_Msk,	(0x3UL << AFIO_EVCR_PIN_PX12_Pos)  /*!< 0x0000000C */
.equ	AFIO_EVCR_PIN_PX12,	AFIO_EVCR_PIN_PX12_Msk            /*!< Pin 12 selected */
.equ	AFIO_EVCR_PIN_PX13_Pos,	0
.equ	AFIO_EVCR_PIN_PX13_Msk,	(0xDUL << AFIO_EVCR_PIN_PX13_Pos)  /*!< 0x0000000D */
.equ	AFIO_EVCR_PIN_PX13,	AFIO_EVCR_PIN_PX13_Msk            /*!< Pin 13 selected */
.equ	AFIO_EVCR_PIN_PX14_Pos,	(1U)
.equ	AFIO_EVCR_PIN_PX14_Msk,	(0x7UL << AFIO_EVCR_PIN_PX14_Pos)  /*!< 0x0000000E */
.equ	AFIO_EVCR_PIN_PX14,	AFIO_EVCR_PIN_PX14_Msk            /*!< Pin 14 selected */
.equ	AFIO_EVCR_PIN_PX15_Pos,	0
.equ	AFIO_EVCR_PIN_PX15_Msk,	(0xFUL << AFIO_EVCR_PIN_PX15_Pos)  /*!< 0x0000000F */
.equ	AFIO_EVCR_PIN_PX15,	AFIO_EVCR_PIN_PX15_Msk            /*!< Pin 15 selected */

.equ	AFIO_EVCR_PORT_Pos,	(4U)
.equ	AFIO_EVCR_PORT_Msk,	(0x7UL << AFIO_EVCR_PORT_Pos)      /*!< 0x00000070 */
.equ	AFIO_EVCR_PORT,	AFIO_EVCR_PORT_Msk                /*!< PORT[2:0] bits (Port selection) */
.equ	AFIO_EVCR_PORT_0,	(0x1UL << AFIO_EVCR_PORT_Pos)      /*!< 0x00000010 */
.equ	AFIO_EVCR_PORT_1,	(0x2UL << AFIO_EVCR_PORT_Pos)      /*!< 0x00000020 */
.equ	AFIO_EVCR_PORT_2,	(0x4UL << AFIO_EVCR_PORT_Pos)      /*!< 0x00000040 */

/*!< PORT configuration */
.equ	AFIO_EVCR_PORT_PA,	0x00000000                        /*!< Port A selected */
.equ	AFIO_EVCR_PORT_PB_Pos,	(4U)
.equ	AFIO_EVCR_PORT_PB_Msk,	(0x1UL << AFIO_EVCR_PORT_PB_Pos)   /*!< 0x00000010 */
.equ	AFIO_EVCR_PORT_PB,	AFIO_EVCR_PORT_PB_Msk             /*!< Port B selected */
.equ	AFIO_EVCR_PORT_PC_Pos,	(5U)
.equ	AFIO_EVCR_PORT_PC_Msk,	(0x1UL << AFIO_EVCR_PORT_PC_Pos)   /*!< 0x00000020 */
.equ	AFIO_EVCR_PORT_PC,	AFIO_EVCR_PORT_PC_Msk             /*!< Port C selected */
.equ	AFIO_EVCR_PORT_PD_Pos,	(4U)
.equ	AFIO_EVCR_PORT_PD_Msk,	(0x3UL << AFIO_EVCR_PORT_PD_Pos)   /*!< 0x00000030 */
.equ	AFIO_EVCR_PORT_PD,	AFIO_EVCR_PORT_PD_Msk             /*!< Port D selected */
.equ	AFIO_EVCR_PORT_PE_Pos,	(6U)
.equ	AFIO_EVCR_PORT_PE_Msk,	(0x1UL << AFIO_EVCR_PORT_PE_Pos)   /*!< 0x00000040 */
.equ	AFIO_EVCR_PORT_PE,	AFIO_EVCR_PORT_PE_Msk             /*!< Port E selected */

.equ	AFIO_EVCR_EVOE_Pos,	(7U)
.equ	AFIO_EVCR_EVOE_Msk,	(0x1UL << AFIO_EVCR_EVOE_Pos)      /*!< 0x00000080 */
.equ	AFIO_EVCR_EVOE,	AFIO_EVCR_EVOE_Msk                /*!< Event Output Enable */

/******************  Bit definition for AFIO_MAPR register  *******************/
.equ	AFIO_MAPR_SPI1_REMAP_Pos,	0
.equ	AFIO_MAPR_SPI1_REMAP_Msk,	(0x1UL << AFIO_MAPR_SPI1_REMAP_Pos) /*!< 0x00000001 */
.equ	AFIO_MAPR_SPI1_REMAP,	AFIO_MAPR_SPI1_REMAP_Msk          /*!< SPI1 remapping */
.equ	AFIO_MAPR_I2C1_REMAP_Pos,	(1U)
.equ	AFIO_MAPR_I2C1_REMAP_Msk,	(0x1UL << AFIO_MAPR_I2C1_REMAP_Pos) /*!< 0x00000002 */
.equ	AFIO_MAPR_I2C1_REMAP,	AFIO_MAPR_I2C1_REMAP_Msk          /*!< I2C1 remapping */
.equ	AFIO_MAPR_USART1_REMAP_Pos,	(2U)
.equ	AFIO_MAPR_USART1_REMAP_Msk,	(0x1UL << AFIO_MAPR_USART1_REMAP_Pos) /*!< 0x00000004 */
.equ	AFIO_MAPR_USART1_REMAP,	AFIO_MAPR_USART1_REMAP_Msk        /*!< USART1 remapping */
.equ	AFIO_MAPR_USART2_REMAP_Pos,	(3U)
.equ	AFIO_MAPR_USART2_REMAP_Msk,	(0x1UL << AFIO_MAPR_USART2_REMAP_Pos) /*!< 0x00000008 */
.equ	AFIO_MAPR_USART2_REMAP,	AFIO_MAPR_USART2_REMAP_Msk        /*!< USART2 remapping */

.equ	AFIO_MAPR_USART3_REMAP_Pos,	(4U)
.equ	AFIO_MAPR_USART3_REMAP_Msk,	(0x3UL << AFIO_MAPR_USART3_REMAP_Pos) /*!< 0x00000030 */
.equ	AFIO_MAPR_USART3_REMAP,	AFIO_MAPR_USART3_REMAP_Msk        /*!< USART3_REMAP[1:0] bits (USART3 remapping) */
.equ	AFIO_MAPR_USART3_REMAP_0,	(0x1UL << AFIO_MAPR_USART3_REMAP_Pos) /*!< 0x00000010 */
.equ	AFIO_MAPR_USART3_REMAP_1,	(0x2UL << AFIO_MAPR_USART3_REMAP_Pos) /*!< 0x00000020 */

/* USART3_REMAP configuration */
.equ	AFIO_MAPR_USART3_REMAP_NOREMAP,	0x00000000U                          /*!< No remap (TX/PB10 RX/PB11 CK/PB12 CTS/PB13 RTS/PB14) */
.equ	AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Pos,	(4U)
.equ	AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Msk,	(0x1UL << AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Pos) /*!< 0x00000010 */
.equ	AFIO_MAPR_USART3_REMAP_PARTIALREMAP,	AFIO_MAPR_USART3_REMAP_PARTIALREMAP_Msk /*!< Partial remap (TX/PC10 RX/PC11 CK/PC12 CTS/PB13 RTS/PB14) */
.equ	AFIO_MAPR_USART3_REMAP_FULLREMAP_Pos,	(4U)
.equ	AFIO_MAPR_USART3_REMAP_FULLREMAP_Msk,	(0x3UL << AFIO_MAPR_USART3_REMAP_FULLREMAP_Pos) /*!< 0x00000030 */
.equ	AFIO_MAPR_USART3_REMAP_FULLREMAP,	AFIO_MAPR_USART3_REMAP_FULLREMAP_Msk /*!< Full remap (TX/PD8 RX/PD9 CK/PD10 CTS/PD11 RTS/PD12) */

.equ	AFIO_MAPR_TIM1_REMAP_Pos,	(6U)
.equ	AFIO_MAPR_TIM1_REMAP_Msk,	(0x3UL << AFIO_MAPR_TIM1_REMAP_Pos) /*!< 0x000000C0 */
.equ	AFIO_MAPR_TIM1_REMAP,	AFIO_MAPR_TIM1_REMAP_Msk          /*!< TIM1_REMAP[1:0] bits (TIM1 remapping) */
.equ	AFIO_MAPR_TIM1_REMAP_0,	(0x1UL << AFIO_MAPR_TIM1_REMAP_Pos) /*!< 0x00000040 */
.equ	AFIO_MAPR_TIM1_REMAP_1,	(0x2UL << AFIO_MAPR_TIM1_REMAP_Pos) /*!< 0x00000080 */

/*!< TIM1_REMAP configuration */
.equ	AFIO_MAPR_TIM1_REMAP_NOREMAP,	0x00000000U                          /*!< No remap (ETR/PA12 CH1/PA8 CH2/PA9 CH3/PA10 CH4/PA11 BKIN/PB12 CH1N/PB13 CH2N/PB14 CH3N/PB15) */
.equ	AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Pos,	(6U)
.equ	AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Msk,	(0x1UL << AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Pos) /*!< 0x00000040 */
.equ	AFIO_MAPR_TIM1_REMAP_PARTIALREMAP,	AFIO_MAPR_TIM1_REMAP_PARTIALREMAP_Msk /*!< Partial remap (ETR/PA12 CH1/PA8 CH2/PA9 CH3/PA10 CH4/PA11 BKIN/PA6 CH1N/PA7 CH2N/PB0 CH3N/PB1) */
.equ	AFIO_MAPR_TIM1_REMAP_FULLREMAP_Pos,	(6U)
.equ	AFIO_MAPR_TIM1_REMAP_FULLREMAP_Msk,	(0x3UL << AFIO_MAPR_TIM1_REMAP_FULLREMAP_Pos) /*!< 0x000000C0 */
.equ	AFIO_MAPR_TIM1_REMAP_FULLREMAP,	AFIO_MAPR_TIM1_REMAP_FULLREMAP_Msk /*!< Full remap (ETR/PE7 CH1/PE9 CH2/PE11 CH3/PE13 CH4/PE14 BKIN/PE15 CH1N/PE8 CH2N/PE10 CH3N/PE12) */

.equ	AFIO_MAPR_TIM2_REMAP_Pos,	(8U)
.equ	AFIO_MAPR_TIM2_REMAP_Msk,	(0x3UL << AFIO_MAPR_TIM2_REMAP_Pos) /*!< 0x00000300 */
.equ	AFIO_MAPR_TIM2_REMAP,	AFIO_MAPR_TIM2_REMAP_Msk          /*!< TIM2_REMAP[1:0] bits (TIM2 remapping) */
.equ	AFIO_MAPR_TIM2_REMAP_0,	(0x1UL << AFIO_MAPR_TIM2_REMAP_Pos) /*!< 0x00000100 */
.equ	AFIO_MAPR_TIM2_REMAP_1,	(0x2UL << AFIO_MAPR_TIM2_REMAP_Pos) /*!< 0x00000200 */

/*!< TIM2_REMAP configuration */
.equ	AFIO_MAPR_TIM2_REMAP_NOREMAP,	0x00000000U                          /*!< No remap (CH1/ETR/PA0 CH2/PA1 CH3/PA2 CH4/PA3) */
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Pos,	(8U)
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Msk,	(0x1UL << AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Pos) /*!< 0x00000100 */
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1,	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1_Msk /*!< Partial remap (CH1/ETR/PA15 CH2/PB3 CH3/PA2 CH4/PA3) */
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Pos,	(9U)
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Msk,	(0x1UL << AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Pos) /*!< 0x00000200 */
.equ	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2,	AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2_Msk /*!< Partial remap (CH1/ETR/PA0 CH2/PA1 CH3/PB10 CH4/PB11) */
.equ	AFIO_MAPR_TIM2_REMAP_FULLREMAP_Pos,	(8U)
.equ	AFIO_MAPR_TIM2_REMAP_FULLREMAP_Msk,	(0x3UL << AFIO_MAPR_TIM2_REMAP_FULLREMAP_Pos) /*!< 0x00000300 */
.equ	AFIO_MAPR_TIM2_REMAP_FULLREMAP,	AFIO_MAPR_TIM2_REMAP_FULLREMAP_Msk /*!< Full remap (CH1/ETR/PA15 CH2/PB3 CH3/PB10 CH4/PB11) */

.equ	AFIO_MAPR_TIM3_REMAP_Pos,	(10U)
.equ	AFIO_MAPR_TIM3_REMAP_Msk,	(0x3UL << AFIO_MAPR_TIM3_REMAP_Pos) /*!< 0x00000C00 */
.equ	AFIO_MAPR_TIM3_REMAP,	AFIO_MAPR_TIM3_REMAP_Msk          /*!< TIM3_REMAP[1:0] bits (TIM3 remapping) */
.equ	AFIO_MAPR_TIM3_REMAP_0,	(0x1UL << AFIO_MAPR_TIM3_REMAP_Pos) /*!< 0x00000400 */
.equ	AFIO_MAPR_TIM3_REMAP_1,	(0x2UL << AFIO_MAPR_TIM3_REMAP_Pos) /*!< 0x00000800 */

/*!< TIM3_REMAP configuration */
.equ	AFIO_MAPR_TIM3_REMAP_NOREMAP,	0x00000000U                          /*!< No remap (CH1/PA6 CH2/PA7 CH3/PB0 CH4/PB1) */
.equ	AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Pos,	(11U)
.equ	AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Msk,	(0x1UL << AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Pos) /*!< 0x00000800 */
.equ	AFIO_MAPR_TIM3_REMAP_PARTIALREMAP,	AFIO_MAPR_TIM3_REMAP_PARTIALREMAP_Msk /*!< Partial remap (CH1/PB4 CH2/PB5 CH3/PB0 CH4/PB1) */
.equ	AFIO_MAPR_TIM3_REMAP_FULLREMAP_Pos,	(10U)
.equ	AFIO_MAPR_TIM3_REMAP_FULLREMAP_Msk,	(0x3UL << AFIO_MAPR_TIM3_REMAP_FULLREMAP_Pos) /*!< 0x00000C00 */
.equ	AFIO_MAPR_TIM3_REMAP_FULLREMAP,	AFIO_MAPR_TIM3_REMAP_FULLREMAP_Msk /*!< Full remap (CH1/PC6 CH2/PC7 CH3/PC8 CH4/PC9) */

.equ	AFIO_MAPR_TIM4_REMAP_Pos,	(12U)
.equ	AFIO_MAPR_TIM4_REMAP_Msk,	(0x1UL << AFIO_MAPR_TIM4_REMAP_Pos) /*!< 0x00001000 */
.equ	AFIO_MAPR_TIM4_REMAP,	AFIO_MAPR_TIM4_REMAP_Msk          /*!< TIM4_REMAP bit (TIM4 remapping) */

.equ	AFIO_MAPR_CAN_REMAP_Pos,	(13U)
.equ	AFIO_MAPR_CAN_REMAP_Msk,	(0x3UL << AFIO_MAPR_CAN_REMAP_Pos) /*!< 0x00006000 */
.equ	AFIO_MAPR_CAN_REMAP,	AFIO_MAPR_CAN_REMAP_Msk           /*!< CAN_REMAP[1:0] bits (CAN Alternate function remapping) */
.equ	AFIO_MAPR_CAN_REMAP_0,	(0x1UL << AFIO_MAPR_CAN_REMAP_Pos) /*!< 0x00002000 */
.equ	AFIO_MAPR_CAN_REMAP_1,	(0x2UL << AFIO_MAPR_CAN_REMAP_Pos) /*!< 0x00004000 */

/*!< CAN_REMAP configuration */
.equ	AFIO_MAPR_CAN_REMAP_REMAP1,	0x00000000U                          /*!< CANRX mapped to PA11 CANTX mapped to PA12 */
.equ	AFIO_MAPR_CAN_REMAP_REMAP2_Pos,	(14U)
.equ	AFIO_MAPR_CAN_REMAP_REMAP2_Msk,	(0x1UL << AFIO_MAPR_CAN_REMAP_REMAP2_Pos) /*!< 0x00004000 */
.equ	AFIO_MAPR_CAN_REMAP_REMAP2,	AFIO_MAPR_CAN_REMAP_REMAP2_Msk    /*!< CANRX mapped to PB8 CANTX mapped to PB9 */
.equ	AFIO_MAPR_CAN_REMAP_REMAP3_Pos,	(13U)
.equ	AFIO_MAPR_CAN_REMAP_REMAP3_Msk,	(0x3UL << AFIO_MAPR_CAN_REMAP_REMAP3_Pos) /*!< 0x00006000 */
.equ	AFIO_MAPR_CAN_REMAP_REMAP3,	AFIO_MAPR_CAN_REMAP_REMAP3_Msk    /*!< CANRX mapped to PD0 CANTX mapped to PD1 */

.equ	AFIO_MAPR_PD01_REMAP_Pos,	(15U)
.equ	AFIO_MAPR_PD01_REMAP_Msk,	(0x1UL << AFIO_MAPR_PD01_REMAP_Pos) /*!< 0x00008000 */
.equ	AFIO_MAPR_PD01_REMAP,	AFIO_MAPR_PD01_REMAP_Msk          /*!< Port D0/Port D1 mapping on OSC_IN/OSC_OUT */

/*!< SWJ_CFG configuration */
.equ	AFIO_MAPR_SWJ_CFG_Pos,	(24U)
.equ	AFIO_MAPR_SWJ_CFG_Msk,	(0x7UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x07000000 */
.equ	AFIO_MAPR_SWJ_CFG,	AFIO_MAPR_SWJ_CFG_Msk             /*!< SWJ_CFG[2:0] bits (Serial Wire JTAG configuration) */
.equ	AFIO_MAPR_SWJ_CFG_0,	(0x1UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x01000000 */
.equ	AFIO_MAPR_SWJ_CFG_1,	(0x2UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x02000000 */
.equ	AFIO_MAPR_SWJ_CFG_2,	(0x4UL << AFIO_MAPR_SWJ_CFG_Pos)   /*!< 0x04000000 */

.equ	AFIO_MAPR_SWJ_CFG_RESET,	0x00000000U                          /*!< Full SWJ (JTAG-DP + SW-DP) : Reset State */
.equ	AFIO_MAPR_SWJ_CFG_NOJNTRST_Pos,	(24U)
.equ	AFIO_MAPR_SWJ_CFG_NOJNTRST_Msk,	(0x1UL << AFIO_MAPR_SWJ_CFG_NOJNTRST_Pos) /*!< 0x01000000 */
.equ	AFIO_MAPR_SWJ_CFG_NOJNTRST,	AFIO_MAPR_SWJ_CFG_NOJNTRST_Msk    /*!< Full SWJ (JTAG-DP + SW-DP) but without JNTRST */
.equ	AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Pos,	(25U)
.equ	AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Msk,	(0x1UL << AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Pos) /*!< 0x02000000 */
.equ	AFIO_MAPR_SWJ_CFG_JTAGDISABLE,	AFIO_MAPR_SWJ_CFG_JTAGDISABLE_Msk /*!< JTAG-DP Disabled and SW-DP Enabled */
.equ	AFIO_MAPR_SWJ_CFG_DISABLE_Pos,	(26U)
.equ	AFIO_MAPR_SWJ_CFG_DISABLE_Msk,	(0x1UL << AFIO_MAPR_SWJ_CFG_DISABLE_Pos) /*!< 0x04000000 */
.equ	AFIO_MAPR_SWJ_CFG_DISABLE,	AFIO_MAPR_SWJ_CFG_DISABLE_Msk     /*!< JTAG-DP Disabled and SW-DP Disabled */


/*****************  Bit definition for AFIO_EXTICR1 register  *****************/
.equ	AFIO_EXTICR1_EXTI0_Pos,	0
.equ	AFIO_EXTICR1_EXTI0_Msk,	(0xFUL << AFIO_EXTICR1_EXTI0_Pos)  /*!< 0x0000000F */
.equ	AFIO_EXTICR1_EXTI0,	AFIO_EXTICR1_EXTI0_Msk            /*!< EXTI 0 configuration */
.equ	AFIO_EXTICR1_EXTI1_Pos,	(4U)
.equ	AFIO_EXTICR1_EXTI1_Msk,	(0xFUL << AFIO_EXTICR1_EXTI1_Pos)  /*!< 0x000000F0 */
.equ	AFIO_EXTICR1_EXTI1,	AFIO_EXTICR1_EXTI1_Msk            /*!< EXTI 1 configuration */
.equ	AFIO_EXTICR1_EXTI2_Pos,	(8U)
.equ	AFIO_EXTICR1_EXTI2_Msk,	(0xFUL << AFIO_EXTICR1_EXTI2_Pos)  /*!< 0x00000F00 */
.equ	AFIO_EXTICR1_EXTI2,	AFIO_EXTICR1_EXTI2_Msk            /*!< EXTI 2 configuration */
.equ	AFIO_EXTICR1_EXTI3_Pos,	(12U)
.equ	AFIO_EXTICR1_EXTI3_Msk,	(0xFUL << AFIO_EXTICR1_EXTI3_Pos)  /*!< 0x0000F000 */
.equ	AFIO_EXTICR1_EXTI3,	AFIO_EXTICR1_EXTI3_Msk            /*!< EXTI 3 configuration */

/*!< EXTI0 configuration */
.equ	AFIO_EXTICR1_EXTI0_PA,	0x00000000U                          /*!< PA[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PB_Pos,	0
.equ	AFIO_EXTICR1_EXTI0_PB_Msk,	(0x1UL << AFIO_EXTICR1_EXTI0_PB_Pos) /*!< 0x00000001 */
.equ	AFIO_EXTICR1_EXTI0_PB,	AFIO_EXTICR1_EXTI0_PB_Msk         /*!< PB[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PC_Pos,	(1U)
.equ	AFIO_EXTICR1_EXTI0_PC_Msk,	(0x1UL << AFIO_EXTICR1_EXTI0_PC_Pos) /*!< 0x00000002 */
.equ	AFIO_EXTICR1_EXTI0_PC,	AFIO_EXTICR1_EXTI0_PC_Msk         /*!< PC[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PD_Pos,	0
.equ	AFIO_EXTICR1_EXTI0_PD_Msk,	(0x3UL << AFIO_EXTICR1_EXTI0_PD_Pos) /*!< 0x00000003 */
.equ	AFIO_EXTICR1_EXTI0_PD,	AFIO_EXTICR1_EXTI0_PD_Msk         /*!< PD[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PE_Pos,	(2U)
.equ	AFIO_EXTICR1_EXTI0_PE_Msk,	(0x1UL << AFIO_EXTICR1_EXTI0_PE_Pos) /*!< 0x00000004 */
.equ	AFIO_EXTICR1_EXTI0_PE,	AFIO_EXTICR1_EXTI0_PE_Msk         /*!< PE[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PF_Pos,	0
.equ	AFIO_EXTICR1_EXTI0_PF_Msk,	(0x5UL << AFIO_EXTICR1_EXTI0_PF_Pos) /*!< 0x00000005 */
.equ	AFIO_EXTICR1_EXTI0_PF,	AFIO_EXTICR1_EXTI0_PF_Msk         /*!< PF[0] pin */
.equ	AFIO_EXTICR1_EXTI0_PG_Pos,	(1U)
.equ	AFIO_EXTICR1_EXTI0_PG_Msk,	(0x3UL << AFIO_EXTICR1_EXTI0_PG_Pos) /*!< 0x00000006 */
.equ	AFIO_EXTICR1_EXTI0_PG,	AFIO_EXTICR1_EXTI0_PG_Msk         /*!< PG[0] pin */

/*!< EXTI1 configuration */
.equ	AFIO_EXTICR1_EXTI1_PA,	0x00000000U                          /*!< PA[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PB_Pos,	(4U)
.equ	AFIO_EXTICR1_EXTI1_PB_Msk,	(0x1UL << AFIO_EXTICR1_EXTI1_PB_Pos) /*!< 0x00000010 */
.equ	AFIO_EXTICR1_EXTI1_PB,	AFIO_EXTICR1_EXTI1_PB_Msk         /*!< PB[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PC_Pos,	(5U)
.equ	AFIO_EXTICR1_EXTI1_PC_Msk,	(0x1UL << AFIO_EXTICR1_EXTI1_PC_Pos) /*!< 0x00000020 */
.equ	AFIO_EXTICR1_EXTI1_PC,	AFIO_EXTICR1_EXTI1_PC_Msk         /*!< PC[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PD_Pos,	(4U)
.equ	AFIO_EXTICR1_EXTI1_PD_Msk,	(0x3UL << AFIO_EXTICR1_EXTI1_PD_Pos) /*!< 0x00000030 */
.equ	AFIO_EXTICR1_EXTI1_PD,	AFIO_EXTICR1_EXTI1_PD_Msk         /*!< PD[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PE_Pos,	(6U)
.equ	AFIO_EXTICR1_EXTI1_PE_Msk,	(0x1UL << AFIO_EXTICR1_EXTI1_PE_Pos) /*!< 0x00000040 */
.equ	AFIO_EXTICR1_EXTI1_PE,	AFIO_EXTICR1_EXTI1_PE_Msk         /*!< PE[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PF_Pos,	(4U)
.equ	AFIO_EXTICR1_EXTI1_PF_Msk,	(0x5UL << AFIO_EXTICR1_EXTI1_PF_Pos) /*!< 0x00000050 */
.equ	AFIO_EXTICR1_EXTI1_PF,	AFIO_EXTICR1_EXTI1_PF_Msk         /*!< PF[1] pin */
.equ	AFIO_EXTICR1_EXTI1_PG_Pos,	(5U)
.equ	AFIO_EXTICR1_EXTI1_PG_Msk,	(0x3UL << AFIO_EXTICR1_EXTI1_PG_Pos) /*!< 0x00000060 */
.equ	AFIO_EXTICR1_EXTI1_PG,	AFIO_EXTICR1_EXTI1_PG_Msk         /*!< PG[1] pin */

/*!< EXTI2 configuration */
.equ	AFIO_EXTICR1_EXTI2_PA,	0x00000000U                          /*!< PA[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PB_Pos,	(8U)
.equ	AFIO_EXTICR1_EXTI2_PB_Msk,	(0x1UL << AFIO_EXTICR1_EXTI2_PB_Pos) /*!< 0x00000100 */
.equ	AFIO_EXTICR1_EXTI2_PB,	AFIO_EXTICR1_EXTI2_PB_Msk         /*!< PB[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PC_Pos,	(9U)
.equ	AFIO_EXTICR1_EXTI2_PC_Msk,	(0x1UL << AFIO_EXTICR1_EXTI2_PC_Pos) /*!< 0x00000200 */
.equ	AFIO_EXTICR1_EXTI2_PC,	AFIO_EXTICR1_EXTI2_PC_Msk         /*!< PC[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PD_Pos,	(8U)
.equ	AFIO_EXTICR1_EXTI2_PD_Msk,	(0x3UL << AFIO_EXTICR1_EXTI2_PD_Pos) /*!< 0x00000300 */
.equ	AFIO_EXTICR1_EXTI2_PD,	AFIO_EXTICR1_EXTI2_PD_Msk         /*!< PD[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PE_Pos,	(10U)
.equ	AFIO_EXTICR1_EXTI2_PE_Msk,	(0x1UL << AFIO_EXTICR1_EXTI2_PE_Pos) /*!< 0x00000400 */
.equ	AFIO_EXTICR1_EXTI2_PE,	AFIO_EXTICR1_EXTI2_PE_Msk         /*!< PE[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PF_Pos,	(8U)
.equ	AFIO_EXTICR1_EXTI2_PF_Msk,	(0x5UL << AFIO_EXTICR1_EXTI2_PF_Pos) /*!< 0x00000500 */
.equ	AFIO_EXTICR1_EXTI2_PF,	AFIO_EXTICR1_EXTI2_PF_Msk         /*!< PF[2] pin */
.equ	AFIO_EXTICR1_EXTI2_PG_Pos,	(9U)
.equ	AFIO_EXTICR1_EXTI2_PG_Msk,	(0x3UL << AFIO_EXTICR1_EXTI2_PG_Pos) /*!< 0x00000600 */
.equ	AFIO_EXTICR1_EXTI2_PG,	AFIO_EXTICR1_EXTI2_PG_Msk         /*!< PG[2] pin */

/*!< EXTI3 configuration */
.equ	AFIO_EXTICR1_EXTI3_PA,	0x00000000U                          /*!< PA[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PB_Pos,	(12U)
.equ	AFIO_EXTICR1_EXTI3_PB_Msk,	(0x1UL << AFIO_EXTICR1_EXTI3_PB_Pos) /*!< 0x00001000 */
.equ	AFIO_EXTICR1_EXTI3_PB,	AFIO_EXTICR1_EXTI3_PB_Msk         /*!< PB[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PC_Pos,	(13U)
.equ	AFIO_EXTICR1_EXTI3_PC_Msk,	(0x1UL << AFIO_EXTICR1_EXTI3_PC_Pos) /*!< 0x00002000 */
.equ	AFIO_EXTICR1_EXTI3_PC,	AFIO_EXTICR1_EXTI3_PC_Msk         /*!< PC[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PD_Pos,	(12U)
.equ	AFIO_EXTICR1_EXTI3_PD_Msk,	(0x3UL << AFIO_EXTICR1_EXTI3_PD_Pos) /*!< 0x00003000 */
.equ	AFIO_EXTICR1_EXTI3_PD,	AFIO_EXTICR1_EXTI3_PD_Msk         /*!< PD[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PE_Pos,	(14U)
.equ	AFIO_EXTICR1_EXTI3_PE_Msk,	(0x1UL << AFIO_EXTICR1_EXTI3_PE_Pos) /*!< 0x00004000 */
.equ	AFIO_EXTICR1_EXTI3_PE,	AFIO_EXTICR1_EXTI3_PE_Msk         /*!< PE[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PF_Pos,	(12U)
.equ	AFIO_EXTICR1_EXTI3_PF_Msk,	(0x5UL << AFIO_EXTICR1_EXTI3_PF_Pos) /*!< 0x00005000 */
.equ	AFIO_EXTICR1_EXTI3_PF,	AFIO_EXTICR1_EXTI3_PF_Msk         /*!< PF[3] pin */
.equ	AFIO_EXTICR1_EXTI3_PG_Pos,	(13U)
.equ	AFIO_EXTICR1_EXTI3_PG_Msk,	(0x3UL << AFIO_EXTICR1_EXTI3_PG_Pos) /*!< 0x00006000 */
.equ	AFIO_EXTICR1_EXTI3_PG,	AFIO_EXTICR1_EXTI3_PG_Msk         /*!< PG[3] pin */

/*****************  Bit definition for AFIO_EXTICR2 register  *****************/
.equ	AFIO_EXTICR2_EXTI4_Pos,	0
.equ	AFIO_EXTICR2_EXTI4_Msk,	(0xFUL << AFIO_EXTICR2_EXTI4_Pos)  /*!< 0x0000000F */
.equ	AFIO_EXTICR2_EXTI4,	AFIO_EXTICR2_EXTI4_Msk            /*!< EXTI 4 configuration */
.equ	AFIO_EXTICR2_EXTI5_Pos,	(4U)
.equ	AFIO_EXTICR2_EXTI5_Msk,	(0xFUL << AFIO_EXTICR2_EXTI5_Pos)  /*!< 0x000000F0 */
.equ	AFIO_EXTICR2_EXTI5,	AFIO_EXTICR2_EXTI5_Msk            /*!< EXTI 5 configuration */
.equ	AFIO_EXTICR2_EXTI6_Pos,	(8U)
.equ	AFIO_EXTICR2_EXTI6_Msk,	(0xFUL << AFIO_EXTICR2_EXTI6_Pos)  /*!< 0x00000F00 */
.equ	AFIO_EXTICR2_EXTI6,	AFIO_EXTICR2_EXTI6_Msk            /*!< EXTI 6 configuration */
.equ	AFIO_EXTICR2_EXTI7_Pos,	(12U)
.equ	AFIO_EXTICR2_EXTI7_Msk,	(0xFUL << AFIO_EXTICR2_EXTI7_Pos)  /*!< 0x0000F000 */
.equ	AFIO_EXTICR2_EXTI7,	AFIO_EXTICR2_EXTI7_Msk            /*!< EXTI 7 configuration */

/*!< EXTI4 configuration */
.equ	AFIO_EXTICR2_EXTI4_PA,	0x00000000U                          /*!< PA[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PB_Pos,	0
.equ	AFIO_EXTICR2_EXTI4_PB_Msk,	(0x1UL << AFIO_EXTICR2_EXTI4_PB_Pos) /*!< 0x00000001 */
.equ	AFIO_EXTICR2_EXTI4_PB,	AFIO_EXTICR2_EXTI4_PB_Msk         /*!< PB[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PC_Pos,	(1U)
.equ	AFIO_EXTICR2_EXTI4_PC_Msk,	(0x1UL << AFIO_EXTICR2_EXTI4_PC_Pos) /*!< 0x00000002 */
.equ	AFIO_EXTICR2_EXTI4_PC,	AFIO_EXTICR2_EXTI4_PC_Msk         /*!< PC[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PD_Pos,	0
.equ	AFIO_EXTICR2_EXTI4_PD_Msk,	(0x3UL << AFIO_EXTICR2_EXTI4_PD_Pos) /*!< 0x00000003 */
.equ	AFIO_EXTICR2_EXTI4_PD,	AFIO_EXTICR2_EXTI4_PD_Msk         /*!< PD[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PE_Pos,	(2U)
.equ	AFIO_EXTICR2_EXTI4_PE_Msk,	(0x1UL << AFIO_EXTICR2_EXTI4_PE_Pos) /*!< 0x00000004 */
.equ	AFIO_EXTICR2_EXTI4_PE,	AFIO_EXTICR2_EXTI4_PE_Msk         /*!< PE[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PF_Pos,	0
.equ	AFIO_EXTICR2_EXTI4_PF_Msk,	(0x5UL << AFIO_EXTICR2_EXTI4_PF_Pos) /*!< 0x00000005 */
.equ	AFIO_EXTICR2_EXTI4_PF,	AFIO_EXTICR2_EXTI4_PF_Msk         /*!< PF[4] pin */
.equ	AFIO_EXTICR2_EXTI4_PG_Pos,	(1U)
.equ	AFIO_EXTICR2_EXTI4_PG_Msk,	(0x3UL << AFIO_EXTICR2_EXTI4_PG_Pos) /*!< 0x00000006 */
.equ	AFIO_EXTICR2_EXTI4_PG,	AFIO_EXTICR2_EXTI4_PG_Msk         /*!< PG[4] pin */

/* EXTI5 configuration */
.equ	AFIO_EXTICR2_EXTI5_PA,	0x00000000U                          /*!< PA[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PB_Pos,	(4U)
.equ	AFIO_EXTICR2_EXTI5_PB_Msk,	(0x1UL << AFIO_EXTICR2_EXTI5_PB_Pos) /*!< 0x00000010 */
.equ	AFIO_EXTICR2_EXTI5_PB,	AFIO_EXTICR2_EXTI5_PB_Msk         /*!< PB[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PC_Pos,	(5U)
.equ	AFIO_EXTICR2_EXTI5_PC_Msk,	(0x1UL << AFIO_EXTICR2_EXTI5_PC_Pos) /*!< 0x00000020 */
.equ	AFIO_EXTICR2_EXTI5_PC,	AFIO_EXTICR2_EXTI5_PC_Msk         /*!< PC[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PD_Pos,	(4U)
.equ	AFIO_EXTICR2_EXTI5_PD_Msk,	(0x3UL << AFIO_EXTICR2_EXTI5_PD_Pos) /*!< 0x00000030 */
.equ	AFIO_EXTICR2_EXTI5_PD,	AFIO_EXTICR2_EXTI5_PD_Msk         /*!< PD[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PE_Pos,	(6U)
.equ	AFIO_EXTICR2_EXTI5_PE_Msk,	(0x1UL << AFIO_EXTICR2_EXTI5_PE_Pos) /*!< 0x00000040 */
.equ	AFIO_EXTICR2_EXTI5_PE,	AFIO_EXTICR2_EXTI5_PE_Msk         /*!< PE[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PF_Pos,	(4U)
.equ	AFIO_EXTICR2_EXTI5_PF_Msk,	(0x5UL << AFIO_EXTICR2_EXTI5_PF_Pos) /*!< 0x00000050 */
.equ	AFIO_EXTICR2_EXTI5_PF,	AFIO_EXTICR2_EXTI5_PF_Msk         /*!< PF[5] pin */
.equ	AFIO_EXTICR2_EXTI5_PG_Pos,	(5U)
.equ	AFIO_EXTICR2_EXTI5_PG_Msk,	(0x3UL << AFIO_EXTICR2_EXTI5_PG_Pos) /*!< 0x00000060 */
.equ	AFIO_EXTICR2_EXTI5_PG,	AFIO_EXTICR2_EXTI5_PG_Msk         /*!< PG[5] pin */

/*!< EXTI6 configuration */
.equ	AFIO_EXTICR2_EXTI6_PA,	0x00000000U                          /*!< PA[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PB_Pos,	(8U)
.equ	AFIO_EXTICR2_EXTI6_PB_Msk,	(0x1UL << AFIO_EXTICR2_EXTI6_PB_Pos) /*!< 0x00000100 */
.equ	AFIO_EXTICR2_EXTI6_PB,	AFIO_EXTICR2_EXTI6_PB_Msk         /*!< PB[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PC_Pos,	(9U)
.equ	AFIO_EXTICR2_EXTI6_PC_Msk,	(0x1UL << AFIO_EXTICR2_EXTI6_PC_Pos) /*!< 0x00000200 */
.equ	AFIO_EXTICR2_EXTI6_PC,	AFIO_EXTICR2_EXTI6_PC_Msk         /*!< PC[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PD_Pos,	(8U)
.equ	AFIO_EXTICR2_EXTI6_PD_Msk,	(0x3UL << AFIO_EXTICR2_EXTI6_PD_Pos) /*!< 0x00000300 */
.equ	AFIO_EXTICR2_EXTI6_PD,	AFIO_EXTICR2_EXTI6_PD_Msk         /*!< PD[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PE_Pos,	(10U)
.equ	AFIO_EXTICR2_EXTI6_PE_Msk,	(0x1UL << AFIO_EXTICR2_EXTI6_PE_Pos) /*!< 0x00000400 */
.equ	AFIO_EXTICR2_EXTI6_PE,	AFIO_EXTICR2_EXTI6_PE_Msk         /*!< PE[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PF_Pos,	(8U)
.equ	AFIO_EXTICR2_EXTI6_PF_Msk,	(0x5UL << AFIO_EXTICR2_EXTI6_PF_Pos) /*!< 0x00000500 */
.equ	AFIO_EXTICR2_EXTI6_PF,	AFIO_EXTICR2_EXTI6_PF_Msk         /*!< PF[6] pin */
.equ	AFIO_EXTICR2_EXTI6_PG_Pos,	(9U)
.equ	AFIO_EXTICR2_EXTI6_PG_Msk,	(0x3UL << AFIO_EXTICR2_EXTI6_PG_Pos) /*!< 0x00000600 */
.equ	AFIO_EXTICR2_EXTI6_PG,	AFIO_EXTICR2_EXTI6_PG_Msk         /*!< PG[6] pin */

/*!< EXTI7 configuration */
.equ	AFIO_EXTICR2_EXTI7_PA,	0x00000000U                          /*!< PA[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PB_Pos,	(12U)
.equ	AFIO_EXTICR2_EXTI7_PB_Msk,	(0x1UL << AFIO_EXTICR2_EXTI7_PB_Pos) /*!< 0x00001000 */
.equ	AFIO_EXTICR2_EXTI7_PB,	AFIO_EXTICR2_EXTI7_PB_Msk         /*!< PB[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PC_Pos,	(13U)
.equ	AFIO_EXTICR2_EXTI7_PC_Msk,	(0x1UL << AFIO_EXTICR2_EXTI7_PC_Pos) /*!< 0x00002000 */
.equ	AFIO_EXTICR2_EXTI7_PC,	AFIO_EXTICR2_EXTI7_PC_Msk         /*!< PC[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PD_Pos,	(12U)
.equ	AFIO_EXTICR2_EXTI7_PD_Msk,	(0x3UL << AFIO_EXTICR2_EXTI7_PD_Pos) /*!< 0x00003000 */
.equ	AFIO_EXTICR2_EXTI7_PD,	AFIO_EXTICR2_EXTI7_PD_Msk         /*!< PD[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PE_Pos,	(14U)
.equ	AFIO_EXTICR2_EXTI7_PE_Msk,	(0x1UL << AFIO_EXTICR2_EXTI7_PE_Pos) /*!< 0x00004000 */
.equ	AFIO_EXTICR2_EXTI7_PE,	AFIO_EXTICR2_EXTI7_PE_Msk         /*!< PE[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PF_Pos,	(12U)
.equ	AFIO_EXTICR2_EXTI7_PF_Msk,	(0x5UL << AFIO_EXTICR2_EXTI7_PF_Pos) /*!< 0x00005000 */
.equ	AFIO_EXTICR2_EXTI7_PF,	AFIO_EXTICR2_EXTI7_PF_Msk         /*!< PF[7] pin */
.equ	AFIO_EXTICR2_EXTI7_PG_Pos,	(13U)
.equ	AFIO_EXTICR2_EXTI7_PG_Msk,	(0x3UL << AFIO_EXTICR2_EXTI7_PG_Pos) /*!< 0x00006000 */
.equ	AFIO_EXTICR2_EXTI7_PG,	AFIO_EXTICR2_EXTI7_PG_Msk         /*!< PG[7] pin */

/*****************  Bit definition for AFIO_EXTICR3 register  *****************/
.equ	AFIO_EXTICR3_EXTI8_Pos,	0
.equ	AFIO_EXTICR3_EXTI8_Msk,	(0xFUL << AFIO_EXTICR3_EXTI8_Pos)  /*!< 0x0000000F */
.equ	AFIO_EXTICR3_EXTI8,	AFIO_EXTICR3_EXTI8_Msk            /*!< EXTI 8 configuration */
.equ	AFIO_EXTICR3_EXTI9_Pos,	(4U)
.equ	AFIO_EXTICR3_EXTI9_Msk,	(0xFUL << AFIO_EXTICR3_EXTI9_Pos)  /*!< 0x000000F0 */
.equ	AFIO_EXTICR3_EXTI9,	AFIO_EXTICR3_EXTI9_Msk            /*!< EXTI 9 configuration */
.equ	AFIO_EXTICR3_EXTI10_Pos,	(8U)
.equ	AFIO_EXTICR3_EXTI10_Msk,	(0xFUL << AFIO_EXTICR3_EXTI10_Pos) /*!< 0x00000F00 */
.equ	AFIO_EXTICR3_EXTI10,	AFIO_EXTICR3_EXTI10_Msk           /*!< EXTI 10 configuration */
.equ	AFIO_EXTICR3_EXTI11_Pos,	(12U)
.equ	AFIO_EXTICR3_EXTI11_Msk,	(0xFUL << AFIO_EXTICR3_EXTI11_Pos) /*!< 0x0000F000 */
.equ	AFIO_EXTICR3_EXTI11,	AFIO_EXTICR3_EXTI11_Msk           /*!< EXTI 11 configuration */

/*!< EXTI8 configuration */
.equ	AFIO_EXTICR3_EXTI8_PA,	0x00000000U                          /*!< PA[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PB_Pos,	0
.equ	AFIO_EXTICR3_EXTI8_PB_Msk,	(0x1UL << AFIO_EXTICR3_EXTI8_PB_Pos) /*!< 0x00000001 */
.equ	AFIO_EXTICR3_EXTI8_PB,	AFIO_EXTICR3_EXTI8_PB_Msk         /*!< PB[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PC_Pos,	(1U)
.equ	AFIO_EXTICR3_EXTI8_PC_Msk,	(0x1UL << AFIO_EXTICR3_EXTI8_PC_Pos) /*!< 0x00000002 */
.equ	AFIO_EXTICR3_EXTI8_PC,	AFIO_EXTICR3_EXTI8_PC_Msk         /*!< PC[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PD_Pos,	0
.equ	AFIO_EXTICR3_EXTI8_PD_Msk,	(0x3UL << AFIO_EXTICR3_EXTI8_PD_Pos) /*!< 0x00000003 */
.equ	AFIO_EXTICR3_EXTI8_PD,	AFIO_EXTICR3_EXTI8_PD_Msk         /*!< PD[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PE_Pos,	(2U)
.equ	AFIO_EXTICR3_EXTI8_PE_Msk,	(0x1UL << AFIO_EXTICR3_EXTI8_PE_Pos) /*!< 0x00000004 */
.equ	AFIO_EXTICR3_EXTI8_PE,	AFIO_EXTICR3_EXTI8_PE_Msk         /*!< PE[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PF_Pos,	0
.equ	AFIO_EXTICR3_EXTI8_PF_Msk,	(0x5UL << AFIO_EXTICR3_EXTI8_PF_Pos) /*!< 0x00000005 */
.equ	AFIO_EXTICR3_EXTI8_PF,	AFIO_EXTICR3_EXTI8_PF_Msk         /*!< PF[8] pin */
.equ	AFIO_EXTICR3_EXTI8_PG_Pos,	(1U)
.equ	AFIO_EXTICR3_EXTI8_PG_Msk,	(0x3UL << AFIO_EXTICR3_EXTI8_PG_Pos) /*!< 0x00000006 */
.equ	AFIO_EXTICR3_EXTI8_PG,	AFIO_EXTICR3_EXTI8_PG_Msk         /*!< PG[8] pin */

/*!< EXTI9 configuration */
.equ	AFIO_EXTICR3_EXTI9_PA,	0x00000000U                          /*!< PA[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PB_Pos,	(4U)
.equ	AFIO_EXTICR3_EXTI9_PB_Msk,	(0x1UL << AFIO_EXTICR3_EXTI9_PB_Pos) /*!< 0x00000010 */
.equ	AFIO_EXTICR3_EXTI9_PB,	AFIO_EXTICR3_EXTI9_PB_Msk         /*!< PB[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PC_Pos,	(5U)
.equ	AFIO_EXTICR3_EXTI9_PC_Msk,	(0x1UL << AFIO_EXTICR3_EXTI9_PC_Pos) /*!< 0x00000020 */
.equ	AFIO_EXTICR3_EXTI9_PC,	AFIO_EXTICR3_EXTI9_PC_Msk         /*!< PC[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PD_Pos,	(4U)
.equ	AFIO_EXTICR3_EXTI9_PD_Msk,	(0x3UL << AFIO_EXTICR3_EXTI9_PD_Pos) /*!< 0x00000030 */
.equ	AFIO_EXTICR3_EXTI9_PD,	AFIO_EXTICR3_EXTI9_PD_Msk         /*!< PD[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PE_Pos,	(6U)
.equ	AFIO_EXTICR3_EXTI9_PE_Msk,	(0x1UL << AFIO_EXTICR3_EXTI9_PE_Pos) /*!< 0x00000040 */
.equ	AFIO_EXTICR3_EXTI9_PE,	AFIO_EXTICR3_EXTI9_PE_Msk         /*!< PE[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PF_Pos,	(4U)
.equ	AFIO_EXTICR3_EXTI9_PF_Msk,	(0x5UL << AFIO_EXTICR3_EXTI9_PF_Pos) /*!< 0x00000050 */
.equ	AFIO_EXTICR3_EXTI9_PF,	AFIO_EXTICR3_EXTI9_PF_Msk         /*!< PF[9] pin */
.equ	AFIO_EXTICR3_EXTI9_PG_Pos,	(5U)
.equ	AFIO_EXTICR3_EXTI9_PG_Msk,	(0x3UL << AFIO_EXTICR3_EXTI9_PG_Pos) /*!< 0x00000060 */
.equ	AFIO_EXTICR3_EXTI9_PG,	AFIO_EXTICR3_EXTI9_PG_Msk         /*!< PG[9] pin */

/*!< EXTI10 configuration */
.equ	AFIO_EXTICR3_EXTI10_PA,	0x00000000U                          /*!< PA[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PB_Pos,	(8U)
.equ	AFIO_EXTICR3_EXTI10_PB_Msk,	(0x1UL << AFIO_EXTICR3_EXTI10_PB_Pos) /*!< 0x00000100 */
.equ	AFIO_EXTICR3_EXTI10_PB,	AFIO_EXTICR3_EXTI10_PB_Msk        /*!< PB[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PC_Pos,	(9U)
.equ	AFIO_EXTICR3_EXTI10_PC_Msk,	(0x1UL << AFIO_EXTICR3_EXTI10_PC_Pos) /*!< 0x00000200 */
.equ	AFIO_EXTICR3_EXTI10_PC,	AFIO_EXTICR3_EXTI10_PC_Msk        /*!< PC[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PD_Pos,	(8U)
.equ	AFIO_EXTICR3_EXTI10_PD_Msk,	(0x3UL << AFIO_EXTICR3_EXTI10_PD_Pos) /*!< 0x00000300 */
.equ	AFIO_EXTICR3_EXTI10_PD,	AFIO_EXTICR3_EXTI10_PD_Msk        /*!< PD[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PE_Pos,	(10U)
.equ	AFIO_EXTICR3_EXTI10_PE_Msk,	(0x1UL << AFIO_EXTICR3_EXTI10_PE_Pos) /*!< 0x00000400 */
.equ	AFIO_EXTICR3_EXTI10_PE,	AFIO_EXTICR3_EXTI10_PE_Msk        /*!< PE[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PF_Pos,	(8U)
.equ	AFIO_EXTICR3_EXTI10_PF_Msk,	(0x5UL << AFIO_EXTICR3_EXTI10_PF_Pos) /*!< 0x00000500 */
.equ	AFIO_EXTICR3_EXTI10_PF,	AFIO_EXTICR3_EXTI10_PF_Msk        /*!< PF[10] pin */
.equ	AFIO_EXTICR3_EXTI10_PG_Pos,	(9U)
.equ	AFIO_EXTICR3_EXTI10_PG_Msk,	(0x3UL << AFIO_EXTICR3_EXTI10_PG_Pos) /*!< 0x00000600 */
.equ	AFIO_EXTICR3_EXTI10_PG,	AFIO_EXTICR3_EXTI10_PG_Msk        /*!< PG[10] pin */

/*!< EXTI11 configuration */
.equ	AFIO_EXTICR3_EXTI11_PA,	0x00000000U                          /*!< PA[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PB_Pos,	(12U)
.equ	AFIO_EXTICR3_EXTI11_PB_Msk,	(0x1UL << AFIO_EXTICR3_EXTI11_PB_Pos) /*!< 0x00001000 */
.equ	AFIO_EXTICR3_EXTI11_PB,	AFIO_EXTICR3_EXTI11_PB_Msk        /*!< PB[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PC_Pos,	(13U)
.equ	AFIO_EXTICR3_EXTI11_PC_Msk,	(0x1UL << AFIO_EXTICR3_EXTI11_PC_Pos) /*!< 0x00002000 */
.equ	AFIO_EXTICR3_EXTI11_PC,	AFIO_EXTICR3_EXTI11_PC_Msk        /*!< PC[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PD_Pos,	(12U)
.equ	AFIO_EXTICR3_EXTI11_PD_Msk,	(0x3UL << AFIO_EXTICR3_EXTI11_PD_Pos) /*!< 0x00003000 */
.equ	AFIO_EXTICR3_EXTI11_PD,	AFIO_EXTICR3_EXTI11_PD_Msk        /*!< PD[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PE_Pos,	(14U)
.equ	AFIO_EXTICR3_EXTI11_PE_Msk,	(0x1UL << AFIO_EXTICR3_EXTI11_PE_Pos) /*!< 0x00004000 */
.equ	AFIO_EXTICR3_EXTI11_PE,	AFIO_EXTICR3_EXTI11_PE_Msk        /*!< PE[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PF_Pos,	(12U)
.equ	AFIO_EXTICR3_EXTI11_PF_Msk,	(0x5UL << AFIO_EXTICR3_EXTI11_PF_Pos) /*!< 0x00005000 */
.equ	AFIO_EXTICR3_EXTI11_PF,	AFIO_EXTICR3_EXTI11_PF_Msk        /*!< PF[11] pin */
.equ	AFIO_EXTICR3_EXTI11_PG_Pos,	(13U)
.equ	AFIO_EXTICR3_EXTI11_PG_Msk,	(0x3UL << AFIO_EXTICR3_EXTI11_PG_Pos) /*!< 0x00006000 */
.equ	AFIO_EXTICR3_EXTI11_PG,	AFIO_EXTICR3_EXTI11_PG_Msk        /*!< PG[11] pin */

/*****************  Bit definition for AFIO_EXTICR4 register  *****************/
.equ	AFIO_EXTICR4_EXTI12_Pos,	0
.equ	AFIO_EXTICR4_EXTI12_Msk,	(0xFUL << AFIO_EXTICR4_EXTI12_Pos) /*!< 0x0000000F */
.equ	AFIO_EXTICR4_EXTI12,	AFIO_EXTICR4_EXTI12_Msk           /*!< EXTI 12 configuration */
.equ	AFIO_EXTICR4_EXTI13_Pos,	(4U)
.equ	AFIO_EXTICR4_EXTI13_Msk,	(0xFUL << AFIO_EXTICR4_EXTI13_Pos) /*!< 0x000000F0 */
.equ	AFIO_EXTICR4_EXTI13,	AFIO_EXTICR4_EXTI13_Msk           /*!< EXTI 13 configuration */
.equ	AFIO_EXTICR4_EXTI14_Pos,	(8U)
.equ	AFIO_EXTICR4_EXTI14_Msk,	(0xFUL << AFIO_EXTICR4_EXTI14_Pos) /*!< 0x00000F00 */
.equ	AFIO_EXTICR4_EXTI14,	AFIO_EXTICR4_EXTI14_Msk           /*!< EXTI 14 configuration */
.equ	AFIO_EXTICR4_EXTI15_Pos,	(12U)
.equ	AFIO_EXTICR4_EXTI15_Msk,	(0xFUL << AFIO_EXTICR4_EXTI15_Pos) /*!< 0x0000F000 */
.equ	AFIO_EXTICR4_EXTI15,	AFIO_EXTICR4_EXTI15_Msk           /*!< EXTI 15 configuration */

/* EXTI12 configuration */
.equ	AFIO_EXTICR4_EXTI12_PA,	0x00000000U                          /*!< PA[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PB_Pos,	0
.equ	AFIO_EXTICR4_EXTI12_PB_Msk,	(0x1UL << AFIO_EXTICR4_EXTI12_PB_Pos) /*!< 0x00000001 */
.equ	AFIO_EXTICR4_EXTI12_PB,	AFIO_EXTICR4_EXTI12_PB_Msk        /*!< PB[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PC_Pos,	(1U)
.equ	AFIO_EXTICR4_EXTI12_PC_Msk,	(0x1UL << AFIO_EXTICR4_EXTI12_PC_Pos) /*!< 0x00000002 */
.equ	AFIO_EXTICR4_EXTI12_PC,	AFIO_EXTICR4_EXTI12_PC_Msk        /*!< PC[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PD_Pos,	0
.equ	AFIO_EXTICR4_EXTI12_PD_Msk,	(0x3UL << AFIO_EXTICR4_EXTI12_PD_Pos) /*!< 0x00000003 */
.equ	AFIO_EXTICR4_EXTI12_PD,	AFIO_EXTICR4_EXTI12_PD_Msk        /*!< PD[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PE_Pos,	(2U)
.equ	AFIO_EXTICR4_EXTI12_PE_Msk,	(0x1UL << AFIO_EXTICR4_EXTI12_PE_Pos) /*!< 0x00000004 */
.equ	AFIO_EXTICR4_EXTI12_PE,	AFIO_EXTICR4_EXTI12_PE_Msk        /*!< PE[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PF_Pos,	0
.equ	AFIO_EXTICR4_EXTI12_PF_Msk,	(0x5UL << AFIO_EXTICR4_EXTI12_PF_Pos) /*!< 0x00000005 */
.equ	AFIO_EXTICR4_EXTI12_PF,	AFIO_EXTICR4_EXTI12_PF_Msk        /*!< PF[12] pin */
.equ	AFIO_EXTICR4_EXTI12_PG_Pos,	(1U)
.equ	AFIO_EXTICR4_EXTI12_PG_Msk,	(0x3UL << AFIO_EXTICR4_EXTI12_PG_Pos) /*!< 0x00000006 */
.equ	AFIO_EXTICR4_EXTI12_PG,	AFIO_EXTICR4_EXTI12_PG_Msk        /*!< PG[12] pin */

/* EXTI13 configuration */
.equ	AFIO_EXTICR4_EXTI13_PA,	0x00000000U                          /*!< PA[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PB_Pos,	(4U)
.equ	AFIO_EXTICR4_EXTI13_PB_Msk,	(0x1UL << AFIO_EXTICR4_EXTI13_PB_Pos) /*!< 0x00000010 */
.equ	AFIO_EXTICR4_EXTI13_PB,	AFIO_EXTICR4_EXTI13_PB_Msk        /*!< PB[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PC_Pos,	(5U)
.equ	AFIO_EXTICR4_EXTI13_PC_Msk,	(0x1UL << AFIO_EXTICR4_EXTI13_PC_Pos) /*!< 0x00000020 */
.equ	AFIO_EXTICR4_EXTI13_PC,	AFIO_EXTICR4_EXTI13_PC_Msk        /*!< PC[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PD_Pos,	(4U)
.equ	AFIO_EXTICR4_EXTI13_PD_Msk,	(0x3UL << AFIO_EXTICR4_EXTI13_PD_Pos) /*!< 0x00000030 */
.equ	AFIO_EXTICR4_EXTI13_PD,	AFIO_EXTICR4_EXTI13_PD_Msk        /*!< PD[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PE_Pos,	(6U)
.equ	AFIO_EXTICR4_EXTI13_PE_Msk,	(0x1UL << AFIO_EXTICR4_EXTI13_PE_Pos) /*!< 0x00000040 */
.equ	AFIO_EXTICR4_EXTI13_PE,	AFIO_EXTICR4_EXTI13_PE_Msk        /*!< PE[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PF_Pos,	(4U)
.equ	AFIO_EXTICR4_EXTI13_PF_Msk,	(0x5UL << AFIO_EXTICR4_EXTI13_PF_Pos) /*!< 0x00000050 */
.equ	AFIO_EXTICR4_EXTI13_PF,	AFIO_EXTICR4_EXTI13_PF_Msk        /*!< PF[13] pin */
.equ	AFIO_EXTICR4_EXTI13_PG_Pos,	(5U)
.equ	AFIO_EXTICR4_EXTI13_PG_Msk,	(0x3UL << AFIO_EXTICR4_EXTI13_PG_Pos) /*!< 0x00000060 */
.equ	AFIO_EXTICR4_EXTI13_PG,	AFIO_EXTICR4_EXTI13_PG_Msk        /*!< PG[13] pin */

/*!< EXTI14 configuration */
.equ	AFIO_EXTICR4_EXTI14_PA,	0x00000000U                          /*!< PA[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PB_Pos,	(8U)
.equ	AFIO_EXTICR4_EXTI14_PB_Msk,	(0x1UL << AFIO_EXTICR4_EXTI14_PB_Pos) /*!< 0x00000100 */
.equ	AFIO_EXTICR4_EXTI14_PB,	AFIO_EXTICR4_EXTI14_PB_Msk        /*!< PB[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PC_Pos,	(9U)
.equ	AFIO_EXTICR4_EXTI14_PC_Msk,	(0x1UL << AFIO_EXTICR4_EXTI14_PC_Pos) /*!< 0x00000200 */
.equ	AFIO_EXTICR4_EXTI14_PC,	AFIO_EXTICR4_EXTI14_PC_Msk        /*!< PC[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PD_Pos,	(8U)
.equ	AFIO_EXTICR4_EXTI14_PD_Msk,	(0x3UL << AFIO_EXTICR4_EXTI14_PD_Pos) /*!< 0x00000300 */
.equ	AFIO_EXTICR4_EXTI14_PD,	AFIO_EXTICR4_EXTI14_PD_Msk        /*!< PD[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PE_Pos,	(10U)
.equ	AFIO_EXTICR4_EXTI14_PE_Msk,	(0x1UL << AFIO_EXTICR4_EXTI14_PE_Pos) /*!< 0x00000400 */
.equ	AFIO_EXTICR4_EXTI14_PE,	AFIO_EXTICR4_EXTI14_PE_Msk        /*!< PE[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PF_Pos,	(8U)
.equ	AFIO_EXTICR4_EXTI14_PF_Msk,	(0x5UL << AFIO_EXTICR4_EXTI14_PF_Pos) /*!< 0x00000500 */
.equ	AFIO_EXTICR4_EXTI14_PF,	AFIO_EXTICR4_EXTI14_PF_Msk        /*!< PF[14] pin */
.equ	AFIO_EXTICR4_EXTI14_PG_Pos,	(9U)
.equ	AFIO_EXTICR4_EXTI14_PG_Msk,	(0x3UL << AFIO_EXTICR4_EXTI14_PG_Pos) /*!< 0x00000600 */
.equ	AFIO_EXTICR4_EXTI14_PG,	AFIO_EXTICR4_EXTI14_PG_Msk        /*!< PG[14] pin */

/*!< EXTI15 configuration */
.equ	AFIO_EXTICR4_EXTI15_PA,	0x00000000U                          /*!< PA[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PB_Pos,	(12U)
.equ	AFIO_EXTICR4_EXTI15_PB_Msk,	(0x1UL << AFIO_EXTICR4_EXTI15_PB_Pos) /*!< 0x00001000 */
.equ	AFIO_EXTICR4_EXTI15_PB,	AFIO_EXTICR4_EXTI15_PB_Msk        /*!< PB[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PC_Pos,	(13U)
.equ	AFIO_EXTICR4_EXTI15_PC_Msk,	(0x1UL << AFIO_EXTICR4_EXTI15_PC_Pos) /*!< 0x00002000 */
.equ	AFIO_EXTICR4_EXTI15_PC,	AFIO_EXTICR4_EXTI15_PC_Msk        /*!< PC[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PD_Pos,	(12U)
.equ	AFIO_EXTICR4_EXTI15_PD_Msk,	(0x3UL << AFIO_EXTICR4_EXTI15_PD_Pos) /*!< 0x00003000 */
.equ	AFIO_EXTICR4_EXTI15_PD,	AFIO_EXTICR4_EXTI15_PD_Msk        /*!< PD[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PE_Pos,	(14U)
.equ	AFIO_EXTICR4_EXTI15_PE_Msk,	(0x1UL << AFIO_EXTICR4_EXTI15_PE_Pos) /*!< 0x00004000 */
.equ	AFIO_EXTICR4_EXTI15_PE,	AFIO_EXTICR4_EXTI15_PE_Msk        /*!< PE[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PF_Pos,	(12U)
.equ	AFIO_EXTICR4_EXTI15_PF_Msk,	(0x5UL << AFIO_EXTICR4_EXTI15_PF_Pos) /*!< 0x00005000 */
.equ	AFIO_EXTICR4_EXTI15_PF,	AFIO_EXTICR4_EXTI15_PF_Msk        /*!< PF[15] pin */
.equ	AFIO_EXTICR4_EXTI15_PG_Pos,	(13U)
.equ	AFIO_EXTICR4_EXTI15_PG_Msk,	(0x3UL << AFIO_EXTICR4_EXTI15_PG_Pos) /*!< 0x00006000 */
.equ	AFIO_EXTICR4_EXTI15_PG,	AFIO_EXTICR4_EXTI15_PG_Msk        /*!< PG[15] pin */

/******************  Bit definition for AFIO_MAPR2 register  ******************/



/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
.equ	EXTI_IMR_MR0_Pos,	0
.equ	EXTI_IMR_MR0_Msk,	(0x1UL << EXTI_IMR_MR0_Pos)         /*!< 0x00000001 */
.equ	EXTI_IMR_MR0,	EXTI_IMR_MR0_Msk                   /*!< Interrupt Mask on line 0 */
.equ	EXTI_IMR_MR1_Pos,	(1U)
.equ	EXTI_IMR_MR1_Msk,	(0x1UL << EXTI_IMR_MR1_Pos)         /*!< 0x00000002 */
.equ	EXTI_IMR_MR1,	EXTI_IMR_MR1_Msk                   /*!< Interrupt Mask on line 1 */
.equ	EXTI_IMR_MR2_Pos,	(2U)
.equ	EXTI_IMR_MR2_Msk,	(0x1UL << EXTI_IMR_MR2_Pos)         /*!< 0x00000004 */
.equ	EXTI_IMR_MR2,	EXTI_IMR_MR2_Msk                   /*!< Interrupt Mask on line 2 */
.equ	EXTI_IMR_MR3_Pos,	(3U)
.equ	EXTI_IMR_MR3_Msk,	(0x1UL << EXTI_IMR_MR3_Pos)         /*!< 0x00000008 */
.equ	EXTI_IMR_MR3,	EXTI_IMR_MR3_Msk                   /*!< Interrupt Mask on line 3 */
.equ	EXTI_IMR_MR4_Pos,	(4U)
.equ	EXTI_IMR_MR4_Msk,	(0x1UL << EXTI_IMR_MR4_Pos)         /*!< 0x00000010 */
.equ	EXTI_IMR_MR4,	EXTI_IMR_MR4_Msk                   /*!< Interrupt Mask on line 4 */
.equ	EXTI_IMR_MR5_Pos,	(5U)
.equ	EXTI_IMR_MR5_Msk,	(0x1UL << EXTI_IMR_MR5_Pos)         /*!< 0x00000020 */
.equ	EXTI_IMR_MR5,	EXTI_IMR_MR5_Msk                   /*!< Interrupt Mask on line 5 */
.equ	EXTI_IMR_MR6_Pos,	(6U)
.equ	EXTI_IMR_MR6_Msk,	(0x1UL << EXTI_IMR_MR6_Pos)         /*!< 0x00000040 */
.equ	EXTI_IMR_MR6,	EXTI_IMR_MR6_Msk                   /*!< Interrupt Mask on line 6 */
.equ	EXTI_IMR_MR7_Pos,	(7U)
.equ	EXTI_IMR_MR7_Msk,	(0x1UL << EXTI_IMR_MR7_Pos)         /*!< 0x00000080 */
.equ	EXTI_IMR_MR7,	EXTI_IMR_MR7_Msk                   /*!< Interrupt Mask on line 7 */
.equ	EXTI_IMR_MR8_Pos,	(8U)
.equ	EXTI_IMR_MR8_Msk,	(0x1UL << EXTI_IMR_MR8_Pos)         /*!< 0x00000100 */
.equ	EXTI_IMR_MR8,	EXTI_IMR_MR8_Msk                   /*!< Interrupt Mask on line 8 */
.equ	EXTI_IMR_MR9_Pos,	(9U)
.equ	EXTI_IMR_MR9_Msk,	(0x1UL << EXTI_IMR_MR9_Pos)         /*!< 0x00000200 */
.equ	EXTI_IMR_MR9,	EXTI_IMR_MR9_Msk                   /*!< Interrupt Mask on line 9 */
.equ	EXTI_IMR_MR10_Pos,	(10U)
.equ	EXTI_IMR_MR10_Msk,	(0x1UL << EXTI_IMR_MR10_Pos)        /*!< 0x00000400 */
.equ	EXTI_IMR_MR10,	EXTI_IMR_MR10_Msk                  /*!< Interrupt Mask on line 10 */
.equ	EXTI_IMR_MR11_Pos,	(11U)
.equ	EXTI_IMR_MR11_Msk,	(0x1UL << EXTI_IMR_MR11_Pos)        /*!< 0x00000800 */
.equ	EXTI_IMR_MR11,	EXTI_IMR_MR11_Msk                  /*!< Interrupt Mask on line 11 */
.equ	EXTI_IMR_MR12_Pos,	(12U)
.equ	EXTI_IMR_MR12_Msk,	(0x1UL << EXTI_IMR_MR12_Pos)        /*!< 0x00001000 */
.equ	EXTI_IMR_MR12,	EXTI_IMR_MR12_Msk                  /*!< Interrupt Mask on line 12 */
.equ	EXTI_IMR_MR13_Pos,	(13U)
.equ	EXTI_IMR_MR13_Msk,	(0x1UL << EXTI_IMR_MR13_Pos)        /*!< 0x00002000 */
.equ	EXTI_IMR_MR13,	EXTI_IMR_MR13_Msk                  /*!< Interrupt Mask on line 13 */
.equ	EXTI_IMR_MR14_Pos,	(14U)
.equ	EXTI_IMR_MR14_Msk,	(0x1UL << EXTI_IMR_MR14_Pos)        /*!< 0x00004000 */
.equ	EXTI_IMR_MR14,	EXTI_IMR_MR14_Msk                  /*!< Interrupt Mask on line 14 */
.equ	EXTI_IMR_MR15_Pos,	(15U)
.equ	EXTI_IMR_MR15_Msk,	(0x1UL << EXTI_IMR_MR15_Pos)        /*!< 0x00008000 */
.equ	EXTI_IMR_MR15,	EXTI_IMR_MR15_Msk                  /*!< Interrupt Mask on line 15 */
.equ	EXTI_IMR_MR16_Pos,	(16U)
.equ	EXTI_IMR_MR16_Msk,	(0x1UL << EXTI_IMR_MR16_Pos)        /*!< 0x00010000 */
.equ	EXTI_IMR_MR16,	EXTI_IMR_MR16_Msk                  /*!< Interrupt Mask on line 16 */
.equ	EXTI_IMR_MR17_Pos,	(17U)
.equ	EXTI_IMR_MR17_Msk,	(0x1UL << EXTI_IMR_MR17_Pos)        /*!< 0x00020000 */
.equ	EXTI_IMR_MR17,	EXTI_IMR_MR17_Msk                  /*!< Interrupt Mask on line 17 */
.equ	EXTI_IMR_MR18_Pos,	(18U)
.equ	EXTI_IMR_MR18_Msk,	(0x1UL << EXTI_IMR_MR18_Pos)        /*!< 0x00040000 */
.equ	EXTI_IMR_MR18,	EXTI_IMR_MR18_Msk                  /*!< Interrupt Mask on line 18 */

/* References Defines */
.equ	EXTI_IMR_IM0,	EXTI_IMR_MR0
.equ	EXTI_IMR_IM1,	EXTI_IMR_MR1
.equ	EXTI_IMR_IM2,	EXTI_IMR_MR2
.equ	EXTI_IMR_IM3,	EXTI_IMR_MR3
.equ	EXTI_IMR_IM4,	EXTI_IMR_MR4
.equ	EXTI_IMR_IM5,	EXTI_IMR_MR5
.equ	EXTI_IMR_IM6,	EXTI_IMR_MR6
.equ	EXTI_IMR_IM7,	EXTI_IMR_MR7
.equ	EXTI_IMR_IM8,	EXTI_IMR_MR8
.equ	EXTI_IMR_IM9,	EXTI_IMR_MR9
.equ	EXTI_IMR_IM10,	EXTI_IMR_MR10
.equ	EXTI_IMR_IM11,	EXTI_IMR_MR11
.equ	EXTI_IMR_IM12,	EXTI_IMR_MR12
.equ	EXTI_IMR_IM13,	EXTI_IMR_MR13
.equ	EXTI_IMR_IM14,	EXTI_IMR_MR14
.equ	EXTI_IMR_IM15,	EXTI_IMR_MR15
.equ	EXTI_IMR_IM16,	EXTI_IMR_MR16
.equ	EXTI_IMR_IM17,	EXTI_IMR_MR17
.equ	EXTI_IMR_IM18,	EXTI_IMR_MR18
.equ	EXTI_IMR_IM,	0x0007FFFFU        /*!< Interrupt Mask All */

/*******************  Bit definition for EXTI_EMR register  *******************/
.equ	EXTI_EMR_MR0_Pos,	0
.equ	EXTI_EMR_MR0_Msk,	(0x1UL << EXTI_EMR_MR0_Pos)         /*!< 0x00000001 */
.equ	EXTI_EMR_MR0,	EXTI_EMR_MR0_Msk                   /*!< Event Mask on line 0 */
.equ	EXTI_EMR_MR1_Pos,	(1U)
.equ	EXTI_EMR_MR1_Msk,	(0x1UL << EXTI_EMR_MR1_Pos)         /*!< 0x00000002 */
.equ	EXTI_EMR_MR1,	EXTI_EMR_MR1_Msk                   /*!< Event Mask on line 1 */
.equ	EXTI_EMR_MR2_Pos,	(2U)
.equ	EXTI_EMR_MR2_Msk,	(0x1UL << EXTI_EMR_MR2_Pos)         /*!< 0x00000004 */
.equ	EXTI_EMR_MR2,	EXTI_EMR_MR2_Msk                   /*!< Event Mask on line 2 */
.equ	EXTI_EMR_MR3_Pos,	(3U)
.equ	EXTI_EMR_MR3_Msk,	(0x1UL << EXTI_EMR_MR3_Pos)         /*!< 0x00000008 */
.equ	EXTI_EMR_MR3,	EXTI_EMR_MR3_Msk                   /*!< Event Mask on line 3 */
.equ	EXTI_EMR_MR4_Pos,	(4U)
.equ	EXTI_EMR_MR4_Msk,	(0x1UL << EXTI_EMR_MR4_Pos)         /*!< 0x00000010 */
.equ	EXTI_EMR_MR4,	EXTI_EMR_MR4_Msk                   /*!< Event Mask on line 4 */
.equ	EXTI_EMR_MR5_Pos,	(5U)
.equ	EXTI_EMR_MR5_Msk,	(0x1UL << EXTI_EMR_MR5_Pos)         /*!< 0x00000020 */
.equ	EXTI_EMR_MR5,	EXTI_EMR_MR5_Msk                   /*!< Event Mask on line 5 */
.equ	EXTI_EMR_MR6_Pos,	(6U)
.equ	EXTI_EMR_MR6_Msk,	(0x1UL << EXTI_EMR_MR6_Pos)         /*!< 0x00000040 */
.equ	EXTI_EMR_MR6,	EXTI_EMR_MR6_Msk                   /*!< Event Mask on line 6 */
.equ	EXTI_EMR_MR7_Pos,	(7U)
.equ	EXTI_EMR_MR7_Msk,	(0x1UL << EXTI_EMR_MR7_Pos)         /*!< 0x00000080 */
.equ	EXTI_EMR_MR7,	EXTI_EMR_MR7_Msk                   /*!< Event Mask on line 7 */
.equ	EXTI_EMR_MR8_Pos,	(8U)
.equ	EXTI_EMR_MR8_Msk,	(0x1UL << EXTI_EMR_MR8_Pos)         /*!< 0x00000100 */
.equ	EXTI_EMR_MR8,	EXTI_EMR_MR8_Msk                   /*!< Event Mask on line 8 */
.equ	EXTI_EMR_MR9_Pos,	(9U)
.equ	EXTI_EMR_MR9_Msk,	(0x1UL << EXTI_EMR_MR9_Pos)         /*!< 0x00000200 */
.equ	EXTI_EMR_MR9,	EXTI_EMR_MR9_Msk                   /*!< Event Mask on line 9 */
.equ	EXTI_EMR_MR10_Pos,	(10U)
.equ	EXTI_EMR_MR10_Msk,	(0x1UL << EXTI_EMR_MR10_Pos)        /*!< 0x00000400 */
.equ	EXTI_EMR_MR10,	EXTI_EMR_MR10_Msk                  /*!< Event Mask on line 10 */
.equ	EXTI_EMR_MR11_Pos,	(11U)
.equ	EXTI_EMR_MR11_Msk,	(0x1UL << EXTI_EMR_MR11_Pos)        /*!< 0x00000800 */
.equ	EXTI_EMR_MR11,	EXTI_EMR_MR11_Msk                  /*!< Event Mask on line 11 */
.equ	EXTI_EMR_MR12_Pos,	(12U)
.equ	EXTI_EMR_MR12_Msk,	(0x1UL << EXTI_EMR_MR12_Pos)        /*!< 0x00001000 */
.equ	EXTI_EMR_MR12,	EXTI_EMR_MR12_Msk                  /*!< Event Mask on line 12 */
.equ	EXTI_EMR_MR13_Pos,	(13U)
.equ	EXTI_EMR_MR13_Msk,	(0x1UL << EXTI_EMR_MR13_Pos)        /*!< 0x00002000 */
.equ	EXTI_EMR_MR13,	EXTI_EMR_MR13_Msk                  /*!< Event Mask on line 13 */
.equ	EXTI_EMR_MR14_Pos,	(14U)
.equ	EXTI_EMR_MR14_Msk,	(0x1UL << EXTI_EMR_MR14_Pos)        /*!< 0x00004000 */
.equ	EXTI_EMR_MR14,	EXTI_EMR_MR14_Msk                  /*!< Event Mask on line 14 */
.equ	EXTI_EMR_MR15_Pos,	(15U)
.equ	EXTI_EMR_MR15_Msk,	(0x1UL << EXTI_EMR_MR15_Pos)        /*!< 0x00008000 */
.equ	EXTI_EMR_MR15,	EXTI_EMR_MR15_Msk                  /*!< Event Mask on line 15 */
.equ	EXTI_EMR_MR16_Pos,	(16U)
.equ	EXTI_EMR_MR16_Msk,	(0x1UL << EXTI_EMR_MR16_Pos)        /*!< 0x00010000 */
.equ	EXTI_EMR_MR16,	EXTI_EMR_MR16_Msk                  /*!< Event Mask on line 16 */
.equ	EXTI_EMR_MR17_Pos,	(17U)
.equ	EXTI_EMR_MR17_Msk,	(0x1UL << EXTI_EMR_MR17_Pos)        /*!< 0x00020000 */
.equ	EXTI_EMR_MR17,	EXTI_EMR_MR17_Msk                  /*!< Event Mask on line 17 */
.equ	EXTI_EMR_MR18_Pos,	(18U)
.equ	EXTI_EMR_MR18_Msk,	(0x1UL << EXTI_EMR_MR18_Pos)        /*!< 0x00040000 */
.equ	EXTI_EMR_MR18,	EXTI_EMR_MR18_Msk                  /*!< Event Mask on line 18 */

/* References Defines */
.equ	EXTI_EMR_EM0,	EXTI_EMR_MR0
.equ	EXTI_EMR_EM1,	EXTI_EMR_MR1
.equ	EXTI_EMR_EM2,	EXTI_EMR_MR2
.equ	EXTI_EMR_EM3,	EXTI_EMR_MR3
.equ	EXTI_EMR_EM4,	EXTI_EMR_MR4
.equ	EXTI_EMR_EM5,	EXTI_EMR_MR5
.equ	EXTI_EMR_EM6,	EXTI_EMR_MR6
.equ	EXTI_EMR_EM7,	EXTI_EMR_MR7
.equ	EXTI_EMR_EM8,	EXTI_EMR_MR8
.equ	EXTI_EMR_EM9,	EXTI_EMR_MR9
.equ	EXTI_EMR_EM10,	EXTI_EMR_MR10
.equ	EXTI_EMR_EM11,	EXTI_EMR_MR11
.equ	EXTI_EMR_EM12,	EXTI_EMR_MR12
.equ	EXTI_EMR_EM13,	EXTI_EMR_MR13
.equ	EXTI_EMR_EM14,	EXTI_EMR_MR14
.equ	EXTI_EMR_EM15,	EXTI_EMR_MR15
.equ	EXTI_EMR_EM16,	EXTI_EMR_MR16
.equ	EXTI_EMR_EM17,	EXTI_EMR_MR17
.equ	EXTI_EMR_EM18,	EXTI_EMR_MR18

/******************  Bit definition for EXTI_RTSR register  *******************/
.equ	EXTI_RTSR_TR0_Pos,	0
.equ	EXTI_RTSR_TR0_Msk,	(0x1UL << EXTI_RTSR_TR0_Pos)        /*!< 0x00000001 */
.equ	EXTI_RTSR_TR0,	EXTI_RTSR_TR0_Msk                  /*!< Rising trigger event configuration bit of line 0 */
.equ	EXTI_RTSR_TR1_Pos,	(1U)
.equ	EXTI_RTSR_TR1_Msk,	(0x1UL << EXTI_RTSR_TR1_Pos)        /*!< 0x00000002 */
.equ	EXTI_RTSR_TR1,	EXTI_RTSR_TR1_Msk                  /*!< Rising trigger event configuration bit of line 1 */
.equ	EXTI_RTSR_TR2_Pos,	(2U)
.equ	EXTI_RTSR_TR2_Msk,	(0x1UL << EXTI_RTSR_TR2_Pos)        /*!< 0x00000004 */
.equ	EXTI_RTSR_TR2,	EXTI_RTSR_TR2_Msk                  /*!< Rising trigger event configuration bit of line 2 */
.equ	EXTI_RTSR_TR3_Pos,	(3U)
.equ	EXTI_RTSR_TR3_Msk,	(0x1UL << EXTI_RTSR_TR3_Pos)        /*!< 0x00000008 */
.equ	EXTI_RTSR_TR3,	EXTI_RTSR_TR3_Msk                  /*!< Rising trigger event configuration bit of line 3 */
.equ	EXTI_RTSR_TR4_Pos,	(4U)
.equ	EXTI_RTSR_TR4_Msk,	(0x1UL << EXTI_RTSR_TR4_Pos)        /*!< 0x00000010 */
.equ	EXTI_RTSR_TR4,	EXTI_RTSR_TR4_Msk                  /*!< Rising trigger event configuration bit of line 4 */
.equ	EXTI_RTSR_TR5_Pos,	(5U)
.equ	EXTI_RTSR_TR5_Msk,	(0x1UL << EXTI_RTSR_TR5_Pos)        /*!< 0x00000020 */
.equ	EXTI_RTSR_TR5,	EXTI_RTSR_TR5_Msk                  /*!< Rising trigger event configuration bit of line 5 */
.equ	EXTI_RTSR_TR6_Pos,	(6U)
.equ	EXTI_RTSR_TR6_Msk,	(0x1UL << EXTI_RTSR_TR6_Pos)        /*!< 0x00000040 */
.equ	EXTI_RTSR_TR6,	EXTI_RTSR_TR6_Msk                  /*!< Rising trigger event configuration bit of line 6 */
.equ	EXTI_RTSR_TR7_Pos,	(7U)
.equ	EXTI_RTSR_TR7_Msk,	(0x1UL << EXTI_RTSR_TR7_Pos)        /*!< 0x00000080 */
.equ	EXTI_RTSR_TR7,	EXTI_RTSR_TR7_Msk                  /*!< Rising trigger event configuration bit of line 7 */
.equ	EXTI_RTSR_TR8_Pos,	(8U)
.equ	EXTI_RTSR_TR8_Msk,	(0x1UL << EXTI_RTSR_TR8_Pos)        /*!< 0x00000100 */
.equ	EXTI_RTSR_TR8,	EXTI_RTSR_TR8_Msk                  /*!< Rising trigger event configuration bit of line 8 */
.equ	EXTI_RTSR_TR9_Pos,	(9U)
.equ	EXTI_RTSR_TR9_Msk,	(0x1UL << EXTI_RTSR_TR9_Pos)        /*!< 0x00000200 */
.equ	EXTI_RTSR_TR9,	EXTI_RTSR_TR9_Msk                  /*!< Rising trigger event configuration bit of line 9 */
.equ	EXTI_RTSR_TR10_Pos,	(10U)
.equ	EXTI_RTSR_TR10_Msk,	(0x1UL << EXTI_RTSR_TR10_Pos)       /*!< 0x00000400 */
.equ	EXTI_RTSR_TR10,	EXTI_RTSR_TR10_Msk                 /*!< Rising trigger event configuration bit of line 10 */
.equ	EXTI_RTSR_TR11_Pos,	(11U)
.equ	EXTI_RTSR_TR11_Msk,	(0x1UL << EXTI_RTSR_TR11_Pos)       /*!< 0x00000800 */
.equ	EXTI_RTSR_TR11,	EXTI_RTSR_TR11_Msk                 /*!< Rising trigger event configuration bit of line 11 */
.equ	EXTI_RTSR_TR12_Pos,	(12U)
.equ	EXTI_RTSR_TR12_Msk,	(0x1UL << EXTI_RTSR_TR12_Pos)       /*!< 0x00001000 */
.equ	EXTI_RTSR_TR12,	EXTI_RTSR_TR12_Msk                 /*!< Rising trigger event configuration bit of line 12 */
.equ	EXTI_RTSR_TR13_Pos,	(13U)
.equ	EXTI_RTSR_TR13_Msk,	(0x1UL << EXTI_RTSR_TR13_Pos)       /*!< 0x00002000 */
.equ	EXTI_RTSR_TR13,	EXTI_RTSR_TR13_Msk                 /*!< Rising trigger event configuration bit of line 13 */
.equ	EXTI_RTSR_TR14_Pos,	(14U)
.equ	EXTI_RTSR_TR14_Msk,	(0x1UL << EXTI_RTSR_TR14_Pos)       /*!< 0x00004000 */
.equ	EXTI_RTSR_TR14,	EXTI_RTSR_TR14_Msk                 /*!< Rising trigger event configuration bit of line 14 */
.equ	EXTI_RTSR_TR15_Pos,	(15U)
.equ	EXTI_RTSR_TR15_Msk,	(0x1UL << EXTI_RTSR_TR15_Pos)       /*!< 0x00008000 */
.equ	EXTI_RTSR_TR15,	EXTI_RTSR_TR15_Msk                 /*!< Rising trigger event configuration bit of line 15 */
.equ	EXTI_RTSR_TR16_Pos,	(16U)
.equ	EXTI_RTSR_TR16_Msk,	(0x1UL << EXTI_RTSR_TR16_Pos)       /*!< 0x00010000 */
.equ	EXTI_RTSR_TR16,	EXTI_RTSR_TR16_Msk                 /*!< Rising trigger event configuration bit of line 16 */
.equ	EXTI_RTSR_TR17_Pos,	(17U)
.equ	EXTI_RTSR_TR17_Msk,	(0x1UL << EXTI_RTSR_TR17_Pos)       /*!< 0x00020000 */
.equ	EXTI_RTSR_TR17,	EXTI_RTSR_TR17_Msk                 /*!< Rising trigger event configuration bit of line 17 */
.equ	EXTI_RTSR_TR18_Pos,	(18U)
.equ	EXTI_RTSR_TR18_Msk,	(0x1UL << EXTI_RTSR_TR18_Pos)       /*!< 0x00040000 */
.equ	EXTI_RTSR_TR18,	EXTI_RTSR_TR18_Msk                 /*!< Rising trigger event configuration bit of line 18 */

/* References Defines */
.equ	EXTI_RTSR_RT0,	EXTI_RTSR_TR0
.equ	EXTI_RTSR_RT1,	EXTI_RTSR_TR1
.equ	EXTI_RTSR_RT2,	EXTI_RTSR_TR2
.equ	EXTI_RTSR_RT3,	EXTI_RTSR_TR3
.equ	EXTI_RTSR_RT4,	EXTI_RTSR_TR4
.equ	EXTI_RTSR_RT5,	EXTI_RTSR_TR5
.equ	EXTI_RTSR_RT6,	EXTI_RTSR_TR6
.equ	EXTI_RTSR_RT7,	EXTI_RTSR_TR7
.equ	EXTI_RTSR_RT8,	EXTI_RTSR_TR8
.equ	EXTI_RTSR_RT9,	EXTI_RTSR_TR9
.equ	EXTI_RTSR_RT10,	EXTI_RTSR_TR10
.equ	EXTI_RTSR_RT11,	EXTI_RTSR_TR11
.equ	EXTI_RTSR_RT12,	EXTI_RTSR_TR12
.equ	EXTI_RTSR_RT13,	EXTI_RTSR_TR13
.equ	EXTI_RTSR_RT14,	EXTI_RTSR_TR14
.equ	EXTI_RTSR_RT15,	EXTI_RTSR_TR15
.equ	EXTI_RTSR_RT16,	EXTI_RTSR_TR16
.equ	EXTI_RTSR_RT17,	EXTI_RTSR_TR17
.equ	EXTI_RTSR_RT18,	EXTI_RTSR_TR18

/******************  Bit definition for EXTI_FTSR register  *******************/
.equ	EXTI_FTSR_TR0_Pos,	0
.equ	EXTI_FTSR_TR0_Msk,	(0x1UL << EXTI_FTSR_TR0_Pos)        /*!< 0x00000001 */
.equ	EXTI_FTSR_TR0,	EXTI_FTSR_TR0_Msk                  /*!< Falling trigger event configuration bit of line 0 */
.equ	EXTI_FTSR_TR1_Pos,	(1U)
.equ	EXTI_FTSR_TR1_Msk,	(0x1UL << EXTI_FTSR_TR1_Pos)        /*!< 0x00000002 */
.equ	EXTI_FTSR_TR1,	EXTI_FTSR_TR1_Msk                  /*!< Falling trigger event configuration bit of line 1 */
.equ	EXTI_FTSR_TR2_Pos,	(2U)
.equ	EXTI_FTSR_TR2_Msk,	(0x1UL << EXTI_FTSR_TR2_Pos)        /*!< 0x00000004 */
.equ	EXTI_FTSR_TR2,	EXTI_FTSR_TR2_Msk                  /*!< Falling trigger event configuration bit of line 2 */
.equ	EXTI_FTSR_TR3_Pos,	(3U)
.equ	EXTI_FTSR_TR3_Msk,	(0x1UL << EXTI_FTSR_TR3_Pos)        /*!< 0x00000008 */
.equ	EXTI_FTSR_TR3,	EXTI_FTSR_TR3_Msk                  /*!< Falling trigger event configuration bit of line 3 */
.equ	EXTI_FTSR_TR4_Pos,	(4U)
.equ	EXTI_FTSR_TR4_Msk,	(0x1UL << EXTI_FTSR_TR4_Pos)        /*!< 0x00000010 */
.equ	EXTI_FTSR_TR4,	EXTI_FTSR_TR4_Msk                  /*!< Falling trigger event configuration bit of line 4 */
.equ	EXTI_FTSR_TR5_Pos,	(5U)
.equ	EXTI_FTSR_TR5_Msk,	(0x1UL << EXTI_FTSR_TR5_Pos)        /*!< 0x00000020 */
.equ	EXTI_FTSR_TR5,	EXTI_FTSR_TR5_Msk                  /*!< Falling trigger event configuration bit of line 5 */
.equ	EXTI_FTSR_TR6_Pos,	(6U)
.equ	EXTI_FTSR_TR6_Msk,	(0x1UL << EXTI_FTSR_TR6_Pos)        /*!< 0x00000040 */
.equ	EXTI_FTSR_TR6,	EXTI_FTSR_TR6_Msk                  /*!< Falling trigger event configuration bit of line 6 */
.equ	EXTI_FTSR_TR7_Pos,	(7U)
.equ	EXTI_FTSR_TR7_Msk,	(0x1UL << EXTI_FTSR_TR7_Pos)        /*!< 0x00000080 */
.equ	EXTI_FTSR_TR7,	EXTI_FTSR_TR7_Msk                  /*!< Falling trigger event configuration bit of line 7 */
.equ	EXTI_FTSR_TR8_Pos,	(8U)
.equ	EXTI_FTSR_TR8_Msk,	(0x1UL << EXTI_FTSR_TR8_Pos)        /*!< 0x00000100 */
.equ	EXTI_FTSR_TR8,	EXTI_FTSR_TR8_Msk                  /*!< Falling trigger event configuration bit of line 8 */
.equ	EXTI_FTSR_TR9_Pos,	(9U)
.equ	EXTI_FTSR_TR9_Msk,	(0x1UL << EXTI_FTSR_TR9_Pos)        /*!< 0x00000200 */
.equ	EXTI_FTSR_TR9,	EXTI_FTSR_TR9_Msk                  /*!< Falling trigger event configuration bit of line 9 */
.equ	EXTI_FTSR_TR10_Pos,	(10U)
.equ	EXTI_FTSR_TR10_Msk,	(0x1UL << EXTI_FTSR_TR10_Pos)       /*!< 0x00000400 */
.equ	EXTI_FTSR_TR10,	EXTI_FTSR_TR10_Msk                 /*!< Falling trigger event configuration bit of line 10 */
.equ	EXTI_FTSR_TR11_Pos,	(11U)
.equ	EXTI_FTSR_TR11_Msk,	(0x1UL << EXTI_FTSR_TR11_Pos)       /*!< 0x00000800 */
.equ	EXTI_FTSR_TR11,	EXTI_FTSR_TR11_Msk                 /*!< Falling trigger event configuration bit of line 11 */
.equ	EXTI_FTSR_TR12_Pos,	(12U)
.equ	EXTI_FTSR_TR12_Msk,	(0x1UL << EXTI_FTSR_TR12_Pos)       /*!< 0x00001000 */
.equ	EXTI_FTSR_TR12,	EXTI_FTSR_TR12_Msk                 /*!< Falling trigger event configuration bit of line 12 */
.equ	EXTI_FTSR_TR13_Pos,	(13U)
.equ	EXTI_FTSR_TR13_Msk,	(0x1UL << EXTI_FTSR_TR13_Pos)       /*!< 0x00002000 */
.equ	EXTI_FTSR_TR13,	EXTI_FTSR_TR13_Msk                 /*!< Falling trigger event configuration bit of line 13 */
.equ	EXTI_FTSR_TR14_Pos,	(14U)
.equ	EXTI_FTSR_TR14_Msk,	(0x1UL << EXTI_FTSR_TR14_Pos)       /*!< 0x00004000 */
.equ	EXTI_FTSR_TR14,	EXTI_FTSR_TR14_Msk                 /*!< Falling trigger event configuration bit of line 14 */
.equ	EXTI_FTSR_TR15_Pos,	(15U)
.equ	EXTI_FTSR_TR15_Msk,	(0x1UL << EXTI_FTSR_TR15_Pos)       /*!< 0x00008000 */
.equ	EXTI_FTSR_TR15,	EXTI_FTSR_TR15_Msk                 /*!< Falling trigger event configuration bit of line 15 */
.equ	EXTI_FTSR_TR16_Pos,	(16U)
.equ	EXTI_FTSR_TR16_Msk,	(0x1UL << EXTI_FTSR_TR16_Pos)       /*!< 0x00010000 */
.equ	EXTI_FTSR_TR16,	EXTI_FTSR_TR16_Msk                 /*!< Falling trigger event configuration bit of line 16 */
.equ	EXTI_FTSR_TR17_Pos,	(17U)
.equ	EXTI_FTSR_TR17_Msk,	(0x1UL << EXTI_FTSR_TR17_Pos)       /*!< 0x00020000 */
.equ	EXTI_FTSR_TR17,	EXTI_FTSR_TR17_Msk                 /*!< Falling trigger event configuration bit of line 17 */
.equ	EXTI_FTSR_TR18_Pos,	(18U)
.equ	EXTI_FTSR_TR18_Msk,	(0x1UL << EXTI_FTSR_TR18_Pos)       /*!< 0x00040000 */
.equ	EXTI_FTSR_TR18,	EXTI_FTSR_TR18_Msk                 /*!< Falling trigger event configuration bit of line 18 */

/* References Defines */
.equ	EXTI_FTSR_FT0,	EXTI_FTSR_TR0
.equ	EXTI_FTSR_FT1,	EXTI_FTSR_TR1
.equ	EXTI_FTSR_FT2,	EXTI_FTSR_TR2
.equ	EXTI_FTSR_FT3,	EXTI_FTSR_TR3
.equ	EXTI_FTSR_FT4,	EXTI_FTSR_TR4
.equ	EXTI_FTSR_FT5,	EXTI_FTSR_TR5
.equ	EXTI_FTSR_FT6,	EXTI_FTSR_TR6
.equ	EXTI_FTSR_FT7,	EXTI_FTSR_TR7
.equ	EXTI_FTSR_FT8,	EXTI_FTSR_TR8
.equ	EXTI_FTSR_FT9,	EXTI_FTSR_TR9
.equ	EXTI_FTSR_FT10,	EXTI_FTSR_TR10
.equ	EXTI_FTSR_FT11,	EXTI_FTSR_TR11
.equ	EXTI_FTSR_FT12,	EXTI_FTSR_TR12
.equ	EXTI_FTSR_FT13,	EXTI_FTSR_TR13
.equ	EXTI_FTSR_FT14,	EXTI_FTSR_TR14
.equ	EXTI_FTSR_FT15,	EXTI_FTSR_TR15
.equ	EXTI_FTSR_FT16,	EXTI_FTSR_TR16
.equ	EXTI_FTSR_FT17,	EXTI_FTSR_TR17
.equ	EXTI_FTSR_FT18,	EXTI_FTSR_TR18

/******************  Bit definition for EXTI_SWIER register  ******************/
.equ	EXTI_SWIER_SWIER0_Pos,	0
.equ	EXTI_SWIER_SWIER0_Msk,	(0x1UL << EXTI_SWIER_SWIER0_Pos)    /*!< 0x00000001 */
.equ	EXTI_SWIER_SWIER0,	EXTI_SWIER_SWIER0_Msk              /*!< Software Interrupt on line 0 */
.equ	EXTI_SWIER_SWIER1_Pos,	(1U)
.equ	EXTI_SWIER_SWIER1_Msk,	(0x1UL << EXTI_SWIER_SWIER1_Pos)    /*!< 0x00000002 */
.equ	EXTI_SWIER_SWIER1,	EXTI_SWIER_SWIER1_Msk              /*!< Software Interrupt on line 1 */
.equ	EXTI_SWIER_SWIER2_Pos,	(2U)
.equ	EXTI_SWIER_SWIER2_Msk,	(0x1UL << EXTI_SWIER_SWIER2_Pos)    /*!< 0x00000004 */
.equ	EXTI_SWIER_SWIER2,	EXTI_SWIER_SWIER2_Msk              /*!< Software Interrupt on line 2 */
.equ	EXTI_SWIER_SWIER3_Pos,	(3U)
.equ	EXTI_SWIER_SWIER3_Msk,	(0x1UL << EXTI_SWIER_SWIER3_Pos)    /*!< 0x00000008 */
.equ	EXTI_SWIER_SWIER3,	EXTI_SWIER_SWIER3_Msk              /*!< Software Interrupt on line 3 */
.equ	EXTI_SWIER_SWIER4_Pos,	(4U)
.equ	EXTI_SWIER_SWIER4_Msk,	(0x1UL << EXTI_SWIER_SWIER4_Pos)    /*!< 0x00000010 */
.equ	EXTI_SWIER_SWIER4,	EXTI_SWIER_SWIER4_Msk              /*!< Software Interrupt on line 4 */
.equ	EXTI_SWIER_SWIER5_Pos,	(5U)
.equ	EXTI_SWIER_SWIER5_Msk,	(0x1UL << EXTI_SWIER_SWIER5_Pos)    /*!< 0x00000020 */
.equ	EXTI_SWIER_SWIER5,	EXTI_SWIER_SWIER5_Msk              /*!< Software Interrupt on line 5 */
.equ	EXTI_SWIER_SWIER6_Pos,	(6U)
.equ	EXTI_SWIER_SWIER6_Msk,	(0x1UL << EXTI_SWIER_SWIER6_Pos)    /*!< 0x00000040 */
.equ	EXTI_SWIER_SWIER6,	EXTI_SWIER_SWIER6_Msk              /*!< Software Interrupt on line 6 */
.equ	EXTI_SWIER_SWIER7_Pos,	(7U)
.equ	EXTI_SWIER_SWIER7_Msk,	(0x1UL << EXTI_SWIER_SWIER7_Pos)    /*!< 0x00000080 */
.equ	EXTI_SWIER_SWIER7,	EXTI_SWIER_SWIER7_Msk              /*!< Software Interrupt on line 7 */
.equ	EXTI_SWIER_SWIER8_Pos,	(8U)
.equ	EXTI_SWIER_SWIER8_Msk,	(0x1UL << EXTI_SWIER_SWIER8_Pos)    /*!< 0x00000100 */
.equ	EXTI_SWIER_SWIER8,	EXTI_SWIER_SWIER8_Msk              /*!< Software Interrupt on line 8 */
.equ	EXTI_SWIER_SWIER9_Pos,	(9U)
.equ	EXTI_SWIER_SWIER9_Msk,	(0x1UL << EXTI_SWIER_SWIER9_Pos)    /*!< 0x00000200 */
.equ	EXTI_SWIER_SWIER9,	EXTI_SWIER_SWIER9_Msk              /*!< Software Interrupt on line 9 */
.equ	EXTI_SWIER_SWIER10_Pos,	(10U)
.equ	EXTI_SWIER_SWIER10_Msk,	(0x1UL << EXTI_SWIER_SWIER10_Pos)   /*!< 0x00000400 */
.equ	EXTI_SWIER_SWIER10,	EXTI_SWIER_SWIER10_Msk             /*!< Software Interrupt on line 10 */
.equ	EXTI_SWIER_SWIER11_Pos,	(11U)
.equ	EXTI_SWIER_SWIER11_Msk,	(0x1UL << EXTI_SWIER_SWIER11_Pos)   /*!< 0x00000800 */
.equ	EXTI_SWIER_SWIER11,	EXTI_SWIER_SWIER11_Msk             /*!< Software Interrupt on line 11 */
.equ	EXTI_SWIER_SWIER12_Pos,	(12U)
.equ	EXTI_SWIER_SWIER12_Msk,	(0x1UL << EXTI_SWIER_SWIER12_Pos)   /*!< 0x00001000 */
.equ	EXTI_SWIER_SWIER12,	EXTI_SWIER_SWIER12_Msk             /*!< Software Interrupt on line 12 */
.equ	EXTI_SWIER_SWIER13_Pos,	(13U)
.equ	EXTI_SWIER_SWIER13_Msk,	(0x1UL << EXTI_SWIER_SWIER13_Pos)   /*!< 0x00002000 */
.equ	EXTI_SWIER_SWIER13,	EXTI_SWIER_SWIER13_Msk             /*!< Software Interrupt on line 13 */
.equ	EXTI_SWIER_SWIER14_Pos,	(14U)
.equ	EXTI_SWIER_SWIER14_Msk,	(0x1UL << EXTI_SWIER_SWIER14_Pos)   /*!< 0x00004000 */
.equ	EXTI_SWIER_SWIER14,	EXTI_SWIER_SWIER14_Msk             /*!< Software Interrupt on line 14 */
.equ	EXTI_SWIER_SWIER15_Pos,	(15U)
.equ	EXTI_SWIER_SWIER15_Msk,	(0x1UL << EXTI_SWIER_SWIER15_Pos)   /*!< 0x00008000 */
.equ	EXTI_SWIER_SWIER15,	EXTI_SWIER_SWIER15_Msk             /*!< Software Interrupt on line 15 */
.equ	EXTI_SWIER_SWIER16_Pos,	(16U)
.equ	EXTI_SWIER_SWIER16_Msk,	(0x1UL << EXTI_SWIER_SWIER16_Pos)   /*!< 0x00010000 */
.equ	EXTI_SWIER_SWIER16,	EXTI_SWIER_SWIER16_Msk             /*!< Software Interrupt on line 16 */
.equ	EXTI_SWIER_SWIER17_Pos,	(17U)
.equ	EXTI_SWIER_SWIER17_Msk,	(0x1UL << EXTI_SWIER_SWIER17_Pos)   /*!< 0x00020000 */
.equ	EXTI_SWIER_SWIER17,	EXTI_SWIER_SWIER17_Msk             /*!< Software Interrupt on line 17 */
.equ	EXTI_SWIER_SWIER18_Pos,	(18U)
.equ	EXTI_SWIER_SWIER18_Msk,	(0x1UL << EXTI_SWIER_SWIER18_Pos)   /*!< 0x00040000 */
.equ	EXTI_SWIER_SWIER18,	EXTI_SWIER_SWIER18_Msk             /*!< Software Interrupt on line 18 */

/* References Defines */
.equ	EXTI_SWIER_SWI0,	EXTI_SWIER_SWIER0
.equ	EXTI_SWIER_SWI1,	EXTI_SWIER_SWIER1
.equ	EXTI_SWIER_SWI2,	EXTI_SWIER_SWIER2
.equ	EXTI_SWIER_SWI3,	EXTI_SWIER_SWIER3
.equ	EXTI_SWIER_SWI4,	EXTI_SWIER_SWIER4
.equ	EXTI_SWIER_SWI5,	EXTI_SWIER_SWIER5
.equ	EXTI_SWIER_SWI6,	EXTI_SWIER_SWIER6
.equ	EXTI_SWIER_SWI7,	EXTI_SWIER_SWIER7
.equ	EXTI_SWIER_SWI8,	EXTI_SWIER_SWIER8
.equ	EXTI_SWIER_SWI9,	EXTI_SWIER_SWIER9
.equ	EXTI_SWIER_SWI10,	EXTI_SWIER_SWIER10
.equ	EXTI_SWIER_SWI11,	EXTI_SWIER_SWIER11
.equ	EXTI_SWIER_SWI12,	EXTI_SWIER_SWIER12
.equ	EXTI_SWIER_SWI13,	EXTI_SWIER_SWIER13
.equ	EXTI_SWIER_SWI14,	EXTI_SWIER_SWIER14
.equ	EXTI_SWIER_SWI15,	EXTI_SWIER_SWIER15
.equ	EXTI_SWIER_SWI16,	EXTI_SWIER_SWIER16
.equ	EXTI_SWIER_SWI17,	EXTI_SWIER_SWIER17
.equ	EXTI_SWIER_SWI18,	EXTI_SWIER_SWIER18

/*******************  Bit definition for EXTI_PR register  ********************/
.equ	EXTI_PR_PR0_Pos,	0
.equ	EXTI_PR_PR0_Msk,	(0x1UL << EXTI_PR_PR0_Pos)          /*!< 0x00000001 */
.equ	EXTI_PR_PR0,	EXTI_PR_PR0_Msk                    /*!< Pending bit for line 0 */
.equ	EXTI_PR_PR1_Pos,	(1U)
.equ	EXTI_PR_PR1_Msk,	(0x1UL << EXTI_PR_PR1_Pos)          /*!< 0x00000002 */
.equ	EXTI_PR_PR1,	EXTI_PR_PR1_Msk                    /*!< Pending bit for line 1 */
.equ	EXTI_PR_PR2_Pos,	(2U)
.equ	EXTI_PR_PR2_Msk,	(0x1UL << EXTI_PR_PR2_Pos)          /*!< 0x00000004 */
.equ	EXTI_PR_PR2,	EXTI_PR_PR2_Msk                    /*!< Pending bit for line 2 */
.equ	EXTI_PR_PR3_Pos,	(3U)
.equ	EXTI_PR_PR3_Msk,	(0x1UL << EXTI_PR_PR3_Pos)          /*!< 0x00000008 */
.equ	EXTI_PR_PR3,	EXTI_PR_PR3_Msk                    /*!< Pending bit for line 3 */
.equ	EXTI_PR_PR4_Pos,	(4U)
.equ	EXTI_PR_PR4_Msk,	(0x1UL << EXTI_PR_PR4_Pos)          /*!< 0x00000010 */
.equ	EXTI_PR_PR4,	EXTI_PR_PR4_Msk                    /*!< Pending bit for line 4 */
.equ	EXTI_PR_PR5_Pos,	(5U)
.equ	EXTI_PR_PR5_Msk,	(0x1UL << EXTI_PR_PR5_Pos)          /*!< 0x00000020 */
.equ	EXTI_PR_PR5,	EXTI_PR_PR5_Msk                    /*!< Pending bit for line 5 */
.equ	EXTI_PR_PR6_Pos,	(6U)
.equ	EXTI_PR_PR6_Msk,	(0x1UL << EXTI_PR_PR6_Pos)          /*!< 0x00000040 */
.equ	EXTI_PR_PR6,	EXTI_PR_PR6_Msk                    /*!< Pending bit for line 6 */
.equ	EXTI_PR_PR7_Pos,	(7U)
.equ	EXTI_PR_PR7_Msk,	(0x1UL << EXTI_PR_PR7_Pos)          /*!< 0x00000080 */
.equ	EXTI_PR_PR7,	EXTI_PR_PR7_Msk                    /*!< Pending bit for line 7 */
.equ	EXTI_PR_PR8_Pos,	(8U)
.equ	EXTI_PR_PR8_Msk,	(0x1UL << EXTI_PR_PR8_Pos)          /*!< 0x00000100 */
.equ	EXTI_PR_PR8,	EXTI_PR_PR8_Msk                    /*!< Pending bit for line 8 */
.equ	EXTI_PR_PR9_Pos,	(9U)
.equ	EXTI_PR_PR9_Msk,	(0x1UL << EXTI_PR_PR9_Pos)          /*!< 0x00000200 */
.equ	EXTI_PR_PR9,	EXTI_PR_PR9_Msk                    /*!< Pending bit for line 9 */
.equ	EXTI_PR_PR10_Pos,	(10U)
.equ	EXTI_PR_PR10_Msk,	(0x1UL << EXTI_PR_PR10_Pos)         /*!< 0x00000400 */
.equ	EXTI_PR_PR10,	EXTI_PR_PR10_Msk                   /*!< Pending bit for line 10 */
.equ	EXTI_PR_PR11_Pos,	(11U)
.equ	EXTI_PR_PR11_Msk,	(0x1UL << EXTI_PR_PR11_Pos)         /*!< 0x00000800 */
.equ	EXTI_PR_PR11,	EXTI_PR_PR11_Msk                   /*!< Pending bit for line 11 */
.equ	EXTI_PR_PR12_Pos,	(12U)
.equ	EXTI_PR_PR12_Msk,	(0x1UL << EXTI_PR_PR12_Pos)         /*!< 0x00001000 */
.equ	EXTI_PR_PR12,	EXTI_PR_PR12_Msk                   /*!< Pending bit for line 12 */
.equ	EXTI_PR_PR13_Pos,	(13U)
.equ	EXTI_PR_PR13_Msk,	(0x1UL << EXTI_PR_PR13_Pos)         /*!< 0x00002000 */
.equ	EXTI_PR_PR13,	EXTI_PR_PR13_Msk                   /*!< Pending bit for line 13 */
.equ	EXTI_PR_PR14_Pos,	(14U)
.equ	EXTI_PR_PR14_Msk,	(0x1UL << EXTI_PR_PR14_Pos)         /*!< 0x00004000 */
.equ	EXTI_PR_PR14,	EXTI_PR_PR14_Msk                   /*!< Pending bit for line 14 */
.equ	EXTI_PR_PR15_Pos,	(15U)
.equ	EXTI_PR_PR15_Msk,	(0x1UL << EXTI_PR_PR15_Pos)         /*!< 0x00008000 */
.equ	EXTI_PR_PR15,	EXTI_PR_PR15_Msk                   /*!< Pending bit for line 15 */
.equ	EXTI_PR_PR16_Pos,	(16U)
.equ	EXTI_PR_PR16_Msk,	(0x1UL << EXTI_PR_PR16_Pos)         /*!< 0x00010000 */
.equ	EXTI_PR_PR16,	EXTI_PR_PR16_Msk                   /*!< Pending bit for line 16 */
.equ	EXTI_PR_PR17_Pos,	(17U)
.equ	EXTI_PR_PR17_Msk,	(0x1UL << EXTI_PR_PR17_Pos)         /*!< 0x00020000 */
.equ	EXTI_PR_PR17,	EXTI_PR_PR17_Msk                   /*!< Pending bit for line 17 */
.equ	EXTI_PR_PR18_Pos,	(18U)
.equ	EXTI_PR_PR18_Msk,	(0x1UL << EXTI_PR_PR18_Pos)         /*!< 0x00040000 */
.equ	EXTI_PR_PR18,	EXTI_PR_PR18_Msk                   /*!< Pending bit for line 18 */

/* References Defines */
.equ	EXTI_PR_PIF0,	EXTI_PR_PR0
.equ	EXTI_PR_PIF1,	EXTI_PR_PR1
.equ	EXTI_PR_PIF2,	EXTI_PR_PR2
.equ	EXTI_PR_PIF3,	EXTI_PR_PR3
.equ	EXTI_PR_PIF4,	EXTI_PR_PR4
.equ	EXTI_PR_PIF5,	EXTI_PR_PR5
.equ	EXTI_PR_PIF6,	EXTI_PR_PR6
.equ	EXTI_PR_PIF7,	EXTI_PR_PR7
.equ	EXTI_PR_PIF8,	EXTI_PR_PR8
.equ	EXTI_PR_PIF9,	EXTI_PR_PR9
.equ	EXTI_PR_PIF10,	EXTI_PR_PR10
.equ	EXTI_PR_PIF11,	EXTI_PR_PR11
.equ	EXTI_PR_PIF12,	EXTI_PR_PR12
.equ	EXTI_PR_PIF13,	EXTI_PR_PR13
.equ	EXTI_PR_PIF14,	EXTI_PR_PR14
.equ	EXTI_PR_PIF15,	EXTI_PR_PR15
.equ	EXTI_PR_PIF16,	EXTI_PR_PR16
.equ	EXTI_PR_PIF17,	EXTI_PR_PR17
.equ	EXTI_PR_PIF18,	EXTI_PR_PR18

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
.equ	DMA_ISR_GIF1_Pos,	0
.equ	DMA_ISR_GIF1_Msk,	(0x1UL << DMA_ISR_GIF1_Pos)         /*!< 0x00000001 */
.equ	DMA_ISR_GIF1,	DMA_ISR_GIF1_Msk                   /*!< Channel 1 Global interrupt flag */
.equ	DMA_ISR_TCIF1_Pos,	(1U)
.equ	DMA_ISR_TCIF1_Msk,	(0x1UL << DMA_ISR_TCIF1_Pos)        /*!< 0x00000002 */
.equ	DMA_ISR_TCIF1,	DMA_ISR_TCIF1_Msk                  /*!< Channel 1 Transfer Complete flag */
.equ	DMA_ISR_HTIF1_Pos,	(2U)
.equ	DMA_ISR_HTIF1_Msk,	(0x1UL << DMA_ISR_HTIF1_Pos)        /*!< 0x00000004 */
.equ	DMA_ISR_HTIF1,	DMA_ISR_HTIF1_Msk                  /*!< Channel 1 Half Transfer flag */
.equ	DMA_ISR_TEIF1_Pos,	(3U)
.equ	DMA_ISR_TEIF1_Msk,	(0x1UL << DMA_ISR_TEIF1_Pos)        /*!< 0x00000008 */
.equ	DMA_ISR_TEIF1,	DMA_ISR_TEIF1_Msk                  /*!< Channel 1 Transfer Error flag */
.equ	DMA_ISR_GIF2_Pos,	(4U)
.equ	DMA_ISR_GIF2_Msk,	(0x1UL << DMA_ISR_GIF2_Pos)         /*!< 0x00000010 */
.equ	DMA_ISR_GIF2,	DMA_ISR_GIF2_Msk                   /*!< Channel 2 Global interrupt flag */
.equ	DMA_ISR_TCIF2_Pos,	(5U)
.equ	DMA_ISR_TCIF2_Msk,	(0x1UL << DMA_ISR_TCIF2_Pos)        /*!< 0x00000020 */
.equ	DMA_ISR_TCIF2,	DMA_ISR_TCIF2_Msk                  /*!< Channel 2 Transfer Complete flag */
.equ	DMA_ISR_HTIF2_Pos,	(6U)
.equ	DMA_ISR_HTIF2_Msk,	(0x1UL << DMA_ISR_HTIF2_Pos)        /*!< 0x00000040 */
.equ	DMA_ISR_HTIF2,	DMA_ISR_HTIF2_Msk                  /*!< Channel 2 Half Transfer flag */
.equ	DMA_ISR_TEIF2_Pos,	(7U)
.equ	DMA_ISR_TEIF2_Msk,	(0x1UL << DMA_ISR_TEIF2_Pos)        /*!< 0x00000080 */
.equ	DMA_ISR_TEIF2,	DMA_ISR_TEIF2_Msk                  /*!< Channel 2 Transfer Error flag */
.equ	DMA_ISR_GIF3_Pos,	(8U)
.equ	DMA_ISR_GIF3_Msk,	(0x1UL << DMA_ISR_GIF3_Pos)         /*!< 0x00000100 */
.equ	DMA_ISR_GIF3,	DMA_ISR_GIF3_Msk                   /*!< Channel 3 Global interrupt flag */
.equ	DMA_ISR_TCIF3_Pos,	(9U)
.equ	DMA_ISR_TCIF3_Msk,	(0x1UL << DMA_ISR_TCIF3_Pos)        /*!< 0x00000200 */
.equ	DMA_ISR_TCIF3,	DMA_ISR_TCIF3_Msk                  /*!< Channel 3 Transfer Complete flag */
.equ	DMA_ISR_HTIF3_Pos,	(10U)
.equ	DMA_ISR_HTIF3_Msk,	(0x1UL << DMA_ISR_HTIF3_Pos)        /*!< 0x00000400 */
.equ	DMA_ISR_HTIF3,	DMA_ISR_HTIF3_Msk                  /*!< Channel 3 Half Transfer flag */
.equ	DMA_ISR_TEIF3_Pos,	(11U)
.equ	DMA_ISR_TEIF3_Msk,	(0x1UL << DMA_ISR_TEIF3_Pos)        /*!< 0x00000800 */
.equ	DMA_ISR_TEIF3,	DMA_ISR_TEIF3_Msk                  /*!< Channel 3 Transfer Error flag */
.equ	DMA_ISR_GIF4_Pos,	(12U)
.equ	DMA_ISR_GIF4_Msk,	(0x1UL << DMA_ISR_GIF4_Pos)         /*!< 0x00001000 */
.equ	DMA_ISR_GIF4,	DMA_ISR_GIF4_Msk                   /*!< Channel 4 Global interrupt flag */
.equ	DMA_ISR_TCIF4_Pos,	(13U)
.equ	DMA_ISR_TCIF4_Msk,	(0x1UL << DMA_ISR_TCIF4_Pos)        /*!< 0x00002000 */
.equ	DMA_ISR_TCIF4,	DMA_ISR_TCIF4_Msk                  /*!< Channel 4 Transfer Complete flag */
.equ	DMA_ISR_HTIF4_Pos,	(14U)
.equ	DMA_ISR_HTIF4_Msk,	(0x1UL << DMA_ISR_HTIF4_Pos)        /*!< 0x00004000 */
.equ	DMA_ISR_HTIF4,	DMA_ISR_HTIF4_Msk                  /*!< Channel 4 Half Transfer flag */
.equ	DMA_ISR_TEIF4_Pos,	(15U)
.equ	DMA_ISR_TEIF4_Msk,	(0x1UL << DMA_ISR_TEIF4_Pos)        /*!< 0x00008000 */
.equ	DMA_ISR_TEIF4,	DMA_ISR_TEIF4_Msk                  /*!< Channel 4 Transfer Error flag */
.equ	DMA_ISR_GIF5_Pos,	(16U)
.equ	DMA_ISR_GIF5_Msk,	(0x1UL << DMA_ISR_GIF5_Pos)         /*!< 0x00010000 */
.equ	DMA_ISR_GIF5,	DMA_ISR_GIF5_Msk                   /*!< Channel 5 Global interrupt flag */
.equ	DMA_ISR_TCIF5_Pos,	(17U)
.equ	DMA_ISR_TCIF5_Msk,	(0x1UL << DMA_ISR_TCIF5_Pos)        /*!< 0x00020000 */
.equ	DMA_ISR_TCIF5,	DMA_ISR_TCIF5_Msk                  /*!< Channel 5 Transfer Complete flag */
.equ	DMA_ISR_HTIF5_Pos,	(18U)
.equ	DMA_ISR_HTIF5_Msk,	(0x1UL << DMA_ISR_HTIF5_Pos)        /*!< 0x00040000 */
.equ	DMA_ISR_HTIF5,	DMA_ISR_HTIF5_Msk                  /*!< Channel 5 Half Transfer flag */
.equ	DMA_ISR_TEIF5_Pos,	(19U)
.equ	DMA_ISR_TEIF5_Msk,	(0x1UL << DMA_ISR_TEIF5_Pos)        /*!< 0x00080000 */
.equ	DMA_ISR_TEIF5,	DMA_ISR_TEIF5_Msk                  /*!< Channel 5 Transfer Error flag */
.equ	DMA_ISR_GIF6_Pos,	(20U)
.equ	DMA_ISR_GIF6_Msk,	(0x1UL << DMA_ISR_GIF6_Pos)         /*!< 0x00100000 */
.equ	DMA_ISR_GIF6,	DMA_ISR_GIF6_Msk                   /*!< Channel 6 Global interrupt flag */
.equ	DMA_ISR_TCIF6_Pos,	(21U)
.equ	DMA_ISR_TCIF6_Msk,	(0x1UL << DMA_ISR_TCIF6_Pos)        /*!< 0x00200000 */
.equ	DMA_ISR_TCIF6,	DMA_ISR_TCIF6_Msk                  /*!< Channel 6 Transfer Complete flag */
.equ	DMA_ISR_HTIF6_Pos,	(22U)
.equ	DMA_ISR_HTIF6_Msk,	(0x1UL << DMA_ISR_HTIF6_Pos)        /*!< 0x00400000 */
.equ	DMA_ISR_HTIF6,	DMA_ISR_HTIF6_Msk                  /*!< Channel 6 Half Transfer flag */
.equ	DMA_ISR_TEIF6_Pos,	(23U)
.equ	DMA_ISR_TEIF6_Msk,	(0x1UL << DMA_ISR_TEIF6_Pos)        /*!< 0x00800000 */
.equ	DMA_ISR_TEIF6,	DMA_ISR_TEIF6_Msk                  /*!< Channel 6 Transfer Error flag */
.equ	DMA_ISR_GIF7_Pos,	(24U)
.equ	DMA_ISR_GIF7_Msk,	(0x1UL << DMA_ISR_GIF7_Pos)         /*!< 0x01000000 */
.equ	DMA_ISR_GIF7,	DMA_ISR_GIF7_Msk                   /*!< Channel 7 Global interrupt flag */
.equ	DMA_ISR_TCIF7_Pos,	(25U)
.equ	DMA_ISR_TCIF7_Msk,	(0x1UL << DMA_ISR_TCIF7_Pos)        /*!< 0x02000000 */
.equ	DMA_ISR_TCIF7,	DMA_ISR_TCIF7_Msk                  /*!< Channel 7 Transfer Complete flag */
.equ	DMA_ISR_HTIF7_Pos,	(26U)
.equ	DMA_ISR_HTIF7_Msk,	(0x1UL << DMA_ISR_HTIF7_Pos)        /*!< 0x04000000 */
.equ	DMA_ISR_HTIF7,	DMA_ISR_HTIF7_Msk                  /*!< Channel 7 Half Transfer flag */
.equ	DMA_ISR_TEIF7_Pos,	(27U)
.equ	DMA_ISR_TEIF7_Msk,	(0x1UL << DMA_ISR_TEIF7_Pos)        /*!< 0x08000000 */
.equ	DMA_ISR_TEIF7,	DMA_ISR_TEIF7_Msk                  /*!< Channel 7 Transfer Error flag */

/*******************  Bit definition for DMA_IFCR register  *******************/
.equ	DMA_IFCR_CGIF1_Pos,	0
.equ	DMA_IFCR_CGIF1_Msk,	(0x1UL << DMA_IFCR_CGIF1_Pos)       /*!< 0x00000001 */
.equ	DMA_IFCR_CGIF1,	DMA_IFCR_CGIF1_Msk                 /*!< Channel 1 Global interrupt clear */
.equ	DMA_IFCR_CTCIF1_Pos,	(1U)
.equ	DMA_IFCR_CTCIF1_Msk,	(0x1UL << DMA_IFCR_CTCIF1_Pos)      /*!< 0x00000002 */
.equ	DMA_IFCR_CTCIF1,	DMA_IFCR_CTCIF1_Msk                /*!< Channel 1 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF1_Pos,	(2U)
.equ	DMA_IFCR_CHTIF1_Msk,	(0x1UL << DMA_IFCR_CHTIF1_Pos)      /*!< 0x00000004 */
.equ	DMA_IFCR_CHTIF1,	DMA_IFCR_CHTIF1_Msk                /*!< Channel 1 Half Transfer clear */
.equ	DMA_IFCR_CTEIF1_Pos,	(3U)
.equ	DMA_IFCR_CTEIF1_Msk,	(0x1UL << DMA_IFCR_CTEIF1_Pos)      /*!< 0x00000008 */
.equ	DMA_IFCR_CTEIF1,	DMA_IFCR_CTEIF1_Msk                /*!< Channel 1 Transfer Error clear */
.equ	DMA_IFCR_CGIF2_Pos,	(4U)
.equ	DMA_IFCR_CGIF2_Msk,	(0x1UL << DMA_IFCR_CGIF2_Pos)       /*!< 0x00000010 */
.equ	DMA_IFCR_CGIF2,	DMA_IFCR_CGIF2_Msk                 /*!< Channel 2 Global interrupt clear */
.equ	DMA_IFCR_CTCIF2_Pos,	(5U)
.equ	DMA_IFCR_CTCIF2_Msk,	(0x1UL << DMA_IFCR_CTCIF2_Pos)      /*!< 0x00000020 */
.equ	DMA_IFCR_CTCIF2,	DMA_IFCR_CTCIF2_Msk                /*!< Channel 2 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF2_Pos,	(6U)
.equ	DMA_IFCR_CHTIF2_Msk,	(0x1UL << DMA_IFCR_CHTIF2_Pos)      /*!< 0x00000040 */
.equ	DMA_IFCR_CHTIF2,	DMA_IFCR_CHTIF2_Msk                /*!< Channel 2 Half Transfer clear */
.equ	DMA_IFCR_CTEIF2_Pos,	(7U)
.equ	DMA_IFCR_CTEIF2_Msk,	(0x1UL << DMA_IFCR_CTEIF2_Pos)      /*!< 0x00000080 */
.equ	DMA_IFCR_CTEIF2,	DMA_IFCR_CTEIF2_Msk                /*!< Channel 2 Transfer Error clear */
.equ	DMA_IFCR_CGIF3_Pos,	(8U)
.equ	DMA_IFCR_CGIF3_Msk,	(0x1UL << DMA_IFCR_CGIF3_Pos)       /*!< 0x00000100 */
.equ	DMA_IFCR_CGIF3,	DMA_IFCR_CGIF3_Msk                 /*!< Channel 3 Global interrupt clear */
.equ	DMA_IFCR_CTCIF3_Pos,	(9U)
.equ	DMA_IFCR_CTCIF3_Msk,	(0x1UL << DMA_IFCR_CTCIF3_Pos)      /*!< 0x00000200 */
.equ	DMA_IFCR_CTCIF3,	DMA_IFCR_CTCIF3_Msk                /*!< Channel 3 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF3_Pos,	(10U)
.equ	DMA_IFCR_CHTIF3_Msk,	(0x1UL << DMA_IFCR_CHTIF3_Pos)      /*!< 0x00000400 */
.equ	DMA_IFCR_CHTIF3,	DMA_IFCR_CHTIF3_Msk                /*!< Channel 3 Half Transfer clear */
.equ	DMA_IFCR_CTEIF3_Pos,	(11U)
.equ	DMA_IFCR_CTEIF3_Msk,	(0x1UL << DMA_IFCR_CTEIF3_Pos)      /*!< 0x00000800 */
.equ	DMA_IFCR_CTEIF3,	DMA_IFCR_CTEIF3_Msk                /*!< Channel 3 Transfer Error clear */
.equ	DMA_IFCR_CGIF4_Pos,	(12U)
.equ	DMA_IFCR_CGIF4_Msk,	(0x1UL << DMA_IFCR_CGIF4_Pos)       /*!< 0x00001000 */
.equ	DMA_IFCR_CGIF4,	DMA_IFCR_CGIF4_Msk                 /*!< Channel 4 Global interrupt clear */
.equ	DMA_IFCR_CTCIF4_Pos,	(13U)
.equ	DMA_IFCR_CTCIF4_Msk,	(0x1UL << DMA_IFCR_CTCIF4_Pos)      /*!< 0x00002000 */
.equ	DMA_IFCR_CTCIF4,	DMA_IFCR_CTCIF4_Msk                /*!< Channel 4 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF4_Pos,	(14U)
.equ	DMA_IFCR_CHTIF4_Msk,	(0x1UL << DMA_IFCR_CHTIF4_Pos)      /*!< 0x00004000 */
.equ	DMA_IFCR_CHTIF4,	DMA_IFCR_CHTIF4_Msk                /*!< Channel 4 Half Transfer clear */
.equ	DMA_IFCR_CTEIF4_Pos,	(15U)
.equ	DMA_IFCR_CTEIF4_Msk,	(0x1UL << DMA_IFCR_CTEIF4_Pos)      /*!< 0x00008000 */
.equ	DMA_IFCR_CTEIF4,	DMA_IFCR_CTEIF4_Msk                /*!< Channel 4 Transfer Error clear */
.equ	DMA_IFCR_CGIF5_Pos,	(16U)
.equ	DMA_IFCR_CGIF5_Msk,	(0x1UL << DMA_IFCR_CGIF5_Pos)       /*!< 0x00010000 */
.equ	DMA_IFCR_CGIF5,	DMA_IFCR_CGIF5_Msk                 /*!< Channel 5 Global interrupt clear */
.equ	DMA_IFCR_CTCIF5_Pos,	(17U)
.equ	DMA_IFCR_CTCIF5_Msk,	(0x1UL << DMA_IFCR_CTCIF5_Pos)      /*!< 0x00020000 */
.equ	DMA_IFCR_CTCIF5,	DMA_IFCR_CTCIF5_Msk                /*!< Channel 5 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF5_Pos,	(18U)
.equ	DMA_IFCR_CHTIF5_Msk,	(0x1UL << DMA_IFCR_CHTIF5_Pos)      /*!< 0x00040000 */
.equ	DMA_IFCR_CHTIF5,	DMA_IFCR_CHTIF5_Msk                /*!< Channel 5 Half Transfer clear */
.equ	DMA_IFCR_CTEIF5_Pos,	(19U)
.equ	DMA_IFCR_CTEIF5_Msk,	(0x1UL << DMA_IFCR_CTEIF5_Pos)      /*!< 0x00080000 */
.equ	DMA_IFCR_CTEIF5,	DMA_IFCR_CTEIF5_Msk                /*!< Channel 5 Transfer Error clear */
.equ	DMA_IFCR_CGIF6_Pos,	(20U)
.equ	DMA_IFCR_CGIF6_Msk,	(0x1UL << DMA_IFCR_CGIF6_Pos)       /*!< 0x00100000 */
.equ	DMA_IFCR_CGIF6,	DMA_IFCR_CGIF6_Msk                 /*!< Channel 6 Global interrupt clear */
.equ	DMA_IFCR_CTCIF6_Pos,	(21U)
.equ	DMA_IFCR_CTCIF6_Msk,	(0x1UL << DMA_IFCR_CTCIF6_Pos)      /*!< 0x00200000 */
.equ	DMA_IFCR_CTCIF6,	DMA_IFCR_CTCIF6_Msk                /*!< Channel 6 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF6_Pos,	(22U)
.equ	DMA_IFCR_CHTIF6_Msk,	(0x1UL << DMA_IFCR_CHTIF6_Pos)      /*!< 0x00400000 */
.equ	DMA_IFCR_CHTIF6,	DMA_IFCR_CHTIF6_Msk                /*!< Channel 6 Half Transfer clear */
.equ	DMA_IFCR_CTEIF6_Pos,	(23U)
.equ	DMA_IFCR_CTEIF6_Msk,	(0x1UL << DMA_IFCR_CTEIF6_Pos)      /*!< 0x00800000 */
.equ	DMA_IFCR_CTEIF6,	DMA_IFCR_CTEIF6_Msk                /*!< Channel 6 Transfer Error clear */
.equ	DMA_IFCR_CGIF7_Pos,	(24U)
.equ	DMA_IFCR_CGIF7_Msk,	(0x1UL << DMA_IFCR_CGIF7_Pos)       /*!< 0x01000000 */
.equ	DMA_IFCR_CGIF7,	DMA_IFCR_CGIF7_Msk                 /*!< Channel 7 Global interrupt clear */
.equ	DMA_IFCR_CTCIF7_Pos,	(25U)
.equ	DMA_IFCR_CTCIF7_Msk,	(0x1UL << DMA_IFCR_CTCIF7_Pos)      /*!< 0x02000000 */
.equ	DMA_IFCR_CTCIF7,	DMA_IFCR_CTCIF7_Msk                /*!< Channel 7 Transfer Complete clear */
.equ	DMA_IFCR_CHTIF7_Pos,	(26U)
.equ	DMA_IFCR_CHTIF7_Msk,	(0x1UL << DMA_IFCR_CHTIF7_Pos)      /*!< 0x04000000 */
.equ	DMA_IFCR_CHTIF7,	DMA_IFCR_CHTIF7_Msk                /*!< Channel 7 Half Transfer clear */
.equ	DMA_IFCR_CTEIF7_Pos,	(27U)
.equ	DMA_IFCR_CTEIF7_Msk,	(0x1UL << DMA_IFCR_CTEIF7_Pos)      /*!< 0x08000000 */
.equ	DMA_IFCR_CTEIF7,	DMA_IFCR_CTEIF7_Msk                /*!< Channel 7 Transfer Error clear */

/*******************  Bit definition for DMA_CCR register   *******************/
.equ	DMA_CCR_EN_Pos,	0
.equ	DMA_CCR_EN_Msk,	(0x1UL << DMA_CCR_EN_Pos)           /*!< 0x00000001 */
.equ	DMA_CCR_EN,	DMA_CCR_EN_Msk                     /*!< Channel enable */
.equ	DMA_CCR_TCIE_Pos,	(1U)
.equ	DMA_CCR_TCIE_Msk,	(0x1UL << DMA_CCR_TCIE_Pos)         /*!< 0x00000002 */
.equ	DMA_CCR_TCIE,	DMA_CCR_TCIE_Msk                   /*!< Transfer complete interrupt enable */
.equ	DMA_CCR_HTIE_Pos,	(2U)
.equ	DMA_CCR_HTIE_Msk,	(0x1UL << DMA_CCR_HTIE_Pos)         /*!< 0x00000004 */
.equ	DMA_CCR_HTIE,	DMA_CCR_HTIE_Msk                   /*!< Half Transfer interrupt enable */
.equ	DMA_CCR_TEIE_Pos,	(3U)
.equ	DMA_CCR_TEIE_Msk,	(0x1UL << DMA_CCR_TEIE_Pos)         /*!< 0x00000008 */
.equ	DMA_CCR_TEIE,	DMA_CCR_TEIE_Msk                   /*!< Transfer error interrupt enable */
.equ	DMA_CCR_DIR_Pos,	(4U)
.equ	DMA_CCR_DIR_Msk,	(0x1UL << DMA_CCR_DIR_Pos)          /*!< 0x00000010 */
.equ	DMA_CCR_DIR,	DMA_CCR_DIR_Msk                    /*!< Data transfer direction */
.equ	DMA_CCR_CIRC_Pos,	(5U)
.equ	DMA_CCR_CIRC_Msk,	(0x1UL << DMA_CCR_CIRC_Pos)         /*!< 0x00000020 */
.equ	DMA_CCR_CIRC,	DMA_CCR_CIRC_Msk                   /*!< Circular mode */
.equ	DMA_CCR_PINC_Pos,	(6U)
.equ	DMA_CCR_PINC_Msk,	(0x1UL << DMA_CCR_PINC_Pos)         /*!< 0x00000040 */
.equ	DMA_CCR_PINC,	DMA_CCR_PINC_Msk                   /*!< Peripheral increment mode */
.equ	DMA_CCR_MINC_Pos,	(7U)
.equ	DMA_CCR_MINC_Msk,	(0x1UL << DMA_CCR_MINC_Pos)         /*!< 0x00000080 */
.equ	DMA_CCR_MINC,	DMA_CCR_MINC_Msk                   /*!< Memory increment mode */

.equ	DMA_CCR_PSIZE_Pos,	(8U)
.equ	DMA_CCR_PSIZE_Msk,	(0x3UL << DMA_CCR_PSIZE_Pos)        /*!< 0x00000300 */
.equ	DMA_CCR_PSIZE,	DMA_CCR_PSIZE_Msk                  /*!< PSIZE[1:0] bits (Peripheral size) */
.equ	DMA_CCR_PSIZE_0,	(0x1UL << DMA_CCR_PSIZE_Pos)        /*!< 0x00000100 */
.equ	DMA_CCR_PSIZE_1,	(0x2UL << DMA_CCR_PSIZE_Pos)        /*!< 0x00000200 */

.equ	DMA_CCR_MSIZE_Pos,	(10U)
.equ	DMA_CCR_MSIZE_Msk,	(0x3UL << DMA_CCR_MSIZE_Pos)        /*!< 0x00000C00 */
.equ	DMA_CCR_MSIZE,	DMA_CCR_MSIZE_Msk                  /*!< MSIZE[1:0] bits (Memory size) */
.equ	DMA_CCR_MSIZE_0,	(0x1UL << DMA_CCR_MSIZE_Pos)        /*!< 0x00000400 */
.equ	DMA_CCR_MSIZE_1,	(0x2UL << DMA_CCR_MSIZE_Pos)        /*!< 0x00000800 */

.equ	DMA_CCR_PL_Pos,	(12U)
.equ	DMA_CCR_PL_Msk,	(0x3UL << DMA_CCR_PL_Pos)           /*!< 0x00003000 */
.equ	DMA_CCR_PL,	DMA_CCR_PL_Msk                     /*!< PL[1:0] bits(Channel Priority level) */
.equ	DMA_CCR_PL_0,	(0x1UL << DMA_CCR_PL_Pos)           /*!< 0x00001000 */
.equ	DMA_CCR_PL_1,	(0x2UL << DMA_CCR_PL_Pos)           /*!< 0x00002000 */

.equ	DMA_CCR_MEM2MEM_Pos,	(14U)
.equ	DMA_CCR_MEM2MEM_Msk,	(0x1UL << DMA_CCR_MEM2MEM_Pos)      /*!< 0x00004000 */
.equ	DMA_CCR_MEM2MEM,	DMA_CCR_MEM2MEM_Msk                /*!< Memory to memory mode */

/******************  Bit definition for DMA_CNDTR  register  ******************/
.equ	DMA_CNDTR_NDT_Pos,	0
.equ	DMA_CNDTR_NDT_Msk,	(0xFFFFUL << DMA_CNDTR_NDT_Pos)     /*!< 0x0000FFFF */
.equ	DMA_CNDTR_NDT,	DMA_CNDTR_NDT_Msk                  /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CPAR  register  *******************/
.equ	DMA_CPAR_PA_Pos,	0
.equ	DMA_CPAR_PA_Msk,	(0xFFFFFFFFUL << DMA_CPAR_PA_Pos)   /*!< 0xFFFFFFFF */
.equ	DMA_CPAR_PA,	DMA_CPAR_PA_Msk                    /*!< Peripheral Address */

/******************  Bit definition for DMA_CMAR  register  *******************/
.equ	DMA_CMAR_MA_Pos,	0
.equ	DMA_CMAR_MA_Msk,	(0xFFFFFFFFUL << DMA_CMAR_MA_Pos)   /*!< 0xFFFFFFFF */
.equ	DMA_CMAR_MA,	DMA_CMAR_MA_Msk                    /*!< Memory Address */

/******************************************************************************/
/*                                                                            */
/*                      Analog to Digital Converter (ADC)                     */
/*                                                                            */
/******************************************************************************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F1 family)
 */
//.equ	ADC_MULTIMODE_SUPPORT,	/*!< ADC feature available only on specific devices: multimode available on devices with several ADC instances */

/********************  Bit definition for ADC_SR register  ********************/
.equ	ADC_SR_AWD_Pos,		0
.equ	ADC_SR_AWD_Msk,		(0x1UL << ADC_SR_AWD_Pos)           /*!< 0x00000001 */
.equ	ADC_SR_AWD,			ADC_SR_AWD_Msk                     /*!< ADC analog watchdog 1 flag */
.equ	ADC_SR_EOS_Pos,		(1U)
.equ	ADC_SR_EOS_Msk,		(0x1UL << ADC_SR_EOS_Pos)           /*!< 0x00000002 */
.equ	ADC_SR_EOS,			ADC_SR_EOS_Msk                     /*!< ADC group regular end of sequence conversions flag */
.equ	ADC_SR_JEOS_Pos,	(2U)
.equ	ADC_SR_JEOS_Msk,	(0x1UL << ADC_SR_JEOS_Pos)          /*!< 0x00000004 */
.equ	ADC_SR_JEOS,		ADC_SR_JEOS_Msk                    /*!< ADC group injected end of sequence conversions flag */
.equ	ADC_SR_JSTRT_Pos,	(3U)
.equ	ADC_SR_JSTRT_Msk,	(0x1UL << ADC_SR_JSTRT_Pos)         /*!< 0x00000008 */
.equ	ADC_SR_JSTRT,		ADC_SR_JSTRT_Msk                   /*!< ADC group injected conversion start flag */
.equ	ADC_SR_STRT_Pos,	(4U)
.equ	ADC_SR_STRT_Msk,	(0x1UL << ADC_SR_STRT_Pos)          /*!< 0x00000010 */
.equ	ADC_SR_STRT,	 	ADC_SR_STRT_Msk                    /*!< ADC group regular conversion start flag */

/* Legacy defines */
.equ	ADC_SR_EOC,		(ADC_SR_EOS)
.equ	ADC_SR_JEOC,	(ADC_SR_JEOS)

/*******************  Bit definition for ADC_CR1 register  ********************/
.equ	ADC_CR1_AWDCH_Pos,	0
.equ	ADC_CR1_AWDCH_Msk,	(0x1FUL << ADC_CR1_AWDCH_Pos)       /*!< 0x0000001F */
.equ	ADC_CR1_AWDCH,		ADC_CR1_AWDCH_Msk                  /*!< ADC analog watchdog 1 monitored channel selection */
.equ	ADC_CR1_AWDCH_0,	(0x01UL << ADC_CR1_AWDCH_Pos)       /*!< 0x00000001 */
.equ	ADC_CR1_AWDCH_1,	(0x02UL << ADC_CR1_AWDCH_Pos)       /*!< 0x00000002 */
.equ	ADC_CR1_AWDCH_2,	(0x04UL << ADC_CR1_AWDCH_Pos)       /*!< 0x00000004 */
.equ	ADC_CR1_AWDCH_3,	(0x08UL << ADC_CR1_AWDCH_Pos)       /*!< 0x00000008 */
.equ	ADC_CR1_AWDCH_4,	(0x10UL << ADC_CR1_AWDCH_Pos)       /*!< 0x00000010 */

.equ	ADC_CR1_EOSIE_Pos,	(5U)
.equ	ADC_CR1_EOSIE_Msk,	(0x1UL << ADC_CR1_EOSIE_Pos)        /*!< 0x00000020 */
.equ	ADC_CR1_EOSIE,		ADC_CR1_EOSIE_Msk                  /*!< ADC group regular end of sequence conversions interrupt */
.equ	ADC_CR1_AWDIE_Pos,	(6U)
.equ	ADC_CR1_AWDIE_Msk,	(0x1UL << ADC_CR1_AWDIE_Pos)        /*!< 0x00000040 */
.equ	ADC_CR1_AWDIE,		ADC_CR1_AWDIE_Msk                  /*!< ADC analog watchdog 1 interrupt */
.equ	ADC_CR1_JEOSIE_Pos,	(7U)
.equ	ADC_CR1_JEOSIE_Msk,	(0x1UL << ADC_CR1_JEOSIE_Pos)       /*!< 0x00000080 */
.equ	ADC_CR1_JEOSIE,		ADC_CR1_JEOSIE_Msk                 /*!< ADC group injected end of sequence conversions interrupt */
.equ	ADC_CR1_SCAN_Pos,	(8U)
.equ	ADC_CR1_SCAN_Msk,	(0x1UL << ADC_CR1_SCAN_Pos)         /*!< 0x00000100 */
.equ	ADC_CR1_SCAN,		ADC_CR1_SCAN_Msk                   /*!< ADC scan mode */
.equ	ADC_CR1_AWDSGL_Pos,	(9U)
.equ	ADC_CR1_AWDSGL_Msk,	(0x1UL << ADC_CR1_AWDSGL_Pos)       /*!< 0x00000200 */
.equ	ADC_CR1_AWDSGL,		ADC_CR1_AWDSGL_Msk                 /*!< ADC analog watchdog 1 monitoring a single channel or all channels */
.equ	ADC_CR1_JAUTO_Pos,	(10U)
.equ	ADC_CR1_JAUTO_Msk,	(0x1UL << ADC_CR1_JAUTO_Pos)        /*!< 0x00000400 */
.equ	ADC_CR1_JAUTO,		ADC_CR1_JAUTO_Msk                  /*!< ADC group injected automatic trigger mode */
.equ	ADC_CR1_DISCEN_Pos,	(11U)
.equ	ADC_CR1_DISCEN_Msk,	(0x1UL << ADC_CR1_DISCEN_Pos)       /*!< 0x00000800 */
.equ	ADC_CR1_DISCEN,		ADC_CR1_DISCEN_Msk                 /*!< ADC group regular sequencer discontinuous mode */
.equ	ADC_CR1_JDISCEN_Pos,(12U)
.equ	ADC_CR1_JDISCEN_Msk,(0x1UL << ADC_CR1_JDISCEN_Pos)      /*!< 0x00001000 */
.equ	ADC_CR1_JDISCEN,	ADC_CR1_JDISCEN_Msk                /*!< ADC group injected sequencer discontinuous mode */

.equ	ADC_CR1_DISCNUM_Pos,	(13U)
.equ	ADC_CR1_DISCNUM_Msk,	(0x7UL << ADC_CR1_DISCNUM_Pos)      /*!< 0x0000E000 */
.equ	ADC_CR1_DISCNUM,		ADC_CR1_DISCNUM_Msk                /*!< ADC group regular sequencer discontinuous number of ranks */
.equ	ADC_CR1_DISCNUM_0,		(0x1UL << ADC_CR1_DISCNUM_Pos)      /*!< 0x00002000 */
.equ	ADC_CR1_DISCNUM_1,		(0x2UL << ADC_CR1_DISCNUM_Pos)      /*!< 0x00004000 */
.equ	ADC_CR1_DISCNUM_2,		(0x4UL << ADC_CR1_DISCNUM_Pos)      /*!< 0x00008000 */

.equ	ADC_CR1_DUALMOD_Pos,	(16U)
.equ	ADC_CR1_DUALMOD_Msk,	(0xFUL << ADC_CR1_DUALMOD_Pos)      /*!< 0x000F0000 */
.equ	ADC_CR1_DUALMOD,		ADC_CR1_DUALMOD_Msk                /*!< ADC multimode mode selection */
.equ	ADC_CR1_DUALMOD_0,		(0x1UL << ADC_CR1_DUALMOD_Pos)      /*!< 0x00010000 */
.equ	ADC_CR1_DUALMOD_1,		(0x2UL << ADC_CR1_DUALMOD_Pos)      /*!< 0x00020000 */
.equ	ADC_CR1_DUALMOD_2,		(0x4UL << ADC_CR1_DUALMOD_Pos)      /*!< 0x00040000 */
.equ	ADC_CR1_DUALMOD_3,		(0x8UL << ADC_CR1_DUALMOD_Pos)      /*!< 0x00080000 */

.equ	ADC_CR1_JAWDEN_Pos,		(22U)
.equ	ADC_CR1_JAWDEN_Msk,		(0x1UL << ADC_CR1_JAWDEN_Pos)       /*!< 0x00400000 */
.equ	ADC_CR1_JAWDEN,			ADC_CR1_JAWDEN_Msk                 /*!< ADC analog watchdog 1 enable on scope ADC group injected */
.equ	ADC_CR1_AWDEN_Pos,		(23U)
.equ	ADC_CR1_AWDEN_Msk,		(0x1UL << ADC_CR1_AWDEN_Pos)        /*!< 0x00800000 */
.equ	ADC_CR1_AWDEN,			ADC_CR1_AWDEN_Msk                  /*!< ADC analog watchdog 1 enable on scope ADC group regular */

/* Legacy defines */
.equ	ADC_CR1_EOCIE,	(ADC_CR1_EOSIE)
.equ	ADC_CR1_JEOCIE,	(ADC_CR1_JEOSIE)

/*******************  Bit definition for ADC_CR2 register  ********************/
.equ	ADC_CR2_ADON_Pos,	0
.equ	ADC_CR2_ADON_Msk,	(0x1UL << ADC_CR2_ADON_Pos)         /*!< 0x00000001 */
.equ	ADC_CR2_ADON,		ADC_CR2_ADON_Msk                   /*!< ADC enable */
.equ	ADC_CR2_CONT_Pos,	(1U)
.equ	ADC_CR2_CONT_Msk,	(0x1UL << ADC_CR2_CONT_Pos)         /*!< 0x00000002 */
.equ	ADC_CR2_CONT,		ADC_CR2_CONT_Msk                   /*!< ADC group regular continuous conversion mode */
.equ	ADC_CR2_CAL_Pos,	(2U)
.equ	ADC_CR2_CAL_Msk,	(0x1UL << ADC_CR2_CAL_Pos)          /*!< 0x00000004 */
.equ	ADC_CR2_CAL,		ADC_CR2_CAL_Msk                    /*!< ADC calibration start */
.equ	ADC_CR2_RSTCAL_Pos,	(3U)
.equ	ADC_CR2_RSTCAL_Msk,	(0x1UL << ADC_CR2_RSTCAL_Pos)       /*!< 0x00000008 */
.equ	ADC_CR2_RSTCAL,		ADC_CR2_RSTCAL_Msk                 /*!< ADC calibration reset */
.equ	ADC_CR2_DMA_Pos,	(8U)
.equ	ADC_CR2_DMA_Msk,	(0x1UL << ADC_CR2_DMA_Pos)          /*!< 0x00000100 */
.equ	ADC_CR2_DMA,		ADC_CR2_DMA_Msk                    /*!< ADC DMA transfer enable */
.equ	ADC_CR2_ALIGN_Pos,	(11U)
.equ	ADC_CR2_ALIGN_Msk,	(0x1UL << ADC_CR2_ALIGN_Pos)        /*!< 0x00000800 */
.equ	ADC_CR2_ALIGN,		ADC_CR2_ALIGN_Msk                  /*!< ADC data alignment */

.equ	ADC_CR2_JEXTSEL_Pos,	(12U)
.equ	ADC_CR2_JEXTSEL_Msk,	(0x7UL << ADC_CR2_JEXTSEL_Pos)      /*!< 0x00007000 */
.equ	ADC_CR2_JEXTSEL,		ADC_CR2_JEXTSEL_Msk                /*!< ADC group injected external trigger source */
.equ	ADC_CR2_JEXTSEL_0,		(0x1UL << ADC_CR2_JEXTSEL_Pos)      /*!< 0x00001000 */
.equ	ADC_CR2_JEXTSEL_1,		(0x2UL << ADC_CR2_JEXTSEL_Pos)      /*!< 0x00002000 */
.equ	ADC_CR2_JEXTSEL_2,		(0x4UL << ADC_CR2_JEXTSEL_Pos)      /*!< 0x00004000 */

.equ	ADC_CR2_JEXTTRIG_Pos,	(15U)
.equ	ADC_CR2_JEXTTRIG_Msk,	(0x1UL << ADC_CR2_JEXTTRIG_Pos)     /*!< 0x00008000 */
.equ	ADC_CR2_JEXTTRIG,		ADC_CR2_JEXTTRIG_Msk               /*!< ADC group injected external trigger enable */

.equ	ADC_CR2_EXTSEL_Pos,	(17U)
.equ	ADC_CR2_EXTSEL_Msk,	(0x7UL << ADC_CR2_EXTSEL_Pos)       /*!< 0x000E0000 */
.equ	ADC_CR2_EXTSEL,		ADC_CR2_EXTSEL_Msk                 /*!< ADC group regular external trigger source */
.equ	ADC_CR2_EXTSEL_0,	(0x1UL << ADC_CR2_EXTSEL_Pos)       /*!< 0x00020000 */
.equ	ADC_CR2_EXTSEL_1,	(0x2UL << ADC_CR2_EXTSEL_Pos)       /*!< 0x00040000 */
.equ	ADC_CR2_EXTSEL_2,	(0x4UL << ADC_CR2_EXTSEL_Pos)       /*!< 0x00080000 */

.equ	ADC_CR2_EXTTRIG_Pos,	(20U)
.equ	ADC_CR2_EXTTRIG_Msk,	(0x1UL << ADC_CR2_EXTTRIG_Pos)      /*!< 0x00100000 */
.equ	ADC_CR2_EXTTRIG,		ADC_CR2_EXTTRIG_Msk                /*!< ADC group regular external trigger enable */
.equ	ADC_CR2_JSWSTART_Pos,	(21U)
.equ	ADC_CR2_JSWSTART_Msk,	(0x1UL << ADC_CR2_JSWSTART_Pos)     /*!< 0x00200000 */
.equ	ADC_CR2_JSWSTART,		ADC_CR2_JSWSTART_Msk               /*!< ADC group injected conversion start */
.equ	ADC_CR2_SWSTART_Pos,	(22U)
.equ	ADC_CR2_SWSTART_Msk,	(0x1UL << ADC_CR2_SWSTART_Pos)      /*!< 0x00400000 */
.equ	ADC_CR2_SWSTART,		ADC_CR2_SWSTART_Msk                /*!< ADC group regular conversion start */
.equ	ADC_CR2_TSVREFE_Pos,	(23U)
.equ	ADC_CR2_TSVREFE_Msk,	(0x1UL << ADC_CR2_TSVREFE_Pos)      /*!< 0x00800000 */
.equ	ADC_CR2_TSVREFE,		ADC_CR2_TSVREFE_Msk                /*!< ADC internal path to VrefInt and temperature sensor enable */

/******************  Bit definition for ADC_SMPR1 register  *******************/
.equ	ADC_SMPR1_SMP10_Pos,	0
.equ	ADC_SMPR1_SMP10_Msk,	(0x7UL << ADC_SMPR1_SMP10_Pos)      /*!< 0x00000007 */
.equ	ADC_SMPR1_SMP10,		ADC_SMPR1_SMP10_Msk                /*!< ADC channel 10 sampling time selection  */
.equ	ADC_SMPR1_SMP10_0,		(0x1UL << ADC_SMPR1_SMP10_Pos)      /*!< 0x00000001 */
.equ	ADC_SMPR1_SMP10_1,		(0x2UL << ADC_SMPR1_SMP10_Pos)      /*!< 0x00000002 */
.equ	ADC_SMPR1_SMP10_2,		(0x4UL << ADC_SMPR1_SMP10_Pos)      /*!< 0x00000004 */

.equ	ADC_SMPR1_SMP11_Pos,	(3U)
.equ	ADC_SMPR1_SMP11_Msk,	(0x7UL << ADC_SMPR1_SMP11_Pos)      /*!< 0x00000038 */
.equ	ADC_SMPR1_SMP11,		ADC_SMPR1_SMP11_Msk                /*!< ADC channel 11 sampling time selection  */
.equ	ADC_SMPR1_SMP11_0,		(0x1UL << ADC_SMPR1_SMP11_Pos)      /*!< 0x00000008 */
.equ	ADC_SMPR1_SMP11_1,		(0x2UL << ADC_SMPR1_SMP11_Pos)      /*!< 0x00000010 */
.equ	ADC_SMPR1_SMP11_2,		(0x4UL << ADC_SMPR1_SMP11_Pos)      /*!< 0x00000020 */

.equ	ADC_SMPR1_SMP12_Pos,	(6U)
.equ	ADC_SMPR1_SMP12_Msk,	(0x7UL << ADC_SMPR1_SMP12_Pos)      /*!< 0x000001C0 */
.equ	ADC_SMPR1_SMP12,		ADC_SMPR1_SMP12_Msk                /*!< ADC channel 12 sampling time selection  */
.equ	ADC_SMPR1_SMP12_0,		(0x1UL << ADC_SMPR1_SMP12_Pos)      /*!< 0x00000040 */
.equ	ADC_SMPR1_SMP12_1,		(0x2UL << ADC_SMPR1_SMP12_Pos)      /*!< 0x00000080 */
.equ	ADC_SMPR1_SMP12_2,		(0x4UL << ADC_SMPR1_SMP12_Pos)      /*!< 0x00000100 */

.equ	ADC_SMPR1_SMP13_Pos,	(9U)
.equ	ADC_SMPR1_SMP13_Msk,	(0x7UL << ADC_SMPR1_SMP13_Pos)      /*!< 0x00000E00 */
.equ	ADC_SMPR1_SMP13,		ADC_SMPR1_SMP13_Msk                /*!< ADC channel 13 sampling time selection  */
.equ	ADC_SMPR1_SMP13_0,		(0x1UL << ADC_SMPR1_SMP13_Pos)      /*!< 0x00000200 */
.equ	ADC_SMPR1_SMP13_1,		(0x2UL << ADC_SMPR1_SMP13_Pos)      /*!< 0x00000400 */
.equ	ADC_SMPR1_SMP13_2,		(0x4UL << ADC_SMPR1_SMP13_Pos)      /*!< 0x00000800 */

.equ	ADC_SMPR1_SMP14_Pos,	(12U)
.equ	ADC_SMPR1_SMP14_Msk,	(0x7UL << ADC_SMPR1_SMP14_Pos)      /*!< 0x00007000 */
.equ	ADC_SMPR1_SMP14,	ADC_SMPR1_SMP14_Msk                /*!< ADC channel 14 sampling time selection  */
.equ	ADC_SMPR1_SMP14_0,	(0x1UL << ADC_SMPR1_SMP14_Pos)      /*!< 0x00001000 */
.equ	ADC_SMPR1_SMP14_1,	(0x2UL << ADC_SMPR1_SMP14_Pos)      /*!< 0x00002000 */
.equ	ADC_SMPR1_SMP14_2,	(0x4UL << ADC_SMPR1_SMP14_Pos)      /*!< 0x00004000 */

.equ	ADC_SMPR1_SMP15_Pos,	(15U)
.equ	ADC_SMPR1_SMP15_Msk,	(0x7UL << ADC_SMPR1_SMP15_Pos)      /*!< 0x00038000 */
.equ	ADC_SMPR1_SMP15,	ADC_SMPR1_SMP15_Msk                /*!< ADC channel 15 sampling time selection  */
.equ	ADC_SMPR1_SMP15_0,	(0x1UL << ADC_SMPR1_SMP15_Pos)      /*!< 0x00008000 */
.equ	ADC_SMPR1_SMP15_1,	(0x2UL << ADC_SMPR1_SMP15_Pos)      /*!< 0x00010000 */
.equ	ADC_SMPR1_SMP15_2,	(0x4UL << ADC_SMPR1_SMP15_Pos)      /*!< 0x00020000 */

.equ	ADC_SMPR1_SMP16_Pos,	(18U)
.equ	ADC_SMPR1_SMP16_Msk,	(0x7UL << ADC_SMPR1_SMP16_Pos)      /*!< 0x001C0000 */
.equ	ADC_SMPR1_SMP16,	ADC_SMPR1_SMP16_Msk                /*!< ADC channel 16 sampling time selection  */
.equ	ADC_SMPR1_SMP16_0,	(0x1UL << ADC_SMPR1_SMP16_Pos)      /*!< 0x00040000 */
.equ	ADC_SMPR1_SMP16_1,	(0x2UL << ADC_SMPR1_SMP16_Pos)      /*!< 0x00080000 */
.equ	ADC_SMPR1_SMP16_2,	(0x4UL << ADC_SMPR1_SMP16_Pos)      /*!< 0x00100000 */

.equ	ADC_SMPR1_SMP17_Pos,	(21U)
.equ	ADC_SMPR1_SMP17_Msk,	(0x7UL << ADC_SMPR1_SMP17_Pos)      /*!< 0x00E00000 */
.equ	ADC_SMPR1_SMP17,	ADC_SMPR1_SMP17_Msk                /*!< ADC channel 17 sampling time selection  */
.equ	ADC_SMPR1_SMP17_0,	(0x1UL << ADC_SMPR1_SMP17_Pos)      /*!< 0x00200000 */
.equ	ADC_SMPR1_SMP17_1,	(0x2UL << ADC_SMPR1_SMP17_Pos)      /*!< 0x00400000 */
.equ	ADC_SMPR1_SMP17_2,	(0x4UL << ADC_SMPR1_SMP17_Pos)      /*!< 0x00800000 */

/******************  Bit definition for ADC_SMPR2 register  *******************/
.equ	ADC_SMPR2_SMP0_Pos,	0
.equ	ADC_SMPR2_SMP0_Msk,	(0x7UL << ADC_SMPR2_SMP0_Pos)       /*!< 0x00000007 */
.equ	ADC_SMPR2_SMP0,	ADC_SMPR2_SMP0_Msk                 /*!< ADC channel 0 sampling time selection  */
.equ	ADC_SMPR2_SMP0_0,	(0x1UL << ADC_SMPR2_SMP0_Pos)       /*!< 0x00000001 */
.equ	ADC_SMPR2_SMP0_1,	(0x2UL << ADC_SMPR2_SMP0_Pos)       /*!< 0x00000002 */
.equ	ADC_SMPR2_SMP0_2,	(0x4UL << ADC_SMPR2_SMP0_Pos)       /*!< 0x00000004 */

.equ	ADC_SMPR2_SMP1_Pos,	(3U)
.equ	ADC_SMPR2_SMP1_Msk,	(0x7UL << ADC_SMPR2_SMP1_Pos)       /*!< 0x00000038 */
.equ	ADC_SMPR2_SMP1,	ADC_SMPR2_SMP1_Msk                 /*!< ADC channel 1 sampling time selection  */
.equ	ADC_SMPR2_SMP1_0,	(0x1UL << ADC_SMPR2_SMP1_Pos)       /*!< 0x00000008 */
.equ	ADC_SMPR2_SMP1_1,	(0x2UL << ADC_SMPR2_SMP1_Pos)       /*!< 0x00000010 */
.equ	ADC_SMPR2_SMP1_2,	(0x4UL << ADC_SMPR2_SMP1_Pos)       /*!< 0x00000020 */

.equ	ADC_SMPR2_SMP2_Pos,	(6U)
.equ	ADC_SMPR2_SMP2_Msk,	(0x7UL << ADC_SMPR2_SMP2_Pos)       /*!< 0x000001C0 */
.equ	ADC_SMPR2_SMP2,	ADC_SMPR2_SMP2_Msk                 /*!< ADC channel 2 sampling time selection  */
.equ	ADC_SMPR2_SMP2_0,	(0x1UL << ADC_SMPR2_SMP2_Pos)       /*!< 0x00000040 */
.equ	ADC_SMPR2_SMP2_1,	(0x2UL << ADC_SMPR2_SMP2_Pos)       /*!< 0x00000080 */
.equ	ADC_SMPR2_SMP2_2,	(0x4UL << ADC_SMPR2_SMP2_Pos)       /*!< 0x00000100 */

.equ	ADC_SMPR2_SMP3_Pos,	(9U)
.equ	ADC_SMPR2_SMP3_Msk,	(0x7UL << ADC_SMPR2_SMP3_Pos)       /*!< 0x00000E00 */
.equ	ADC_SMPR2_SMP3,	ADC_SMPR2_SMP3_Msk                 /*!< ADC channel 3 sampling time selection  */
.equ	ADC_SMPR2_SMP3_0,	(0x1UL << ADC_SMPR2_SMP3_Pos)       /*!< 0x00000200 */
.equ	ADC_SMPR2_SMP3_1,	(0x2UL << ADC_SMPR2_SMP3_Pos)       /*!< 0x00000400 */
.equ	ADC_SMPR2_SMP3_2,	(0x4UL << ADC_SMPR2_SMP3_Pos)       /*!< 0x00000800 */

.equ	ADC_SMPR2_SMP4_Pos,	(12U)
.equ	ADC_SMPR2_SMP4_Msk,	(0x7UL << ADC_SMPR2_SMP4_Pos)       /*!< 0x00007000 */
.equ	ADC_SMPR2_SMP4,	ADC_SMPR2_SMP4_Msk                 /*!< ADC channel 4 sampling time selection  */
.equ	ADC_SMPR2_SMP4_0,	(0x1UL << ADC_SMPR2_SMP4_Pos)       /*!< 0x00001000 */
.equ	ADC_SMPR2_SMP4_1,	(0x2UL << ADC_SMPR2_SMP4_Pos)       /*!< 0x00002000 */
.equ	ADC_SMPR2_SMP4_2,	(0x4UL << ADC_SMPR2_SMP4_Pos)       /*!< 0x00004000 */

.equ	ADC_SMPR2_SMP5_Pos,	(15U)
.equ	ADC_SMPR2_SMP5_Msk,	(0x7UL << ADC_SMPR2_SMP5_Pos)       /*!< 0x00038000 */
.equ	ADC_SMPR2_SMP5,	ADC_SMPR2_SMP5_Msk                 /*!< ADC channel 5 sampling time selection  */
.equ	ADC_SMPR2_SMP5_0,	(0x1UL << ADC_SMPR2_SMP5_Pos)       /*!< 0x00008000 */
.equ	ADC_SMPR2_SMP5_1,	(0x2UL << ADC_SMPR2_SMP5_Pos)       /*!< 0x00010000 */
.equ	ADC_SMPR2_SMP5_2,	(0x4UL << ADC_SMPR2_SMP5_Pos)       /*!< 0x00020000 */

.equ	ADC_SMPR2_SMP6_Pos,	(18U)
.equ	ADC_SMPR2_SMP6_Msk,	(0x7UL << ADC_SMPR2_SMP6_Pos)       /*!< 0x001C0000 */
.equ	ADC_SMPR2_SMP6,	ADC_SMPR2_SMP6_Msk                 /*!< ADC channel 6 sampling time selection  */
.equ	ADC_SMPR2_SMP6_0,	(0x1UL << ADC_SMPR2_SMP6_Pos)       /*!< 0x00040000 */
.equ	ADC_SMPR2_SMP6_1,	(0x2UL << ADC_SMPR2_SMP6_Pos)       /*!< 0x00080000 */
.equ	ADC_SMPR2_SMP6_2,	(0x4UL << ADC_SMPR2_SMP6_Pos)       /*!< 0x00100000 */

.equ	ADC_SMPR2_SMP7_Pos,	(21U)
.equ	ADC_SMPR2_SMP7_Msk,	(0x7UL << ADC_SMPR2_SMP7_Pos)       /*!< 0x00E00000 */
.equ	ADC_SMPR2_SMP7,	ADC_SMPR2_SMP7_Msk                 /*!< ADC channel 7 sampling time selection  */
.equ	ADC_SMPR2_SMP7_0,	(0x1UL << ADC_SMPR2_SMP7_Pos)       /*!< 0x00200000 */
.equ	ADC_SMPR2_SMP7_1,	(0x2UL << ADC_SMPR2_SMP7_Pos)       /*!< 0x00400000 */
.equ	ADC_SMPR2_SMP7_2,	(0x4UL << ADC_SMPR2_SMP7_Pos)       /*!< 0x00800000 */

.equ	ADC_SMPR2_SMP8_Pos,	(24U)
.equ	ADC_SMPR2_SMP8_Msk,	(0x7UL << ADC_SMPR2_SMP8_Pos)       /*!< 0x07000000 */
.equ	ADC_SMPR2_SMP8,	ADC_SMPR2_SMP8_Msk                 /*!< ADC channel 8 sampling time selection  */
.equ	ADC_SMPR2_SMP8_0,	(0x1UL << ADC_SMPR2_SMP8_Pos)       /*!< 0x01000000 */
.equ	ADC_SMPR2_SMP8_1,	(0x2UL << ADC_SMPR2_SMP8_Pos)       /*!< 0x02000000 */
.equ	ADC_SMPR2_SMP8_2,	(0x4UL << ADC_SMPR2_SMP8_Pos)       /*!< 0x04000000 */

.equ	ADC_SMPR2_SMP9_Pos,	(27U)
.equ	ADC_SMPR2_SMP9_Msk,	(0x7UL << ADC_SMPR2_SMP9_Pos)       /*!< 0x38000000 */
.equ	ADC_SMPR2_SMP9,	ADC_SMPR2_SMP9_Msk                 /*!< ADC channel 9 sampling time selection  */
.equ	ADC_SMPR2_SMP9_0,	(0x1UL << ADC_SMPR2_SMP9_Pos)       /*!< 0x08000000 */
.equ	ADC_SMPR2_SMP9_1,	(0x2UL << ADC_SMPR2_SMP9_Pos)       /*!< 0x10000000 */
.equ	ADC_SMPR2_SMP9_2,	(0x4UL << ADC_SMPR2_SMP9_Pos)       /*!< 0x20000000 */

/******************  Bit definition for ADC_JOFR1 register  *******************/
.equ	ADC_JOFR1_JOFFSET1_Pos,	0
.equ	ADC_JOFR1_JOFFSET1_Msk,	(0xFFFUL << ADC_JOFR1_JOFFSET1_Pos) /*!< 0x00000FFF */
.equ	ADC_JOFR1_JOFFSET1,	ADC_JOFR1_JOFFSET1_Msk             /*!< ADC group injected sequencer rank 1 offset value */

/******************  Bit definition for ADC_JOFR2 register  *******************/
.equ	ADC_JOFR2_JOFFSET2_Pos,	0
.equ	ADC_JOFR2_JOFFSET2_Msk,	(0xFFFUL << ADC_JOFR2_JOFFSET2_Pos) /*!< 0x00000FFF */
.equ	ADC_JOFR2_JOFFSET2,	ADC_JOFR2_JOFFSET2_Msk             /*!< ADC group injected sequencer rank 2 offset value */

/******************  Bit definition for ADC_JOFR3 register  *******************/
.equ	ADC_JOFR3_JOFFSET3_Pos,	0
.equ	ADC_JOFR3_JOFFSET3_Msk,	(0xFFFUL << ADC_JOFR3_JOFFSET3_Pos) /*!< 0x00000FFF */
.equ	ADC_JOFR3_JOFFSET3,	ADC_JOFR3_JOFFSET3_Msk             /*!< ADC group injected sequencer rank 3 offset value */

/******************  Bit definition for ADC_JOFR4 register  *******************/
.equ	ADC_JOFR4_JOFFSET4_Pos,	0
.equ	ADC_JOFR4_JOFFSET4_Msk,	(0xFFFUL << ADC_JOFR4_JOFFSET4_Pos) /*!< 0x00000FFF */
.equ	ADC_JOFR4_JOFFSET4,	ADC_JOFR4_JOFFSET4_Msk             /*!< ADC group injected sequencer rank 4 offset value */

/*******************  Bit definition for ADC_HTR register  ********************/
.equ	ADC_HTR_HT_Pos,	0
.equ	ADC_HTR_HT_Msk,	(0xFFFUL << ADC_HTR_HT_Pos)         /*!< 0x00000FFF */
.equ	ADC_HTR_HT,	ADC_HTR_HT_Msk                     /*!< ADC analog watchdog 1 threshold high */

/*******************  Bit definition for ADC_LTR register  ********************/
.equ	ADC_LTR_LT_Pos,	0
.equ	ADC_LTR_LT_Msk,	(0xFFFUL << ADC_LTR_LT_Pos)         /*!< 0x00000FFF */
.equ	ADC_LTR_LT,	ADC_LTR_LT_Msk                     /*!< ADC analog watchdog 1 threshold low */

/*******************  Bit definition for ADC_SQR1 register  *******************/
.equ	ADC_SQR1_SQ13_Pos,	0
.equ	ADC_SQR1_SQ13_Msk,	(0x1FUL << ADC_SQR1_SQ13_Pos)       /*!< 0x0000001F */
.equ	ADC_SQR1_SQ13,	ADC_SQR1_SQ13_Msk                  /*!< ADC group regular sequencer rank 13 */
.equ	ADC_SQR1_SQ13_0,	(0x01UL << ADC_SQR1_SQ13_Pos)       /*!< 0x00000001 */
.equ	ADC_SQR1_SQ13_1,	(0x02UL << ADC_SQR1_SQ13_Pos)       /*!< 0x00000002 */
.equ	ADC_SQR1_SQ13_2,	(0x04UL << ADC_SQR1_SQ13_Pos)       /*!< 0x00000004 */
.equ	ADC_SQR1_SQ13_3,	(0x08UL << ADC_SQR1_SQ13_Pos)       /*!< 0x00000008 */
.equ	ADC_SQR1_SQ13_4,	(0x10UL << ADC_SQR1_SQ13_Pos)       /*!< 0x00000010 */

.equ	ADC_SQR1_SQ14_Pos,	(5U)
.equ	ADC_SQR1_SQ14_Msk,	(0x1FUL << ADC_SQR1_SQ14_Pos)       /*!< 0x000003E0 */
.equ	ADC_SQR1_SQ14,	ADC_SQR1_SQ14_Msk                  /*!< ADC group regular sequencer rank 14 */
.equ	ADC_SQR1_SQ14_0,	(0x01UL << ADC_SQR1_SQ14_Pos)       /*!< 0x00000020 */
.equ	ADC_SQR1_SQ14_1,	(0x02UL << ADC_SQR1_SQ14_Pos)       /*!< 0x00000040 */
.equ	ADC_SQR1_SQ14_2,	(0x04UL << ADC_SQR1_SQ14_Pos)       /*!< 0x00000080 */
.equ	ADC_SQR1_SQ14_3,	(0x08UL << ADC_SQR1_SQ14_Pos)       /*!< 0x00000100 */
.equ	ADC_SQR1_SQ14_4,	(0x10UL << ADC_SQR1_SQ14_Pos)       /*!< 0x00000200 */

.equ	ADC_SQR1_SQ15_Pos,	(10U)
.equ	ADC_SQR1_SQ15_Msk,	(0x1FUL << ADC_SQR1_SQ15_Pos)       /*!< 0x00007C00 */
.equ	ADC_SQR1_SQ15,	ADC_SQR1_SQ15_Msk                  /*!< ADC group regular sequencer rank 15 */
.equ	ADC_SQR1_SQ15_0,	(0x01UL << ADC_SQR1_SQ15_Pos)       /*!< 0x00000400 */
.equ	ADC_SQR1_SQ15_1,	(0x02UL << ADC_SQR1_SQ15_Pos)       /*!< 0x00000800 */
.equ	ADC_SQR1_SQ15_2,	(0x04UL << ADC_SQR1_SQ15_Pos)       /*!< 0x00001000 */
.equ	ADC_SQR1_SQ15_3,	(0x08UL << ADC_SQR1_SQ15_Pos)       /*!< 0x00002000 */
.equ	ADC_SQR1_SQ15_4,	(0x10UL << ADC_SQR1_SQ15_Pos)       /*!< 0x00004000 */

.equ	ADC_SQR1_SQ16_Pos,	(15U)
.equ	ADC_SQR1_SQ16_Msk,	(0x1FUL << ADC_SQR1_SQ16_Pos)       /*!< 0x000F8000 */
.equ	ADC_SQR1_SQ16,	ADC_SQR1_SQ16_Msk                  /*!< ADC group regular sequencer rank 16 */
.equ	ADC_SQR1_SQ16_0,	(0x01UL << ADC_SQR1_SQ16_Pos)       /*!< 0x00008000 */
.equ	ADC_SQR1_SQ16_1,	(0x02UL << ADC_SQR1_SQ16_Pos)       /*!< 0x00010000 */
.equ	ADC_SQR1_SQ16_2,	(0x04UL << ADC_SQR1_SQ16_Pos)       /*!< 0x00020000 */
.equ	ADC_SQR1_SQ16_3,	(0x08UL << ADC_SQR1_SQ16_Pos)       /*!< 0x00040000 */
.equ	ADC_SQR1_SQ16_4,	(0x10UL << ADC_SQR1_SQ16_Pos)       /*!< 0x00080000 */

.equ	ADC_SQR1_L_Pos,	(20U)
.equ	ADC_SQR1_L_Msk,	(0xFUL << ADC_SQR1_L_Pos)           /*!< 0x00F00000 */
.equ	ADC_SQR1_L,	ADC_SQR1_L_Msk                     /*!< ADC group regular sequencer scan length */
.equ	ADC_SQR1_L_0,	(0x1UL << ADC_SQR1_L_Pos)           /*!< 0x00100000 */
.equ	ADC_SQR1_L_1,	(0x2UL << ADC_SQR1_L_Pos)           /*!< 0x00200000 */
.equ	ADC_SQR1_L_2,	(0x4UL << ADC_SQR1_L_Pos)           /*!< 0x00400000 */
.equ	ADC_SQR1_L_3,	(0x8UL << ADC_SQR1_L_Pos)           /*!< 0x00800000 */

/*******************  Bit definition for ADC_SQR2 register  *******************/
.equ	ADC_SQR2_SQ7_Pos,	0
.equ	ADC_SQR2_SQ7_Msk,	(0x1FUL << ADC_SQR2_SQ7_Pos)        /*!< 0x0000001F */
.equ	ADC_SQR2_SQ7,	ADC_SQR2_SQ7_Msk                   /*!< ADC group regular sequencer rank 7 */
.equ	ADC_SQR2_SQ7_0,	(0x01UL << ADC_SQR2_SQ7_Pos)        /*!< 0x00000001 */
.equ	ADC_SQR2_SQ7_1,	(0x02UL << ADC_SQR2_SQ7_Pos)        /*!< 0x00000002 */
.equ	ADC_SQR2_SQ7_2,	(0x04UL << ADC_SQR2_SQ7_Pos)        /*!< 0x00000004 */
.equ	ADC_SQR2_SQ7_3,	(0x08UL << ADC_SQR2_SQ7_Pos)        /*!< 0x00000008 */
.equ	ADC_SQR2_SQ7_4,	(0x10UL << ADC_SQR2_SQ7_Pos)        /*!< 0x00000010 */

.equ	ADC_SQR2_SQ8_Pos,	(5U)
.equ	ADC_SQR2_SQ8_Msk,	(0x1FUL << ADC_SQR2_SQ8_Pos)        /*!< 0x000003E0 */
.equ	ADC_SQR2_SQ8,	ADC_SQR2_SQ8_Msk                   /*!< ADC group regular sequencer rank 8 */
.equ	ADC_SQR2_SQ8_0,	(0x01UL << ADC_SQR2_SQ8_Pos)        /*!< 0x00000020 */
.equ	ADC_SQR2_SQ8_1,	(0x02UL << ADC_SQR2_SQ8_Pos)        /*!< 0x00000040 */
.equ	ADC_SQR2_SQ8_2,	(0x04UL << ADC_SQR2_SQ8_Pos)        /*!< 0x00000080 */
.equ	ADC_SQR2_SQ8_3,	(0x08UL << ADC_SQR2_SQ8_Pos)        /*!< 0x00000100 */
.equ	ADC_SQR2_SQ8_4,	(0x10UL << ADC_SQR2_SQ8_Pos)        /*!< 0x00000200 */

.equ	ADC_SQR2_SQ9_Pos,	(10U)
.equ	ADC_SQR2_SQ9_Msk,	(0x1FUL << ADC_SQR2_SQ9_Pos)        /*!< 0x00007C00 */
.equ	ADC_SQR2_SQ9,	ADC_SQR2_SQ9_Msk                   /*!< ADC group regular sequencer rank 9 */
.equ	ADC_SQR2_SQ9_0,	(0x01UL << ADC_SQR2_SQ9_Pos)        /*!< 0x00000400 */
.equ	ADC_SQR2_SQ9_1,	(0x02UL << ADC_SQR2_SQ9_Pos)        /*!< 0x00000800 */
.equ	ADC_SQR2_SQ9_2,	(0x04UL << ADC_SQR2_SQ9_Pos)        /*!< 0x00001000 */
.equ	ADC_SQR2_SQ9_3,	(0x08UL << ADC_SQR2_SQ9_Pos)        /*!< 0x00002000 */
.equ	ADC_SQR2_SQ9_4,	(0x10UL << ADC_SQR2_SQ9_Pos)        /*!< 0x00004000 */

.equ	ADC_SQR2_SQ10_Pos,	(15U)
.equ	ADC_SQR2_SQ10_Msk,	(0x1FUL << ADC_SQR2_SQ10_Pos)       /*!< 0x000F8000 */
.equ	ADC_SQR2_SQ10,	ADC_SQR2_SQ10_Msk                  /*!< ADC group regular sequencer rank 10 */
.equ	ADC_SQR2_SQ10_0,	(0x01UL << ADC_SQR2_SQ10_Pos)       /*!< 0x00008000 */
.equ	ADC_SQR2_SQ10_1,	(0x02UL << ADC_SQR2_SQ10_Pos)       /*!< 0x00010000 */
.equ	ADC_SQR2_SQ10_2,	(0x04UL << ADC_SQR2_SQ10_Pos)       /*!< 0x00020000 */
.equ	ADC_SQR2_SQ10_3,	(0x08UL << ADC_SQR2_SQ10_Pos)       /*!< 0x00040000 */
.equ	ADC_SQR2_SQ10_4,	(0x10UL << ADC_SQR2_SQ10_Pos)       /*!< 0x00080000 */

.equ	ADC_SQR2_SQ11_Pos,	(20U)
.equ	ADC_SQR2_SQ11_Msk,	(0x1FUL << ADC_SQR2_SQ11_Pos)       /*!< 0x01F00000 */
.equ	ADC_SQR2_SQ11,	ADC_SQR2_SQ11_Msk                  /*!< ADC group regular sequencer rank 1 */
.equ	ADC_SQR2_SQ11_0,	(0x01UL << ADC_SQR2_SQ11_Pos)       /*!< 0x00100000 */
.equ	ADC_SQR2_SQ11_1,	(0x02UL << ADC_SQR2_SQ11_Pos)       /*!< 0x00200000 */
.equ	ADC_SQR2_SQ11_2,	(0x04UL << ADC_SQR2_SQ11_Pos)       /*!< 0x00400000 */
.equ	ADC_SQR2_SQ11_3,	(0x08UL << ADC_SQR2_SQ11_Pos)       /*!< 0x00800000 */
.equ	ADC_SQR2_SQ11_4,	(0x10UL << ADC_SQR2_SQ11_Pos)       /*!< 0x01000000 */

.equ	ADC_SQR2_SQ12_Pos,	(25U)
.equ	ADC_SQR2_SQ12_Msk,	(0x1FUL << ADC_SQR2_SQ12_Pos)       /*!< 0x3E000000 */
.equ	ADC_SQR2_SQ12,	ADC_SQR2_SQ12_Msk                  /*!< ADC group regular sequencer rank 12 */
.equ	ADC_SQR2_SQ12_0,	(0x01UL << ADC_SQR2_SQ12_Pos)       /*!< 0x02000000 */
.equ	ADC_SQR2_SQ12_1,	(0x02UL << ADC_SQR2_SQ12_Pos)       /*!< 0x04000000 */
.equ	ADC_SQR2_SQ12_2,	(0x04UL << ADC_SQR2_SQ12_Pos)       /*!< 0x08000000 */
.equ	ADC_SQR2_SQ12_3,	(0x08UL << ADC_SQR2_SQ12_Pos)       /*!< 0x10000000 */
.equ	ADC_SQR2_SQ12_4,	(0x10UL << ADC_SQR2_SQ12_Pos)       /*!< 0x20000000 */

/*******************  Bit definition for ADC_SQR3 register  *******************/
.equ	ADC_SQR3_SQ1_Pos,	0
.equ	ADC_SQR3_SQ1_Msk,	(0x1FUL << ADC_SQR3_SQ1_Pos)        /*!< 0x0000001F */
.equ	ADC_SQR3_SQ1,	ADC_SQR3_SQ1_Msk                   /*!< ADC group regular sequencer rank 1 */
.equ	ADC_SQR3_SQ1_0,	(0x01UL << ADC_SQR3_SQ1_Pos)        /*!< 0x00000001 */
.equ	ADC_SQR3_SQ1_1,	(0x02UL << ADC_SQR3_SQ1_Pos)        /*!< 0x00000002 */
.equ	ADC_SQR3_SQ1_2,	(0x04UL << ADC_SQR3_SQ1_Pos)        /*!< 0x00000004 */
.equ	ADC_SQR3_SQ1_3,	(0x08UL << ADC_SQR3_SQ1_Pos)        /*!< 0x00000008 */
.equ	ADC_SQR3_SQ1_4,	(0x10UL << ADC_SQR3_SQ1_Pos)        /*!< 0x00000010 */

.equ	ADC_SQR3_SQ2_Pos,	(5U)
.equ	ADC_SQR3_SQ2_Msk,	(0x1FUL << ADC_SQR3_SQ2_Pos)        /*!< 0x000003E0 */
.equ	ADC_SQR3_SQ2,	ADC_SQR3_SQ2_Msk                   /*!< ADC group regular sequencer rank 2 */
.equ	ADC_SQR3_SQ2_0,	(0x01UL << ADC_SQR3_SQ2_Pos)        /*!< 0x00000020 */
.equ	ADC_SQR3_SQ2_1,	(0x02UL << ADC_SQR3_SQ2_Pos)        /*!< 0x00000040 */
.equ	ADC_SQR3_SQ2_2,	(0x04UL << ADC_SQR3_SQ2_Pos)        /*!< 0x00000080 */
.equ	ADC_SQR3_SQ2_3,	(0x08UL << ADC_SQR3_SQ2_Pos)        /*!< 0x00000100 */
.equ	ADC_SQR3_SQ2_4,	(0x10UL << ADC_SQR3_SQ2_Pos)        /*!< 0x00000200 */

.equ	ADC_SQR3_SQ3_Pos,	(10U)
.equ	ADC_SQR3_SQ3_Msk,	(0x1FUL << ADC_SQR3_SQ3_Pos)        /*!< 0x00007C00 */
.equ	ADC_SQR3_SQ3,	ADC_SQR3_SQ3_Msk                   /*!< ADC group regular sequencer rank 3 */
.equ	ADC_SQR3_SQ3_0,	(0x01UL << ADC_SQR3_SQ3_Pos)        /*!< 0x00000400 */
.equ	ADC_SQR3_SQ3_1,	(0x02UL << ADC_SQR3_SQ3_Pos)        /*!< 0x00000800 */
.equ	ADC_SQR3_SQ3_2,	(0x04UL << ADC_SQR3_SQ3_Pos)        /*!< 0x00001000 */
.equ	ADC_SQR3_SQ3_3,	(0x08UL << ADC_SQR3_SQ3_Pos)        /*!< 0x00002000 */
.equ	ADC_SQR3_SQ3_4,	(0x10UL << ADC_SQR3_SQ3_Pos)        /*!< 0x00004000 */

.equ	ADC_SQR3_SQ4_Pos,	(15U)
.equ	ADC_SQR3_SQ4_Msk,	(0x1FUL << ADC_SQR3_SQ4_Pos)        /*!< 0x000F8000 */
.equ	ADC_SQR3_SQ4,	ADC_SQR3_SQ4_Msk                   /*!< ADC group regular sequencer rank 4 */
.equ	ADC_SQR3_SQ4_0,	(0x01UL << ADC_SQR3_SQ4_Pos)        /*!< 0x00008000 */
.equ	ADC_SQR3_SQ4_1,	(0x02UL << ADC_SQR3_SQ4_Pos)        /*!< 0x00010000 */
.equ	ADC_SQR3_SQ4_2,	(0x04UL << ADC_SQR3_SQ4_Pos)        /*!< 0x00020000 */
.equ	ADC_SQR3_SQ4_3,	(0x08UL << ADC_SQR3_SQ4_Pos)        /*!< 0x00040000 */
.equ	ADC_SQR3_SQ4_4,	(0x10UL << ADC_SQR3_SQ4_Pos)        /*!< 0x00080000 */

.equ	ADC_SQR3_SQ5_Pos,	(20U)
.equ	ADC_SQR3_SQ5_Msk,	(0x1FUL << ADC_SQR3_SQ5_Pos)        /*!< 0x01F00000 */
.equ	ADC_SQR3_SQ5,	ADC_SQR3_SQ5_Msk                   /*!< ADC group regular sequencer rank 5 */
.equ	ADC_SQR3_SQ5_0,	(0x01UL << ADC_SQR3_SQ5_Pos)        /*!< 0x00100000 */
.equ	ADC_SQR3_SQ5_1,	(0x02UL << ADC_SQR3_SQ5_Pos)        /*!< 0x00200000 */
.equ	ADC_SQR3_SQ5_2,	(0x04UL << ADC_SQR3_SQ5_Pos)        /*!< 0x00400000 */
.equ	ADC_SQR3_SQ5_3,	(0x08UL << ADC_SQR3_SQ5_Pos)        /*!< 0x00800000 */
.equ	ADC_SQR3_SQ5_4,	(0x10UL << ADC_SQR3_SQ5_Pos)        /*!< 0x01000000 */

.equ	ADC_SQR3_SQ6_Pos,	(25U)
.equ	ADC_SQR3_SQ6_Msk,	(0x1FUL << ADC_SQR3_SQ6_Pos)        /*!< 0x3E000000 */
.equ	ADC_SQR3_SQ6,	ADC_SQR3_SQ6_Msk                   /*!< ADC group regular sequencer rank 6 */
.equ	ADC_SQR3_SQ6_0,	(0x01UL << ADC_SQR3_SQ6_Pos)        /*!< 0x02000000 */
.equ	ADC_SQR3_SQ6_1,	(0x02UL << ADC_SQR3_SQ6_Pos)        /*!< 0x04000000 */
.equ	ADC_SQR3_SQ6_2,	(0x04UL << ADC_SQR3_SQ6_Pos)        /*!< 0x08000000 */
.equ	ADC_SQR3_SQ6_3,	(0x08UL << ADC_SQR3_SQ6_Pos)        /*!< 0x10000000 */
.equ	ADC_SQR3_SQ6_4,	(0x10UL << ADC_SQR3_SQ6_Pos)        /*!< 0x20000000 */

/*******************  Bit definition for ADC_JSQR register  *******************/
.equ	ADC_JSQR_JSQ1_Pos,	0
.equ	ADC_JSQR_JSQ1_Msk,	(0x1FUL << ADC_JSQR_JSQ1_Pos)       /*!< 0x0000001F */
.equ	ADC_JSQR_JSQ1,	ADC_JSQR_JSQ1_Msk                  /*!< ADC group injected sequencer rank 1 */
.equ	ADC_JSQR_JSQ1_0,	(0x01UL << ADC_JSQR_JSQ1_Pos)       /*!< 0x00000001 */
.equ	ADC_JSQR_JSQ1_1,	(0x02UL << ADC_JSQR_JSQ1_Pos)       /*!< 0x00000002 */
.equ	ADC_JSQR_JSQ1_2,	(0x04UL << ADC_JSQR_JSQ1_Pos)       /*!< 0x00000004 */
.equ	ADC_JSQR_JSQ1_3,	(0x08UL << ADC_JSQR_JSQ1_Pos)       /*!< 0x00000008 */
.equ	ADC_JSQR_JSQ1_4,	(0x10UL << ADC_JSQR_JSQ1_Pos)       /*!< 0x00000010 */

.equ	ADC_JSQR_JSQ2_Pos,	(5U)
.equ	ADC_JSQR_JSQ2_Msk,	(0x1FUL << ADC_JSQR_JSQ2_Pos)       /*!< 0x000003E0 */
.equ	ADC_JSQR_JSQ2,	ADC_JSQR_JSQ2_Msk                  /*!< ADC group injected sequencer rank 2 */
.equ	ADC_JSQR_JSQ2_0,	(0x01UL << ADC_JSQR_JSQ2_Pos)       /*!< 0x00000020 */
.equ	ADC_JSQR_JSQ2_1,	(0x02UL << ADC_JSQR_JSQ2_Pos)       /*!< 0x00000040 */
.equ	ADC_JSQR_JSQ2_2,	(0x04UL << ADC_JSQR_JSQ2_Pos)       /*!< 0x00000080 */
.equ	ADC_JSQR_JSQ2_3,	(0x08UL << ADC_JSQR_JSQ2_Pos)       /*!< 0x00000100 */
.equ	ADC_JSQR_JSQ2_4,	(0x10UL << ADC_JSQR_JSQ2_Pos)       /*!< 0x00000200 */

.equ	ADC_JSQR_JSQ3_Pos,	(10U)
.equ	ADC_JSQR_JSQ3_Msk,	(0x1FUL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00007C00 */
.equ	ADC_JSQR_JSQ3,	ADC_JSQR_JSQ3_Msk                  /*!< ADC group injected sequencer rank 3 */
.equ	ADC_JSQR_JSQ3_0,	(0x01UL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00000400 */
.equ	ADC_JSQR_JSQ3_1,	(0x02UL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00000800 */
.equ	ADC_JSQR_JSQ3_2,	(0x04UL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00001000 */
.equ	ADC_JSQR_JSQ3_3,	(0x08UL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00002000 */
.equ	ADC_JSQR_JSQ3_4,	(0x10UL << ADC_JSQR_JSQ3_Pos)       /*!< 0x00004000 */

.equ	ADC_JSQR_JSQ4_Pos,	(15U)
.equ	ADC_JSQR_JSQ4_Msk,	(0x1FUL << ADC_JSQR_JSQ4_Pos)       /*!< 0x000F8000 */
.equ	ADC_JSQR_JSQ4,	ADC_JSQR_JSQ4_Msk                  /*!< ADC group injected sequencer rank 4 */
.equ	ADC_JSQR_JSQ4_0,	(0x01UL << ADC_JSQR_JSQ4_Pos)       /*!< 0x00008000 */
.equ	ADC_JSQR_JSQ4_1,	(0x02UL << ADC_JSQR_JSQ4_Pos)       /*!< 0x00010000 */
.equ	ADC_JSQR_JSQ4_2,	(0x04UL << ADC_JSQR_JSQ4_Pos)       /*!< 0x00020000 */
.equ	ADC_JSQR_JSQ4_3,	(0x08UL << ADC_JSQR_JSQ4_Pos)       /*!< 0x00040000 */
.equ	ADC_JSQR_JSQ4_4,	(0x10UL << ADC_JSQR_JSQ4_Pos)       /*!< 0x00080000 */

.equ	ADC_JSQR_JL_Pos,	(20U)
.equ	ADC_JSQR_JL_Msk,	(0x3UL << ADC_JSQR_JL_Pos)          /*!< 0x00300000 */
.equ	ADC_JSQR_JL,	ADC_JSQR_JL_Msk                    /*!< ADC group injected sequencer scan length */
.equ	ADC_JSQR_JL_0,	(0x1UL << ADC_JSQR_JL_Pos)          /*!< 0x00100000 */
.equ	ADC_JSQR_JL_1,	(0x2UL << ADC_JSQR_JL_Pos)          /*!< 0x00200000 */

/*******************  Bit definition for ADC_JDR1 register  *******************/
.equ	ADC_JDR1_JDATA_Pos,	0
.equ	ADC_JDR1_JDATA_Msk,	(0xFFFFUL << ADC_JDR1_JDATA_Pos)    /*!< 0x0000FFFF */
.equ	ADC_JDR1_JDATA,	ADC_JDR1_JDATA_Msk                 /*!< ADC group injected sequencer rank 1 conversion data */

/*******************  Bit definition for ADC_JDR2 register  *******************/
.equ	ADC_JDR2_JDATA_Pos,	0
.equ	ADC_JDR2_JDATA_Msk,	(0xFFFFUL << ADC_JDR2_JDATA_Pos)    /*!< 0x0000FFFF */
.equ	ADC_JDR2_JDATA,	ADC_JDR2_JDATA_Msk                 /*!< ADC group injected sequencer rank 2 conversion data */

/*******************  Bit definition for ADC_JDR3 register  *******************/
.equ	ADC_JDR3_JDATA_Pos,	0
.equ	ADC_JDR3_JDATA_Msk,	(0xFFFFUL << ADC_JDR3_JDATA_Pos)    /*!< 0x0000FFFF */
.equ	ADC_JDR3_JDATA,	ADC_JDR3_JDATA_Msk                 /*!< ADC group injected sequencer rank 3 conversion data */

/*******************  Bit definition for ADC_JDR4 register  *******************/
.equ	ADC_JDR4_JDATA_Pos,	0
.equ	ADC_JDR4_JDATA_Msk,	(0xFFFFUL << ADC_JDR4_JDATA_Pos)    /*!< 0x0000FFFF */
.equ	ADC_JDR4_JDATA,	ADC_JDR4_JDATA_Msk                 /*!< ADC group injected sequencer rank 4 conversion data */

/********************  Bit definition for ADC_DR register  ********************/
.equ	ADC_DR_DATA_Pos,	0
.equ	ADC_DR_DATA_Msk,	(0xFFFFUL << ADC_DR_DATA_Pos)       /*!< 0x0000FFFF */
.equ	ADC_DR_DATA,	ADC_DR_DATA_Msk                    /*!< ADC group regular conversion data */
.equ	ADC_DR_ADC2DATA_Pos,	(16U)
.equ	ADC_DR_ADC2DATA_Msk,	(0xFFFFUL << ADC_DR_ADC2DATA_Pos)   /*!< 0xFFFF0000 */
.equ	ADC_DR_ADC2DATA,	ADC_DR_ADC2DATA_Msk                /*!< ADC group regular conversion data for ADC slave in multimode */


/*****************************************************************************/
/*                                                                           */
/*                               Timers (TIM)                                */
/*                                                                           */
/*****************************************************************************/
/*******************  Bit definition for TIM_CR1 register  *******************/
.equ	TIM_CR1_CEN_Pos,	0
.equ	TIM_CR1_CEN_Msk,	(0x1UL << TIM_CR1_CEN_Pos)          /*!< 0x00000001 */
.equ	TIM_CR1_CEN,	TIM_CR1_CEN_Msk                    /*!<Counter enable */
.equ	TIM_CR1_UDIS_Pos,	(1U)
.equ	TIM_CR1_UDIS_Msk,	(0x1UL << TIM_CR1_UDIS_Pos)         /*!< 0x00000002 */
.equ	TIM_CR1_UDIS,	TIM_CR1_UDIS_Msk                   /*!<Update disable */
.equ	TIM_CR1_URS_Pos,	(2U)
.equ	TIM_CR1_URS_Msk,	(0x1UL << TIM_CR1_URS_Pos)          /*!< 0x00000004 */
.equ	TIM_CR1_URS,	TIM_CR1_URS_Msk                    /*!<Update request source */
.equ	TIM_CR1_OPM_Pos,	(3U)
.equ	TIM_CR1_OPM_Msk,	(0x1UL << TIM_CR1_OPM_Pos)          /*!< 0x00000008 */
.equ	TIM_CR1_OPM,	TIM_CR1_OPM_Msk                    /*!<One pulse mode */
.equ	TIM_CR1_DIR_Pos,	(4U)
.equ	TIM_CR1_DIR_Msk,	(0x1UL << TIM_CR1_DIR_Pos)          /*!< 0x00000010 */
.equ	TIM_CR1_DIR,	TIM_CR1_DIR_Msk                    /*!<Direction */

.equ	TIM_CR1_CMS_Pos,	(5U)
.equ	TIM_CR1_CMS_Msk,	(0x3UL << TIM_CR1_CMS_Pos)          /*!< 0x00000060 */
.equ	TIM_CR1_CMS,	TIM_CR1_CMS_Msk                    /*!<CMS[1:0] bits (Center-aligned mode selection) */
.equ	TIM_CR1_CMS_0,	(0x1UL << TIM_CR1_CMS_Pos)          /*!< 0x00000020 */
.equ	TIM_CR1_CMS_1,	(0x2UL << TIM_CR1_CMS_Pos)          /*!< 0x00000040 */

.equ	TIM_CR1_ARPE_Pos,	(7U)
.equ	TIM_CR1_ARPE_Msk,	(0x1UL << TIM_CR1_ARPE_Pos)         /*!< 0x00000080 */
.equ	TIM_CR1_ARPE,	TIM_CR1_ARPE_Msk                   /*!<Auto-reload preload enable */

.equ	TIM_CR1_CKD_Pos,	(8U)
.equ	TIM_CR1_CKD_Msk,	(0x3UL << TIM_CR1_CKD_Pos)          /*!< 0x00000300 */
.equ	TIM_CR1_CKD,	TIM_CR1_CKD_Msk                    /*!<CKD[1:0] bits (clock division) */
.equ	TIM_CR1_CKD_0,	(0x1UL << TIM_CR1_CKD_Pos)          /*!< 0x00000100 */
.equ	TIM_CR1_CKD_1,	(0x2UL << TIM_CR1_CKD_Pos)          /*!< 0x00000200 */

/*******************  Bit definition for TIM_CR2 register  *******************/
.equ	TIM_CR2_CCPC_Pos,	0
.equ	TIM_CR2_CCPC_Msk,	(0x1UL << TIM_CR2_CCPC_Pos)         /*!< 0x00000001 */
.equ	TIM_CR2_CCPC,	TIM_CR2_CCPC_Msk                   /*!<Capture/Compare Preloaded Control */
.equ	TIM_CR2_CCUS_Pos,	(2U)
.equ	TIM_CR2_CCUS_Msk,	(0x1UL << TIM_CR2_CCUS_Pos)         /*!< 0x00000004 */
.equ	TIM_CR2_CCUS,	TIM_CR2_CCUS_Msk                   /*!<Capture/Compare Control Update Selection */
.equ	TIM_CR2_CCDS_Pos,	(3U)
.equ	TIM_CR2_CCDS_Msk,	(0x1UL << TIM_CR2_CCDS_Pos)         /*!< 0x00000008 */
.equ	TIM_CR2_CCDS,	TIM_CR2_CCDS_Msk                   /*!<Capture/Compare DMA Selection */

.equ	TIM_CR2_MMS_Pos,	(4U)
.equ	TIM_CR2_MMS_Msk,	(0x7UL << TIM_CR2_MMS_Pos)          /*!< 0x00000070 */
.equ	TIM_CR2_MMS,	TIM_CR2_MMS_Msk                    /*!<MMS[2:0] bits (Master Mode Selection) */
.equ	TIM_CR2_MMS_0,	(0x1UL << TIM_CR2_MMS_Pos)          /*!< 0x00000010 */
.equ	TIM_CR2_MMS_1,	(0x2UL << TIM_CR2_MMS_Pos)          /*!< 0x00000020 */
.equ	TIM_CR2_MMS_2,	(0x4UL << TIM_CR2_MMS_Pos)          /*!< 0x00000040 */

.equ	TIM_CR2_TI1S_Pos,	(7U)
.equ	TIM_CR2_TI1S_Msk,	(0x1UL << TIM_CR2_TI1S_Pos)         /*!< 0x00000080 */
.equ	TIM_CR2_TI1S,	TIM_CR2_TI1S_Msk                   /*!<TI1 Selection */
.equ	TIM_CR2_OIS1_Pos,	(8U)
.equ	TIM_CR2_OIS1_Msk,	(0x1UL << TIM_CR2_OIS1_Pos)         /*!< 0x00000100 */
.equ	TIM_CR2_OIS1,	TIM_CR2_OIS1_Msk                   /*!<Output Idle state 1 (OC1 output) */
.equ	TIM_CR2_OIS1N_Pos,	(9U)
.equ	TIM_CR2_OIS1N_Msk,	(0x1UL << TIM_CR2_OIS1N_Pos)        /*!< 0x00000200 */
.equ	TIM_CR2_OIS1N,	TIM_CR2_OIS1N_Msk                  /*!<Output Idle state 1 (OC1N output) */
.equ	TIM_CR2_OIS2_Pos,	(10U)
.equ	TIM_CR2_OIS2_Msk,	(0x1UL << TIM_CR2_OIS2_Pos)         /*!< 0x00000400 */
.equ	TIM_CR2_OIS2,	TIM_CR2_OIS2_Msk                   /*!<Output Idle state 2 (OC2 output) */
.equ	TIM_CR2_OIS2N_Pos,	(11U)
.equ	TIM_CR2_OIS2N_Msk,	(0x1UL << TIM_CR2_OIS2N_Pos)        /*!< 0x00000800 */
.equ	TIM_CR2_OIS2N,	TIM_CR2_OIS2N_Msk                  /*!<Output Idle state 2 (OC2N output) */
.equ	TIM_CR2_OIS3_Pos,	(12U)
.equ	TIM_CR2_OIS3_Msk,	(0x1UL << TIM_CR2_OIS3_Pos)         /*!< 0x00001000 */
.equ	TIM_CR2_OIS3,	TIM_CR2_OIS3_Msk                   /*!<Output Idle state 3 (OC3 output) */
.equ	TIM_CR2_OIS3N_Pos,	(13U)
.equ	TIM_CR2_OIS3N_Msk,	(0x1UL << TIM_CR2_OIS3N_Pos)        /*!< 0x00002000 */
.equ	TIM_CR2_OIS3N,	TIM_CR2_OIS3N_Msk                  /*!<Output Idle state 3 (OC3N output) */
.equ	TIM_CR2_OIS4_Pos,	(14U)
.equ	TIM_CR2_OIS4_Msk,	(0x1UL << TIM_CR2_OIS4_Pos)         /*!< 0x00004000 */
.equ	TIM_CR2_OIS4,	TIM_CR2_OIS4_Msk                   /*!<Output Idle state 4 (OC4 output) */

/*******************  Bit definition for TIM_SMCR register  ******************/
.equ	TIM_SMCR_SMS_Pos,	0
.equ	TIM_SMCR_SMS_Msk,	(0x7UL << TIM_SMCR_SMS_Pos)         /*!< 0x00000007 */
.equ	TIM_SMCR_SMS,	TIM_SMCR_SMS_Msk                   /*!<SMS[2:0] bits (Slave mode selection) */
.equ	TIM_SMCR_SMS_0,	(0x1UL << TIM_SMCR_SMS_Pos)         /*!< 0x00000001 */
.equ	TIM_SMCR_SMS_1,	(0x2UL << TIM_SMCR_SMS_Pos)         /*!< 0x00000002 */
.equ	TIM_SMCR_SMS_2,	(0x4UL << TIM_SMCR_SMS_Pos)         /*!< 0x00000004 */

.equ	TIM_SMCR_TS_Pos,	(4U)
.equ	TIM_SMCR_TS_Msk,	(0x7UL << TIM_SMCR_TS_Pos)          /*!< 0x00000070 */
.equ	TIM_SMCR_TS,	TIM_SMCR_TS_Msk                    /*!<TS[2:0] bits (Trigger selection) */
.equ	TIM_SMCR_TS_0,	(0x1UL << TIM_SMCR_TS_Pos)          /*!< 0x00000010 */
.equ	TIM_SMCR_TS_1,	(0x2UL << TIM_SMCR_TS_Pos)          /*!< 0x00000020 */
.equ	TIM_SMCR_TS_2,	(0x4UL << TIM_SMCR_TS_Pos)          /*!< 0x00000040 */

.equ	TIM_SMCR_MSM_Pos,	(7U)
.equ	TIM_SMCR_MSM_Msk,	(0x1UL << TIM_SMCR_MSM_Pos)         /*!< 0x00000080 */
.equ	TIM_SMCR_MSM,	TIM_SMCR_MSM_Msk                   /*!<Master/slave mode */

.equ	TIM_SMCR_ETF_Pos,	(8U)
.equ	TIM_SMCR_ETF_Msk,	(0xFUL << TIM_SMCR_ETF_Pos)         /*!< 0x00000F00 */
.equ	TIM_SMCR_ETF,	TIM_SMCR_ETF_Msk                   /*!<ETF[3:0] bits (External trigger filter) */
.equ	TIM_SMCR_ETF_0,	(0x1UL << TIM_SMCR_ETF_Pos)         /*!< 0x00000100 */
.equ	TIM_SMCR_ETF_1,	(0x2UL << TIM_SMCR_ETF_Pos)         /*!< 0x00000200 */
.equ	TIM_SMCR_ETF_2,	(0x4UL << TIM_SMCR_ETF_Pos)         /*!< 0x00000400 */
.equ	TIM_SMCR_ETF_3,	(0x8UL << TIM_SMCR_ETF_Pos)         /*!< 0x00000800 */

.equ	TIM_SMCR_ETPS_Pos,	(12U)
.equ	TIM_SMCR_ETPS_Msk,	(0x3UL << TIM_SMCR_ETPS_Pos)        /*!< 0x00003000 */
.equ	TIM_SMCR_ETPS,	TIM_SMCR_ETPS_Msk                  /*!<ETPS[1:0] bits (External trigger prescaler) */
.equ	TIM_SMCR_ETPS_0,	(0x1UL << TIM_SMCR_ETPS_Pos)        /*!< 0x00001000 */
.equ	TIM_SMCR_ETPS_1,	(0x2UL << TIM_SMCR_ETPS_Pos)        /*!< 0x00002000 */

.equ	TIM_SMCR_ECE_Pos,	(14U)
.equ	TIM_SMCR_ECE_Msk,	(0x1UL << TIM_SMCR_ECE_Pos)         /*!< 0x00004000 */
.equ	TIM_SMCR_ECE,	TIM_SMCR_ECE_Msk                   /*!<External clock enable */
.equ	TIM_SMCR_ETP_Pos,	(15U)
.equ	TIM_SMCR_ETP_Msk,	(0x1UL << TIM_SMCR_ETP_Pos)         /*!< 0x00008000 */
.equ	TIM_SMCR_ETP,	TIM_SMCR_ETP_Msk                   /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  ******************/
.equ	TIM_DIER_UIE_Pos,	0
.equ	TIM_DIER_UIE_Msk,	(0x1UL << TIM_DIER_UIE_Pos)         /*!< 0x00000001 */
.equ	TIM_DIER_UIE,	TIM_DIER_UIE_Msk                   /*!<Update interrupt enable */
.equ	TIM_DIER_CC1IE_Pos,	(1U)
.equ	TIM_DIER_CC1IE_Msk,	(0x1UL << TIM_DIER_CC1IE_Pos)       /*!< 0x00000002 */
.equ	TIM_DIER_CC1IE,	TIM_DIER_CC1IE_Msk                 /*!<Capture/Compare 1 interrupt enable */
.equ	TIM_DIER_CC2IE_Pos,	(2U)
.equ	TIM_DIER_CC2IE_Msk,	(0x1UL << TIM_DIER_CC2IE_Pos)       /*!< 0x00000004 */
.equ	TIM_DIER_CC2IE,	TIM_DIER_CC2IE_Msk                 /*!<Capture/Compare 2 interrupt enable */
.equ	TIM_DIER_CC3IE_Pos,	(3U)
.equ	TIM_DIER_CC3IE_Msk,	(0x1UL << TIM_DIER_CC3IE_Pos)       /*!< 0x00000008 */
.equ	TIM_DIER_CC3IE,	TIM_DIER_CC3IE_Msk                 /*!<Capture/Compare 3 interrupt enable */
.equ	TIM_DIER_CC4IE_Pos,	(4U)
.equ	TIM_DIER_CC4IE_Msk,	(0x1UL << TIM_DIER_CC4IE_Pos)       /*!< 0x00000010 */
.equ	TIM_DIER_CC4IE,	TIM_DIER_CC4IE_Msk                 /*!<Capture/Compare 4 interrupt enable */
.equ	TIM_DIER_COMIE_Pos,	(5U)
.equ	TIM_DIER_COMIE_Msk,	(0x1UL << TIM_DIER_COMIE_Pos)       /*!< 0x00000020 */
.equ	TIM_DIER_COMIE,	TIM_DIER_COMIE_Msk                 /*!<COM interrupt enable */
.equ	TIM_DIER_TIE_Pos,	(6U)
.equ	TIM_DIER_TIE_Msk,	(0x1UL << TIM_DIER_TIE_Pos)         /*!< 0x00000040 */
.equ	TIM_DIER_TIE,	TIM_DIER_TIE_Msk                   /*!<Trigger interrupt enable */
.equ	TIM_DIER_BIE_Pos,	(7U)
.equ	TIM_DIER_BIE_Msk,	(0x1UL << TIM_DIER_BIE_Pos)         /*!< 0x00000080 */
.equ	TIM_DIER_BIE,	TIM_DIER_BIE_Msk                   /*!<Break interrupt enable */
.equ	TIM_DIER_UDE_Pos,	(8U)
.equ	TIM_DIER_UDE_Msk,	(0x1UL << TIM_DIER_UDE_Pos)         /*!< 0x00000100 */
.equ	TIM_DIER_UDE,	TIM_DIER_UDE_Msk                   /*!<Update DMA request enable */
.equ	TIM_DIER_CC1DE_Pos,	(9U)
.equ	TIM_DIER_CC1DE_Msk,	(0x1UL << TIM_DIER_CC1DE_Pos)       /*!< 0x00000200 */
.equ	TIM_DIER_CC1DE,	TIM_DIER_CC1DE_Msk                 /*!<Capture/Compare 1 DMA request enable */
.equ	TIM_DIER_CC2DE_Pos,	(10U)
.equ	TIM_DIER_CC2DE_Msk,	(0x1UL << TIM_DIER_CC2DE_Pos)       /*!< 0x00000400 */
.equ	TIM_DIER_CC2DE,	TIM_DIER_CC2DE_Msk                 /*!<Capture/Compare 2 DMA request enable */
.equ	TIM_DIER_CC3DE_Pos,	(11U)
.equ	TIM_DIER_CC3DE_Msk,	(0x1UL << TIM_DIER_CC3DE_Pos)       /*!< 0x00000800 */
.equ	TIM_DIER_CC3DE,	TIM_DIER_CC3DE_Msk                 /*!<Capture/Compare 3 DMA request enable */
.equ	TIM_DIER_CC4DE_Pos,	(12U)
.equ	TIM_DIER_CC4DE_Msk,	(0x1UL << TIM_DIER_CC4DE_Pos)       /*!< 0x00001000 */
.equ	TIM_DIER_CC4DE,	TIM_DIER_CC4DE_Msk                 /*!<Capture/Compare 4 DMA request enable */
.equ	TIM_DIER_COMDE_Pos,	(13U)
.equ	TIM_DIER_COMDE_Msk,	(0x1UL << TIM_DIER_COMDE_Pos)       /*!< 0x00002000 */
.equ	TIM_DIER_COMDE,	TIM_DIER_COMDE_Msk                 /*!<COM DMA request enable */
.equ	TIM_DIER_TDE_Pos,	(14U)
.equ	TIM_DIER_TDE_Msk,	(0x1UL << TIM_DIER_TDE_Pos)         /*!< 0x00004000 */
.equ	TIM_DIER_TDE,	TIM_DIER_TDE_Msk                   /*!<Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  *******************/
.equ	TIM_SR_UIF_Pos,	0
.equ	TIM_SR_UIF_Msk,	(0x1UL << TIM_SR_UIF_Pos)           /*!< 0x00000001 */
.equ	TIM_SR_UIF,	TIM_SR_UIF_Msk                     /*!<Update interrupt Flag */
.equ	TIM_SR_CC1IF_Pos,	(1U)
.equ	TIM_SR_CC1IF_Msk,	(0x1UL << TIM_SR_CC1IF_Pos)         /*!< 0x00000002 */
.equ	TIM_SR_CC1IF,	TIM_SR_CC1IF_Msk                   /*!<Capture/Compare 1 interrupt Flag */
.equ	TIM_SR_CC2IF_Pos,	(2U)
.equ	TIM_SR_CC2IF_Msk,	(0x1UL << TIM_SR_CC2IF_Pos)         /*!< 0x00000004 */
.equ	TIM_SR_CC2IF,	TIM_SR_CC2IF_Msk                   /*!<Capture/Compare 2 interrupt Flag */
.equ	TIM_SR_CC3IF_Pos,	(3U)
.equ	TIM_SR_CC3IF_Msk,	(0x1UL << TIM_SR_CC3IF_Pos)         /*!< 0x00000008 */
.equ	TIM_SR_CC3IF,	TIM_SR_CC3IF_Msk                   /*!<Capture/Compare 3 interrupt Flag */
.equ	TIM_SR_CC4IF_Pos,	(4U)
.equ	TIM_SR_CC4IF_Msk,	(0x1UL << TIM_SR_CC4IF_Pos)         /*!< 0x00000010 */
.equ	TIM_SR_CC4IF,	TIM_SR_CC4IF_Msk                   /*!<Capture/Compare 4 interrupt Flag */
.equ	TIM_SR_COMIF_Pos,	(5U)
.equ	TIM_SR_COMIF_Msk,	(0x1UL << TIM_SR_COMIF_Pos)         /*!< 0x00000020 */
.equ	TIM_SR_COMIF,	TIM_SR_COMIF_Msk                   /*!<COM interrupt Flag */
.equ	TIM_SR_TIF_Pos,	(6U)
.equ	TIM_SR_TIF_Msk,	(0x1UL << TIM_SR_TIF_Pos)           /*!< 0x00000040 */
.equ	TIM_SR_TIF,	TIM_SR_TIF_Msk                     /*!<Trigger interrupt Flag */
.equ	TIM_SR_BIF_Pos,	(7U)
.equ	TIM_SR_BIF_Msk,	(0x1UL << TIM_SR_BIF_Pos)           /*!< 0x00000080 */
.equ	TIM_SR_BIF,	TIM_SR_BIF_Msk                     /*!<Break interrupt Flag */
.equ	TIM_SR_CC1OF_Pos,	(9U)
.equ	TIM_SR_CC1OF_Msk,	(0x1UL << TIM_SR_CC1OF_Pos)         /*!< 0x00000200 */
.equ	TIM_SR_CC1OF,	TIM_SR_CC1OF_Msk                   /*!<Capture/Compare 1 Overcapture Flag */
.equ	TIM_SR_CC2OF_Pos,	(10U)
.equ	TIM_SR_CC2OF_Msk,	(0x1UL << TIM_SR_CC2OF_Pos)         /*!< 0x00000400 */
.equ	TIM_SR_CC2OF,	TIM_SR_CC2OF_Msk                   /*!<Capture/Compare 2 Overcapture Flag */
.equ	TIM_SR_CC3OF_Pos,	(11U)
.equ	TIM_SR_CC3OF_Msk,	(0x1UL << TIM_SR_CC3OF_Pos)         /*!< 0x00000800 */
.equ	TIM_SR_CC3OF,	TIM_SR_CC3OF_Msk                   /*!<Capture/Compare 3 Overcapture Flag */
.equ	TIM_SR_CC4OF_Pos,	(12U)
.equ	TIM_SR_CC4OF_Msk,	(0x1UL << TIM_SR_CC4OF_Pos)         /*!< 0x00001000 */
.equ	TIM_SR_CC4OF,	TIM_SR_CC4OF_Msk                   /*!<Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  *******************/
.equ	TIM_EGR_UG_Pos,	0
.equ	TIM_EGR_UG_Msk,	(0x1UL << TIM_EGR_UG_Pos)           /*!< 0x00000001 */
.equ	TIM_EGR_UG,	TIM_EGR_UG_Msk                     /*!<Update Generation */
.equ	TIM_EGR_CC1G_Pos,	(1U)
.equ	TIM_EGR_CC1G_Msk,	(0x1UL << TIM_EGR_CC1G_Pos)         /*!< 0x00000002 */
.equ	TIM_EGR_CC1G,	TIM_EGR_CC1G_Msk                   /*!<Capture/Compare 1 Generation */
.equ	TIM_EGR_CC2G_Pos,	(2U)
.equ	TIM_EGR_CC2G_Msk,	(0x1UL << TIM_EGR_CC2G_Pos)         /*!< 0x00000004 */
.equ	TIM_EGR_CC2G,	TIM_EGR_CC2G_Msk                   /*!<Capture/Compare 2 Generation */
.equ	TIM_EGR_CC3G_Pos,	(3U)
.equ	TIM_EGR_CC3G_Msk,	(0x1UL << TIM_EGR_CC3G_Pos)         /*!< 0x00000008 */
.equ	TIM_EGR_CC3G,	TIM_EGR_CC3G_Msk                   /*!<Capture/Compare 3 Generation */
.equ	TIM_EGR_CC4G_Pos,	(4U)
.equ	TIM_EGR_CC4G_Msk,	(0x1UL << TIM_EGR_CC4G_Pos)         /*!< 0x00000010 */
.equ	TIM_EGR_CC4G,	TIM_EGR_CC4G_Msk                   /*!<Capture/Compare 4 Generation */
.equ	TIM_EGR_COMG_Pos,	(5U)
.equ	TIM_EGR_COMG_Msk,	(0x1UL << TIM_EGR_COMG_Pos)         /*!< 0x00000020 */
.equ	TIM_EGR_COMG,	TIM_EGR_COMG_Msk                   /*!<Capture/Compare Control Update Generation */
.equ	TIM_EGR_TG_Pos,	(6U)
.equ	TIM_EGR_TG_Msk,	(0x1UL << TIM_EGR_TG_Pos)           /*!< 0x00000040 */
.equ	TIM_EGR_TG,	TIM_EGR_TG_Msk                     /*!<Trigger Generation */
.equ	TIM_EGR_BG_Pos,	(7U)
.equ	TIM_EGR_BG_Msk,	(0x1UL << TIM_EGR_BG_Pos)           /*!< 0x00000080 */
.equ	TIM_EGR_BG,	TIM_EGR_BG_Msk                     /*!<Break Generation */

/******************  Bit definition for TIM_CCMR1 register  ******************/
.equ	TIM_CCMR1_CC1S_Pos,	0
.equ	TIM_CCMR1_CC1S_Msk,	(0x3UL << TIM_CCMR1_CC1S_Pos)       /*!< 0x00000003 */
.equ	TIM_CCMR1_CC1S,	TIM_CCMR1_CC1S_Msk                 /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
.equ	TIM_CCMR1_CC1S_0,	(0x1UL << TIM_CCMR1_CC1S_Pos)       /*!< 0x00000001 */
.equ	TIM_CCMR1_CC1S_1,	(0x2UL << TIM_CCMR1_CC1S_Pos)       /*!< 0x00000002 */

.equ	TIM_CCMR1_OC1FE_Pos,	(2U)
.equ	TIM_CCMR1_OC1FE_Msk,	(0x1UL << TIM_CCMR1_OC1FE_Pos)      /*!< 0x00000004 */
.equ	TIM_CCMR1_OC1FE,	TIM_CCMR1_OC1FE_Msk                /*!<Output Compare 1 Fast enable */
.equ	TIM_CCMR1_OC1PE_Pos,	(3U)
.equ	TIM_CCMR1_OC1PE_Msk,	(0x1UL << TIM_CCMR1_OC1PE_Pos)      /*!< 0x00000008 */
.equ	TIM_CCMR1_OC1PE,	TIM_CCMR1_OC1PE_Msk                /*!<Output Compare 1 Preload enable */

.equ	TIM_CCMR1_OC1M_Pos,	(4U)
.equ	TIM_CCMR1_OC1M_Msk,	(0x7UL << TIM_CCMR1_OC1M_Pos)       /*!< 0x00000070 */
.equ	TIM_CCMR1_OC1M,	TIM_CCMR1_OC1M_Msk                 /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
.equ	TIM_CCMR1_OC1M_0,	(0x1UL << TIM_CCMR1_OC1M_Pos)       /*!< 0x00000010 */
.equ	TIM_CCMR1_OC1M_1,	(0x2UL << TIM_CCMR1_OC1M_Pos)       /*!< 0x00000020 */
.equ	TIM_CCMR1_OC1M_2,	(0x4UL << TIM_CCMR1_OC1M_Pos)       /*!< 0x00000040 */

.equ	TIM_CCMR1_OC1CE_Pos,	(7U)
.equ	TIM_CCMR1_OC1CE_Msk,	(0x1UL << TIM_CCMR1_OC1CE_Pos)      /*!< 0x00000080 */
.equ	TIM_CCMR1_OC1CE,	TIM_CCMR1_OC1CE_Msk                /*!<Output Compare 1Clear Enable */

.equ	TIM_CCMR1_CC2S_Pos,	(8U)
.equ	TIM_CCMR1_CC2S_Msk,	(0x3UL << TIM_CCMR1_CC2S_Pos)       /*!< 0x00000300 */
.equ	TIM_CCMR1_CC2S,	TIM_CCMR1_CC2S_Msk                 /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
.equ	TIM_CCMR1_CC2S_0,	(0x1UL << TIM_CCMR1_CC2S_Pos)       /*!< 0x00000100 */
.equ	TIM_CCMR1_CC2S_1,	(0x2UL << TIM_CCMR1_CC2S_Pos)       /*!< 0x00000200 */

.equ	TIM_CCMR1_OC2FE_Pos,	(10U)
.equ	TIM_CCMR1_OC2FE_Msk,	(0x1UL << TIM_CCMR1_OC2FE_Pos)      /*!< 0x00000400 */
.equ	TIM_CCMR1_OC2FE,	TIM_CCMR1_OC2FE_Msk                /*!<Output Compare 2 Fast enable */
.equ	TIM_CCMR1_OC2PE_Pos,	(11U)
.equ	TIM_CCMR1_OC2PE_Msk,	(0x1UL << TIM_CCMR1_OC2PE_Pos)      /*!< 0x00000800 */
.equ	TIM_CCMR1_OC2PE,	TIM_CCMR1_OC2PE_Msk                /*!<Output Compare 2 Preload enable */

.equ	TIM_CCMR1_OC2M_Pos,	(12U)
.equ	TIM_CCMR1_OC2M_Msk,	(0x7UL << TIM_CCMR1_OC2M_Pos)       /*!< 0x00007000 */
.equ	TIM_CCMR1_OC2M,	TIM_CCMR1_OC2M_Msk                 /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
.equ	TIM_CCMR1_OC2M_0,	(0x1UL << TIM_CCMR1_OC2M_Pos)       /*!< 0x00001000 */
.equ	TIM_CCMR1_OC2M_1,	(0x2UL << TIM_CCMR1_OC2M_Pos)       /*!< 0x00002000 */
.equ	TIM_CCMR1_OC2M_2,	(0x4UL << TIM_CCMR1_OC2M_Pos)       /*!< 0x00004000 */

.equ	TIM_CCMR1_OC2CE_Pos,	(15U)
.equ	TIM_CCMR1_OC2CE_Msk,	(0x1UL << TIM_CCMR1_OC2CE_Pos)      /*!< 0x00008000 */
.equ	TIM_CCMR1_OC2CE,	TIM_CCMR1_OC2CE_Msk                /*!<Output Compare 2 Clear Enable */

/*---------------------------------------------------------------------------*/

.equ	TIM_CCMR1_IC1PSC_Pos,	(2U)
.equ	TIM_CCMR1_IC1PSC_Msk,	(0x3UL << TIM_CCMR1_IC1PSC_Pos)     /*!< 0x0000000C */
.equ	TIM_CCMR1_IC1PSC,	TIM_CCMR1_IC1PSC_Msk               /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
.equ	TIM_CCMR1_IC1PSC_0,	(0x1UL << TIM_CCMR1_IC1PSC_Pos)     /*!< 0x00000004 */
.equ	TIM_CCMR1_IC1PSC_1,	(0x2UL << TIM_CCMR1_IC1PSC_Pos)     /*!< 0x00000008 */

.equ	TIM_CCMR1_IC1F_Pos,	(4U)
.equ	TIM_CCMR1_IC1F_Msk,	(0xFUL << TIM_CCMR1_IC1F_Pos)       /*!< 0x000000F0 */
.equ	TIM_CCMR1_IC1F,	TIM_CCMR1_IC1F_Msk                 /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
.equ	TIM_CCMR1_IC1F_0,	(0x1UL << TIM_CCMR1_IC1F_Pos)       /*!< 0x00000010 */
.equ	TIM_CCMR1_IC1F_1,	(0x2UL << TIM_CCMR1_IC1F_Pos)       /*!< 0x00000020 */
.equ	TIM_CCMR1_IC1F_2,	(0x4UL << TIM_CCMR1_IC1F_Pos)       /*!< 0x00000040 */
.equ	TIM_CCMR1_IC1F_3,	(0x8UL << TIM_CCMR1_IC1F_Pos)       /*!< 0x00000080 */

.equ	TIM_CCMR1_IC2PSC_Pos,	(10U)
.equ	TIM_CCMR1_IC2PSC_Msk,	(0x3UL << TIM_CCMR1_IC2PSC_Pos)     /*!< 0x00000C00 */
.equ	TIM_CCMR1_IC2PSC,	TIM_CCMR1_IC2PSC_Msk               /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
.equ	TIM_CCMR1_IC2PSC_0,	(0x1UL << TIM_CCMR1_IC2PSC_Pos)     /*!< 0x00000400 */
.equ	TIM_CCMR1_IC2PSC_1,	(0x2UL << TIM_CCMR1_IC2PSC_Pos)     /*!< 0x00000800 */

.equ	TIM_CCMR1_IC2F_Pos,	(12U)
.equ	TIM_CCMR1_IC2F_Msk,	(0xFUL << TIM_CCMR1_IC2F_Pos)       /*!< 0x0000F000 */
.equ	TIM_CCMR1_IC2F,	TIM_CCMR1_IC2F_Msk                 /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
.equ	TIM_CCMR1_IC2F_0,	(0x1UL << TIM_CCMR1_IC2F_Pos)       /*!< 0x00001000 */
.equ	TIM_CCMR1_IC2F_1,	(0x2UL << TIM_CCMR1_IC2F_Pos)       /*!< 0x00002000 */
.equ	TIM_CCMR1_IC2F_2,	(0x4UL << TIM_CCMR1_IC2F_Pos)       /*!< 0x00004000 */
.equ	TIM_CCMR1_IC2F_3,	(0x8UL << TIM_CCMR1_IC2F_Pos)       /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR2 register  ******************/
.equ	TIM_CCMR2_CC3S_Pos,	0
.equ	TIM_CCMR2_CC3S_Msk,	(0x3UL << TIM_CCMR2_CC3S_Pos)       /*!< 0x00000003 */
.equ	TIM_CCMR2_CC3S,	TIM_CCMR2_CC3S_Msk                 /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
.equ	TIM_CCMR2_CC3S_0,	(0x1UL << TIM_CCMR2_CC3S_Pos)       /*!< 0x00000001 */
.equ	TIM_CCMR2_CC3S_1,	(0x2UL << TIM_CCMR2_CC3S_Pos)       /*!< 0x00000002 */

.equ	TIM_CCMR2_OC3FE_Pos,	(2U)
.equ	TIM_CCMR2_OC3FE_Msk,	(0x1UL << TIM_CCMR2_OC3FE_Pos)      /*!< 0x00000004 */
.equ	TIM_CCMR2_OC3FE,	TIM_CCMR2_OC3FE_Msk                /*!<Output Compare 3 Fast enable */
.equ	TIM_CCMR2_OC3PE_Pos,	(3U)
.equ	TIM_CCMR2_OC3PE_Msk,	(0x1UL << TIM_CCMR2_OC3PE_Pos)      /*!< 0x00000008 */
.equ	TIM_CCMR2_OC3PE,	TIM_CCMR2_OC3PE_Msk                /*!<Output Compare 3 Preload enable */

.equ	TIM_CCMR2_OC3M_Pos,	(4U)
.equ	TIM_CCMR2_OC3M_Msk,	(0x7UL << TIM_CCMR2_OC3M_Pos)       /*!< 0x00000070 */
.equ	TIM_CCMR2_OC3M,	TIM_CCMR2_OC3M_Msk                 /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
.equ	TIM_CCMR2_OC3M_0,	(0x1UL << TIM_CCMR2_OC3M_Pos)       /*!< 0x00000010 */
.equ	TIM_CCMR2_OC3M_1,	(0x2UL << TIM_CCMR2_OC3M_Pos)       /*!< 0x00000020 */
.equ	TIM_CCMR2_OC3M_2,	(0x4UL << TIM_CCMR2_OC3M_Pos)       /*!< 0x00000040 */

.equ	TIM_CCMR2_OC3CE_Pos,	(7U)
.equ	TIM_CCMR2_OC3CE_Msk,	(0x1UL << TIM_CCMR2_OC3CE_Pos)      /*!< 0x00000080 */
.equ	TIM_CCMR2_OC3CE,	TIM_CCMR2_OC3CE_Msk                /*!<Output Compare 3 Clear Enable */

.equ	TIM_CCMR2_CC4S_Pos,	(8U)
.equ	TIM_CCMR2_CC4S_Msk,	(0x3UL << TIM_CCMR2_CC4S_Pos)       /*!< 0x00000300 */
.equ	TIM_CCMR2_CC4S,	TIM_CCMR2_CC4S_Msk                 /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
.equ	TIM_CCMR2_CC4S_0,	(0x1UL << TIM_CCMR2_CC4S_Pos)       /*!< 0x00000100 */
.equ	TIM_CCMR2_CC4S_1,	(0x2UL << TIM_CCMR2_CC4S_Pos)       /*!< 0x00000200 */

.equ	TIM_CCMR2_OC4FE_Pos,	(10U)
.equ	TIM_CCMR2_OC4FE_Msk,	(0x1UL << TIM_CCMR2_OC4FE_Pos)      /*!< 0x00000400 */
.equ	TIM_CCMR2_OC4FE,	TIM_CCMR2_OC4FE_Msk                /*!<Output Compare 4 Fast enable */
.equ	TIM_CCMR2_OC4PE_Pos,	(11U)
.equ	TIM_CCMR2_OC4PE_Msk,	(0x1UL << TIM_CCMR2_OC4PE_Pos)      /*!< 0x00000800 */
.equ	TIM_CCMR2_OC4PE,	TIM_CCMR2_OC4PE_Msk                /*!<Output Compare 4 Preload enable */

.equ	TIM_CCMR2_OC4M_Pos,	(12U)
.equ	TIM_CCMR2_OC4M_Msk,	(0x7UL << TIM_CCMR2_OC4M_Pos)       /*!< 0x00007000 */
.equ	TIM_CCMR2_OC4M,	TIM_CCMR2_OC4M_Msk                 /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
.equ	TIM_CCMR2_OC4M_0,	(0x1UL << TIM_CCMR2_OC4M_Pos)       /*!< 0x00001000 */
.equ	TIM_CCMR2_OC4M_1,	(0x2UL << TIM_CCMR2_OC4M_Pos)       /*!< 0x00002000 */
.equ	TIM_CCMR2_OC4M_2,	(0x4UL << TIM_CCMR2_OC4M_Pos)       /*!< 0x00004000 */

.equ	TIM_CCMR2_OC4CE_Pos,	(15U)
.equ	TIM_CCMR2_OC4CE_Msk,	(0x1UL << TIM_CCMR2_OC4CE_Pos)      /*!< 0x00008000 */
.equ	TIM_CCMR2_OC4CE,	TIM_CCMR2_OC4CE_Msk                /*!<Output Compare 4 Clear Enable */

/*---------------------------------------------------------------------------*/

.equ	TIM_CCMR2_IC3PSC_Pos,	(2U)
.equ	TIM_CCMR2_IC3PSC_Msk,	(0x3UL << TIM_CCMR2_IC3PSC_Pos)     /*!< 0x0000000C */
.equ	TIM_CCMR2_IC3PSC,	TIM_CCMR2_IC3PSC_Msk               /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
.equ	TIM_CCMR2_IC3PSC_0,	(0x1UL << TIM_CCMR2_IC3PSC_Pos)     /*!< 0x00000004 */
.equ	TIM_CCMR2_IC3PSC_1,	(0x2UL << TIM_CCMR2_IC3PSC_Pos)     /*!< 0x00000008 */

.equ	TIM_CCMR2_IC3F_Pos,	(4U)
.equ	TIM_CCMR2_IC3F_Msk,	(0xFUL << TIM_CCMR2_IC3F_Pos)       /*!< 0x000000F0 */
.equ	TIM_CCMR2_IC3F,	TIM_CCMR2_IC3F_Msk                 /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
.equ	TIM_CCMR2_IC3F_0,	(0x1UL << TIM_CCMR2_IC3F_Pos)       /*!< 0x00000010 */
.equ	TIM_CCMR2_IC3F_1,	(0x2UL << TIM_CCMR2_IC3F_Pos)       /*!< 0x00000020 */
.equ	TIM_CCMR2_IC3F_2,	(0x4UL << TIM_CCMR2_IC3F_Pos)       /*!< 0x00000040 */
.equ	TIM_CCMR2_IC3F_3,	(0x8UL << TIM_CCMR2_IC3F_Pos)       /*!< 0x00000080 */

.equ	TIM_CCMR2_IC4PSC_Pos,	(10U)
.equ	TIM_CCMR2_IC4PSC_Msk,	(0x3UL << TIM_CCMR2_IC4PSC_Pos)     /*!< 0x00000C00 */
.equ	TIM_CCMR2_IC4PSC,	TIM_CCMR2_IC4PSC_Msk               /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
.equ	TIM_CCMR2_IC4PSC_0,	(0x1UL << TIM_CCMR2_IC4PSC_Pos)     /*!< 0x00000400 */
.equ	TIM_CCMR2_IC4PSC_1,	(0x2UL << TIM_CCMR2_IC4PSC_Pos)     /*!< 0x00000800 */

.equ	TIM_CCMR2_IC4F_Pos,	(12U)
.equ	TIM_CCMR2_IC4F_Msk,	(0xFUL << TIM_CCMR2_IC4F_Pos)       /*!< 0x0000F000 */
.equ	TIM_CCMR2_IC4F,	TIM_CCMR2_IC4F_Msk                 /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
.equ	TIM_CCMR2_IC4F_0,	(0x1UL << TIM_CCMR2_IC4F_Pos)       /*!< 0x00001000 */
.equ	TIM_CCMR2_IC4F_1,	(0x2UL << TIM_CCMR2_IC4F_Pos)       /*!< 0x00002000 */
.equ	TIM_CCMR2_IC4F_2,	(0x4UL << TIM_CCMR2_IC4F_Pos)       /*!< 0x00004000 */
.equ	TIM_CCMR2_IC4F_3,	(0x8UL << TIM_CCMR2_IC4F_Pos)       /*!< 0x00008000 */

/*******************  Bit definition for TIM_CCER register  ******************/
.equ	TIM_CCER_CC1E_Pos,	0
.equ	TIM_CCER_CC1E_Msk,	(0x1UL << TIM_CCER_CC1E_Pos)        /*!< 0x00000001 */
.equ	TIM_CCER_CC1E,	TIM_CCER_CC1E_Msk                  /*!<Capture/Compare 1 output enable */
.equ	TIM_CCER_CC1P_Pos,	(1U)
.equ	TIM_CCER_CC1P_Msk,	(0x1UL << TIM_CCER_CC1P_Pos)        /*!< 0x00000002 */
.equ	TIM_CCER_CC1P,	TIM_CCER_CC1P_Msk                  /*!<Capture/Compare 1 output Polarity */
.equ	TIM_CCER_CC1NE_Pos,	(2U)
.equ	TIM_CCER_CC1NE_Msk,	(0x1UL << TIM_CCER_CC1NE_Pos)       /*!< 0x00000004 */
.equ	TIM_CCER_CC1NE,	TIM_CCER_CC1NE_Msk                 /*!<Capture/Compare 1 Complementary output enable */
.equ	TIM_CCER_CC1NP_Pos,	(3U)
.equ	TIM_CCER_CC1NP_Msk,	(0x1UL << TIM_CCER_CC1NP_Pos)       /*!< 0x00000008 */
.equ	TIM_CCER_CC1NP,	TIM_CCER_CC1NP_Msk                 /*!<Capture/Compare 1 Complementary output Polarity */
.equ	TIM_CCER_CC2E_Pos,	(4U)
.equ	TIM_CCER_CC2E_Msk,	(0x1UL << TIM_CCER_CC2E_Pos)        /*!< 0x00000010 */
.equ	TIM_CCER_CC2E,	TIM_CCER_CC2E_Msk                  /*!<Capture/Compare 2 output enable */
.equ	TIM_CCER_CC2P_Pos,	(5U)
.equ	TIM_CCER_CC2P_Msk,	(0x1UL << TIM_CCER_CC2P_Pos)        /*!< 0x00000020 */
.equ	TIM_CCER_CC2P,	TIM_CCER_CC2P_Msk                  /*!<Capture/Compare 2 output Polarity */
.equ	TIM_CCER_CC2NE_Pos,	(6U)
.equ	TIM_CCER_CC2NE_Msk,	(0x1UL << TIM_CCER_CC2NE_Pos)       /*!< 0x00000040 */
.equ	TIM_CCER_CC2NE,	TIM_CCER_CC2NE_Msk                 /*!<Capture/Compare 2 Complementary output enable */
.equ	TIM_CCER_CC2NP_Pos,	(7U)
.equ	TIM_CCER_CC2NP_Msk,	(0x1UL << TIM_CCER_CC2NP_Pos)       /*!< 0x00000080 */
.equ	TIM_CCER_CC2NP,	TIM_CCER_CC2NP_Msk                 /*!<Capture/Compare 2 Complementary output Polarity */
.equ	TIM_CCER_CC3E_Pos,	(8U)
.equ	TIM_CCER_CC3E_Msk,	(0x1UL << TIM_CCER_CC3E_Pos)        /*!< 0x00000100 */
.equ	TIM_CCER_CC3E,	TIM_CCER_CC3E_Msk                  /*!<Capture/Compare 3 output enable */
.equ	TIM_CCER_CC3P_Pos,	(9U)
.equ	TIM_CCER_CC3P_Msk,	(0x1UL << TIM_CCER_CC3P_Pos)        /*!< 0x00000200 */
.equ	TIM_CCER_CC3P,	TIM_CCER_CC3P_Msk                  /*!<Capture/Compare 3 output Polarity */
.equ	TIM_CCER_CC3NE_Pos,	(10U)
.equ	TIM_CCER_CC3NE_Msk,	(0x1UL << TIM_CCER_CC3NE_Pos)       /*!< 0x00000400 */
.equ	TIM_CCER_CC3NE,	TIM_CCER_CC3NE_Msk                 /*!<Capture/Compare 3 Complementary output enable */
.equ	TIM_CCER_CC3NP_Pos,	(11U)
.equ	TIM_CCER_CC3NP_Msk,	(0x1UL << TIM_CCER_CC3NP_Pos)       /*!< 0x00000800 */
.equ	TIM_CCER_CC3NP,	TIM_CCER_CC3NP_Msk                 /*!<Capture/Compare 3 Complementary output Polarity */
.equ	TIM_CCER_CC4E_Pos,	(12U)
.equ	TIM_CCER_CC4E_Msk,	(0x1UL << TIM_CCER_CC4E_Pos)        /*!< 0x00001000 */
.equ	TIM_CCER_CC4E,	TIM_CCER_CC4E_Msk                  /*!<Capture/Compare 4 output enable */
.equ	TIM_CCER_CC4P_Pos,	(13U)
.equ	TIM_CCER_CC4P_Msk,	(0x1UL << TIM_CCER_CC4P_Pos)        /*!< 0x00002000 */
.equ	TIM_CCER_CC4P,	TIM_CCER_CC4P_Msk                  /*!<Capture/Compare 4 output Polarity */

/*******************  Bit definition for TIM_CNT register  *******************/
.equ	TIM_CNT_CNT_Pos,	0
.equ	TIM_CNT_CNT_Msk,	(0xFFFFFFFFUL << TIM_CNT_CNT_Pos)   /*!< 0xFFFFFFFF */
.equ	TIM_CNT_CNT,	TIM_CNT_CNT_Msk                    /*!<Counter Value */

/*******************  Bit definition for TIM_PSC register  *******************/
.equ	TIM_PSC_PSC_Pos,	0
.equ	TIM_PSC_PSC_Msk,	(0xFFFFUL << TIM_PSC_PSC_Pos)       /*!< 0x0000FFFF */
.equ	TIM_PSC_PSC,	TIM_PSC_PSC_Msk                    /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  *******************/
.equ	TIM_ARR_ARR_Pos,	0
.equ	TIM_ARR_ARR_Msk,	(0xFFFFFFFFUL << TIM_ARR_ARR_Pos)   /*!< 0xFFFFFFFF */
.equ	TIM_ARR_ARR,	TIM_ARR_ARR_Msk                    /*!<actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  *******************/
.equ	TIM_RCR_REP_Pos,	0
.equ	TIM_RCR_REP_Msk,	(0xFFUL << TIM_RCR_REP_Pos)         /*!< 0x000000FF */
.equ	TIM_RCR_REP,	TIM_RCR_REP_Msk                    /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  ******************/
.equ	TIM_CCR1_CCR1_Pos,	0
.equ	TIM_CCR1_CCR1_Msk,	(0xFFFFUL << TIM_CCR1_CCR1_Pos)     /*!< 0x0000FFFF */
.equ	TIM_CCR1_CCR1,	TIM_CCR1_CCR1_Msk                  /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  ******************/
.equ	TIM_CCR2_CCR2_Pos,	0
.equ	TIM_CCR2_CCR2_Msk,	(0xFFFFUL << TIM_CCR2_CCR2_Pos)     /*!< 0x0000FFFF */
.equ	TIM_CCR2_CCR2,	TIM_CCR2_CCR2_Msk                  /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  ******************/
.equ	TIM_CCR3_CCR3_Pos,	0
.equ	TIM_CCR3_CCR3_Msk,	(0xFFFFUL << TIM_CCR3_CCR3_Pos)     /*!< 0x0000FFFF */
.equ	TIM_CCR3_CCR3,	TIM_CCR3_CCR3_Msk                  /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  ******************/
.equ	TIM_CCR4_CCR4_Pos,	0
.equ	TIM_CCR4_CCR4_Msk,	(0xFFFFUL << TIM_CCR4_CCR4_Pos)     /*!< 0x0000FFFF */
.equ	TIM_CCR4_CCR4,	TIM_CCR4_CCR4_Msk                  /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_BDTR register  ******************/
.equ	TIM_BDTR_DTG_Pos,	0
.equ	TIM_BDTR_DTG_Msk,	(0xFFUL << TIM_BDTR_DTG_Pos)        /*!< 0x000000FF */
.equ	TIM_BDTR_DTG,	TIM_BDTR_DTG_Msk                   /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
.equ	TIM_BDTR_DTG_0,	(0x01UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000001 */
.equ	TIM_BDTR_DTG_1,	(0x02UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000002 */
.equ	TIM_BDTR_DTG_2,	(0x04UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000004 */
.equ	TIM_BDTR_DTG_3,	(0x08UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000008 */
.equ	TIM_BDTR_DTG_4,	(0x10UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000010 */
.equ	TIM_BDTR_DTG_5,	(0x20UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000020 */
.equ	TIM_BDTR_DTG_6,	(0x40UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000040 */
.equ	TIM_BDTR_DTG_7,	(0x80UL << TIM_BDTR_DTG_Pos)        /*!< 0x00000080 */

.equ	TIM_BDTR_LOCK_Pos,	(8U)
.equ	TIM_BDTR_LOCK_Msk,	(0x3UL << TIM_BDTR_LOCK_Pos)        /*!< 0x00000300 */
.equ	TIM_BDTR_LOCK,	TIM_BDTR_LOCK_Msk                  /*!<LOCK[1:0] bits (Lock Configuration) */
.equ	TIM_BDTR_LOCK_0,	(0x1UL << TIM_BDTR_LOCK_Pos)        /*!< 0x00000100 */
.equ	TIM_BDTR_LOCK_1,	(0x2UL << TIM_BDTR_LOCK_Pos)        /*!< 0x00000200 */

.equ	TIM_BDTR_OSSI_Pos,	(10U)
.equ	TIM_BDTR_OSSI_Msk,	(0x1UL << TIM_BDTR_OSSI_Pos)        /*!< 0x00000400 */
.equ	TIM_BDTR_OSSI,	TIM_BDTR_OSSI_Msk                  /*!<Off-State Selection for Idle mode */
.equ	TIM_BDTR_OSSR_Pos,	(11U)
.equ	TIM_BDTR_OSSR_Msk,	(0x1UL << TIM_BDTR_OSSR_Pos)        /*!< 0x00000800 */
.equ	TIM_BDTR_OSSR,	TIM_BDTR_OSSR_Msk                  /*!<Off-State Selection for Run mode */
.equ	TIM_BDTR_BKE_Pos,	(12U)
.equ	TIM_BDTR_BKE_Msk,	(0x1UL << TIM_BDTR_BKE_Pos)         /*!< 0x00001000 */
.equ	TIM_BDTR_BKE,	TIM_BDTR_BKE_Msk                   /*!<Break enable */
.equ	TIM_BDTR_BKP_Pos,	(13U)
.equ	TIM_BDTR_BKP_Msk,	(0x1UL << TIM_BDTR_BKP_Pos)         /*!< 0x00002000 */
.equ	TIM_BDTR_BKP,	TIM_BDTR_BKP_Msk                   /*!<Break Polarity */
.equ	TIM_BDTR_AOE_Pos,	(14U)
.equ	TIM_BDTR_AOE_Msk,	(0x1UL << TIM_BDTR_AOE_Pos)         /*!< 0x00004000 */
.equ	TIM_BDTR_AOE,	TIM_BDTR_AOE_Msk                   /*!<Automatic Output enable */
.equ	TIM_BDTR_MOE_Pos,	(15U)
.equ	TIM_BDTR_MOE_Msk,	(0x1UL << TIM_BDTR_MOE_Pos)         /*!< 0x00008000 */
.equ	TIM_BDTR_MOE,	TIM_BDTR_MOE_Msk                   /*!<Main Output enable */

/*******************  Bit definition for TIM_DCR register  *******************/
.equ	TIM_DCR_DBA_Pos,	0
.equ	TIM_DCR_DBA_Msk,	(0x1FUL << TIM_DCR_DBA_Pos)         /*!< 0x0000001F */
.equ	TIM_DCR_DBA,	TIM_DCR_DBA_Msk                    /*!<DBA[4:0] bits (DMA Base Address) */
.equ	TIM_DCR_DBA_0,	(0x01UL << TIM_DCR_DBA_Pos)         /*!< 0x00000001 */
.equ	TIM_DCR_DBA_1,	(0x02UL << TIM_DCR_DBA_Pos)         /*!< 0x00000002 */
.equ	TIM_DCR_DBA_2,	(0x04UL << TIM_DCR_DBA_Pos)         /*!< 0x00000004 */
.equ	TIM_DCR_DBA_3,	(0x08UL << TIM_DCR_DBA_Pos)         /*!< 0x00000008 */
.equ	TIM_DCR_DBA_4,	(0x10UL << TIM_DCR_DBA_Pos)         /*!< 0x00000010 */

.equ	TIM_DCR_DBL_Pos,	(8U)
.equ	TIM_DCR_DBL_Msk,	(0x1FUL << TIM_DCR_DBL_Pos)         /*!< 0x00001F00 */
.equ	TIM_DCR_DBL,	TIM_DCR_DBL_Msk                    /*!<DBL[4:0] bits (DMA Burst Length) */
.equ	TIM_DCR_DBL_0,	(0x01UL << TIM_DCR_DBL_Pos)         /*!< 0x00000100 */
.equ	TIM_DCR_DBL_1,	(0x02UL << TIM_DCR_DBL_Pos)         /*!< 0x00000200 */
.equ	TIM_DCR_DBL_2,	(0x04UL << TIM_DCR_DBL_Pos)         /*!< 0x00000400 */
.equ	TIM_DCR_DBL_3,	(0x08UL << TIM_DCR_DBL_Pos)         /*!< 0x00000800 */
.equ	TIM_DCR_DBL_4,	(0x10UL << TIM_DCR_DBL_Pos)         /*!< 0x00001000 */

/*******************  Bit definition for TIM_DMAR register  ******************/
.equ	TIM_DMAR_DMAB_Pos,	0
.equ	TIM_DMAR_DMAB_Msk,	(0xFFFFUL << TIM_DMAR_DMAB_Pos)     /*!< 0x0000FFFF */
.equ	TIM_DMAR_DMAB,	TIM_DMAR_DMAB_Msk                  /*!<DMA register for burst accesses */

/******************************************************************************/
/*                                                                            */
/*                             Real-Time Clock                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for RTC_CRH register  ********************/
.equ	RTC_CRH_SECIE_Pos,	0
.equ	RTC_CRH_SECIE_Msk,	(0x1UL << RTC_CRH_SECIE_Pos)        /*!< 0x00000001 */
.equ	RTC_CRH_SECIE,	RTC_CRH_SECIE_Msk                  /*!< Second Interrupt Enable */
.equ	RTC_CRH_ALRIE_Pos,	(1U)
.equ	RTC_CRH_ALRIE_Msk,	(0x1UL << RTC_CRH_ALRIE_Pos)        /*!< 0x00000002 */
.equ	RTC_CRH_ALRIE,	RTC_CRH_ALRIE_Msk                  /*!< Alarm Interrupt Enable */
.equ	RTC_CRH_OWIE_Pos,	(2U)
.equ	RTC_CRH_OWIE_Msk,	(0x1UL << RTC_CRH_OWIE_Pos)         /*!< 0x00000004 */
.equ	RTC_CRH_OWIE,	RTC_CRH_OWIE_Msk                   /*!< OverfloW Interrupt Enable */

/*******************  Bit definition for RTC_CRL register  ********************/
.equ	RTC_CRL_SECF_Pos,	0
.equ	RTC_CRL_SECF_Msk,	(0x1UL << RTC_CRL_SECF_Pos)         /*!< 0x00000001 */
.equ	RTC_CRL_SECF,	RTC_CRL_SECF_Msk                   /*!< Second Flag */
.equ	RTC_CRL_ALRF_Pos,	(1U)
.equ	RTC_CRL_ALRF_Msk,	(0x1UL << RTC_CRL_ALRF_Pos)         /*!< 0x00000002 */
.equ	RTC_CRL_ALRF,	RTC_CRL_ALRF_Msk                   /*!< Alarm Flag */
.equ	RTC_CRL_OWF_Pos,	(2U)
.equ	RTC_CRL_OWF_Msk,	(0x1UL << RTC_CRL_OWF_Pos)          /*!< 0x00000004 */
.equ	RTC_CRL_OWF,	RTC_CRL_OWF_Msk                    /*!< OverfloW Flag */
.equ	RTC_CRL_RSF_Pos,	(3U)
.equ	RTC_CRL_RSF_Msk,	(0x1UL << RTC_CRL_RSF_Pos)          /*!< 0x00000008 */
.equ	RTC_CRL_RSF,	RTC_CRL_RSF_Msk                    /*!< Registers Synchronized Flag */
.equ	RTC_CRL_CNF_Pos,	(4U)
.equ	RTC_CRL_CNF_Msk,	(0x1UL << RTC_CRL_CNF_Pos)          /*!< 0x00000010 */
.equ	RTC_CRL_CNF,	RTC_CRL_CNF_Msk                    /*!< Configuration Flag */
.equ	RTC_CRL_RTOFF_Pos,	(5U)
.equ	RTC_CRL_RTOFF_Msk,	(0x1UL << RTC_CRL_RTOFF_Pos)        /*!< 0x00000020 */
.equ	RTC_CRL_RTOFF,	RTC_CRL_RTOFF_Msk                  /*!< RTC operation OFF */

/*******************  Bit definition for RTC_PRLH register  *******************/
.equ	RTC_PRLH_PRL_Pos,	0
.equ	RTC_PRLH_PRL_Msk,	(0xFUL << RTC_PRLH_PRL_Pos)         /*!< 0x0000000F */
.equ	RTC_PRLH_PRL,	RTC_PRLH_PRL_Msk                   /*!< RTC Prescaler Reload Value High */

/*******************  Bit definition for RTC_PRLL register  *******************/
.equ	RTC_PRLL_PRL_Pos,	0
.equ	RTC_PRLL_PRL_Msk,	(0xFFFFUL << RTC_PRLL_PRL_Pos)      /*!< 0x0000FFFF */
.equ	RTC_PRLL_PRL,	RTC_PRLL_PRL_Msk                   /*!< RTC Prescaler Reload Value Low */

/*******************  Bit definition for RTC_DIVH register  *******************/
.equ	RTC_DIVH_RTC_DIV_Pos,	0
.equ	RTC_DIVH_RTC_DIV_Msk,	(0xFUL << RTC_DIVH_RTC_DIV_Pos)     /*!< 0x0000000F */
.equ	RTC_DIVH_RTC_DIV,	RTC_DIVH_RTC_DIV_Msk               /*!< RTC Clock Divider High */

/*******************  Bit definition for RTC_DIVL register  *******************/
.equ	RTC_DIVL_RTC_DIV_Pos,	0
.equ	RTC_DIVL_RTC_DIV_Msk,	(0xFFFFUL << RTC_DIVL_RTC_DIV_Pos)  /*!< 0x0000FFFF */
.equ	RTC_DIVL_RTC_DIV,	RTC_DIVL_RTC_DIV_Msk               /*!< RTC Clock Divider Low */

/*******************  Bit definition for RTC_CNTH register  *******************/
.equ	RTC_CNTH_RTC_CNT_Pos,	0
.equ	RTC_CNTH_RTC_CNT_Msk,	(0xFFFFUL << RTC_CNTH_RTC_CNT_Pos)  /*!< 0x0000FFFF */
.equ	RTC_CNTH_RTC_CNT,	RTC_CNTH_RTC_CNT_Msk               /*!< RTC Counter High */

/*******************  Bit definition for RTC_CNTL register  *******************/
.equ	RTC_CNTL_RTC_CNT_Pos,	0
.equ	RTC_CNTL_RTC_CNT_Msk,	(0xFFFFUL << RTC_CNTL_RTC_CNT_Pos)  /*!< 0x0000FFFF */
.equ	RTC_CNTL_RTC_CNT,	RTC_CNTL_RTC_CNT_Msk               /*!< RTC Counter Low */

/*******************  Bit definition for RTC_ALRH register  *******************/
.equ	RTC_ALRH_RTC_ALR_Pos,	0
.equ	RTC_ALRH_RTC_ALR_Msk,	(0xFFFFUL << RTC_ALRH_RTC_ALR_Pos)  /*!< 0x0000FFFF */
.equ	RTC_ALRH_RTC_ALR,	RTC_ALRH_RTC_ALR_Msk               /*!< RTC Alarm High */

/*******************  Bit definition for RTC_ALRL register  *******************/
.equ	RTC_ALRL_RTC_ALR_Pos,	0
.equ	RTC_ALRL_RTC_ALR_Msk,	(0xFFFFUL << RTC_ALRL_RTC_ALR_Pos)  /*!< 0x0000FFFF */
.equ	RTC_ALRL_RTC_ALR,	RTC_ALRL_RTC_ALR_Msk               /*!< RTC Alarm Low */

/******************************************************************************/
/*                                                                            */
/*                        Independent WATCHDOG (IWDG)                         */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
.equ	IWDG_KR_KEY_Pos,	0
.equ	IWDG_KR_KEY_Msk,	(0xFFFFUL << IWDG_KR_KEY_Pos)       /*!< 0x0000FFFF */
.equ	IWDG_KR_KEY,	IWDG_KR_KEY_Msk                    /*!< Key value (write only read 0000h) */

/*******************  Bit definition for IWDG_PR register  ********************/
.equ	IWDG_PR_PR_Pos,	0
.equ	IWDG_PR_PR_Msk,	(0x7UL << IWDG_PR_PR_Pos)           /*!< 0x00000007 */
.equ	IWDG_PR_PR,	IWDG_PR_PR_Msk                     /*!< PR[2:0] (Prescaler divider) */
.equ	IWDG_PR_PR_0,	(0x1UL << IWDG_PR_PR_Pos)           /*!< 0x00000001 */
.equ	IWDG_PR_PR_1,	(0x2UL << IWDG_PR_PR_Pos)           /*!< 0x00000002 */
.equ	IWDG_PR_PR_2,	(0x4UL << IWDG_PR_PR_Pos)           /*!< 0x00000004 */

/*******************  Bit definition for IWDG_RLR register  *******************/
.equ	IWDG_RLR_RL_Pos,	0
.equ	IWDG_RLR_RL_Msk,	(0xFFFUL << IWDG_RLR_RL_Pos)        /*!< 0x00000FFF */
.equ	IWDG_RLR_RL,	IWDG_RLR_RL_Msk                    /*!< Watchdog counter reload value */

/*******************  Bit definition for IWDG_SR register  ********************/
.equ	IWDG_SR_PVU_Pos,	0
.equ	IWDG_SR_PVU_Msk,	(0x1UL << IWDG_SR_PVU_Pos)          /*!< 0x00000001 */
.equ	IWDG_SR_PVU,	IWDG_SR_PVU_Msk                    /*!< Watchdog prescaler value update */
.equ	IWDG_SR_RVU_Pos,	(1U)
.equ	IWDG_SR_RVU_Msk,	(0x1UL << IWDG_SR_RVU_Pos)          /*!< 0x00000002 */
.equ	IWDG_SR_RVU,	IWDG_SR_RVU_Msk                    /*!< Watchdog counter reload value update */

/******************************************************************************/
/*                                                                            */
/*                         Window WATCHDOG (WWDG)                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
.equ	WWDG_CR_T_Pos,	0
.equ	WWDG_CR_T_Msk,	(0x7FUL << WWDG_CR_T_Pos)           /*!< 0x0000007F */
.equ	WWDG_CR_T,	WWDG_CR_T_Msk                      /*!< T[6:0] bits (7-Bit counter (MSB to LSB)) */
.equ	WWDG_CR_T_0,	(0x01UL << WWDG_CR_T_Pos)           /*!< 0x00000001 */
.equ	WWDG_CR_T_1,	(0x02UL << WWDG_CR_T_Pos)           /*!< 0x00000002 */
.equ	WWDG_CR_T_2,	(0x04UL << WWDG_CR_T_Pos)           /*!< 0x00000004 */
.equ	WWDG_CR_T_3,	(0x08UL << WWDG_CR_T_Pos)           /*!< 0x00000008 */
.equ	WWDG_CR_T_4,	(0x10UL << WWDG_CR_T_Pos)           /*!< 0x00000010 */
.equ	WWDG_CR_T_5,	(0x20UL << WWDG_CR_T_Pos)           /*!< 0x00000020 */
.equ	WWDG_CR_T_6,	(0x40UL << WWDG_CR_T_Pos)           /*!< 0x00000040 */

/* Legacy defines */
.equ	WWDG_CR_T0,	WWDG_CR_T_0
.equ	WWDG_CR_T1,	WWDG_CR_T_1
.equ	WWDG_CR_T2,	WWDG_CR_T_2
.equ	WWDG_CR_T3,	WWDG_CR_T_3
.equ	WWDG_CR_T4,	WWDG_CR_T_4
.equ	WWDG_CR_T5,	WWDG_CR_T_5
.equ	WWDG_CR_T6,	WWDG_CR_T_6

.equ	WWDG_CR_WDGA_Pos,	(7U)
.equ	WWDG_CR_WDGA_Msk,	(0x1UL << WWDG_CR_WDGA_Pos)         /*!< 0x00000080 */
.equ	WWDG_CR_WDGA,	WWDG_CR_WDGA_Msk                   /*!< Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
.equ	WWDG_CFR_W_Pos,	0
.equ	WWDG_CFR_W_Msk,	(0x7FUL << WWDG_CFR_W_Pos)          /*!< 0x0000007F */
.equ	WWDG_CFR_W,	WWDG_CFR_W_Msk                     /*!< W[6:0] bits (7-bit window value) */
.equ	WWDG_CFR_W_0,	(0x01UL << WWDG_CFR_W_Pos)          /*!< 0x00000001 */
.equ	WWDG_CFR_W_1,	(0x02UL << WWDG_CFR_W_Pos)          /*!< 0x00000002 */
.equ	WWDG_CFR_W_2,	(0x04UL << WWDG_CFR_W_Pos)          /*!< 0x00000004 */
.equ	WWDG_CFR_W_3,	(0x08UL << WWDG_CFR_W_Pos)          /*!< 0x00000008 */
.equ	WWDG_CFR_W_4,	(0x10UL << WWDG_CFR_W_Pos)          /*!< 0x00000010 */
.equ	WWDG_CFR_W_5,	(0x20UL << WWDG_CFR_W_Pos)          /*!< 0x00000020 */
.equ	WWDG_CFR_W_6,	(0x40UL << WWDG_CFR_W_Pos)          /*!< 0x00000040 */

/* Legacy defines */
.equ	WWDG_CFR_W0,	WWDG_CFR_W_0
.equ	WWDG_CFR_W1,	WWDG_CFR_W_1
.equ	WWDG_CFR_W2,	WWDG_CFR_W_2
.equ	WWDG_CFR_W3,	WWDG_CFR_W_3
.equ	WWDG_CFR_W4,	WWDG_CFR_W_4
.equ	WWDG_CFR_W5,	WWDG_CFR_W_5
.equ	WWDG_CFR_W6,	WWDG_CFR_W_6

.equ	WWDG_CFR_WDGTB_Pos,	(7U)
.equ	WWDG_CFR_WDGTB_Msk,	(0x3UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000180 */
.equ	WWDG_CFR_WDGTB,	WWDG_CFR_WDGTB_Msk                 /*!< WDGTB[1:0] bits (Timer Base) */
.equ	WWDG_CFR_WDGTB_0,	(0x1UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000080 */
.equ	WWDG_CFR_WDGTB_1,	(0x2UL << WWDG_CFR_WDGTB_Pos)       /*!< 0x00000100 */

/* Legacy defines */
.equ	WWDG_CFR_WDGTB0,	WWDG_CFR_WDGTB_0
.equ	WWDG_CFR_WDGTB1,	WWDG_CFR_WDGTB_1

.equ	WWDG_CFR_EWI_Pos,	(9U)
.equ	WWDG_CFR_EWI_Msk,	(0x1UL << WWDG_CFR_EWI_Pos)         /*!< 0x00000200 */
.equ	WWDG_CFR_EWI,	WWDG_CFR_EWI_Msk                   /*!< Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
.equ	WWDG_SR_EWIF_Pos,	0
.equ	WWDG_SR_EWIF_Msk,	(0x1UL << WWDG_SR_EWIF_Pos)         /*!< 0x00000001 */
.equ	WWDG_SR_EWIF,	WWDG_SR_EWIF_Msk                   /*!< Early Wakeup Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                                   USB Device FS                            */
/*                                                                            */
/******************************************************************************/

/*!< Endpoint-specific registers */
.equ	USB_EP0R,	USB_BASE                      /*!< Endpoint 0 register address */
.equ	USB_EP1R,	(USB_BASE + 0x00000004)       /*!< Endpoint 1 register address */
.equ	USB_EP2R,	(USB_BASE + 0x00000008)       /*!< Endpoint 2 register address */
.equ	USB_EP3R,	(USB_BASE + 0x0000000C)       /*!< Endpoint 3 register address */
.equ	USB_EP4R,	(USB_BASE + 0x00000010)       /*!< Endpoint 4 register address */
.equ	USB_EP5R,	(USB_BASE + 0x00000014)       /*!< Endpoint 5 register address */
.equ	USB_EP6R,	(USB_BASE + 0x00000018)       /*!< Endpoint 6 register address */
.equ	USB_EP7R,	(USB_BASE + 0x0000001C)       /*!< Endpoint 7 register address */

/* bit positions */
.equ	USB_EP_CTR_RX_Pos,	(15U)
.equ	USB_EP_CTR_RX_Msk,	(0x1UL << USB_EP_CTR_RX_Pos)    /*!< 0x00008000 */
.equ	USB_EP_CTR_RX,	USB_EP_CTR_RX_Msk              /*!< EndPoint Correct TRansfer RX */
.equ	USB_EP_DTOG_RX_Pos,	(14U)
.equ	USB_EP_DTOG_RX_Msk,	(0x1UL << USB_EP_DTOG_RX_Pos)   /*!< 0x00004000 */
.equ	USB_EP_DTOG_RX,	USB_EP_DTOG_RX_Msk             /*!< EndPoint Data TOGGLE RX */
.equ	USB_EPRX_STAT_Pos,	(12U)
.equ	USB_EPRX_STAT_Msk,	(0x3UL << USB_EPRX_STAT_Pos)    /*!< 0x00003000 */
.equ	USB_EPRX_STAT,	USB_EPRX_STAT_Msk              /*!< EndPoint RX STATus bit field */
.equ	USB_EP_SETUP_Pos,	(11U)
.equ	USB_EP_SETUP_Msk,	(0x1UL << USB_EP_SETUP_Pos)     /*!< 0x00000800 */
.equ	USB_EP_SETUP,	USB_EP_SETUP_Msk               /*!< EndPoint SETUP */
.equ	USB_EP_T_FIELD_Pos,	(9U)
.equ	USB_EP_T_FIELD_Msk,	(0x3UL << USB_EP_T_FIELD_Pos)   /*!< 0x00000600 */
.equ	USB_EP_T_FIELD,	USB_EP_T_FIELD_Msk             /*!< EndPoint TYPE */
.equ	USB_EP_KIND_Pos,	(8U)
.equ	USB_EP_KIND_Msk,	(0x1UL << USB_EP_KIND_Pos)      /*!< 0x00000100 */
.equ	USB_EP_KIND,	USB_EP_KIND_Msk                /*!< EndPoint KIND */
.equ	USB_EP_CTR_TX_Pos,	(7U)
.equ	USB_EP_CTR_TX_Msk,	(0x1UL << USB_EP_CTR_TX_Pos)    /*!< 0x00000080 */
.equ	USB_EP_CTR_TX,	USB_EP_CTR_TX_Msk              /*!< EndPoint Correct TRansfer TX */
.equ	USB_EP_DTOG_TX_Pos,	(6U)
.equ	USB_EP_DTOG_TX_Msk,	(0x1UL << USB_EP_DTOG_TX_Pos)   /*!< 0x00000040 */
.equ	USB_EP_DTOG_TX,	USB_EP_DTOG_TX_Msk             /*!< EndPoint Data TOGGLE TX */
.equ	USB_EPTX_STAT_Pos,	(4U)
.equ	USB_EPTX_STAT_Msk,	(0x3UL << USB_EPTX_STAT_Pos)    /*!< 0x00000030 */
.equ	USB_EPTX_STAT,	USB_EPTX_STAT_Msk              /*!< EndPoint TX STATus bit field */
.equ	USB_EPADDR_FIELD_Pos,	0
.equ	USB_EPADDR_FIELD_Msk,	(0xFUL << USB_EPADDR_FIELD_Pos) /*!< 0x0000000F */
.equ	USB_EPADDR_FIELD,	USB_EPADDR_FIELD_Msk           /*!< EndPoint ADDRess FIELD */

/* EndPoint REGister MASK (no toggle fields) */
.equ	USB_EPREG_MASK,	(USB_EP_CTR_RX|USB_EP_SETUP|USB_EP_T_FIELD|USB_EP_KIND|USB_EP_CTR_TX|USB_EPADDR_FIELD)
                                                                           /*!< EP_TYPE[1:0] EndPoint TYPE */
.equ	USB_EP_TYPE_MASK_Pos,	(9U)
.equ	USB_EP_TYPE_MASK_Msk,	(0x3UL << USB_EP_TYPE_MASK_Pos) /*!< 0x00000600 */
.equ	USB_EP_TYPE_MASK,	USB_EP_TYPE_MASK_Msk           /*!< EndPoint TYPE Mask */
.equ	USB_EP_BULK,	0x00000000U                    /*!< EndPoint BULK */
.equ	USB_EP_CONTROL,	0x00000200U                    /*!< EndPoint CONTROL */
.equ	USB_EP_ISOCHRONOUS,	0x00000400U                    /*!< EndPoint ISOCHRONOUS */
.equ	USB_EP_INTERRUPT,	0x00000600U                    /*!< EndPoint INTERRUPT */
.equ	USB_EP_T_MASK,	(~USB_EP_T_FIELD & USB_EPREG_MASK)

.equ	USB_EPKIND_MASK,	(~USB_EP_KIND & USB_EPREG_MASK)  /*!< EP_KIND EndPoint KIND */
                                                                               /*!< STAT_TX[1:0] STATus for TX transfer */
.equ	USB_EP_TX_DIS,	0x00000000U                    /*!< EndPoint TX DISabled */
.equ	USB_EP_TX_STALL,	0x00000010U                    /*!< EndPoint TX STALLed */
.equ	USB_EP_TX_NAK,	0x00000020U                    /*!< EndPoint TX NAKed */
.equ	USB_EP_TX_VALID,	0x00000030U                    /*!< EndPoint TX VALID */
.equ	USB_EPTX_DTOG1,	0x00000010U                    /*!< EndPoint TX Data TOGgle bit1 */
.equ	USB_EPTX_DTOG2,	0x00000020U                    /*!< EndPoint TX Data TOGgle bit2 */
.equ	USB_EPTX_DTOGMASK,	(USB_EPTX_STAT|USB_EPREG_MASK)
                                                                               /*!< STAT_RX[1:0] STATus for RX transfer */
.equ	USB_EP_RX_DIS,	0x00000000U                    /*!< EndPoint RX DISabled */
.equ	USB_EP_RX_STALL,	0x00001000U                    /*!< EndPoint RX STALLed */
.equ	USB_EP_RX_NAK,	0x00002000U                    /*!< EndPoint RX NAKed */
.equ	USB_EP_RX_VALID,	0x00003000U                    /*!< EndPoint RX VALID */
.equ	USB_EPRX_DTOG1,	0x00001000U                    /*!< EndPoint RX Data TOGgle bit1 */
.equ	USB_EPRX_DTOG2,	0x00002000U                    /*!< EndPoint RX Data TOGgle bit1 */
.equ	USB_EPRX_DTOGMASK,	(USB_EPRX_STAT|USB_EPREG_MASK)

/*******************  Bit definition for USB_EP0R register  *******************/
.equ	USB_EP0R_EA_Pos,	0
.equ	USB_EP0R_EA_Msk,	(0xFUL << USB_EP0R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP0R_EA,	USB_EP0R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP0R_STAT_TX_Pos,	(4U)
.equ	USB_EP0R_STAT_TX_Msk,	(0x3UL << USB_EP0R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP0R_STAT_TX,	USB_EP0R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP0R_STAT_TX_0,	(0x1UL << USB_EP0R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP0R_STAT_TX_1,	(0x2UL << USB_EP0R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP0R_DTOG_TX_Pos,	(6U)
.equ	USB_EP0R_DTOG_TX_Msk,	(0x1UL << USB_EP0R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP0R_DTOG_TX,	USB_EP0R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP0R_CTR_TX_Pos,	(7U)
.equ	USB_EP0R_CTR_TX_Msk,	(0x1UL << USB_EP0R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP0R_CTR_TX,	USB_EP0R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP0R_EP_KIND_Pos,	(8U)
.equ	USB_EP0R_EP_KIND_Msk,	(0x1UL << USB_EP0R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP0R_EP_KIND,	USB_EP0R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP0R_EP_TYPE_Pos,	(9U)
.equ	USB_EP0R_EP_TYPE_Msk,	(0x3UL << USB_EP0R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP0R_EP_TYPE,	USB_EP0R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP0R_EP_TYPE_0,	(0x1UL << USB_EP0R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP0R_EP_TYPE_1,	(0x2UL << USB_EP0R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP0R_SETUP_Pos,	(11U)
.equ	USB_EP0R_SETUP_Msk,	(0x1UL << USB_EP0R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP0R_SETUP,	USB_EP0R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP0R_STAT_RX_Pos,	(12U)
.equ	USB_EP0R_STAT_RX_Msk,	(0x3UL << USB_EP0R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP0R_STAT_RX,	USB_EP0R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP0R_STAT_RX_0,	(0x1UL << USB_EP0R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP0R_STAT_RX_1,	(0x2UL << USB_EP0R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP0R_DTOG_RX_Pos,	(14U)
.equ	USB_EP0R_DTOG_RX_Msk,	(0x1UL << USB_EP0R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP0R_DTOG_RX,	USB_EP0R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP0R_CTR_RX_Pos,	(15U)
.equ	USB_EP0R_CTR_RX_Msk,	(0x1UL << USB_EP0R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP0R_CTR_RX,	USB_EP0R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP1R register  *******************/
.equ	USB_EP1R_EA_Pos,	0
.equ	USB_EP1R_EA_Msk,	(0xFUL << USB_EP1R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP1R_EA,	USB_EP1R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP1R_STAT_TX_Pos,	(4U)
.equ	USB_EP1R_STAT_TX_Msk,	(0x3UL << USB_EP1R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP1R_STAT_TX,	USB_EP1R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP1R_STAT_TX_0,	(0x1UL << USB_EP1R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP1R_STAT_TX_1,	(0x2UL << USB_EP1R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP1R_DTOG_TX_Pos,	(6U)
.equ	USB_EP1R_DTOG_TX_Msk,	(0x1UL << USB_EP1R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP1R_DTOG_TX,	USB_EP1R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP1R_CTR_TX_Pos,	(7U)
.equ	USB_EP1R_CTR_TX_Msk,	(0x1UL << USB_EP1R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP1R_CTR_TX,	USB_EP1R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP1R_EP_KIND_Pos,	(8U)
.equ	USB_EP1R_EP_KIND_Msk,	(0x1UL << USB_EP1R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP1R_EP_KIND,	USB_EP1R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP1R_EP_TYPE_Pos,	(9U)
.equ	USB_EP1R_EP_TYPE_Msk,	(0x3UL << USB_EP1R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP1R_EP_TYPE,	USB_EP1R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP1R_EP_TYPE_0,	(0x1UL << USB_EP1R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP1R_EP_TYPE_1,	(0x2UL << USB_EP1R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP1R_SETUP_Pos,	(11U)
.equ	USB_EP1R_SETUP_Msk,	(0x1UL << USB_EP1R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP1R_SETUP,	USB_EP1R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP1R_STAT_RX_Pos,	(12U)
.equ	USB_EP1R_STAT_RX_Msk,	(0x3UL << USB_EP1R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP1R_STAT_RX,	USB_EP1R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP1R_STAT_RX_0,	(0x1UL << USB_EP1R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP1R_STAT_RX_1,	(0x2UL << USB_EP1R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP1R_DTOG_RX_Pos,	(14U)
.equ	USB_EP1R_DTOG_RX_Msk,	(0x1UL << USB_EP1R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP1R_DTOG_RX,	USB_EP1R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP1R_CTR_RX_Pos,	(15U)
.equ	USB_EP1R_CTR_RX_Msk,	(0x1UL << USB_EP1R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP1R_CTR_RX,	USB_EP1R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP2R register  *******************/
.equ	USB_EP2R_EA_Pos,	0
.equ	USB_EP2R_EA_Msk,	(0xFUL << USB_EP2R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP2R_EA,	USB_EP2R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP2R_STAT_TX_Pos,	(4U)
.equ	USB_EP2R_STAT_TX_Msk,	(0x3UL << USB_EP2R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP2R_STAT_TX,	USB_EP2R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP2R_STAT_TX_0,	(0x1UL << USB_EP2R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP2R_STAT_TX_1,	(0x2UL << USB_EP2R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP2R_DTOG_TX_Pos,	(6U)
.equ	USB_EP2R_DTOG_TX_Msk,	(0x1UL << USB_EP2R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP2R_DTOG_TX,	USB_EP2R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP2R_CTR_TX_Pos,	(7U)
.equ	USB_EP2R_CTR_TX_Msk,	(0x1UL << USB_EP2R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP2R_CTR_TX,	USB_EP2R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP2R_EP_KIND_Pos,	(8U)
.equ	USB_EP2R_EP_KIND_Msk,	(0x1UL << USB_EP2R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP2R_EP_KIND,	USB_EP2R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP2R_EP_TYPE_Pos,	(9U)
.equ	USB_EP2R_EP_TYPE_Msk,	(0x3UL << USB_EP2R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP2R_EP_TYPE,	USB_EP2R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP2R_EP_TYPE_0,	(0x1UL << USB_EP2R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP2R_EP_TYPE_1,	(0x2UL << USB_EP2R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP2R_SETUP_Pos,	(11U)
.equ	USB_EP2R_SETUP_Msk,	(0x1UL << USB_EP2R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP2R_SETUP,	USB_EP2R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP2R_STAT_RX_Pos,	(12U)
.equ	USB_EP2R_STAT_RX_Msk,	(0x3UL << USB_EP2R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP2R_STAT_RX,	USB_EP2R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP2R_STAT_RX_0,	(0x1UL << USB_EP2R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP2R_STAT_RX_1,	(0x2UL << USB_EP2R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP2R_DTOG_RX_Pos,	(14U)
.equ	USB_EP2R_DTOG_RX_Msk,	(0x1UL << USB_EP2R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP2R_DTOG_RX,	USB_EP2R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP2R_CTR_RX_Pos,	(15U)
.equ	USB_EP2R_CTR_RX_Msk,	(0x1UL << USB_EP2R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP2R_CTR_RX,	USB_EP2R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP3R register  *******************/
.equ	USB_EP3R_EA_Pos,	0
.equ	USB_EP3R_EA_Msk,	(0xFUL << USB_EP3R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP3R_EA,	USB_EP3R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP3R_STAT_TX_Pos,	(4U)
.equ	USB_EP3R_STAT_TX_Msk,	(0x3UL << USB_EP3R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP3R_STAT_TX,	USB_EP3R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP3R_STAT_TX_0,	(0x1UL << USB_EP3R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP3R_STAT_TX_1,	(0x2UL << USB_EP3R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP3R_DTOG_TX_Pos,	(6U)
.equ	USB_EP3R_DTOG_TX_Msk,	(0x1UL << USB_EP3R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP3R_DTOG_TX,	USB_EP3R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP3R_CTR_TX_Pos,	(7U)
.equ	USB_EP3R_CTR_TX_Msk,	(0x1UL << USB_EP3R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP3R_CTR_TX,	USB_EP3R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP3R_EP_KIND_Pos,	(8U)
.equ	USB_EP3R_EP_KIND_Msk,	(0x1UL << USB_EP3R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP3R_EP_KIND,	USB_EP3R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP3R_EP_TYPE_Pos,	(9U)
.equ	USB_EP3R_EP_TYPE_Msk,	(0x3UL << USB_EP3R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP3R_EP_TYPE,	USB_EP3R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP3R_EP_TYPE_0,	(0x1UL << USB_EP3R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP3R_EP_TYPE_1,	(0x2UL << USB_EP3R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP3R_SETUP_Pos,	(11U)
.equ	USB_EP3R_SETUP_Msk,	(0x1UL << USB_EP3R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP3R_SETUP,	USB_EP3R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP3R_STAT_RX_Pos,	(12U)
.equ	USB_EP3R_STAT_RX_Msk,	(0x3UL << USB_EP3R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP3R_STAT_RX,	USB_EP3R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP3R_STAT_RX_0,	(0x1UL << USB_EP3R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP3R_STAT_RX_1,	(0x2UL << USB_EP3R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP3R_DTOG_RX_Pos,	(14U)
.equ	USB_EP3R_DTOG_RX_Msk,	(0x1UL << USB_EP3R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP3R_DTOG_RX,	USB_EP3R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP3R_CTR_RX_Pos,	(15U)
.equ	USB_EP3R_CTR_RX_Msk,	(0x1UL << USB_EP3R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP3R_CTR_RX,	USB_EP3R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP4R register  *******************/
.equ	USB_EP4R_EA_Pos,	0
.equ	USB_EP4R_EA_Msk,	(0xFUL << USB_EP4R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP4R_EA,	USB_EP4R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP4R_STAT_TX_Pos,	(4U)
.equ	USB_EP4R_STAT_TX_Msk,	(0x3UL << USB_EP4R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP4R_STAT_TX,	USB_EP4R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP4R_STAT_TX_0,	(0x1UL << USB_EP4R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP4R_STAT_TX_1,	(0x2UL << USB_EP4R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP4R_DTOG_TX_Pos,	(6U)
.equ	USB_EP4R_DTOG_TX_Msk,	(0x1UL << USB_EP4R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP4R_DTOG_TX,	USB_EP4R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP4R_CTR_TX_Pos,	(7U)
.equ	USB_EP4R_CTR_TX_Msk,	(0x1UL << USB_EP4R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP4R_CTR_TX,	USB_EP4R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP4R_EP_KIND_Pos,	(8U)
.equ	USB_EP4R_EP_KIND_Msk,	(0x1UL << USB_EP4R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP4R_EP_KIND,	USB_EP4R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP4R_EP_TYPE_Pos,	(9U)
.equ	USB_EP4R_EP_TYPE_Msk,	(0x3UL << USB_EP4R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP4R_EP_TYPE,	USB_EP4R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP4R_EP_TYPE_0,	(0x1UL << USB_EP4R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP4R_EP_TYPE_1,	(0x2UL << USB_EP4R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP4R_SETUP_Pos,	(11U)
.equ	USB_EP4R_SETUP_Msk,	(0x1UL << USB_EP4R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP4R_SETUP,	USB_EP4R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP4R_STAT_RX_Pos,	(12U)
.equ	USB_EP4R_STAT_RX_Msk,	(0x3UL << USB_EP4R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP4R_STAT_RX,	USB_EP4R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP4R_STAT_RX_0,	(0x1UL << USB_EP4R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP4R_STAT_RX_1,	(0x2UL << USB_EP4R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP4R_DTOG_RX_Pos,	(14U)
.equ	USB_EP4R_DTOG_RX_Msk,	(0x1UL << USB_EP4R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP4R_DTOG_RX,	USB_EP4R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP4R_CTR_RX_Pos,	(15U)
.equ	USB_EP4R_CTR_RX_Msk,	(0x1UL << USB_EP4R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP4R_CTR_RX,	USB_EP4R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP5R register  *******************/
.equ	USB_EP5R_EA_Pos,	0
.equ	USB_EP5R_EA_Msk,	(0xFUL << USB_EP5R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP5R_EA,	USB_EP5R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP5R_STAT_TX_Pos,	(4U)
.equ	USB_EP5R_STAT_TX_Msk,	(0x3UL << USB_EP5R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP5R_STAT_TX,	USB_EP5R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP5R_STAT_TX_0,	(0x1UL << USB_EP5R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP5R_STAT_TX_1,	(0x2UL << USB_EP5R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP5R_DTOG_TX_Pos,	(6U)
.equ	USB_EP5R_DTOG_TX_Msk,	(0x1UL << USB_EP5R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP5R_DTOG_TX,	USB_EP5R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP5R_CTR_TX_Pos,	(7U)
.equ	USB_EP5R_CTR_TX_Msk,	(0x1UL << USB_EP5R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP5R_CTR_TX,	USB_EP5R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP5R_EP_KIND_Pos,	(8U)
.equ	USB_EP5R_EP_KIND_Msk,	(0x1UL << USB_EP5R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP5R_EP_KIND,	USB_EP5R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP5R_EP_TYPE_Pos,	(9U)
.equ	USB_EP5R_EP_TYPE_Msk,	(0x3UL << USB_EP5R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP5R_EP_TYPE,	USB_EP5R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP5R_EP_TYPE_0,	(0x1UL << USB_EP5R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP5R_EP_TYPE_1,	(0x2UL << USB_EP5R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP5R_SETUP_Pos,	(11U)
.equ	USB_EP5R_SETUP_Msk,	(0x1UL << USB_EP5R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP5R_SETUP,	USB_EP5R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP5R_STAT_RX_Pos,	(12U)
.equ	USB_EP5R_STAT_RX_Msk,	(0x3UL << USB_EP5R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP5R_STAT_RX,	USB_EP5R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP5R_STAT_RX_0,	(0x1UL << USB_EP5R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP5R_STAT_RX_1,	(0x2UL << USB_EP5R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP5R_DTOG_RX_Pos,	(14U)
.equ	USB_EP5R_DTOG_RX_Msk,	(0x1UL << USB_EP5R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP5R_DTOG_RX,	USB_EP5R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP5R_CTR_RX_Pos,	(15U)
.equ	USB_EP5R_CTR_RX_Msk,	(0x1UL << USB_EP5R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP5R_CTR_RX,	USB_EP5R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP6R register  *******************/
.equ	USB_EP6R_EA_Pos,	0
.equ	USB_EP6R_EA_Msk,	(0xFUL << USB_EP6R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP6R_EA,	USB_EP6R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP6R_STAT_TX_Pos,	(4U)
.equ	USB_EP6R_STAT_TX_Msk,	(0x3UL << USB_EP6R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP6R_STAT_TX,	USB_EP6R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP6R_STAT_TX_0,	(0x1UL << USB_EP6R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP6R_STAT_TX_1,	(0x2UL << USB_EP6R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP6R_DTOG_TX_Pos,	(6U)
.equ	USB_EP6R_DTOG_TX_Msk,	(0x1UL << USB_EP6R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP6R_DTOG_TX,	USB_EP6R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP6R_CTR_TX_Pos,	(7U)
.equ	USB_EP6R_CTR_TX_Msk,	(0x1UL << USB_EP6R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP6R_CTR_TX,	USB_EP6R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP6R_EP_KIND_Pos,	(8U)
.equ	USB_EP6R_EP_KIND_Msk,	(0x1UL << USB_EP6R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP6R_EP_KIND,	USB_EP6R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP6R_EP_TYPE_Pos,	(9U)
.equ	USB_EP6R_EP_TYPE_Msk,	(0x3UL << USB_EP6R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP6R_EP_TYPE,	USB_EP6R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP6R_EP_TYPE_0,	(0x1UL << USB_EP6R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP6R_EP_TYPE_1,	(0x2UL << USB_EP6R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP6R_SETUP_Pos,	(11U)
.equ	USB_EP6R_SETUP_Msk,	(0x1UL << USB_EP6R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP6R_SETUP,	USB_EP6R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP6R_STAT_RX_Pos,	(12U)
.equ	USB_EP6R_STAT_RX_Msk,	(0x3UL << USB_EP6R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP6R_STAT_RX,	USB_EP6R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP6R_STAT_RX_0,	(0x1UL << USB_EP6R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP6R_STAT_RX_1,	(0x2UL << USB_EP6R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP6R_DTOG_RX_Pos,	(14U)
.equ	USB_EP6R_DTOG_RX_Msk,	(0x1UL << USB_EP6R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP6R_DTOG_RX,	USB_EP6R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP6R_CTR_RX_Pos,	(15U)
.equ	USB_EP6R_CTR_RX_Msk,	(0x1UL << USB_EP6R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP6R_CTR_RX,	USB_EP6R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP7R register  *******************/
.equ	USB_EP7R_EA_Pos,	0
.equ	USB_EP7R_EA_Msk,	(0xFUL << USB_EP7R_EA_Pos)      /*!< 0x0000000F */
.equ	USB_EP7R_EA,	USB_EP7R_EA_Msk                /*!< Endpoint Address */

.equ	USB_EP7R_STAT_TX_Pos,	(4U)
.equ	USB_EP7R_STAT_TX_Msk,	(0x3UL << USB_EP7R_STAT_TX_Pos) /*!< 0x00000030 */
.equ	USB_EP7R_STAT_TX,	USB_EP7R_STAT_TX_Msk           /*!< STAT_TX[1:0] bits (Status bits for transmission transfers) */
.equ	USB_EP7R_STAT_TX_0,	(0x1UL << USB_EP7R_STAT_TX_Pos) /*!< 0x00000010 */
.equ	USB_EP7R_STAT_TX_1,	(0x2UL << USB_EP7R_STAT_TX_Pos) /*!< 0x00000020 */

.equ	USB_EP7R_DTOG_TX_Pos,	(6U)
.equ	USB_EP7R_DTOG_TX_Msk,	(0x1UL << USB_EP7R_DTOG_TX_Pos) /*!< 0x00000040 */
.equ	USB_EP7R_DTOG_TX,	USB_EP7R_DTOG_TX_Msk           /*!< Data Toggle for transmission transfers */
.equ	USB_EP7R_CTR_TX_Pos,	(7U)
.equ	USB_EP7R_CTR_TX_Msk,	(0x1UL << USB_EP7R_CTR_TX_Pos)  /*!< 0x00000080 */
.equ	USB_EP7R_CTR_TX,	USB_EP7R_CTR_TX_Msk            /*!< Correct Transfer for transmission */
.equ	USB_EP7R_EP_KIND_Pos,	(8U)
.equ	USB_EP7R_EP_KIND_Msk,	(0x1UL << USB_EP7R_EP_KIND_Pos) /*!< 0x00000100 */
.equ	USB_EP7R_EP_KIND,	USB_EP7R_EP_KIND_Msk           /*!< Endpoint Kind */

.equ	USB_EP7R_EP_TYPE_Pos,	(9U)
.equ	USB_EP7R_EP_TYPE_Msk,	(0x3UL << USB_EP7R_EP_TYPE_Pos) /*!< 0x00000600 */
.equ	USB_EP7R_EP_TYPE,	USB_EP7R_EP_TYPE_Msk           /*!< EP_TYPE[1:0] bits (Endpoint type) */
.equ	USB_EP7R_EP_TYPE_0,	(0x1UL << USB_EP7R_EP_TYPE_Pos) /*!< 0x00000200 */
.equ	USB_EP7R_EP_TYPE_1,	(0x2UL << USB_EP7R_EP_TYPE_Pos) /*!< 0x00000400 */

.equ	USB_EP7R_SETUP_Pos,	(11U)
.equ	USB_EP7R_SETUP_Msk,	(0x1UL << USB_EP7R_SETUP_Pos)   /*!< 0x00000800 */
.equ	USB_EP7R_SETUP,	USB_EP7R_SETUP_Msk             /*!< Setup transaction completed */

.equ	USB_EP7R_STAT_RX_Pos,	(12U)
.equ	USB_EP7R_STAT_RX_Msk,	(0x3UL << USB_EP7R_STAT_RX_Pos) /*!< 0x00003000 */
.equ	USB_EP7R_STAT_RX,	USB_EP7R_STAT_RX_Msk           /*!< STAT_RX[1:0] bits (Status bits for reception transfers) */
.equ	USB_EP7R_STAT_RX_0,	(0x1UL << USB_EP7R_STAT_RX_Pos) /*!< 0x00001000 */
.equ	USB_EP7R_STAT_RX_1,	(0x2UL << USB_EP7R_STAT_RX_Pos) /*!< 0x00002000 */

.equ	USB_EP7R_DTOG_RX_Pos,	(14U)
.equ	USB_EP7R_DTOG_RX_Msk,	(0x1UL << USB_EP7R_DTOG_RX_Pos) /*!< 0x00004000 */
.equ	USB_EP7R_DTOG_RX,	USB_EP7R_DTOG_RX_Msk           /*!< Data Toggle for reception transfers */
.equ	USB_EP7R_CTR_RX_Pos,	(15U)
.equ	USB_EP7R_CTR_RX_Msk,	(0x1UL << USB_EP7R_CTR_RX_Pos)  /*!< 0x00008000 */
.equ	USB_EP7R_CTR_RX,	USB_EP7R_CTR_RX_Msk            /*!< Correct Transfer for reception */

/*!< Common registers */
/*******************  Bit definition for USB_CNTR register  *******************/
.equ	USB_CNTR_FRES_Pos,	0
.equ	USB_CNTR_FRES_Msk,	(0x1UL << USB_CNTR_FRES_Pos)    /*!< 0x00000001 */
.equ	USB_CNTR_FRES,	USB_CNTR_FRES_Msk              /*!< Force USB Reset */
.equ	USB_CNTR_PDWN_Pos,	(1U)
.equ	USB_CNTR_PDWN_Msk,	(0x1UL << USB_CNTR_PDWN_Pos)    /*!< 0x00000002 */
.equ	USB_CNTR_PDWN,	USB_CNTR_PDWN_Msk              /*!< Power down */
.equ	USB_CNTR_LP_MODE_Pos,	(2U)
.equ	USB_CNTR_LP_MODE_Msk,	(0x1UL << USB_CNTR_LP_MODE_Pos) /*!< 0x00000004 */
.equ	USB_CNTR_LP_MODE,	USB_CNTR_LP_MODE_Msk           /*!< Low-power mode */
.equ	USB_CNTR_FSUSP_Pos,	(3U)
.equ	USB_CNTR_FSUSP_Msk,	(0x1UL << USB_CNTR_FSUSP_Pos)   /*!< 0x00000008 */
.equ	USB_CNTR_FSUSP,	USB_CNTR_FSUSP_Msk             /*!< Force suspend */
.equ	USB_CNTR_RESUME_Pos,	(4U)
.equ	USB_CNTR_RESUME_Msk,	(0x1UL << USB_CNTR_RESUME_Pos)  /*!< 0x00000010 */
.equ	USB_CNTR_RESUME,	USB_CNTR_RESUME_Msk            /*!< Resume request */
.equ	USB_CNTR_ESOFM_Pos,	(8U)
.equ	USB_CNTR_ESOFM_Msk,	(0x1UL << USB_CNTR_ESOFM_Pos)   /*!< 0x00000100 */
.equ	USB_CNTR_ESOFM,	USB_CNTR_ESOFM_Msk             /*!< Expected Start Of Frame Interrupt Mask */
.equ	USB_CNTR_SOFM_Pos,	(9U)
.equ	USB_CNTR_SOFM_Msk,	(0x1UL << USB_CNTR_SOFM_Pos)    /*!< 0x00000200 */
.equ	USB_CNTR_SOFM,	USB_CNTR_SOFM_Msk              /*!< Start Of Frame Interrupt Mask */
.equ	USB_CNTR_RESETM_Pos,	(10U)
.equ	USB_CNTR_RESETM_Msk,	(0x1UL << USB_CNTR_RESETM_Pos)  /*!< 0x00000400 */
.equ	USB_CNTR_RESETM,	USB_CNTR_RESETM_Msk            /*!< RESET Interrupt Mask */
.equ	USB_CNTR_SUSPM_Pos,	(11U)
.equ	USB_CNTR_SUSPM_Msk,	(0x1UL << USB_CNTR_SUSPM_Pos)   /*!< 0x00000800 */
.equ	USB_CNTR_SUSPM,	USB_CNTR_SUSPM_Msk             /*!< Suspend mode Interrupt Mask */
.equ	USB_CNTR_WKUPM_Pos,	(12U)
.equ	USB_CNTR_WKUPM_Msk,	(0x1UL << USB_CNTR_WKUPM_Pos)   /*!< 0x00001000 */
.equ	USB_CNTR_WKUPM,	USB_CNTR_WKUPM_Msk             /*!< Wakeup Interrupt Mask */
.equ	USB_CNTR_ERRM_Pos,	(13U)
.equ	USB_CNTR_ERRM_Msk,	(0x1UL << USB_CNTR_ERRM_Pos)    /*!< 0x00002000 */
.equ	USB_CNTR_ERRM,	USB_CNTR_ERRM_Msk              /*!< Error Interrupt Mask */
.equ	USB_CNTR_PMAOVRM_Pos,	(14U)
.equ	USB_CNTR_PMAOVRM_Msk,	(0x1UL << USB_CNTR_PMAOVRM_Pos) /*!< 0x00004000 */
.equ	USB_CNTR_PMAOVRM,	USB_CNTR_PMAOVRM_Msk           /*!< Packet Memory Area Over / Underrun Interrupt Mask */
.equ	USB_CNTR_CTRM_Pos,	(15U)
.equ	USB_CNTR_CTRM_Msk,	(0x1UL << USB_CNTR_CTRM_Pos)    /*!< 0x00008000 */
.equ	USB_CNTR_CTRM,	USB_CNTR_CTRM_Msk              /*!< Correct Transfer Interrupt Mask */

/*******************  Bit definition for USB_ISTR register  *******************/
.equ	USB_ISTR_EP_ID_Pos,	0
.equ	USB_ISTR_EP_ID_Msk,	(0xFUL << USB_ISTR_EP_ID_Pos)   /*!< 0x0000000F */
.equ	USB_ISTR_EP_ID,	USB_ISTR_EP_ID_Msk             /*!< Endpoint Identifier */
.equ	USB_ISTR_DIR_Pos,	(4U)
.equ	USB_ISTR_DIR_Msk,	(0x1UL << USB_ISTR_DIR_Pos)     /*!< 0x00000010 */
.equ	USB_ISTR_DIR,	USB_ISTR_DIR_Msk               /*!< Direction of transaction */
.equ	USB_ISTR_ESOF_Pos,	(8U)
.equ	USB_ISTR_ESOF_Msk,	(0x1UL << USB_ISTR_ESOF_Pos)    /*!< 0x00000100 */
.equ	USB_ISTR_ESOF,	USB_ISTR_ESOF_Msk              /*!< Expected Start Of Frame */
.equ	USB_ISTR_SOF_Pos,	(9U)
.equ	USB_ISTR_SOF_Msk,	(0x1UL << USB_ISTR_SOF_Pos)     /*!< 0x00000200 */
.equ	USB_ISTR_SOF,	USB_ISTR_SOF_Msk               /*!< Start Of Frame */
.equ	USB_ISTR_RESET_Pos,	(10U)
.equ	USB_ISTR_RESET_Msk,	(0x1UL << USB_ISTR_RESET_Pos)   /*!< 0x00000400 */
.equ	USB_ISTR_RESET,	USB_ISTR_RESET_Msk             /*!< USB RESET request */
.equ	USB_ISTR_SUSP_Pos,	(11U)
.equ	USB_ISTR_SUSP_Msk,	(0x1UL << USB_ISTR_SUSP_Pos)    /*!< 0x00000800 */
.equ	USB_ISTR_SUSP,	USB_ISTR_SUSP_Msk              /*!< Suspend mode request */
.equ	USB_ISTR_WKUP_Pos,	(12U)
.equ	USB_ISTR_WKUP_Msk,	(0x1UL << USB_ISTR_WKUP_Pos)    /*!< 0x00001000 */
.equ	USB_ISTR_WKUP,	USB_ISTR_WKUP_Msk              /*!< Wake up */
.equ	USB_ISTR_ERR_Pos,	(13U)
.equ	USB_ISTR_ERR_Msk,	(0x1UL << USB_ISTR_ERR_Pos)     /*!< 0x00002000 */
.equ	USB_ISTR_ERR,	USB_ISTR_ERR_Msk               /*!< Error */
.equ	USB_ISTR_PMAOVR_Pos,	(14U)
.equ	USB_ISTR_PMAOVR_Msk,	(0x1UL << USB_ISTR_PMAOVR_Pos)  /*!< 0x00004000 */
.equ	USB_ISTR_PMAOVR,	USB_ISTR_PMAOVR_Msk            /*!< Packet Memory Area Over / Underrun */
.equ	USB_ISTR_CTR_Pos,	(15U)
.equ	USB_ISTR_CTR_Msk,	(0x1UL << USB_ISTR_CTR_Pos)     /*!< 0x00008000 */
.equ	USB_ISTR_CTR,	USB_ISTR_CTR_Msk               /*!< Correct Transfer */

/*******************  Bit definition for USB_FNR register  ********************/
.equ	USB_FNR_FN_Pos,	0
.equ	USB_FNR_FN_Msk,	(0x7FFUL << USB_FNR_FN_Pos)     /*!< 0x000007FF */
.equ	USB_FNR_FN,	USB_FNR_FN_Msk                 /*!< Frame Number */
.equ	USB_FNR_LSOF_Pos,	(11U)
.equ	USB_FNR_LSOF_Msk,	(0x3UL << USB_FNR_LSOF_Pos)     /*!< 0x00001800 */
.equ	USB_FNR_LSOF,	USB_FNR_LSOF_Msk               /*!< Lost SOF */
.equ	USB_FNR_LCK_Pos,	(13U)
.equ	USB_FNR_LCK_Msk,	(0x1UL << USB_FNR_LCK_Pos)      /*!< 0x00002000 */
.equ	USB_FNR_LCK,	USB_FNR_LCK_Msk                /*!< Locked */
.equ	USB_FNR_RXDM_Pos,	(14U)
.equ	USB_FNR_RXDM_Msk,	(0x1UL << USB_FNR_RXDM_Pos)     /*!< 0x00004000 */
.equ	USB_FNR_RXDM,	USB_FNR_RXDM_Msk               /*!< Receive Data - Line Status */
.equ	USB_FNR_RXDP_Pos,	(15U)
.equ	USB_FNR_RXDP_Msk,	(0x1UL << USB_FNR_RXDP_Pos)     /*!< 0x00008000 */
.equ	USB_FNR_RXDP,	USB_FNR_RXDP_Msk               /*!< Receive Data + Line Status */

/******************  Bit definition for USB_DADDR register  *******************/
.equ	USB_DADDR_ADD_Pos,	0
.equ	USB_DADDR_ADD_Msk,	(0x7FUL << USB_DADDR_ADD_Pos)   /*!< 0x0000007F */
.equ	USB_DADDR_ADD,	USB_DADDR_ADD_Msk              /*!< ADD[6:0] bits (Device Address) */
.equ	USB_DADDR_ADD0_Pos,	0
.equ	USB_DADDR_ADD0_Msk,	(0x1UL << USB_DADDR_ADD0_Pos)   /*!< 0x00000001 */
.equ	USB_DADDR_ADD0,	USB_DADDR_ADD0_Msk             /*!< Bit 0 */
.equ	USB_DADDR_ADD1_Pos,	(1U)
.equ	USB_DADDR_ADD1_Msk,	(0x1UL << USB_DADDR_ADD1_Pos)   /*!< 0x00000002 */
.equ	USB_DADDR_ADD1,	USB_DADDR_ADD1_Msk             /*!< Bit 1 */
.equ	USB_DADDR_ADD2_Pos,	(2U)
.equ	USB_DADDR_ADD2_Msk,	(0x1UL << USB_DADDR_ADD2_Pos)   /*!< 0x00000004 */
.equ	USB_DADDR_ADD2,	USB_DADDR_ADD2_Msk             /*!< Bit 2 */
.equ	USB_DADDR_ADD3_Pos,	(3U)
.equ	USB_DADDR_ADD3_Msk,	(0x1UL << USB_DADDR_ADD3_Pos)   /*!< 0x00000008 */
.equ	USB_DADDR_ADD3,	USB_DADDR_ADD3_Msk             /*!< Bit 3 */
.equ	USB_DADDR_ADD4_Pos,	(4U)
.equ	USB_DADDR_ADD4_Msk,	(0x1UL << USB_DADDR_ADD4_Pos)   /*!< 0x00000010 */
.equ	USB_DADDR_ADD4,	USB_DADDR_ADD4_Msk             /*!< Bit 4 */
.equ	USB_DADDR_ADD5_Pos,	(5U)
.equ	USB_DADDR_ADD5_Msk,	(0x1UL << USB_DADDR_ADD5_Pos)   /*!< 0x00000020 */
.equ	USB_DADDR_ADD5,	USB_DADDR_ADD5_Msk             /*!< Bit 5 */
.equ	USB_DADDR_ADD6_Pos,	(6U)
.equ	USB_DADDR_ADD6_Msk,	(0x1UL << USB_DADDR_ADD6_Pos)   /*!< 0x00000040 */
.equ	USB_DADDR_ADD6,	USB_DADDR_ADD6_Msk             /*!< Bit 6 */

.equ	USB_DADDR_EF_Pos,	(7U)
.equ	USB_DADDR_EF_Msk,	(0x1UL << USB_DADDR_EF_Pos)     /*!< 0x00000080 */
.equ	USB_DADDR_EF,	USB_DADDR_EF_Msk               /*!< Enable Function */

/******************  Bit definition for USB_BTABLE register  ******************/
.equ	USB_BTABLE_BTABLE_Pos,	(3U)
.equ	USB_BTABLE_BTABLE_Msk,	(0x1FFFUL << USB_BTABLE_BTABLE_Pos) /*!< 0x0000FFF8 */
.equ	USB_BTABLE_BTABLE,	USB_BTABLE_BTABLE_Msk          /*!< Buffer Table */

/*!< Buffer descriptor table */
/*****************  Bit definition for USB_ADDR0_TX register  *****************/
.equ	USB_ADDR0_TX_ADDR0_TX_Pos,	(1U)
.equ	USB_ADDR0_TX_ADDR0_TX_Msk,	(0x7FFFUL << USB_ADDR0_TX_ADDR0_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR0_TX_ADDR0_TX,	USB_ADDR0_TX_ADDR0_TX_Msk      /*!< Transmission Buffer Address 0 */

/*****************  Bit definition for USB_ADDR1_TX register  *****************/
.equ	USB_ADDR1_TX_ADDR1_TX_Pos,	(1U)
.equ	USB_ADDR1_TX_ADDR1_TX_Msk,	(0x7FFFUL << USB_ADDR1_TX_ADDR1_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR1_TX_ADDR1_TX,	USB_ADDR1_TX_ADDR1_TX_Msk      /*!< Transmission Buffer Address 1 */

/*****************  Bit definition for USB_ADDR2_TX register  *****************/
.equ	USB_ADDR2_TX_ADDR2_TX_Pos,	(1U)
.equ	USB_ADDR2_TX_ADDR2_TX_Msk,	(0x7FFFUL << USB_ADDR2_TX_ADDR2_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR2_TX_ADDR2_TX,	USB_ADDR2_TX_ADDR2_TX_Msk      /*!< Transmission Buffer Address 2 */

/*****************  Bit definition for USB_ADDR3_TX register  *****************/
.equ	USB_ADDR3_TX_ADDR3_TX_Pos,	(1U)
.equ	USB_ADDR3_TX_ADDR3_TX_Msk,	(0x7FFFUL << USB_ADDR3_TX_ADDR3_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR3_TX_ADDR3_TX,	USB_ADDR3_TX_ADDR3_TX_Msk      /*!< Transmission Buffer Address 3 */

/*****************  Bit definition for USB_ADDR4_TX register  *****************/
.equ	USB_ADDR4_TX_ADDR4_TX_Pos,	(1U)
.equ	USB_ADDR4_TX_ADDR4_TX_Msk,	(0x7FFFUL << USB_ADDR4_TX_ADDR4_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR4_TX_ADDR4_TX,	USB_ADDR4_TX_ADDR4_TX_Msk      /*!< Transmission Buffer Address 4 */

/*****************  Bit definition for USB_ADDR5_TX register  *****************/
.equ	USB_ADDR5_TX_ADDR5_TX_Pos,	(1U)
.equ	USB_ADDR5_TX_ADDR5_TX_Msk,	(0x7FFFUL << USB_ADDR5_TX_ADDR5_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR5_TX_ADDR5_TX,	USB_ADDR5_TX_ADDR5_TX_Msk      /*!< Transmission Buffer Address 5 */

/*****************  Bit definition for USB_ADDR6_TX register  *****************/
.equ	USB_ADDR6_TX_ADDR6_TX_Pos,	(1U)
.equ	USB_ADDR6_TX_ADDR6_TX_Msk,	(0x7FFFUL << USB_ADDR6_TX_ADDR6_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR6_TX_ADDR6_TX,	USB_ADDR6_TX_ADDR6_TX_Msk      /*!< Transmission Buffer Address 6 */

/*****************  Bit definition for USB_ADDR7_TX register  *****************/
.equ	USB_ADDR7_TX_ADDR7_TX_Pos,	(1U)
.equ	USB_ADDR7_TX_ADDR7_TX_Msk,	(0x7FFFUL << USB_ADDR7_TX_ADDR7_TX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR7_TX_ADDR7_TX,	USB_ADDR7_TX_ADDR7_TX_Msk      /*!< Transmission Buffer Address 7 */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_TX register  ****************/
.equ	USB_COUNT0_TX_COUNT0_TX_Pos,	0
.equ	USB_COUNT0_TX_COUNT0_TX_Msk,	(0x3FFUL << USB_COUNT0_TX_COUNT0_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT0_TX_COUNT0_TX,	USB_COUNT0_TX_COUNT0_TX_Msk    /*!< Transmission Byte Count 0 */

/*****************  Bit definition for USB_COUNT1_TX register  ****************/
.equ	USB_COUNT1_TX_COUNT1_TX_Pos,	0
.equ	USB_COUNT1_TX_COUNT1_TX_Msk,	(0x3FFUL << USB_COUNT1_TX_COUNT1_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT1_TX_COUNT1_TX,	USB_COUNT1_TX_COUNT1_TX_Msk    /*!< Transmission Byte Count 1 */

/*****************  Bit definition for USB_COUNT2_TX register  ****************/
.equ	USB_COUNT2_TX_COUNT2_TX_Pos,	0
.equ	USB_COUNT2_TX_COUNT2_TX_Msk,	(0x3FFUL << USB_COUNT2_TX_COUNT2_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT2_TX_COUNT2_TX,	USB_COUNT2_TX_COUNT2_TX_Msk    /*!< Transmission Byte Count 2 */

/*****************  Bit definition for USB_COUNT3_TX register  ****************/
.equ	USB_COUNT3_TX_COUNT3_TX_Pos,	0
.equ	USB_COUNT3_TX_COUNT3_TX_Msk,	(0x3FFUL << USB_COUNT3_TX_COUNT3_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT3_TX_COUNT3_TX,	USB_COUNT3_TX_COUNT3_TX_Msk    /*!< Transmission Byte Count 3 */

/*****************  Bit definition for USB_COUNT4_TX register  ****************/
.equ	USB_COUNT4_TX_COUNT4_TX_Pos,	0
.equ	USB_COUNT4_TX_COUNT4_TX_Msk,	(0x3FFUL << USB_COUNT4_TX_COUNT4_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT4_TX_COUNT4_TX,	USB_COUNT4_TX_COUNT4_TX_Msk    /*!< Transmission Byte Count 4 */

/*****************  Bit definition for USB_COUNT5_TX register  ****************/
.equ	USB_COUNT5_TX_COUNT5_TX_Pos,	0
.equ	USB_COUNT5_TX_COUNT5_TX_Msk,	(0x3FFUL << USB_COUNT5_TX_COUNT5_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT5_TX_COUNT5_TX,	USB_COUNT5_TX_COUNT5_TX_Msk    /*!< Transmission Byte Count 5 */

/*****************  Bit definition for USB_COUNT6_TX register  ****************/
.equ	USB_COUNT6_TX_COUNT6_TX_Pos,	0
.equ	USB_COUNT6_TX_COUNT6_TX_Msk,	(0x3FFUL << USB_COUNT6_TX_COUNT6_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT6_TX_COUNT6_TX,	USB_COUNT6_TX_COUNT6_TX_Msk    /*!< Transmission Byte Count 6 */

/*****************  Bit definition for USB_COUNT7_TX register  ****************/
.equ	USB_COUNT7_TX_COUNT7_TX_Pos,	0
.equ	USB_COUNT7_TX_COUNT7_TX_Msk,	(0x3FFUL << USB_COUNT7_TX_COUNT7_TX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT7_TX_COUNT7_TX,	USB_COUNT7_TX_COUNT7_TX_Msk    /*!< Transmission Byte Count 7 */

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_TX_0 register  ***************/
.equ	USB_COUNT0_TX_0_COUNT0_TX_0,	0x000003FFU         /*!< Transmission Byte Count 0 (low) */

/****************  Bit definition for USB_COUNT0_TX_1 register  ***************/
.equ	USB_COUNT0_TX_1_COUNT0_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 0 (high) */

/****************  Bit definition for USB_COUNT1_TX_0 register  ***************/
.equ	USB_COUNT1_TX_0_COUNT1_TX_0,	0x000003FFU         /*!< Transmission Byte Count 1 (low) */

/****************  Bit definition for USB_COUNT1_TX_1 register  ***************/
.equ	USB_COUNT1_TX_1_COUNT1_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 1 (high) */

/****************  Bit definition for USB_COUNT2_TX_0 register  ***************/
.equ	USB_COUNT2_TX_0_COUNT2_TX_0,	0x000003FFU         /*!< Transmission Byte Count 2 (low) */

/****************  Bit definition for USB_COUNT2_TX_1 register  ***************/
.equ	USB_COUNT2_TX_1_COUNT2_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 2 (high) */

/****************  Bit definition for USB_COUNT3_TX_0 register  ***************/
.equ	USB_COUNT3_TX_0_COUNT3_TX_0,	0x000003FFU         /*!< Transmission Byte Count 3 (low) */

/****************  Bit definition for USB_COUNT3_TX_1 register  ***************/
.equ	USB_COUNT3_TX_1_COUNT3_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 3 (high) */

/****************  Bit definition for USB_COUNT4_TX_0 register  ***************/
.equ	USB_COUNT4_TX_0_COUNT4_TX_0,	0x000003FFU         /*!< Transmission Byte Count 4 (low) */

/****************  Bit definition for USB_COUNT4_TX_1 register  ***************/
.equ	USB_COUNT4_TX_1_COUNT4_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 4 (high) */

/****************  Bit definition for USB_COUNT5_TX_0 register  ***************/
.equ	USB_COUNT5_TX_0_COUNT5_TX_0,	0x000003FFU         /*!< Transmission Byte Count 5 (low) */

/****************  Bit definition for USB_COUNT5_TX_1 register  ***************/
.equ	USB_COUNT5_TX_1_COUNT5_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 5 (high) */

/****************  Bit definition for USB_COUNT6_TX_0 register  ***************/
.equ	USB_COUNT6_TX_0_COUNT6_TX_0,	0x000003FFU         /*!< Transmission Byte Count 6 (low) */

/****************  Bit definition for USB_COUNT6_TX_1 register  ***************/
.equ	USB_COUNT6_TX_1_COUNT6_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 6 (high) */

/****************  Bit definition for USB_COUNT7_TX_0 register  ***************/
.equ	USB_COUNT7_TX_0_COUNT7_TX_0,	0x000003FFU         /*!< Transmission Byte Count 7 (low) */

/****************  Bit definition for USB_COUNT7_TX_1 register  ***************/
.equ	USB_COUNT7_TX_1_COUNT7_TX_1,	0x03FF0000U         /*!< Transmission Byte Count 7 (high) */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_ADDR0_RX register  *****************/
.equ	USB_ADDR0_RX_ADDR0_RX_Pos,	(1U)
.equ	USB_ADDR0_RX_ADDR0_RX_Msk,	(0x7FFFUL << USB_ADDR0_RX_ADDR0_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR0_RX_ADDR0_RX,	USB_ADDR0_RX_ADDR0_RX_Msk      /*!< Reception Buffer Address 0 */

/*****************  Bit definition for USB_ADDR1_RX register  *****************/
.equ	USB_ADDR1_RX_ADDR1_RX_Pos,	(1U)
.equ	USB_ADDR1_RX_ADDR1_RX_Msk,	(0x7FFFUL << USB_ADDR1_RX_ADDR1_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR1_RX_ADDR1_RX,	USB_ADDR1_RX_ADDR1_RX_Msk      /*!< Reception Buffer Address 1 */

/*****************  Bit definition for USB_ADDR2_RX register  *****************/
.equ	USB_ADDR2_RX_ADDR2_RX_Pos,	(1U)
.equ	USB_ADDR2_RX_ADDR2_RX_Msk,	(0x7FFFUL << USB_ADDR2_RX_ADDR2_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR2_RX_ADDR2_RX,	USB_ADDR2_RX_ADDR2_RX_Msk      /*!< Reception Buffer Address 2 */

/*****************  Bit definition for USB_ADDR3_RX register  *****************/
.equ	USB_ADDR3_RX_ADDR3_RX_Pos,	(1U)
.equ	USB_ADDR3_RX_ADDR3_RX_Msk,	(0x7FFFUL << USB_ADDR3_RX_ADDR3_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR3_RX_ADDR3_RX,	USB_ADDR3_RX_ADDR3_RX_Msk      /*!< Reception Buffer Address 3 */

/*****************  Bit definition for USB_ADDR4_RX register  *****************/
.equ	USB_ADDR4_RX_ADDR4_RX_Pos,	(1U)
.equ	USB_ADDR4_RX_ADDR4_RX_Msk,	(0x7FFFUL << USB_ADDR4_RX_ADDR4_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR4_RX_ADDR4_RX,	USB_ADDR4_RX_ADDR4_RX_Msk      /*!< Reception Buffer Address 4 */

/*****************  Bit definition for USB_ADDR5_RX register  *****************/
.equ	USB_ADDR5_RX_ADDR5_RX_Pos,	(1U)
.equ	USB_ADDR5_RX_ADDR5_RX_Msk,	(0x7FFFUL << USB_ADDR5_RX_ADDR5_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR5_RX_ADDR5_RX,	USB_ADDR5_RX_ADDR5_RX_Msk      /*!< Reception Buffer Address 5 */

/*****************  Bit definition for USB_ADDR6_RX register  *****************/
.equ	USB_ADDR6_RX_ADDR6_RX_Pos,	(1U)
.equ	USB_ADDR6_RX_ADDR6_RX_Msk,	(0x7FFFUL << USB_ADDR6_RX_ADDR6_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR6_RX_ADDR6_RX,	USB_ADDR6_RX_ADDR6_RX_Msk      /*!< Reception Buffer Address 6 */

/*****************  Bit definition for USB_ADDR7_RX register  *****************/
.equ	USB_ADDR7_RX_ADDR7_RX_Pos,	(1U)
.equ	USB_ADDR7_RX_ADDR7_RX_Msk,	(0x7FFFUL << USB_ADDR7_RX_ADDR7_RX_Pos) /*!< 0x0000FFFE */
.equ	USB_ADDR7_RX_ADDR7_RX,	USB_ADDR7_RX_ADDR7_RX_Msk      /*!< Reception Buffer Address 7 */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_RX register  ****************/
.equ	USB_COUNT0_RX_COUNT0_RX_Pos,	0
.equ	USB_COUNT0_RX_COUNT0_RX_Msk,	(0x3FFUL << USB_COUNT0_RX_COUNT0_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT0_RX_COUNT0_RX,	USB_COUNT0_RX_COUNT0_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT0_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT0_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT0_RX_NUM_BLOCK,	USB_COUNT0_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT0_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT0_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT0_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT0_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT0_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT0_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT0_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT0_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT0_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT0_RX_BLSIZE,	USB_COUNT0_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT1_RX register  ****************/
.equ	USB_COUNT1_RX_COUNT1_RX_Pos,	0
.equ	USB_COUNT1_RX_COUNT1_RX_Msk,	(0x3FFUL << USB_COUNT1_RX_COUNT1_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT1_RX_COUNT1_RX,	USB_COUNT1_RX_COUNT1_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT1_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT1_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT1_RX_NUM_BLOCK,	USB_COUNT1_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT1_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT1_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT1_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT1_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT1_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT1_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT1_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT1_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT1_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT1_RX_BLSIZE,	USB_COUNT1_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT2_RX register  ****************/
.equ	USB_COUNT2_RX_COUNT2_RX_Pos,	0
.equ	USB_COUNT2_RX_COUNT2_RX_Msk,	(0x3FFUL << USB_COUNT2_RX_COUNT2_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT2_RX_COUNT2_RX,	USB_COUNT2_RX_COUNT2_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT2_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT2_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT2_RX_NUM_BLOCK,	USB_COUNT2_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT2_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT2_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT2_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT2_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT2_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT2_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT2_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT2_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT2_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT2_RX_BLSIZE,	USB_COUNT2_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT3_RX register  ****************/
.equ	USB_COUNT3_RX_COUNT3_RX_Pos,	0
.equ	USB_COUNT3_RX_COUNT3_RX_Msk,	(0x3FFUL << USB_COUNT3_RX_COUNT3_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT3_RX_COUNT3_RX,	USB_COUNT3_RX_COUNT3_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT3_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT3_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT3_RX_NUM_BLOCK,	USB_COUNT3_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT3_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT3_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT3_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT3_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT3_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT3_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT3_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT3_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT3_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT3_RX_BLSIZE,	USB_COUNT3_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT4_RX register  ****************/
.equ	USB_COUNT4_RX_COUNT4_RX_Pos,	0
.equ	USB_COUNT4_RX_COUNT4_RX_Msk,	(0x3FFUL << USB_COUNT4_RX_COUNT4_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT4_RX_COUNT4_RX,	USB_COUNT4_RX_COUNT4_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT4_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT4_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT4_RX_NUM_BLOCK,	USB_COUNT4_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT4_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT4_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT4_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT4_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT4_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT4_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT4_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT4_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT4_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT4_RX_BLSIZE,	USB_COUNT4_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT5_RX register  ****************/
.equ	USB_COUNT5_RX_COUNT5_RX_Pos,	0
.equ	USB_COUNT5_RX_COUNT5_RX_Msk,	(0x3FFUL << USB_COUNT5_RX_COUNT5_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT5_RX_COUNT5_RX,	USB_COUNT5_RX_COUNT5_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT5_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT5_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT5_RX_NUM_BLOCK,	USB_COUNT5_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT5_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT5_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT5_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT5_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT5_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT5_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT5_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT5_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT5_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT5_RX_BLSIZE,	USB_COUNT5_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT6_RX register  ****************/
.equ	USB_COUNT6_RX_COUNT6_RX_Pos,	0
.equ	USB_COUNT6_RX_COUNT6_RX_Msk,	(0x3FFUL << USB_COUNT6_RX_COUNT6_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT6_RX_COUNT6_RX,	USB_COUNT6_RX_COUNT6_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT6_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT6_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT6_RX_NUM_BLOCK,	USB_COUNT6_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT6_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT6_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT6_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT6_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT6_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT6_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT6_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT6_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT6_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT6_RX_BLSIZE,	USB_COUNT6_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT7_RX register  ****************/
.equ	USB_COUNT7_RX_COUNT7_RX_Pos,	0
.equ	USB_COUNT7_RX_COUNT7_RX_Msk,	(0x3FFUL << USB_COUNT7_RX_COUNT7_RX_Pos) /*!< 0x000003FF */
.equ	USB_COUNT7_RX_COUNT7_RX,	USB_COUNT7_RX_COUNT7_RX_Msk    /*!< Reception Byte Count */

.equ	USB_COUNT7_RX_NUM_BLOCK_Pos,	(10U)
.equ	USB_COUNT7_RX_NUM_BLOCK_Msk,	(0x1FUL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00007C00 */
.equ	USB_COUNT7_RX_NUM_BLOCK,	USB_COUNT7_RX_NUM_BLOCK_Msk    /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
.equ	USB_COUNT7_RX_NUM_BLOCK_0,	(0x01UL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00000400 */
.equ	USB_COUNT7_RX_NUM_BLOCK_1,	(0x02UL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00000800 */
.equ	USB_COUNT7_RX_NUM_BLOCK_2,	(0x04UL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00001000 */
.equ	USB_COUNT7_RX_NUM_BLOCK_3,	(0x08UL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00002000 */
.equ	USB_COUNT7_RX_NUM_BLOCK_4,	(0x10UL << USB_COUNT7_RX_NUM_BLOCK_Pos) /*!< 0x00004000 */

.equ	USB_COUNT7_RX_BLSIZE_Pos,	(15U)
.equ	USB_COUNT7_RX_BLSIZE_Msk,	(0x1UL << USB_COUNT7_RX_BLSIZE_Pos) /*!< 0x00008000 */
.equ	USB_COUNT7_RX_BLSIZE,	USB_COUNT7_RX_BLSIZE_Msk       /*!< BLock SIZE */

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_RX_0 register  ***************/
.equ	USB_COUNT0_RX_0_COUNT0_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT0_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT0_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT0_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT0_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT0_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT0_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT0_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT0_RX_1 register  ***************/
.equ	USB_COUNT0_RX_1_COUNT0_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT0_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT0_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 1 */
.equ	USB_COUNT0_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT0_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT0_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT0_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT0_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT1_RX_0 register  ***************/
.equ	USB_COUNT1_RX_0_COUNT1_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT1_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT1_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT1_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT1_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT1_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT1_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT1_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT1_RX_1 register  ***************/
.equ	USB_COUNT1_RX_1_COUNT1_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT1_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT1_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT1_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT1_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT1_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT1_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT1_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT2_RX_0 register  ***************/
.equ	USB_COUNT2_RX_0_COUNT2_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT2_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT2_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT2_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT2_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT2_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT2_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT2_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT2_RX_1 register  ***************/
.equ	USB_COUNT2_RX_1_COUNT2_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT2_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT2_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT2_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT2_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT2_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT2_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT2_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT3_RX_0 register  ***************/
.equ	USB_COUNT3_RX_0_COUNT3_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT3_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT3_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT3_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT3_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT3_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT3_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT3_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT3_RX_1 register  ***************/
.equ	USB_COUNT3_RX_1_COUNT3_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT3_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT3_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT3_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT3_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT3_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT3_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT3_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT4_RX_0 register  ***************/
.equ	USB_COUNT4_RX_0_COUNT4_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT4_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT4_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT4_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT4_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT4_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT4_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT4_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT4_RX_1 register  ***************/
.equ	USB_COUNT4_RX_1_COUNT4_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT4_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT4_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT4_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT4_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT4_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT4_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT4_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT5_RX_0 register  ***************/
.equ	USB_COUNT5_RX_0_COUNT5_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT5_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT5_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT5_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT5_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT5_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT5_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT5_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT5_RX_1 register  ***************/
.equ	USB_COUNT5_RX_1_COUNT5_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT5_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT5_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT5_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT5_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT5_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT5_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT5_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/***************  Bit definition for USB_COUNT6_RX_0  register  ***************/
.equ	USB_COUNT6_RX_0_COUNT6_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT6_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT6_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT6_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT6_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT6_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT6_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT6_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT6_RX_1 register  ***************/
.equ	USB_COUNT6_RX_1_COUNT6_RX_1,	0x03FF0000U                   /*!< Reception Byte Count (high) */

.equ	USB_COUNT6_RX_1_NUM_BLOCK_1,	0x7C000000U                   /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT6_RX_1_NUM_BLOCK_1_0,	0x04000000U                   /*!< Bit 0 */
.equ	USB_COUNT6_RX_1_NUM_BLOCK_1_1,	0x08000000U                   /*!< Bit 1 */
.equ	USB_COUNT6_RX_1_NUM_BLOCK_1_2,	0x10000000U                   /*!< Bit 2 */
.equ	USB_COUNT6_RX_1_NUM_BLOCK_1_3,	0x20000000U                   /*!< Bit 3 */
.equ	USB_COUNT6_RX_1_NUM_BLOCK_1_4,	0x40000000U                   /*!< Bit 4 */

.equ	USB_COUNT6_RX_1_BLSIZE_1,	0x80000000U                   /*!< BLock SIZE (high) */

/***************  Bit definition for USB_COUNT7_RX_0 register  ****************/
.equ	USB_COUNT7_RX_0_COUNT7_RX_0,	0x000003FFU                    /*!< Reception Byte Count (low) */

.equ	USB_COUNT7_RX_0_NUM_BLOCK_0,	0x00007C00U                    /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
.equ	USB_COUNT7_RX_0_NUM_BLOCK_0_0,	0x00000400U                    /*!< Bit 0 */
.equ	USB_COUNT7_RX_0_NUM_BLOCK_0_1,	0x00000800U                    /*!< Bit 1 */
.equ	USB_COUNT7_RX_0_NUM_BLOCK_0_2,	0x00001000U                    /*!< Bit 2 */
.equ	USB_COUNT7_RX_0_NUM_BLOCK_0_3,	0x00002000U                    /*!< Bit 3 */
.equ	USB_COUNT7_RX_0_NUM_BLOCK_0_4,	0x00004000U                    /*!< Bit 4 */

.equ	USB_COUNT7_RX_0_BLSIZE_0,	0x00008000U                    /*!< BLock SIZE (low) */

/***************  Bit definition for USB_COUNT7_RX_1 register  ****************/
.equ	USB_COUNT7_RX_1_COUNT7_RX_1,	0x03FF0000U                    /*!< Reception Byte Count (high) */

.equ	USB_COUNT7_RX_1_NUM_BLOCK_1,	0x7C000000U                    /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
.equ	USB_COUNT7_RX_1_NUM_BLOCK_1_0,	0x04000000U                    /*!< Bit 0 */
.equ	USB_COUNT7_RX_1_NUM_BLOCK_1_1,	0x08000000U                    /*!< Bit 1 */
.equ	USB_COUNT7_RX_1_NUM_BLOCK_1_2,	0x10000000U                    /*!< Bit 2 */
.equ	USB_COUNT7_RX_1_NUM_BLOCK_1_3,	0x20000000U                    /*!< Bit 3 */
.equ	USB_COUNT7_RX_1_NUM_BLOCK_1_4,	0x40000000U                    /*!< Bit 4 */

.equ	USB_COUNT7_RX_1_BLSIZE_1,	0x80000000U                    /*!< BLock SIZE (high) */

/******************************************************************************/
/*                                                                            */
/*                         Controller Area Network                            */
/*                                                                            */
/******************************************************************************/

/*!< CAN control and status registers */
/*******************  Bit definition for CAN_MCR register  ********************/
.equ	CAN_MCR_INRQ_Pos,	0
.equ	CAN_MCR_INRQ_Msk,	(0x1UL << CAN_MCR_INRQ_Pos)        /*!< 0x00000001 */
.equ	CAN_MCR_INRQ,	CAN_MCR_INRQ_Msk                  /*!< Initialization Request */
.equ	CAN_MCR_SLEEP_Pos,	(1U)
.equ	CAN_MCR_SLEEP_Msk,	(0x1UL << CAN_MCR_SLEEP_Pos)       /*!< 0x00000002 */
.equ	CAN_MCR_SLEEP,	CAN_MCR_SLEEP_Msk                 /*!< Sleep Mode Request */
.equ	CAN_MCR_TXFP_Pos,	(2U)
.equ	CAN_MCR_TXFP_Msk,	(0x1UL << CAN_MCR_TXFP_Pos)        /*!< 0x00000004 */
.equ	CAN_MCR_TXFP,	CAN_MCR_TXFP_Msk                  /*!< Transmit FIFO Priority */
.equ	CAN_MCR_RFLM_Pos,	(3U)
.equ	CAN_MCR_RFLM_Msk,	(0x1UL << CAN_MCR_RFLM_Pos)        /*!< 0x00000008 */
.equ	CAN_MCR_RFLM,	CAN_MCR_RFLM_Msk                  /*!< Receive FIFO Locked Mode */
.equ	CAN_MCR_NART_Pos,	(4U)
.equ	CAN_MCR_NART_Msk,	(0x1UL << CAN_MCR_NART_Pos)        /*!< 0x00000010 */
.equ	CAN_MCR_NART,	CAN_MCR_NART_Msk                  /*!< No Automatic Retransmission */
.equ	CAN_MCR_AWUM_Pos,	(5U)
.equ	CAN_MCR_AWUM_Msk,	(0x1UL << CAN_MCR_AWUM_Pos)        /*!< 0x00000020 */
.equ	CAN_MCR_AWUM,	CAN_MCR_AWUM_Msk                  /*!< Automatic Wakeup Mode */
.equ	CAN_MCR_ABOM_Pos,	(6U)
.equ	CAN_MCR_ABOM_Msk,	(0x1UL << CAN_MCR_ABOM_Pos)        /*!< 0x00000040 */
.equ	CAN_MCR_ABOM,	CAN_MCR_ABOM_Msk                  /*!< Automatic Bus-Off Management */
.equ	CAN_MCR_TTCM_Pos,	(7U)
.equ	CAN_MCR_TTCM_Msk,	(0x1UL << CAN_MCR_TTCM_Pos)        /*!< 0x00000080 */
.equ	CAN_MCR_TTCM,	CAN_MCR_TTCM_Msk                  /*!< Time Triggered Communication Mode */
.equ	CAN_MCR_RESET_Pos,	(15U)
.equ	CAN_MCR_RESET_Msk,	(0x1UL << CAN_MCR_RESET_Pos)       /*!< 0x00008000 */
.equ	CAN_MCR_RESET,	CAN_MCR_RESET_Msk                 /*!< CAN software master reset */
.equ	CAN_MCR_DBF_Pos,	(16U)
.equ	CAN_MCR_DBF_Msk,	(0x1UL << CAN_MCR_DBF_Pos)         /*!< 0x00010000 */
.equ	CAN_MCR_DBF,	CAN_MCR_DBF_Msk                   /*!< CAN Debug freeze */

/*******************  Bit definition for CAN_MSR register  ********************/
.equ	CAN_MSR_INAK_Pos,	0
.equ	CAN_MSR_INAK_Msk,	(0x1UL << CAN_MSR_INAK_Pos)        /*!< 0x00000001 */
.equ	CAN_MSR_INAK,	CAN_MSR_INAK_Msk                  /*!< Initialization Acknowledge */
.equ	CAN_MSR_SLAK_Pos,	(1U)
.equ	CAN_MSR_SLAK_Msk,	(0x1UL << CAN_MSR_SLAK_Pos)        /*!< 0x00000002 */
.equ	CAN_MSR_SLAK,	CAN_MSR_SLAK_Msk                  /*!< Sleep Acknowledge */
.equ	CAN_MSR_ERRI_Pos,	(2U)
.equ	CAN_MSR_ERRI_Msk,	(0x1UL << CAN_MSR_ERRI_Pos)        /*!< 0x00000004 */
.equ	CAN_MSR_ERRI,	CAN_MSR_ERRI_Msk                  /*!< Error Interrupt */
.equ	CAN_MSR_WKUI_Pos,	(3U)
.equ	CAN_MSR_WKUI_Msk,	(0x1UL << CAN_MSR_WKUI_Pos)        /*!< 0x00000008 */
.equ	CAN_MSR_WKUI,	CAN_MSR_WKUI_Msk                  /*!< Wakeup Interrupt */
.equ	CAN_MSR_SLAKI_Pos,	(4U)
.equ	CAN_MSR_SLAKI_Msk,	(0x1UL << CAN_MSR_SLAKI_Pos)       /*!< 0x00000010 */
.equ	CAN_MSR_SLAKI,	CAN_MSR_SLAKI_Msk                 /*!< Sleep Acknowledge Interrupt */
.equ	CAN_MSR_TXM_Pos,	(8U)
.equ	CAN_MSR_TXM_Msk,	(0x1UL << CAN_MSR_TXM_Pos)         /*!< 0x00000100 */
.equ	CAN_MSR_TXM,	CAN_MSR_TXM_Msk                   /*!< Transmit Mode */
.equ	CAN_MSR_RXM_Pos,	(9U)
.equ	CAN_MSR_RXM_Msk,	(0x1UL << CAN_MSR_RXM_Pos)         /*!< 0x00000200 */
.equ	CAN_MSR_RXM,	CAN_MSR_RXM_Msk                   /*!< Receive Mode */
.equ	CAN_MSR_SAMP_Pos,	(10U)
.equ	CAN_MSR_SAMP_Msk,	(0x1UL << CAN_MSR_SAMP_Pos)        /*!< 0x00000400 */
.equ	CAN_MSR_SAMP,	CAN_MSR_SAMP_Msk                  /*!< Last Sample Point */
.equ	CAN_MSR_RX_Pos,	(11U)
.equ	CAN_MSR_RX_Msk,	(0x1UL << CAN_MSR_RX_Pos)          /*!< 0x00000800 */
.equ	CAN_MSR_RX,	CAN_MSR_RX_Msk                    /*!< CAN Rx Signal */

/*******************  Bit definition for CAN_TSR register  ********************/
.equ	CAN_TSR_RQCP0_Pos,	0
.equ	CAN_TSR_RQCP0_Msk,	(0x1UL << CAN_TSR_RQCP0_Pos)       /*!< 0x00000001 */
.equ	CAN_TSR_RQCP0,	CAN_TSR_RQCP0_Msk                 /*!< Request Completed Mailbox0 */
.equ	CAN_TSR_TXOK0_Pos,	(1U)
.equ	CAN_TSR_TXOK0_Msk,	(0x1UL << CAN_TSR_TXOK0_Pos)       /*!< 0x00000002 */
.equ	CAN_TSR_TXOK0,	CAN_TSR_TXOK0_Msk                 /*!< Transmission OK of Mailbox0 */
.equ	CAN_TSR_ALST0_Pos,	(2U)
.equ	CAN_TSR_ALST0_Msk,	(0x1UL << CAN_TSR_ALST0_Pos)       /*!< 0x00000004 */
.equ	CAN_TSR_ALST0,	CAN_TSR_ALST0_Msk                 /*!< Arbitration Lost for Mailbox0 */
.equ	CAN_TSR_TERR0_Pos,	(3U)
.equ	CAN_TSR_TERR0_Msk,	(0x1UL << CAN_TSR_TERR0_Pos)       /*!< 0x00000008 */
.equ	CAN_TSR_TERR0,	CAN_TSR_TERR0_Msk                 /*!< Transmission Error of Mailbox0 */
.equ	CAN_TSR_ABRQ0_Pos,	(7U)
.equ	CAN_TSR_ABRQ0_Msk,	(0x1UL << CAN_TSR_ABRQ0_Pos)       /*!< 0x00000080 */
.equ	CAN_TSR_ABRQ0,	CAN_TSR_ABRQ0_Msk                 /*!< Abort Request for Mailbox0 */
.equ	CAN_TSR_RQCP1_Pos,	(8U)
.equ	CAN_TSR_RQCP1_Msk,	(0x1UL << CAN_TSR_RQCP1_Pos)       /*!< 0x00000100 */
.equ	CAN_TSR_RQCP1,	CAN_TSR_RQCP1_Msk                 /*!< Request Completed Mailbox1 */
.equ	CAN_TSR_TXOK1_Pos,	(9U)
.equ	CAN_TSR_TXOK1_Msk,	(0x1UL << CAN_TSR_TXOK1_Pos)       /*!< 0x00000200 */
.equ	CAN_TSR_TXOK1,	CAN_TSR_TXOK1_Msk                 /*!< Transmission OK of Mailbox1 */
.equ	CAN_TSR_ALST1_Pos,	(10U)
.equ	CAN_TSR_ALST1_Msk,	(0x1UL << CAN_TSR_ALST1_Pos)       /*!< 0x00000400 */
.equ	CAN_TSR_ALST1,	CAN_TSR_ALST1_Msk                 /*!< Arbitration Lost for Mailbox1 */
.equ	CAN_TSR_TERR1_Pos,	(11U)
.equ	CAN_TSR_TERR1_Msk,	(0x1UL << CAN_TSR_TERR1_Pos)       /*!< 0x00000800 */
.equ	CAN_TSR_TERR1,	CAN_TSR_TERR1_Msk                 /*!< Transmission Error of Mailbox1 */
.equ	CAN_TSR_ABRQ1_Pos,	(15U)
.equ	CAN_TSR_ABRQ1_Msk,	(0x1UL << CAN_TSR_ABRQ1_Pos)       /*!< 0x00008000 */
.equ	CAN_TSR_ABRQ1,	CAN_TSR_ABRQ1_Msk                 /*!< Abort Request for Mailbox 1 */
.equ	CAN_TSR_RQCP2_Pos,	(16U)
.equ	CAN_TSR_RQCP2_Msk,	(0x1UL << CAN_TSR_RQCP2_Pos)       /*!< 0x00010000 */
.equ	CAN_TSR_RQCP2,	CAN_TSR_RQCP2_Msk                 /*!< Request Completed Mailbox2 */
.equ	CAN_TSR_TXOK2_Pos,	(17U)
.equ	CAN_TSR_TXOK2_Msk,	(0x1UL << CAN_TSR_TXOK2_Pos)       /*!< 0x00020000 */
.equ	CAN_TSR_TXOK2,	CAN_TSR_TXOK2_Msk                 /*!< Transmission OK of Mailbox 2 */
.equ	CAN_TSR_ALST2_Pos,	(18U)
.equ	CAN_TSR_ALST2_Msk,	(0x1UL << CAN_TSR_ALST2_Pos)       /*!< 0x00040000 */
.equ	CAN_TSR_ALST2,	CAN_TSR_ALST2_Msk                 /*!< Arbitration Lost for mailbox 2 */
.equ	CAN_TSR_TERR2_Pos,	(19U)
.equ	CAN_TSR_TERR2_Msk,	(0x1UL << CAN_TSR_TERR2_Pos)       /*!< 0x00080000 */
.equ	CAN_TSR_TERR2,	CAN_TSR_TERR2_Msk                 /*!< Transmission Error of Mailbox 2 */
.equ	CAN_TSR_ABRQ2_Pos,	(23U)
.equ	CAN_TSR_ABRQ2_Msk,	(0x1UL << CAN_TSR_ABRQ2_Pos)       /*!< 0x00800000 */
.equ	CAN_TSR_ABRQ2,	CAN_TSR_ABRQ2_Msk                 /*!< Abort Request for Mailbox 2 */
.equ	CAN_TSR_CODE_Pos,	(24U)
.equ	CAN_TSR_CODE_Msk,	(0x3UL << CAN_TSR_CODE_Pos)        /*!< 0x03000000 */
.equ	CAN_TSR_CODE,	CAN_TSR_CODE_Msk                  /*!< Mailbox Code */

.equ	CAN_TSR_TME_Pos,	(26U)
.equ	CAN_TSR_TME_Msk,	(0x7UL << CAN_TSR_TME_Pos)         /*!< 0x1C000000 */
.equ	CAN_TSR_TME,	CAN_TSR_TME_Msk                   /*!< TME[2:0] bits */
.equ	CAN_TSR_TME0_Pos,	(26U)
.equ	CAN_TSR_TME0_Msk,	(0x1UL << CAN_TSR_TME0_Pos)        /*!< 0x04000000 */
.equ	CAN_TSR_TME0,	CAN_TSR_TME0_Msk                  /*!< Transmit Mailbox 0 Empty */
.equ	CAN_TSR_TME1_Pos,	(27U)
.equ	CAN_TSR_TME1_Msk,	(0x1UL << CAN_TSR_TME1_Pos)        /*!< 0x08000000 */
.equ	CAN_TSR_TME1,	CAN_TSR_TME1_Msk                  /*!< Transmit Mailbox 1 Empty */
.equ	CAN_TSR_TME2_Pos,	(28U)
.equ	CAN_TSR_TME2_Msk,	(0x1UL << CAN_TSR_TME2_Pos)        /*!< 0x10000000 */
.equ	CAN_TSR_TME2,	CAN_TSR_TME2_Msk                  /*!< Transmit Mailbox 2 Empty */

.equ	CAN_TSR_LOW_Pos,	(29U)
.equ	CAN_TSR_LOW_Msk,	(0x7UL << CAN_TSR_LOW_Pos)         /*!< 0xE0000000 */
.equ	CAN_TSR_LOW,	CAN_TSR_LOW_Msk                   /*!< LOW[2:0] bits */
.equ	CAN_TSR_LOW0_Pos,	(29U)
.equ	CAN_TSR_LOW0_Msk,	(0x1UL << CAN_TSR_LOW0_Pos)        /*!< 0x20000000 */
.equ	CAN_TSR_LOW0,	CAN_TSR_LOW0_Msk                  /*!< Lowest Priority Flag for Mailbox 0 */
.equ	CAN_TSR_LOW1_Pos,	(30U)
.equ	CAN_TSR_LOW1_Msk,	(0x1UL << CAN_TSR_LOW1_Pos)        /*!< 0x40000000 */
.equ	CAN_TSR_LOW1,	CAN_TSR_LOW1_Msk                  /*!< Lowest Priority Flag for Mailbox 1 */
.equ	CAN_TSR_LOW2_Pos,	(31U)
.equ	CAN_TSR_LOW2_Msk,	(0x1UL << CAN_TSR_LOW2_Pos)        /*!< 0x80000000 */
.equ	CAN_TSR_LOW2,	CAN_TSR_LOW2_Msk                  /*!< Lowest Priority Flag for Mailbox 2 */

/*******************  Bit definition for CAN_RF0R register  *******************/
.equ	CAN_RF0R_FMP0_Pos,	0
.equ	CAN_RF0R_FMP0_Msk,	(0x3UL << CAN_RF0R_FMP0_Pos)       /*!< 0x00000003 */
.equ	CAN_RF0R_FMP0,	CAN_RF0R_FMP0_Msk                 /*!< FIFO 0 Message Pending */
.equ	CAN_RF0R_FULL0_Pos,	(3U)
.equ	CAN_RF0R_FULL0_Msk,	(0x1UL << CAN_RF0R_FULL0_Pos)      /*!< 0x00000008 */
.equ	CAN_RF0R_FULL0,	CAN_RF0R_FULL0_Msk                /*!< FIFO 0 Full */
.equ	CAN_RF0R_FOVR0_Pos,	(4U)
.equ	CAN_RF0R_FOVR0_Msk,	(0x1UL << CAN_RF0R_FOVR0_Pos)      /*!< 0x00000010 */
.equ	CAN_RF0R_FOVR0,	CAN_RF0R_FOVR0_Msk                /*!< FIFO 0 Overrun */
.equ	CAN_RF0R_RFOM0_Pos,	(5U)
.equ	CAN_RF0R_RFOM0_Msk,	(0x1UL << CAN_RF0R_RFOM0_Pos)      /*!< 0x00000020 */
.equ	CAN_RF0R_RFOM0,	CAN_RF0R_RFOM0_Msk                /*!< Release FIFO 0 Output Mailbox */

/*******************  Bit definition for CAN_RF1R register  *******************/
.equ	CAN_RF1R_FMP1_Pos,	0
.equ	CAN_RF1R_FMP1_Msk,	(0x3UL << CAN_RF1R_FMP1_Pos)       /*!< 0x00000003 */
.equ	CAN_RF1R_FMP1,	CAN_RF1R_FMP1_Msk                 /*!< FIFO 1 Message Pending */
.equ	CAN_RF1R_FULL1_Pos,	(3U)
.equ	CAN_RF1R_FULL1_Msk,	(0x1UL << CAN_RF1R_FULL1_Pos)      /*!< 0x00000008 */
.equ	CAN_RF1R_FULL1,	CAN_RF1R_FULL1_Msk                /*!< FIFO 1 Full */
.equ	CAN_RF1R_FOVR1_Pos,	(4U)
.equ	CAN_RF1R_FOVR1_Msk,	(0x1UL << CAN_RF1R_FOVR1_Pos)      /*!< 0x00000010 */
.equ	CAN_RF1R_FOVR1,	CAN_RF1R_FOVR1_Msk                /*!< FIFO 1 Overrun */
.equ	CAN_RF1R_RFOM1_Pos,	(5U)
.equ	CAN_RF1R_RFOM1_Msk,	(0x1UL << CAN_RF1R_RFOM1_Pos)      /*!< 0x00000020 */
.equ	CAN_RF1R_RFOM1,	CAN_RF1R_RFOM1_Msk                /*!< Release FIFO 1 Output Mailbox */

/********************  Bit definition for CAN_IER register  *******************/
.equ	CAN_IER_TMEIE_Pos,	0
.equ	CAN_IER_TMEIE_Msk,	(0x1UL << CAN_IER_TMEIE_Pos)       /*!< 0x00000001 */
.equ	CAN_IER_TMEIE,	CAN_IER_TMEIE_Msk                 /*!< Transmit Mailbox Empty Interrupt Enable */
.equ	CAN_IER_FMPIE0_Pos,	(1U)
.equ	CAN_IER_FMPIE0_Msk,	(0x1UL << CAN_IER_FMPIE0_Pos)      /*!< 0x00000002 */
.equ	CAN_IER_FMPIE0,	CAN_IER_FMPIE0_Msk                /*!< FIFO Message Pending Interrupt Enable */
.equ	CAN_IER_FFIE0_Pos,	(2U)
.equ	CAN_IER_FFIE0_Msk,	(0x1UL << CAN_IER_FFIE0_Pos)       /*!< 0x00000004 */
.equ	CAN_IER_FFIE0,	CAN_IER_FFIE0_Msk                 /*!< FIFO Full Interrupt Enable */
.equ	CAN_IER_FOVIE0_Pos,	(3U)
.equ	CAN_IER_FOVIE0_Msk,	(0x1UL << CAN_IER_FOVIE0_Pos)      /*!< 0x00000008 */
.equ	CAN_IER_FOVIE0,	CAN_IER_FOVIE0_Msk                /*!< FIFO Overrun Interrupt Enable */
.equ	CAN_IER_FMPIE1_Pos,	(4U)
.equ	CAN_IER_FMPIE1_Msk,	(0x1UL << CAN_IER_FMPIE1_Pos)      /*!< 0x00000010 */
.equ	CAN_IER_FMPIE1,	CAN_IER_FMPIE1_Msk                /*!< FIFO Message Pending Interrupt Enable */
.equ	CAN_IER_FFIE1_Pos,	(5U)
.equ	CAN_IER_FFIE1_Msk,	(0x1UL << CAN_IER_FFIE1_Pos)       /*!< 0x00000020 */
.equ	CAN_IER_FFIE1,	CAN_IER_FFIE1_Msk                 /*!< FIFO Full Interrupt Enable */
.equ	CAN_IER_FOVIE1_Pos,	(6U)
.equ	CAN_IER_FOVIE1_Msk,	(0x1UL << CAN_IER_FOVIE1_Pos)      /*!< 0x00000040 */
.equ	CAN_IER_FOVIE1,	CAN_IER_FOVIE1_Msk                /*!< FIFO Overrun Interrupt Enable */
.equ	CAN_IER_EWGIE_Pos,	(8U)
.equ	CAN_IER_EWGIE_Msk,	(0x1UL << CAN_IER_EWGIE_Pos)       /*!< 0x00000100 */
.equ	CAN_IER_EWGIE,	CAN_IER_EWGIE_Msk                 /*!< Error Warning Interrupt Enable */
.equ	CAN_IER_EPVIE_Pos,	(9U)
.equ	CAN_IER_EPVIE_Msk,	(0x1UL << CAN_IER_EPVIE_Pos)       /*!< 0x00000200 */
.equ	CAN_IER_EPVIE,	CAN_IER_EPVIE_Msk                 /*!< Error Passive Interrupt Enable */
.equ	CAN_IER_BOFIE_Pos,	(10U)
.equ	CAN_IER_BOFIE_Msk,	(0x1UL << CAN_IER_BOFIE_Pos)       /*!< 0x00000400 */
.equ	CAN_IER_BOFIE,	CAN_IER_BOFIE_Msk                 /*!< Bus-Off Interrupt Enable */
.equ	CAN_IER_LECIE_Pos,	(11U)
.equ	CAN_IER_LECIE_Msk,	(0x1UL << CAN_IER_LECIE_Pos)       /*!< 0x00000800 */
.equ	CAN_IER_LECIE,	CAN_IER_LECIE_Msk                 /*!< Last Error Code Interrupt Enable */
.equ	CAN_IER_ERRIE_Pos,	(15U)
.equ	CAN_IER_ERRIE_Msk,	(0x1UL << CAN_IER_ERRIE_Pos)       /*!< 0x00008000 */
.equ	CAN_IER_ERRIE,	CAN_IER_ERRIE_Msk                 /*!< Error Interrupt Enable */
.equ	CAN_IER_WKUIE_Pos,	(16U)
.equ	CAN_IER_WKUIE_Msk,	(0x1UL << CAN_IER_WKUIE_Pos)       /*!< 0x00010000 */
.equ	CAN_IER_WKUIE,	CAN_IER_WKUIE_Msk                 /*!< Wakeup Interrupt Enable */
.equ	CAN_IER_SLKIE_Pos,	(17U)
.equ	CAN_IER_SLKIE_Msk,	(0x1UL << CAN_IER_SLKIE_Pos)       /*!< 0x00020000 */
.equ	CAN_IER_SLKIE,	CAN_IER_SLKIE_Msk                 /*!< Sleep Interrupt Enable */

/********************  Bit definition for CAN_ESR register  *******************/
.equ	CAN_ESR_EWGF_Pos,	0
.equ	CAN_ESR_EWGF_Msk,	(0x1UL << CAN_ESR_EWGF_Pos)        /*!< 0x00000001 */
.equ	CAN_ESR_EWGF,	CAN_ESR_EWGF_Msk                  /*!< Error Warning Flag */
.equ	CAN_ESR_EPVF_Pos,	(1U)
.equ	CAN_ESR_EPVF_Msk,	(0x1UL << CAN_ESR_EPVF_Pos)        /*!< 0x00000002 */
.equ	CAN_ESR_EPVF,	CAN_ESR_EPVF_Msk                  /*!< Error Passive Flag */
.equ	CAN_ESR_BOFF_Pos,	(2U)
.equ	CAN_ESR_BOFF_Msk,	(0x1UL << CAN_ESR_BOFF_Pos)        /*!< 0x00000004 */
.equ	CAN_ESR_BOFF,	CAN_ESR_BOFF_Msk                  /*!< Bus-Off Flag */

.equ	CAN_ESR_LEC_Pos,	(4U)
.equ	CAN_ESR_LEC_Msk,	(0x7UL << CAN_ESR_LEC_Pos)         /*!< 0x00000070 */
.equ	CAN_ESR_LEC,	CAN_ESR_LEC_Msk                   /*!< LEC[2:0] bits (Last Error Code) */
.equ	CAN_ESR_LEC_0,	(0x1UL << CAN_ESR_LEC_Pos)         /*!< 0x00000010 */
.equ	CAN_ESR_LEC_1,	(0x2UL << CAN_ESR_LEC_Pos)         /*!< 0x00000020 */
.equ	CAN_ESR_LEC_2,	(0x4UL << CAN_ESR_LEC_Pos)         /*!< 0x00000040 */

.equ	CAN_ESR_TEC_Pos,	(16U)
.equ	CAN_ESR_TEC_Msk,	(0xFFUL << CAN_ESR_TEC_Pos)        /*!< 0x00FF0000 */
.equ	CAN_ESR_TEC,	CAN_ESR_TEC_Msk                   /*!< Least significant byte of the 9-bit Transmit Error Counter */
.equ	CAN_ESR_REC_Pos,	(24U)
.equ	CAN_ESR_REC_Msk,	(0xFFUL << CAN_ESR_REC_Pos)        /*!< 0xFF000000 */
.equ	CAN_ESR_REC,	CAN_ESR_REC_Msk                   /*!< Receive Error Counter */

/*******************  Bit definition for CAN_BTR register  ********************/
.equ	CAN_BTR_BRP_Pos,	0
.equ	CAN_BTR_BRP_Msk,	(0x3FFUL << CAN_BTR_BRP_Pos)       /*!< 0x000003FF */
.equ	CAN_BTR_BRP,	CAN_BTR_BRP_Msk                   /*!<Baud Rate Prescaler */
.equ	CAN_BTR_TS1_Pos,	(16U)
.equ	CAN_BTR_TS1_Msk,	(0xFUL << CAN_BTR_TS1_Pos)         /*!< 0x000F0000 */
.equ	CAN_BTR_TS1,	CAN_BTR_TS1_Msk                   /*!<Time Segment 1 */
.equ	CAN_BTR_TS1_0,	(0x1UL << CAN_BTR_TS1_Pos)         /*!< 0x00010000 */
.equ	CAN_BTR_TS1_1,	(0x2UL << CAN_BTR_TS1_Pos)         /*!< 0x00020000 */
.equ	CAN_BTR_TS1_2,	(0x4UL << CAN_BTR_TS1_Pos)         /*!< 0x00040000 */
.equ	CAN_BTR_TS1_3,	(0x8UL << CAN_BTR_TS1_Pos)         /*!< 0x00080000 */
.equ	CAN_BTR_TS2_Pos,	(20U)
.equ	CAN_BTR_TS2_Msk,	(0x7UL << CAN_BTR_TS2_Pos)         /*!< 0x00700000 */
.equ	CAN_BTR_TS2,	CAN_BTR_TS2_Msk                   /*!<Time Segment 2 */
.equ	CAN_BTR_TS2_0,	(0x1UL << CAN_BTR_TS2_Pos)         /*!< 0x00100000 */
.equ	CAN_BTR_TS2_1,	(0x2UL << CAN_BTR_TS2_Pos)         /*!< 0x00200000 */
.equ	CAN_BTR_TS2_2,	(0x4UL << CAN_BTR_TS2_Pos)         /*!< 0x00400000 */
.equ	CAN_BTR_SJW_Pos,	(24U)
.equ	CAN_BTR_SJW_Msk,	(0x3UL << CAN_BTR_SJW_Pos)         /*!< 0x03000000 */
.equ	CAN_BTR_SJW,	CAN_BTR_SJW_Msk                   /*!<Resynchronization Jump Width */
.equ	CAN_BTR_SJW_0,	(0x1UL << CAN_BTR_SJW_Pos)         /*!< 0x01000000 */
.equ	CAN_BTR_SJW_1,	(0x2UL << CAN_BTR_SJW_Pos)         /*!< 0x02000000 */
.equ	CAN_BTR_LBKM_Pos,	(30U)
.equ	CAN_BTR_LBKM_Msk,	(0x1UL << CAN_BTR_LBKM_Pos)        /*!< 0x40000000 */
.equ	CAN_BTR_LBKM,	CAN_BTR_LBKM_Msk                  /*!<Loop Back Mode (Debug) */
.equ	CAN_BTR_SILM_Pos,	(31U)
.equ	CAN_BTR_SILM_Msk,	(0x1UL << CAN_BTR_SILM_Pos)        /*!< 0x80000000 */
.equ	CAN_BTR_SILM,	CAN_BTR_SILM_Msk                  /*!<Silent Mode */

/*!< Mailbox registers */
/******************  Bit definition for CAN_TI0R register  ********************/
.equ	CAN_TI0R_TXRQ_Pos,	0
.equ	CAN_TI0R_TXRQ_Msk,	(0x1UL << CAN_TI0R_TXRQ_Pos)       /*!< 0x00000001 */
.equ	CAN_TI0R_TXRQ,	CAN_TI0R_TXRQ_Msk                 /*!< Transmit Mailbox Request */
.equ	CAN_TI0R_RTR_Pos,	(1U)
.equ	CAN_TI0R_RTR_Msk,	(0x1UL << CAN_TI0R_RTR_Pos)        /*!< 0x00000002 */
.equ	CAN_TI0R_RTR,	CAN_TI0R_RTR_Msk                  /*!< Remote Transmission Request */
.equ	CAN_TI0R_IDE_Pos,	(2U)
.equ	CAN_TI0R_IDE_Msk,	(0x1UL << CAN_TI0R_IDE_Pos)        /*!< 0x00000004 */
.equ	CAN_TI0R_IDE,	CAN_TI0R_IDE_Msk                  /*!< Identifier Extension */
.equ	CAN_TI0R_EXID_Pos,	(3U)
.equ	CAN_TI0R_EXID_Msk,	(0x3FFFFUL << CAN_TI0R_EXID_Pos)   /*!< 0x001FFFF8 */
.equ	CAN_TI0R_EXID,	CAN_TI0R_EXID_Msk                 /*!< Extended Identifier */
.equ	CAN_TI0R_STID_Pos,	(21U)
.equ	CAN_TI0R_STID_Msk,	(0x7FFUL << CAN_TI0R_STID_Pos)     /*!< 0xFFE00000 */
.equ	CAN_TI0R_STID,	CAN_TI0R_STID_Msk                 /*!< Standard Identifier or Extended Identifier */

/******************  Bit definition for CAN_TDT0R register  *******************/
.equ	CAN_TDT0R_DLC_Pos,	0
.equ	CAN_TDT0R_DLC_Msk,	(0xFUL << CAN_TDT0R_DLC_Pos)       /*!< 0x0000000F */
.equ	CAN_TDT0R_DLC,	CAN_TDT0R_DLC_Msk                 /*!< Data Length Code */
.equ	CAN_TDT0R_TGT_Pos,	(8U)
.equ	CAN_TDT0R_TGT_Msk,	(0x1UL << CAN_TDT0R_TGT_Pos)       /*!< 0x00000100 */
.equ	CAN_TDT0R_TGT,	CAN_TDT0R_TGT_Msk                 /*!< Transmit Global Time */
.equ	CAN_TDT0R_TIME_Pos,	(16U)
.equ	CAN_TDT0R_TIME_Msk,	(0xFFFFUL << CAN_TDT0R_TIME_Pos)   /*!< 0xFFFF0000 */
.equ	CAN_TDT0R_TIME,	CAN_TDT0R_TIME_Msk                /*!< Message Time Stamp */

/******************  Bit definition for CAN_TDL0R register  *******************/
.equ	CAN_TDL0R_DATA0_Pos,	0
.equ	CAN_TDL0R_DATA0_Msk,	(0xFFUL << CAN_TDL0R_DATA0_Pos)    /*!< 0x000000FF */
.equ	CAN_TDL0R_DATA0,	CAN_TDL0R_DATA0_Msk               /*!< Data byte 0 */
.equ	CAN_TDL0R_DATA1_Pos,	(8U)
.equ	CAN_TDL0R_DATA1_Msk,	(0xFFUL << CAN_TDL0R_DATA1_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDL0R_DATA1,	CAN_TDL0R_DATA1_Msk               /*!< Data byte 1 */
.equ	CAN_TDL0R_DATA2_Pos,	(16U)
.equ	CAN_TDL0R_DATA2_Msk,	(0xFFUL << CAN_TDL0R_DATA2_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDL0R_DATA2,	CAN_TDL0R_DATA2_Msk               /*!< Data byte 2 */
.equ	CAN_TDL0R_DATA3_Pos,	(24U)
.equ	CAN_TDL0R_DATA3_Msk,	(0xFFUL << CAN_TDL0R_DATA3_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDL0R_DATA3,	CAN_TDL0R_DATA3_Msk               /*!< Data byte 3 */

/******************  Bit definition for CAN_TDH0R register  *******************/
.equ	CAN_TDH0R_DATA4_Pos,	0
.equ	CAN_TDH0R_DATA4_Msk,	(0xFFUL << CAN_TDH0R_DATA4_Pos)    /*!< 0x000000FF */
.equ	CAN_TDH0R_DATA4,	CAN_TDH0R_DATA4_Msk               /*!< Data byte 4 */
.equ	CAN_TDH0R_DATA5_Pos,	(8U)
.equ	CAN_TDH0R_DATA5_Msk,	(0xFFUL << CAN_TDH0R_DATA5_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDH0R_DATA5,	CAN_TDH0R_DATA5_Msk               /*!< Data byte 5 */
.equ	CAN_TDH0R_DATA6_Pos,	(16U)
.equ	CAN_TDH0R_DATA6_Msk,	(0xFFUL << CAN_TDH0R_DATA6_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDH0R_DATA6,	CAN_TDH0R_DATA6_Msk               /*!< Data byte 6 */
.equ	CAN_TDH0R_DATA7_Pos,	(24U)
.equ	CAN_TDH0R_DATA7_Msk,	(0xFFUL << CAN_TDH0R_DATA7_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDH0R_DATA7,	CAN_TDH0R_DATA7_Msk               /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI1R register  *******************/
.equ	CAN_TI1R_TXRQ_Pos,	0
.equ	CAN_TI1R_TXRQ_Msk,	(0x1UL << CAN_TI1R_TXRQ_Pos)       /*!< 0x00000001 */
.equ	CAN_TI1R_TXRQ,	CAN_TI1R_TXRQ_Msk                 /*!< Transmit Mailbox Request */
.equ	CAN_TI1R_RTR_Pos,	(1U)
.equ	CAN_TI1R_RTR_Msk,	(0x1UL << CAN_TI1R_RTR_Pos)        /*!< 0x00000002 */
.equ	CAN_TI1R_RTR,	CAN_TI1R_RTR_Msk                  /*!< Remote Transmission Request */
.equ	CAN_TI1R_IDE_Pos,	(2U)
.equ	CAN_TI1R_IDE_Msk,	(0x1UL << CAN_TI1R_IDE_Pos)        /*!< 0x00000004 */
.equ	CAN_TI1R_IDE,	CAN_TI1R_IDE_Msk                  /*!< Identifier Extension */
.equ	CAN_TI1R_EXID_Pos,	(3U)
.equ	CAN_TI1R_EXID_Msk,	(0x3FFFFUL << CAN_TI1R_EXID_Pos)   /*!< 0x001FFFF8 */
.equ	CAN_TI1R_EXID,	CAN_TI1R_EXID_Msk                 /*!< Extended Identifier */
.equ	CAN_TI1R_STID_Pos,	(21U)
.equ	CAN_TI1R_STID_Msk,	(0x7FFUL << CAN_TI1R_STID_Pos)     /*!< 0xFFE00000 */
.equ	CAN_TI1R_STID,	CAN_TI1R_STID_Msk                 /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT1R register  ******************/
.equ	CAN_TDT1R_DLC_Pos,	0
.equ	CAN_TDT1R_DLC_Msk,	(0xFUL << CAN_TDT1R_DLC_Pos)       /*!< 0x0000000F */
.equ	CAN_TDT1R_DLC,	CAN_TDT1R_DLC_Msk                 /*!< Data Length Code */
.equ	CAN_TDT1R_TGT_Pos,	(8U)
.equ	CAN_TDT1R_TGT_Msk,	(0x1UL << CAN_TDT1R_TGT_Pos)       /*!< 0x00000100 */
.equ	CAN_TDT1R_TGT,	CAN_TDT1R_TGT_Msk                 /*!< Transmit Global Time */
.equ	CAN_TDT1R_TIME_Pos,	(16U)
.equ	CAN_TDT1R_TIME_Msk,	(0xFFFFUL << CAN_TDT1R_TIME_Pos)   /*!< 0xFFFF0000 */
.equ	CAN_TDT1R_TIME,	CAN_TDT1R_TIME_Msk                /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL1R register  ******************/
.equ	CAN_TDL1R_DATA0_Pos,	0
.equ	CAN_TDL1R_DATA0_Msk,	(0xFFUL << CAN_TDL1R_DATA0_Pos)    /*!< 0x000000FF */
.equ	CAN_TDL1R_DATA0,	CAN_TDL1R_DATA0_Msk               /*!< Data byte 0 */
.equ	CAN_TDL1R_DATA1_Pos,	(8U)
.equ	CAN_TDL1R_DATA1_Msk,	(0xFFUL << CAN_TDL1R_DATA1_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDL1R_DATA1,	CAN_TDL1R_DATA1_Msk               /*!< Data byte 1 */
.equ	CAN_TDL1R_DATA2_Pos,	(16U)
.equ	CAN_TDL1R_DATA2_Msk,	(0xFFUL << CAN_TDL1R_DATA2_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDL1R_DATA2,	CAN_TDL1R_DATA2_Msk               /*!< Data byte 2 */
.equ	CAN_TDL1R_DATA3_Pos,	(24U)
.equ	CAN_TDL1R_DATA3_Msk,	(0xFFUL << CAN_TDL1R_DATA3_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDL1R_DATA3,	CAN_TDL1R_DATA3_Msk               /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH1R register  ******************/
.equ	CAN_TDH1R_DATA4_Pos,	0
.equ	CAN_TDH1R_DATA4_Msk,	(0xFFUL << CAN_TDH1R_DATA4_Pos)    /*!< 0x000000FF */
.equ	CAN_TDH1R_DATA4,	CAN_TDH1R_DATA4_Msk               /*!< Data byte 4 */
.equ	CAN_TDH1R_DATA5_Pos,	(8U)
.equ	CAN_TDH1R_DATA5_Msk,	(0xFFUL << CAN_TDH1R_DATA5_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDH1R_DATA5,	CAN_TDH1R_DATA5_Msk               /*!< Data byte 5 */
.equ	CAN_TDH1R_DATA6_Pos,	(16U)
.equ	CAN_TDH1R_DATA6_Msk,	(0xFFUL << CAN_TDH1R_DATA6_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDH1R_DATA6,	CAN_TDH1R_DATA6_Msk               /*!< Data byte 6 */
.equ	CAN_TDH1R_DATA7_Pos,	(24U)
.equ	CAN_TDH1R_DATA7_Msk,	(0xFFUL << CAN_TDH1R_DATA7_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDH1R_DATA7,	CAN_TDH1R_DATA7_Msk               /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI2R register  *******************/
.equ	CAN_TI2R_TXRQ_Pos,	0
.equ	CAN_TI2R_TXRQ_Msk,	(0x1UL << CAN_TI2R_TXRQ_Pos)       /*!< 0x00000001 */
.equ	CAN_TI2R_TXRQ,	CAN_TI2R_TXRQ_Msk                 /*!< Transmit Mailbox Request */
.equ	CAN_TI2R_RTR_Pos,	(1U)
.equ	CAN_TI2R_RTR_Msk,	(0x1UL << CAN_TI2R_RTR_Pos)        /*!< 0x00000002 */
.equ	CAN_TI2R_RTR,	CAN_TI2R_RTR_Msk                  /*!< Remote Transmission Request */
.equ	CAN_TI2R_IDE_Pos,	(2U)
.equ	CAN_TI2R_IDE_Msk,	(0x1UL << CAN_TI2R_IDE_Pos)        /*!< 0x00000004 */
.equ	CAN_TI2R_IDE,	CAN_TI2R_IDE_Msk                  /*!< Identifier Extension */
.equ	CAN_TI2R_EXID_Pos,	(3U)
.equ	CAN_TI2R_EXID_Msk,	(0x3FFFFUL << CAN_TI2R_EXID_Pos)   /*!< 0x001FFFF8 */
.equ	CAN_TI2R_EXID,	CAN_TI2R_EXID_Msk                 /*!< Extended identifier */
.equ	CAN_TI2R_STID_Pos,	(21U)
.equ	CAN_TI2R_STID_Msk,	(0x7FFUL << CAN_TI2R_STID_Pos)     /*!< 0xFFE00000 */
.equ	CAN_TI2R_STID,	CAN_TI2R_STID_Msk                 /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT2R register  ******************/
.equ	CAN_TDT2R_DLC_Pos,	0
.equ	CAN_TDT2R_DLC_Msk,	(0xFUL << CAN_TDT2R_DLC_Pos)       /*!< 0x0000000F */
.equ	CAN_TDT2R_DLC,	CAN_TDT2R_DLC_Msk                 /*!< Data Length Code */
.equ	CAN_TDT2R_TGT_Pos,	(8U)
.equ	CAN_TDT2R_TGT_Msk,	(0x1UL << CAN_TDT2R_TGT_Pos)       /*!< 0x00000100 */
.equ	CAN_TDT2R_TGT,	CAN_TDT2R_TGT_Msk                 /*!< Transmit Global Time */
.equ	CAN_TDT2R_TIME_Pos,	(16U)
.equ	CAN_TDT2R_TIME_Msk,	(0xFFFFUL << CAN_TDT2R_TIME_Pos)   /*!< 0xFFFF0000 */
.equ	CAN_TDT2R_TIME,	CAN_TDT2R_TIME_Msk                /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL2R register  ******************/
.equ	CAN_TDL2R_DATA0_Pos,	0
.equ	CAN_TDL2R_DATA0_Msk,	(0xFFUL << CAN_TDL2R_DATA0_Pos)    /*!< 0x000000FF */
.equ	CAN_TDL2R_DATA0,	CAN_TDL2R_DATA0_Msk               /*!< Data byte 0 */
.equ	CAN_TDL2R_DATA1_Pos,	(8U)
.equ	CAN_TDL2R_DATA1_Msk,	(0xFFUL << CAN_TDL2R_DATA1_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDL2R_DATA1,	CAN_TDL2R_DATA1_Msk               /*!< Data byte 1 */
.equ	CAN_TDL2R_DATA2_Pos,	(16U)
.equ	CAN_TDL2R_DATA2_Msk,	(0xFFUL << CAN_TDL2R_DATA2_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDL2R_DATA2,	CAN_TDL2R_DATA2_Msk               /*!< Data byte 2 */
.equ	CAN_TDL2R_DATA3_Pos,	(24U)
.equ	CAN_TDL2R_DATA3_Msk,	(0xFFUL << CAN_TDL2R_DATA3_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDL2R_DATA3,	CAN_TDL2R_DATA3_Msk               /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH2R register  ******************/
.equ	CAN_TDH2R_DATA4_Pos,	0
.equ	CAN_TDH2R_DATA4_Msk,	(0xFFUL << CAN_TDH2R_DATA4_Pos)    /*!< 0x000000FF */
.equ	CAN_TDH2R_DATA4,	CAN_TDH2R_DATA4_Msk               /*!< Data byte 4 */
.equ	CAN_TDH2R_DATA5_Pos,	(8U)
.equ	CAN_TDH2R_DATA5_Msk,	(0xFFUL << CAN_TDH2R_DATA5_Pos)    /*!< 0x0000FF00 */
.equ	CAN_TDH2R_DATA5,	CAN_TDH2R_DATA5_Msk               /*!< Data byte 5 */
.equ	CAN_TDH2R_DATA6_Pos,	(16U)
.equ	CAN_TDH2R_DATA6_Msk,	(0xFFUL << CAN_TDH2R_DATA6_Pos)    /*!< 0x00FF0000 */
.equ	CAN_TDH2R_DATA6,	CAN_TDH2R_DATA6_Msk               /*!< Data byte 6 */
.equ	CAN_TDH2R_DATA7_Pos,	(24U)
.equ	CAN_TDH2R_DATA7_Msk,	(0xFFUL << CAN_TDH2R_DATA7_Pos)    /*!< 0xFF000000 */
.equ	CAN_TDH2R_DATA7,	CAN_TDH2R_DATA7_Msk               /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI0R register  *******************/
.equ	CAN_RI0R_RTR_Pos,	(1U)
.equ	CAN_RI0R_RTR_Msk,	(0x1UL << CAN_RI0R_RTR_Pos)        /*!< 0x00000002 */
.equ	CAN_RI0R_RTR,	CAN_RI0R_RTR_Msk                  /*!< Remote Transmission Request */
.equ	CAN_RI0R_IDE_Pos,	(2U)
.equ	CAN_RI0R_IDE_Msk,	(0x1UL << CAN_RI0R_IDE_Pos)        /*!< 0x00000004 */
.equ	CAN_RI0R_IDE,	CAN_RI0R_IDE_Msk                  /*!< Identifier Extension */
.equ	CAN_RI0R_EXID_Pos,	(3U)
.equ	CAN_RI0R_EXID_Msk,	(0x3FFFFUL << CAN_RI0R_EXID_Pos)   /*!< 0x001FFFF8 */
.equ	CAN_RI0R_EXID,	CAN_RI0R_EXID_Msk                 /*!< Extended Identifier */
.equ	CAN_RI0R_STID_Pos,	(21U)
.equ	CAN_RI0R_STID_Msk,	(0x7FFUL << CAN_RI0R_STID_Pos)     /*!< 0xFFE00000 */
.equ	CAN_RI0R_STID,	CAN_RI0R_STID_Msk                 /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT0R register  ******************/
.equ	CAN_RDT0R_DLC_Pos,	0
.equ	CAN_RDT0R_DLC_Msk,	(0xFUL << CAN_RDT0R_DLC_Pos)       /*!< 0x0000000F */
.equ	CAN_RDT0R_DLC,	CAN_RDT0R_DLC_Msk                 /*!< Data Length Code */
.equ	CAN_RDT0R_FMI_Pos,	(8U)
.equ	CAN_RDT0R_FMI_Msk,	(0xFFUL << CAN_RDT0R_FMI_Pos)      /*!< 0x0000FF00 */
.equ	CAN_RDT0R_FMI,	CAN_RDT0R_FMI_Msk                 /*!< Filter Match Index */
.equ	CAN_RDT0R_TIME_Pos,	(16U)
.equ	CAN_RDT0R_TIME_Msk,	(0xFFFFUL << CAN_RDT0R_TIME_Pos)   /*!< 0xFFFF0000 */
.equ	CAN_RDT0R_TIME,	CAN_RDT0R_TIME_Msk                /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL0R register  ******************/
.equ	CAN_RDL0R_DATA0_Pos,	0
.equ	CAN_RDL0R_DATA0_Msk,	(0xFFUL << CAN_RDL0R_DATA0_Pos)    /*!< 0x000000FF */
.equ	CAN_RDL0R_DATA0,	CAN_RDL0R_DATA0_Msk               /*!< Data byte 0 */
.equ	CAN_RDL0R_DATA1_Pos,	(8U)
.equ	CAN_RDL0R_DATA1_Msk,	(0xFFUL << CAN_RDL0R_DATA1_Pos)    /*!< 0x0000FF00 */
.equ	CAN_RDL0R_DATA1,	CAN_RDL0R_DATA1_Msk               /*!< Data byte 1 */
.equ	CAN_RDL0R_DATA2_Pos,	(16U)
.equ	CAN_RDL0R_DATA2_Msk,	(0xFFUL << CAN_RDL0R_DATA2_Pos)    /*!< 0x00FF0000 */
.equ	CAN_RDL0R_DATA2,	CAN_RDL0R_DATA2_Msk               /*!< Data byte 2 */
.equ	CAN_RDL0R_DATA3_Pos,	(24U)
.equ	CAN_RDL0R_DATA3_Msk,	(0xFFUL << CAN_RDL0R_DATA3_Pos)    /*!< 0xFF000000 */
.equ	CAN_RDL0R_DATA3,	CAN_RDL0R_DATA3_Msk               /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH0R register  ******************/
.equ	CAN_RDH0R_DATA4_Pos,	0
.equ	CAN_RDH0R_DATA4_Msk,	(0xFFUL << CAN_RDH0R_DATA4_Pos)    /*!< 0x000000FF */
.equ	CAN_RDH0R_DATA4,	CAN_RDH0R_DATA4_Msk               /*!< Data byte 4 */
.equ	CAN_RDH0R_DATA5_Pos,	(8U)
.equ	CAN_RDH0R_DATA5_Msk,	(0xFFUL << CAN_RDH0R_DATA5_Pos)    /*!< 0x0000FF00 */
.equ	CAN_RDH0R_DATA5,	CAN_RDH0R_DATA5_Msk               /*!< Data byte 5 */
.equ	CAN_RDH0R_DATA6_Pos,	(16U)
.equ	CAN_RDH0R_DATA6_Msk,	(0xFFUL << CAN_RDH0R_DATA6_Pos)    /*!< 0x00FF0000 */
.equ	CAN_RDH0R_DATA6,	CAN_RDH0R_DATA6_Msk               /*!< Data byte 6 */
.equ	CAN_RDH0R_DATA7_Pos,	(24U)
.equ	CAN_RDH0R_DATA7_Msk,	(0xFFUL << CAN_RDH0R_DATA7_Pos)    /*!< 0xFF000000 */
.equ	CAN_RDH0R_DATA7,	CAN_RDH0R_DATA7_Msk               /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI1R register  *******************/
.equ	CAN_RI1R_RTR_Pos,	(1U)
.equ	CAN_RI1R_RTR_Msk,	(0x1UL << CAN_RI1R_RTR_Pos)        /*!< 0x00000002 */
.equ	CAN_RI1R_RTR,	CAN_RI1R_RTR_Msk                  /*!< Remote Transmission Request */
.equ	CAN_RI1R_IDE_Pos,	(2U)
.equ	CAN_RI1R_IDE_Msk,	(0x1UL << CAN_RI1R_IDE_Pos)        /*!< 0x00000004 */
.equ	CAN_RI1R_IDE,	CAN_RI1R_IDE_Msk                  /*!< Identifier Extension */
.equ	CAN_RI1R_EXID_Pos,	(3U)
.equ	CAN_RI1R_EXID_Msk,	(0x3FFFFUL << CAN_RI1R_EXID_Pos)   /*!< 0x001FFFF8 */
.equ	CAN_RI1R_EXID,	CAN_RI1R_EXID_Msk                 /*!< Extended identifier */
.equ	CAN_RI1R_STID_Pos,	(21U)
.equ	CAN_RI1R_STID_Msk,	(0x7FFUL << CAN_RI1R_STID_Pos)     /*!< 0xFFE00000 */
.equ	CAN_RI1R_STID,	CAN_RI1R_STID_Msk                 /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT1R register  ******************/
.equ	CAN_RDT1R_DLC_Pos,	0
.equ	CAN_RDT1R_DLC_Msk,	(0xFUL << CAN_RDT1R_DLC_Pos)       /*!< 0x0000000F */
.equ	CAN_RDT1R_DLC,	CAN_RDT1R_DLC_Msk                 /*!< Data Length Code */
.equ	CAN_RDT1R_FMI_Pos,	(8U)
.equ	CAN_RDT1R_FMI_Msk,	(0xFFUL << CAN_RDT1R_FMI_Pos)      /*!< 0x0000FF00 */
.equ	CAN_RDT1R_FMI,	CAN_RDT1R_FMI_Msk                 /*!< Filter Match Index */
.equ	CAN_RDT1R_TIME_Pos,	(16U)
.equ	CAN_RDT1R_TIME_Msk,	(0xFFFFUL << CAN_RDT1R_TIME_Pos)   /*!< 0xFFFF0000 */
.equ	CAN_RDT1R_TIME,	CAN_RDT1R_TIME_Msk                /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL1R register  ******************/
.equ	CAN_RDL1R_DATA0_Pos,	0
.equ	CAN_RDL1R_DATA0_Msk,	(0xFFUL << CAN_RDL1R_DATA0_Pos)    /*!< 0x000000FF */
.equ	CAN_RDL1R_DATA0,	CAN_RDL1R_DATA0_Msk               /*!< Data byte 0 */
.equ	CAN_RDL1R_DATA1_Pos,	(8U)
.equ	CAN_RDL1R_DATA1_Msk,	(0xFFUL << CAN_RDL1R_DATA1_Pos)    /*!< 0x0000FF00 */
.equ	CAN_RDL1R_DATA1,	CAN_RDL1R_DATA1_Msk               /*!< Data byte 1 */
.equ	CAN_RDL1R_DATA2_Pos,	(16U)
.equ	CAN_RDL1R_DATA2_Msk,	(0xFFUL << CAN_RDL1R_DATA2_Pos)    /*!< 0x00FF0000 */
.equ	CAN_RDL1R_DATA2,	CAN_RDL1R_DATA2_Msk               /*!< Data byte 2 */
.equ	CAN_RDL1R_DATA3_Pos,	(24U)
.equ	CAN_RDL1R_DATA3_Msk,	(0xFFUL << CAN_RDL1R_DATA3_Pos)    /*!< 0xFF000000 */
.equ	CAN_RDL1R_DATA3,	CAN_RDL1R_DATA3_Msk               /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH1R register  ******************/
.equ	CAN_RDH1R_DATA4_Pos,	0
.equ	CAN_RDH1R_DATA4_Msk,	(0xFFUL << CAN_RDH1R_DATA4_Pos)    /*!< 0x000000FF */
.equ	CAN_RDH1R_DATA4,	CAN_RDH1R_DATA4_Msk               /*!< Data byte 4 */
.equ	CAN_RDH1R_DATA5_Pos,	(8U)
.equ	CAN_RDH1R_DATA5_Msk,	(0xFFUL << CAN_RDH1R_DATA5_Pos)    /*!< 0x0000FF00 */
.equ	CAN_RDH1R_DATA5,	CAN_RDH1R_DATA5_Msk               /*!< Data byte 5 */
.equ	CAN_RDH1R_DATA6_Pos,	(16U)
.equ	CAN_RDH1R_DATA6_Msk,	(0xFFUL << CAN_RDH1R_DATA6_Pos)    /*!< 0x00FF0000 */
.equ	CAN_RDH1R_DATA6,	CAN_RDH1R_DATA6_Msk               /*!< Data byte 6 */
.equ	CAN_RDH1R_DATA7_Pos,	(24U)
.equ	CAN_RDH1R_DATA7_Msk,	(0xFFUL << CAN_RDH1R_DATA7_Pos)    /*!< 0xFF000000 */
.equ	CAN_RDH1R_DATA7,	CAN_RDH1R_DATA7_Msk               /*!< Data byte 7 */

/*!< CAN filter registers */
/*******************  Bit definition for CAN_FMR register  ********************/
.equ	CAN_FMR_FINIT_Pos,	0
.equ	CAN_FMR_FINIT_Msk,	(0x1UL << CAN_FMR_FINIT_Pos)       /*!< 0x00000001 */
.equ	CAN_FMR_FINIT,	CAN_FMR_FINIT_Msk                 /*!< Filter Init Mode */
.equ	CAN_FMR_CAN2SB_Pos,	(8U)
.equ	CAN_FMR_CAN2SB_Msk,	(0x3FUL << CAN_FMR_CAN2SB_Pos)     /*!< 0x00003F00 */
.equ	CAN_FMR_CAN2SB,	CAN_FMR_CAN2SB_Msk                /*!< CAN2 start bank */

/*******************  Bit definition for CAN_FM1R register  *******************/
.equ	CAN_FM1R_FBM_Pos,	0
.equ	CAN_FM1R_FBM_Msk,	(0x3FFFUL << CAN_FM1R_FBM_Pos)     /*!< 0x00003FFF */
.equ	CAN_FM1R_FBM,	CAN_FM1R_FBM_Msk                  /*!< Filter Mode */
.equ	CAN_FM1R_FBM0_Pos,	0
.equ	CAN_FM1R_FBM0_Msk,	(0x1UL << CAN_FM1R_FBM0_Pos)       /*!< 0x00000001 */
.equ	CAN_FM1R_FBM0,	CAN_FM1R_FBM0_Msk                 /*!< Filter Init Mode for filter 0 */
.equ	CAN_FM1R_FBM1_Pos,	(1U)
.equ	CAN_FM1R_FBM1_Msk,	(0x1UL << CAN_FM1R_FBM1_Pos)       /*!< 0x00000002 */
.equ	CAN_FM1R_FBM1,	CAN_FM1R_FBM1_Msk                 /*!< Filter Init Mode for filter 1 */
.equ	CAN_FM1R_FBM2_Pos,	(2U)
.equ	CAN_FM1R_FBM2_Msk,	(0x1UL << CAN_FM1R_FBM2_Pos)       /*!< 0x00000004 */
.equ	CAN_FM1R_FBM2,	CAN_FM1R_FBM2_Msk                 /*!< Filter Init Mode for filter 2 */
.equ	CAN_FM1R_FBM3_Pos,	(3U)
.equ	CAN_FM1R_FBM3_Msk,	(0x1UL << CAN_FM1R_FBM3_Pos)       /*!< 0x00000008 */
.equ	CAN_FM1R_FBM3,	CAN_FM1R_FBM3_Msk                 /*!< Filter Init Mode for filter 3 */
.equ	CAN_FM1R_FBM4_Pos,	(4U)
.equ	CAN_FM1R_FBM4_Msk,	(0x1UL << CAN_FM1R_FBM4_Pos)       /*!< 0x00000010 */
.equ	CAN_FM1R_FBM4,	CAN_FM1R_FBM4_Msk                 /*!< Filter Init Mode for filter 4 */
.equ	CAN_FM1R_FBM5_Pos,	(5U)
.equ	CAN_FM1R_FBM5_Msk,	(0x1UL << CAN_FM1R_FBM5_Pos)       /*!< 0x00000020 */
.equ	CAN_FM1R_FBM5,	CAN_FM1R_FBM5_Msk                 /*!< Filter Init Mode for filter 5 */
.equ	CAN_FM1R_FBM6_Pos,	(6U)
.equ	CAN_FM1R_FBM6_Msk,	(0x1UL << CAN_FM1R_FBM6_Pos)       /*!< 0x00000040 */
.equ	CAN_FM1R_FBM6,	CAN_FM1R_FBM6_Msk                 /*!< Filter Init Mode for filter 6 */
.equ	CAN_FM1R_FBM7_Pos,	(7U)
.equ	CAN_FM1R_FBM7_Msk,	(0x1UL << CAN_FM1R_FBM7_Pos)       /*!< 0x00000080 */
.equ	CAN_FM1R_FBM7,	CAN_FM1R_FBM7_Msk                 /*!< Filter Init Mode for filter 7 */
.equ	CAN_FM1R_FBM8_Pos,	(8U)
.equ	CAN_FM1R_FBM8_Msk,	(0x1UL << CAN_FM1R_FBM8_Pos)       /*!< 0x00000100 */
.equ	CAN_FM1R_FBM8,	CAN_FM1R_FBM8_Msk                 /*!< Filter Init Mode for filter 8 */
.equ	CAN_FM1R_FBM9_Pos,	(9U)
.equ	CAN_FM1R_FBM9_Msk,	(0x1UL << CAN_FM1R_FBM9_Pos)       /*!< 0x00000200 */
.equ	CAN_FM1R_FBM9,	CAN_FM1R_FBM9_Msk                 /*!< Filter Init Mode for filter 9 */
.equ	CAN_FM1R_FBM10_Pos,	(10U)
.equ	CAN_FM1R_FBM10_Msk,	(0x1UL << CAN_FM1R_FBM10_Pos)      /*!< 0x00000400 */
.equ	CAN_FM1R_FBM10,	CAN_FM1R_FBM10_Msk                /*!< Filter Init Mode for filter 10 */
.equ	CAN_FM1R_FBM11_Pos,	(11U)
.equ	CAN_FM1R_FBM11_Msk,	(0x1UL << CAN_FM1R_FBM11_Pos)      /*!< 0x00000800 */
.equ	CAN_FM1R_FBM11,	CAN_FM1R_FBM11_Msk                /*!< Filter Init Mode for filter 11 */
.equ	CAN_FM1R_FBM12_Pos,	(12U)
.equ	CAN_FM1R_FBM12_Msk,	(0x1UL << CAN_FM1R_FBM12_Pos)      /*!< 0x00001000 */
.equ	CAN_FM1R_FBM12,	CAN_FM1R_FBM12_Msk                /*!< Filter Init Mode for filter 12 */
.equ	CAN_FM1R_FBM13_Pos,	(13U)
.equ	CAN_FM1R_FBM13_Msk,	(0x1UL << CAN_FM1R_FBM13_Pos)      /*!< 0x00002000 */
.equ	CAN_FM1R_FBM13,	CAN_FM1R_FBM13_Msk                /*!< Filter Init Mode for filter 13 */

/*******************  Bit definition for CAN_FS1R register  *******************/
.equ	CAN_FS1R_FSC_Pos,	0
.equ	CAN_FS1R_FSC_Msk,	(0x3FFFUL << CAN_FS1R_FSC_Pos)     /*!< 0x00003FFF */
.equ	CAN_FS1R_FSC,	CAN_FS1R_FSC_Msk                  /*!< Filter Scale Configuration */
.equ	CAN_FS1R_FSC0_Pos,	0
.equ	CAN_FS1R_FSC0_Msk,	(0x1UL << CAN_FS1R_FSC0_Pos)       /*!< 0x00000001 */
.equ	CAN_FS1R_FSC0,	CAN_FS1R_FSC0_Msk                 /*!< Filter Scale Configuration for filter 0 */
.equ	CAN_FS1R_FSC1_Pos,	(1U)
.equ	CAN_FS1R_FSC1_Msk,	(0x1UL << CAN_FS1R_FSC1_Pos)       /*!< 0x00000002 */
.equ	CAN_FS1R_FSC1,	CAN_FS1R_FSC1_Msk                 /*!< Filter Scale Configuration for filter 1 */
.equ	CAN_FS1R_FSC2_Pos,	(2U)
.equ	CAN_FS1R_FSC2_Msk,	(0x1UL << CAN_FS1R_FSC2_Pos)       /*!< 0x00000004 */
.equ	CAN_FS1R_FSC2,	CAN_FS1R_FSC2_Msk                 /*!< Filter Scale Configuration for filter 2 */
.equ	CAN_FS1R_FSC3_Pos,	(3U)
.equ	CAN_FS1R_FSC3_Msk,	(0x1UL << CAN_FS1R_FSC3_Pos)       /*!< 0x00000008 */
.equ	CAN_FS1R_FSC3,	CAN_FS1R_FSC3_Msk                 /*!< Filter Scale Configuration for filter 3 */
.equ	CAN_FS1R_FSC4_Pos,	(4U)
.equ	CAN_FS1R_FSC4_Msk,	(0x1UL << CAN_FS1R_FSC4_Pos)       /*!< 0x00000010 */
.equ	CAN_FS1R_FSC4,	CAN_FS1R_FSC4_Msk                 /*!< Filter Scale Configuration for filter 4 */
.equ	CAN_FS1R_FSC5_Pos,	(5U)
.equ	CAN_FS1R_FSC5_Msk,	(0x1UL << CAN_FS1R_FSC5_Pos)       /*!< 0x00000020 */
.equ	CAN_FS1R_FSC5,	CAN_FS1R_FSC5_Msk                 /*!< Filter Scale Configuration for filter 5 */
.equ	CAN_FS1R_FSC6_Pos,	(6U)
.equ	CAN_FS1R_FSC6_Msk,	(0x1UL << CAN_FS1R_FSC6_Pos)       /*!< 0x00000040 */
.equ	CAN_FS1R_FSC6,	CAN_FS1R_FSC6_Msk                 /*!< Filter Scale Configuration for filter 6 */
.equ	CAN_FS1R_FSC7_Pos,	(7U)
.equ	CAN_FS1R_FSC7_Msk,	(0x1UL << CAN_FS1R_FSC7_Pos)       /*!< 0x00000080 */
.equ	CAN_FS1R_FSC7,	CAN_FS1R_FSC7_Msk                 /*!< Filter Scale Configuration for filter 7 */
.equ	CAN_FS1R_FSC8_Pos,	(8U)
.equ	CAN_FS1R_FSC8_Msk,	(0x1UL << CAN_FS1R_FSC8_Pos)       /*!< 0x00000100 */
.equ	CAN_FS1R_FSC8,	CAN_FS1R_FSC8_Msk                 /*!< Filter Scale Configuration for filter 8 */
.equ	CAN_FS1R_FSC9_Pos,	(9U)
.equ	CAN_FS1R_FSC9_Msk,	(0x1UL << CAN_FS1R_FSC9_Pos)       /*!< 0x00000200 */
.equ	CAN_FS1R_FSC9,	CAN_FS1R_FSC9_Msk                 /*!< Filter Scale Configuration for filter 9 */
.equ	CAN_FS1R_FSC10_Pos,	(10U)
.equ	CAN_FS1R_FSC10_Msk,	(0x1UL << CAN_FS1R_FSC10_Pos)      /*!< 0x00000400 */
.equ	CAN_FS1R_FSC10,	CAN_FS1R_FSC10_Msk                /*!< Filter Scale Configuration for filter 10 */
.equ	CAN_FS1R_FSC11_Pos,	(11U)
.equ	CAN_FS1R_FSC11_Msk,	(0x1UL << CAN_FS1R_FSC11_Pos)      /*!< 0x00000800 */
.equ	CAN_FS1R_FSC11,	CAN_FS1R_FSC11_Msk                /*!< Filter Scale Configuration for filter 11 */
.equ	CAN_FS1R_FSC12_Pos,	(12U)
.equ	CAN_FS1R_FSC12_Msk,	(0x1UL << CAN_FS1R_FSC12_Pos)      /*!< 0x00001000 */
.equ	CAN_FS1R_FSC12,	CAN_FS1R_FSC12_Msk                /*!< Filter Scale Configuration for filter 12 */
.equ	CAN_FS1R_FSC13_Pos,	(13U)
.equ	CAN_FS1R_FSC13_Msk,	(0x1UL << CAN_FS1R_FSC13_Pos)      /*!< 0x00002000 */
.equ	CAN_FS1R_FSC13,	CAN_FS1R_FSC13_Msk                /*!< Filter Scale Configuration for filter 13 */

/******************  Bit definition for CAN_FFA1R register  *******************/
.equ	CAN_FFA1R_FFA_Pos,	0
.equ	CAN_FFA1R_FFA_Msk,	(0x3FFFUL << CAN_FFA1R_FFA_Pos)    /*!< 0x00003FFF */
.equ	CAN_FFA1R_FFA,	CAN_FFA1R_FFA_Msk                 /*!< Filter FIFO Assignment */
.equ	CAN_FFA1R_FFA0_Pos,	0
.equ	CAN_FFA1R_FFA0_Msk,	(0x1UL << CAN_FFA1R_FFA0_Pos)      /*!< 0x00000001 */
.equ	CAN_FFA1R_FFA0,	CAN_FFA1R_FFA0_Msk                /*!< Filter FIFO Assignment for filter 0 */
.equ	CAN_FFA1R_FFA1_Pos,	(1U)
.equ	CAN_FFA1R_FFA1_Msk,	(0x1UL << CAN_FFA1R_FFA1_Pos)      /*!< 0x00000002 */
.equ	CAN_FFA1R_FFA1,	CAN_FFA1R_FFA1_Msk                /*!< Filter FIFO Assignment for filter 1 */
.equ	CAN_FFA1R_FFA2_Pos,	(2U)
.equ	CAN_FFA1R_FFA2_Msk,	(0x1UL << CAN_FFA1R_FFA2_Pos)      /*!< 0x00000004 */
.equ	CAN_FFA1R_FFA2,	CAN_FFA1R_FFA2_Msk                /*!< Filter FIFO Assignment for filter 2 */
.equ	CAN_FFA1R_FFA3_Pos,	(3U)
.equ	CAN_FFA1R_FFA3_Msk,	(0x1UL << CAN_FFA1R_FFA3_Pos)      /*!< 0x00000008 */
.equ	CAN_FFA1R_FFA3,	CAN_FFA1R_FFA3_Msk                /*!< Filter FIFO Assignment for filter 3 */
.equ	CAN_FFA1R_FFA4_Pos,	(4U)
.equ	CAN_FFA1R_FFA4_Msk,	(0x1UL << CAN_FFA1R_FFA4_Pos)      /*!< 0x00000010 */
.equ	CAN_FFA1R_FFA4,	CAN_FFA1R_FFA4_Msk                /*!< Filter FIFO Assignment for filter 4 */
.equ	CAN_FFA1R_FFA5_Pos,	(5U)
.equ	CAN_FFA1R_FFA5_Msk,	(0x1UL << CAN_FFA1R_FFA5_Pos)      /*!< 0x00000020 */
.equ	CAN_FFA1R_FFA5,	CAN_FFA1R_FFA5_Msk                /*!< Filter FIFO Assignment for filter 5 */
.equ	CAN_FFA1R_FFA6_Pos,	(6U)
.equ	CAN_FFA1R_FFA6_Msk,	(0x1UL << CAN_FFA1R_FFA6_Pos)      /*!< 0x00000040 */
.equ	CAN_FFA1R_FFA6,	CAN_FFA1R_FFA6_Msk                /*!< Filter FIFO Assignment for filter 6 */
.equ	CAN_FFA1R_FFA7_Pos,	(7U)
.equ	CAN_FFA1R_FFA7_Msk,	(0x1UL << CAN_FFA1R_FFA7_Pos)      /*!< 0x00000080 */
.equ	CAN_FFA1R_FFA7,	CAN_FFA1R_FFA7_Msk                /*!< Filter FIFO Assignment for filter 7 */
.equ	CAN_FFA1R_FFA8_Pos,	(8U)
.equ	CAN_FFA1R_FFA8_Msk,	(0x1UL << CAN_FFA1R_FFA8_Pos)      /*!< 0x00000100 */
.equ	CAN_FFA1R_FFA8,	CAN_FFA1R_FFA8_Msk                /*!< Filter FIFO Assignment for filter 8 */
.equ	CAN_FFA1R_FFA9_Pos,	(9U)
.equ	CAN_FFA1R_FFA9_Msk,	(0x1UL << CAN_FFA1R_FFA9_Pos)      /*!< 0x00000200 */
.equ	CAN_FFA1R_FFA9,	CAN_FFA1R_FFA9_Msk                /*!< Filter FIFO Assignment for filter 9 */
.equ	CAN_FFA1R_FFA10_Pos,	(10U)
.equ	CAN_FFA1R_FFA10_Msk,	(0x1UL << CAN_FFA1R_FFA10_Pos)     /*!< 0x00000400 */
.equ	CAN_FFA1R_FFA10,	CAN_FFA1R_FFA10_Msk               /*!< Filter FIFO Assignment for filter 10 */
.equ	CAN_FFA1R_FFA11_Pos,	(11U)
.equ	CAN_FFA1R_FFA11_Msk,	(0x1UL << CAN_FFA1R_FFA11_Pos)     /*!< 0x00000800 */
.equ	CAN_FFA1R_FFA11,	CAN_FFA1R_FFA11_Msk               /*!< Filter FIFO Assignment for filter 11 */
.equ	CAN_FFA1R_FFA12_Pos,	(12U)
.equ	CAN_FFA1R_FFA12_Msk,	(0x1UL << CAN_FFA1R_FFA12_Pos)     /*!< 0x00001000 */
.equ	CAN_FFA1R_FFA12,	CAN_FFA1R_FFA12_Msk               /*!< Filter FIFO Assignment for filter 12 */
.equ	CAN_FFA1R_FFA13_Pos,	(13U)
.equ	CAN_FFA1R_FFA13_Msk,	(0x1UL << CAN_FFA1R_FFA13_Pos)     /*!< 0x00002000 */
.equ	CAN_FFA1R_FFA13,	CAN_FFA1R_FFA13_Msk               /*!< Filter FIFO Assignment for filter 13 */

/*******************  Bit definition for CAN_FA1R register  *******************/
.equ	CAN_FA1R_FACT_Pos,	0
.equ	CAN_FA1R_FACT_Msk,	(0x3FFFUL << CAN_FA1R_FACT_Pos)    /*!< 0x00003FFF */
.equ	CAN_FA1R_FACT,	CAN_FA1R_FACT_Msk                 /*!< Filter Active */
.equ	CAN_FA1R_FACT0_Pos,	0
.equ	CAN_FA1R_FACT0_Msk,	(0x1UL << CAN_FA1R_FACT0_Pos)      /*!< 0x00000001 */
.equ	CAN_FA1R_FACT0,	CAN_FA1R_FACT0_Msk                /*!< Filter 0 Active */
.equ	CAN_FA1R_FACT1_Pos,	(1U)
.equ	CAN_FA1R_FACT1_Msk,	(0x1UL << CAN_FA1R_FACT1_Pos)      /*!< 0x00000002 */
.equ	CAN_FA1R_FACT1,	CAN_FA1R_FACT1_Msk                /*!< Filter 1 Active */
.equ	CAN_FA1R_FACT2_Pos,	(2U)
.equ	CAN_FA1R_FACT2_Msk,	(0x1UL << CAN_FA1R_FACT2_Pos)      /*!< 0x00000004 */
.equ	CAN_FA1R_FACT2,	CAN_FA1R_FACT2_Msk                /*!< Filter 2 Active */
.equ	CAN_FA1R_FACT3_Pos,	(3U)
.equ	CAN_FA1R_FACT3_Msk,	(0x1UL << CAN_FA1R_FACT3_Pos)      /*!< 0x00000008 */
.equ	CAN_FA1R_FACT3,	CAN_FA1R_FACT3_Msk                /*!< Filter 3 Active */
.equ	CAN_FA1R_FACT4_Pos,	(4U)
.equ	CAN_FA1R_FACT4_Msk,	(0x1UL << CAN_FA1R_FACT4_Pos)      /*!< 0x00000010 */
.equ	CAN_FA1R_FACT4,	CAN_FA1R_FACT4_Msk                /*!< Filter 4 Active */
.equ	CAN_FA1R_FACT5_Pos,	(5U)
.equ	CAN_FA1R_FACT5_Msk,	(0x1UL << CAN_FA1R_FACT5_Pos)      /*!< 0x00000020 */
.equ	CAN_FA1R_FACT5,	CAN_FA1R_FACT5_Msk                /*!< Filter 5 Active */
.equ	CAN_FA1R_FACT6_Pos,	(6U)
.equ	CAN_FA1R_FACT6_Msk,	(0x1UL << CAN_FA1R_FACT6_Pos)      /*!< 0x00000040 */
.equ	CAN_FA1R_FACT6,	CAN_FA1R_FACT6_Msk                /*!< Filter 6 Active */
.equ	CAN_FA1R_FACT7_Pos,	(7U)
.equ	CAN_FA1R_FACT7_Msk,	(0x1UL << CAN_FA1R_FACT7_Pos)      /*!< 0x00000080 */
.equ	CAN_FA1R_FACT7,	CAN_FA1R_FACT7_Msk                /*!< Filter 7 Active */
.equ	CAN_FA1R_FACT8_Pos,	(8U)
.equ	CAN_FA1R_FACT8_Msk,	(0x1UL << CAN_FA1R_FACT8_Pos)      /*!< 0x00000100 */
.equ	CAN_FA1R_FACT8,	CAN_FA1R_FACT8_Msk                /*!< Filter 8 Active */
.equ	CAN_FA1R_FACT9_Pos,	(9U)
.equ	CAN_FA1R_FACT9_Msk,	(0x1UL << CAN_FA1R_FACT9_Pos)      /*!< 0x00000200 */
.equ	CAN_FA1R_FACT9,	CAN_FA1R_FACT9_Msk                /*!< Filter 9 Active */
.equ	CAN_FA1R_FACT10_Pos,	(10U)
.equ	CAN_FA1R_FACT10_Msk,	(0x1UL << CAN_FA1R_FACT10_Pos)     /*!< 0x00000400 */
.equ	CAN_FA1R_FACT10,	CAN_FA1R_FACT10_Msk               /*!< Filter 10 Active */
.equ	CAN_FA1R_FACT11_Pos,	(11U)
.equ	CAN_FA1R_FACT11_Msk,	(0x1UL << CAN_FA1R_FACT11_Pos)     /*!< 0x00000800 */
.equ	CAN_FA1R_FACT11,	CAN_FA1R_FACT11_Msk               /*!< Filter 11 Active */
.equ	CAN_FA1R_FACT12_Pos,	(12U)
.equ	CAN_FA1R_FACT12_Msk,	(0x1UL << CAN_FA1R_FACT12_Pos)     /*!< 0x00001000 */
.equ	CAN_FA1R_FACT12,	CAN_FA1R_FACT12_Msk               /*!< Filter 12 Active */
.equ	CAN_FA1R_FACT13_Pos,	(13U)
.equ	CAN_FA1R_FACT13_Msk,	(0x1UL << CAN_FA1R_FACT13_Pos)     /*!< 0x00002000 */
.equ	CAN_FA1R_FACT13,	CAN_FA1R_FACT13_Msk               /*!< Filter 13 Active */

/*******************  Bit definition for CAN_F0R1 register  *******************/
.equ	CAN_F0R1_FB0_Pos,	0
.equ	CAN_F0R1_FB0_Msk,	(0x1UL << CAN_F0R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F0R1_FB0,	CAN_F0R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F0R1_FB1_Pos,	(1U)
.equ	CAN_F0R1_FB1_Msk,	(0x1UL << CAN_F0R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F0R1_FB1,	CAN_F0R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F0R1_FB2_Pos,	(2U)
.equ	CAN_F0R1_FB2_Msk,	(0x1UL << CAN_F0R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F0R1_FB2,	CAN_F0R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F0R1_FB3_Pos,	(3U)
.equ	CAN_F0R1_FB3_Msk,	(0x1UL << CAN_F0R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F0R1_FB3,	CAN_F0R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F0R1_FB4_Pos,	(4U)
.equ	CAN_F0R1_FB4_Msk,	(0x1UL << CAN_F0R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F0R1_FB4,	CAN_F0R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F0R1_FB5_Pos,	(5U)
.equ	CAN_F0R1_FB5_Msk,	(0x1UL << CAN_F0R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F0R1_FB5,	CAN_F0R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F0R1_FB6_Pos,	(6U)
.equ	CAN_F0R1_FB6_Msk,	(0x1UL << CAN_F0R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F0R1_FB6,	CAN_F0R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F0R1_FB7_Pos,	(7U)
.equ	CAN_F0R1_FB7_Msk,	(0x1UL << CAN_F0R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F0R1_FB7,	CAN_F0R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F0R1_FB8_Pos,	(8U)
.equ	CAN_F0R1_FB8_Msk,	(0x1UL << CAN_F0R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F0R1_FB8,	CAN_F0R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F0R1_FB9_Pos,	(9U)
.equ	CAN_F0R1_FB9_Msk,	(0x1UL << CAN_F0R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F0R1_FB9,	CAN_F0R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F0R1_FB10_Pos,	(10U)
.equ	CAN_F0R1_FB10_Msk,	(0x1UL << CAN_F0R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F0R1_FB10,	CAN_F0R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F0R1_FB11_Pos,	(11U)
.equ	CAN_F0R1_FB11_Msk,	(0x1UL << CAN_F0R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F0R1_FB11,	CAN_F0R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F0R1_FB12_Pos,	(12U)
.equ	CAN_F0R1_FB12_Msk,	(0x1UL << CAN_F0R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F0R1_FB12,	CAN_F0R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F0R1_FB13_Pos,	(13U)
.equ	CAN_F0R1_FB13_Msk,	(0x1UL << CAN_F0R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F0R1_FB13,	CAN_F0R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F0R1_FB14_Pos,	(14U)
.equ	CAN_F0R1_FB14_Msk,	(0x1UL << CAN_F0R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F0R1_FB14,	CAN_F0R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F0R1_FB15_Pos,	(15U)
.equ	CAN_F0R1_FB15_Msk,	(0x1UL << CAN_F0R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F0R1_FB15,	CAN_F0R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F0R1_FB16_Pos,	(16U)
.equ	CAN_F0R1_FB16_Msk,	(0x1UL << CAN_F0R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F0R1_FB16,	CAN_F0R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F0R1_FB17_Pos,	(17U)
.equ	CAN_F0R1_FB17_Msk,	(0x1UL << CAN_F0R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F0R1_FB17,	CAN_F0R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F0R1_FB18_Pos,	(18U)
.equ	CAN_F0R1_FB18_Msk,	(0x1UL << CAN_F0R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F0R1_FB18,	CAN_F0R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F0R1_FB19_Pos,	(19U)
.equ	CAN_F0R1_FB19_Msk,	(0x1UL << CAN_F0R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F0R1_FB19,	CAN_F0R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F0R1_FB20_Pos,	(20U)
.equ	CAN_F0R1_FB20_Msk,	(0x1UL << CAN_F0R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F0R1_FB20,	CAN_F0R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F0R1_FB21_Pos,	(21U)
.equ	CAN_F0R1_FB21_Msk,	(0x1UL << CAN_F0R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F0R1_FB21,	CAN_F0R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F0R1_FB22_Pos,	(22U)
.equ	CAN_F0R1_FB22_Msk,	(0x1UL << CAN_F0R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F0R1_FB22,	CAN_F0R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F0R1_FB23_Pos,	(23U)
.equ	CAN_F0R1_FB23_Msk,	(0x1UL << CAN_F0R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F0R1_FB23,	CAN_F0R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F0R1_FB24_Pos,	(24U)
.equ	CAN_F0R1_FB24_Msk,	(0x1UL << CAN_F0R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F0R1_FB24,	CAN_F0R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F0R1_FB25_Pos,	(25U)
.equ	CAN_F0R1_FB25_Msk,	(0x1UL << CAN_F0R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F0R1_FB25,	CAN_F0R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F0R1_FB26_Pos,	(26U)
.equ	CAN_F0R1_FB26_Msk,	(0x1UL << CAN_F0R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F0R1_FB26,	CAN_F0R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F0R1_FB27_Pos,	(27U)
.equ	CAN_F0R1_FB27_Msk,	(0x1UL << CAN_F0R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F0R1_FB27,	CAN_F0R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F0R1_FB28_Pos,	(28U)
.equ	CAN_F0R1_FB28_Msk,	(0x1UL << CAN_F0R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F0R1_FB28,	CAN_F0R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F0R1_FB29_Pos,	(29U)
.equ	CAN_F0R1_FB29_Msk,	(0x1UL << CAN_F0R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F0R1_FB29,	CAN_F0R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F0R1_FB30_Pos,	(30U)
.equ	CAN_F0R1_FB30_Msk,	(0x1UL << CAN_F0R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F0R1_FB30,	CAN_F0R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F0R1_FB31_Pos,	(31U)
.equ	CAN_F0R1_FB31_Msk,	(0x1UL << CAN_F0R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F0R1_FB31,	CAN_F0R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R1 register  *******************/
.equ	CAN_F1R1_FB0_Pos,	0
.equ	CAN_F1R1_FB0_Msk,	(0x1UL << CAN_F1R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F1R1_FB0,	CAN_F1R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F1R1_FB1_Pos,	(1U)
.equ	CAN_F1R1_FB1_Msk,	(0x1UL << CAN_F1R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F1R1_FB1,	CAN_F1R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F1R1_FB2_Pos,	(2U)
.equ	CAN_F1R1_FB2_Msk,	(0x1UL << CAN_F1R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F1R1_FB2,	CAN_F1R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F1R1_FB3_Pos,	(3U)
.equ	CAN_F1R1_FB3_Msk,	(0x1UL << CAN_F1R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F1R1_FB3,	CAN_F1R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F1R1_FB4_Pos,	(4U)
.equ	CAN_F1R1_FB4_Msk,	(0x1UL << CAN_F1R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F1R1_FB4,	CAN_F1R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F1R1_FB5_Pos,	(5U)
.equ	CAN_F1R1_FB5_Msk,	(0x1UL << CAN_F1R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F1R1_FB5,	CAN_F1R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F1R1_FB6_Pos,	(6U)
.equ	CAN_F1R1_FB6_Msk,	(0x1UL << CAN_F1R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F1R1_FB6,	CAN_F1R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F1R1_FB7_Pos,	(7U)
.equ	CAN_F1R1_FB7_Msk,	(0x1UL << CAN_F1R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F1R1_FB7,	CAN_F1R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F1R1_FB8_Pos,	(8U)
.equ	CAN_F1R1_FB8_Msk,	(0x1UL << CAN_F1R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F1R1_FB8,	CAN_F1R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F1R1_FB9_Pos,	(9U)
.equ	CAN_F1R1_FB9_Msk,	(0x1UL << CAN_F1R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F1R1_FB9,	CAN_F1R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F1R1_FB10_Pos,	(10U)
.equ	CAN_F1R1_FB10_Msk,	(0x1UL << CAN_F1R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F1R1_FB10,	CAN_F1R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F1R1_FB11_Pos,	(11U)
.equ	CAN_F1R1_FB11_Msk,	(0x1UL << CAN_F1R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F1R1_FB11,	CAN_F1R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F1R1_FB12_Pos,	(12U)
.equ	CAN_F1R1_FB12_Msk,	(0x1UL << CAN_F1R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F1R1_FB12,	CAN_F1R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F1R1_FB13_Pos,	(13U)
.equ	CAN_F1R1_FB13_Msk,	(0x1UL << CAN_F1R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F1R1_FB13,	CAN_F1R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F1R1_FB14_Pos,	(14U)
.equ	CAN_F1R1_FB14_Msk,	(0x1UL << CAN_F1R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F1R1_FB14,	CAN_F1R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F1R1_FB15_Pos,	(15U)
.equ	CAN_F1R1_FB15_Msk,	(0x1UL << CAN_F1R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F1R1_FB15,	CAN_F1R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F1R1_FB16_Pos,	(16U)
.equ	CAN_F1R1_FB16_Msk,	(0x1UL << CAN_F1R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F1R1_FB16,	CAN_F1R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F1R1_FB17_Pos,	(17U)
.equ	CAN_F1R1_FB17_Msk,	(0x1UL << CAN_F1R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F1R1_FB17,	CAN_F1R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F1R1_FB18_Pos,	(18U)
.equ	CAN_F1R1_FB18_Msk,	(0x1UL << CAN_F1R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F1R1_FB18,	CAN_F1R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F1R1_FB19_Pos,	(19U)
.equ	CAN_F1R1_FB19_Msk,	(0x1UL << CAN_F1R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F1R1_FB19,	CAN_F1R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F1R1_FB20_Pos,	(20U)
.equ	CAN_F1R1_FB20_Msk,	(0x1UL << CAN_F1R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F1R1_FB20,	CAN_F1R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F1R1_FB21_Pos,	(21U)
.equ	CAN_F1R1_FB21_Msk,	(0x1UL << CAN_F1R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F1R1_FB21,	CAN_F1R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F1R1_FB22_Pos,	(22U)
.equ	CAN_F1R1_FB22_Msk,	(0x1UL << CAN_F1R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F1R1_FB22,	CAN_F1R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F1R1_FB23_Pos,	(23U)
.equ	CAN_F1R1_FB23_Msk,	(0x1UL << CAN_F1R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F1R1_FB23,	CAN_F1R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F1R1_FB24_Pos,	(24U)
.equ	CAN_F1R1_FB24_Msk,	(0x1UL << CAN_F1R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F1R1_FB24,	CAN_F1R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F1R1_FB25_Pos,	(25U)
.equ	CAN_F1R1_FB25_Msk,	(0x1UL << CAN_F1R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F1R1_FB25,	CAN_F1R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F1R1_FB26_Pos,	(26U)
.equ	CAN_F1R1_FB26_Msk,	(0x1UL << CAN_F1R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F1R1_FB26,	CAN_F1R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F1R1_FB27_Pos,	(27U)
.equ	CAN_F1R1_FB27_Msk,	(0x1UL << CAN_F1R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F1R1_FB27,	CAN_F1R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F1R1_FB28_Pos,	(28U)
.equ	CAN_F1R1_FB28_Msk,	(0x1UL << CAN_F1R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F1R1_FB28,	CAN_F1R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F1R1_FB29_Pos,	(29U)
.equ	CAN_F1R1_FB29_Msk,	(0x1UL << CAN_F1R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F1R1_FB29,	CAN_F1R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F1R1_FB30_Pos,	(30U)
.equ	CAN_F1R1_FB30_Msk,	(0x1UL << CAN_F1R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F1R1_FB30,	CAN_F1R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F1R1_FB31_Pos,	(31U)
.equ	CAN_F1R1_FB31_Msk,	(0x1UL << CAN_F1R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F1R1_FB31,	CAN_F1R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R1 register  *******************/
.equ	CAN_F2R1_FB0_Pos,	0
.equ	CAN_F2R1_FB0_Msk,	(0x1UL << CAN_F2R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F2R1_FB0,	CAN_F2R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F2R1_FB1_Pos,	(1U)
.equ	CAN_F2R1_FB1_Msk,	(0x1UL << CAN_F2R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F2R1_FB1,	CAN_F2R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F2R1_FB2_Pos,	(2U)
.equ	CAN_F2R1_FB2_Msk,	(0x1UL << CAN_F2R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F2R1_FB2,	CAN_F2R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F2R1_FB3_Pos,	(3U)
.equ	CAN_F2R1_FB3_Msk,	(0x1UL << CAN_F2R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F2R1_FB3,	CAN_F2R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F2R1_FB4_Pos,	(4U)
.equ	CAN_F2R1_FB4_Msk,	(0x1UL << CAN_F2R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F2R1_FB4,	CAN_F2R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F2R1_FB5_Pos,	(5U)
.equ	CAN_F2R1_FB5_Msk,	(0x1UL << CAN_F2R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F2R1_FB5,	CAN_F2R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F2R1_FB6_Pos,	(6U)
.equ	CAN_F2R1_FB6_Msk,	(0x1UL << CAN_F2R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F2R1_FB6,	CAN_F2R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F2R1_FB7_Pos,	(7U)
.equ	CAN_F2R1_FB7_Msk,	(0x1UL << CAN_F2R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F2R1_FB7,	CAN_F2R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F2R1_FB8_Pos,	(8U)
.equ	CAN_F2R1_FB8_Msk,	(0x1UL << CAN_F2R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F2R1_FB8,	CAN_F2R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F2R1_FB9_Pos,	(9U)
.equ	CAN_F2R1_FB9_Msk,	(0x1UL << CAN_F2R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F2R1_FB9,	CAN_F2R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F2R1_FB10_Pos,	(10U)
.equ	CAN_F2R1_FB10_Msk,	(0x1UL << CAN_F2R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F2R1_FB10,	CAN_F2R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F2R1_FB11_Pos,	(11U)
.equ	CAN_F2R1_FB11_Msk,	(0x1UL << CAN_F2R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F2R1_FB11,	CAN_F2R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F2R1_FB12_Pos,	(12U)
.equ	CAN_F2R1_FB12_Msk,	(0x1UL << CAN_F2R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F2R1_FB12,	CAN_F2R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F2R1_FB13_Pos,	(13U)
.equ	CAN_F2R1_FB13_Msk,	(0x1UL << CAN_F2R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F2R1_FB13,	CAN_F2R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F2R1_FB14_Pos,	(14U)
.equ	CAN_F2R1_FB14_Msk,	(0x1UL << CAN_F2R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F2R1_FB14,	CAN_F2R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F2R1_FB15_Pos,	(15U)
.equ	CAN_F2R1_FB15_Msk,	(0x1UL << CAN_F2R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F2R1_FB15,	CAN_F2R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F2R1_FB16_Pos,	(16U)
.equ	CAN_F2R1_FB16_Msk,	(0x1UL << CAN_F2R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F2R1_FB16,	CAN_F2R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F2R1_FB17_Pos,	(17U)
.equ	CAN_F2R1_FB17_Msk,	(0x1UL << CAN_F2R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F2R1_FB17,	CAN_F2R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F2R1_FB18_Pos,	(18U)
.equ	CAN_F2R1_FB18_Msk,	(0x1UL << CAN_F2R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F2R1_FB18,	CAN_F2R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F2R1_FB19_Pos,	(19U)
.equ	CAN_F2R1_FB19_Msk,	(0x1UL << CAN_F2R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F2R1_FB19,	CAN_F2R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F2R1_FB20_Pos,	(20U)
.equ	CAN_F2R1_FB20_Msk,	(0x1UL << CAN_F2R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F2R1_FB20,	CAN_F2R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F2R1_FB21_Pos,	(21U)
.equ	CAN_F2R1_FB21_Msk,	(0x1UL << CAN_F2R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F2R1_FB21,	CAN_F2R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F2R1_FB22_Pos,	(22U)
.equ	CAN_F2R1_FB22_Msk,	(0x1UL << CAN_F2R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F2R1_FB22,	CAN_F2R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F2R1_FB23_Pos,	(23U)
.equ	CAN_F2R1_FB23_Msk,	(0x1UL << CAN_F2R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F2R1_FB23,	CAN_F2R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F2R1_FB24_Pos,	(24U)
.equ	CAN_F2R1_FB24_Msk,	(0x1UL << CAN_F2R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F2R1_FB24,	CAN_F2R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F2R1_FB25_Pos,	(25U)
.equ	CAN_F2R1_FB25_Msk,	(0x1UL << CAN_F2R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F2R1_FB25,	CAN_F2R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F2R1_FB26_Pos,	(26U)
.equ	CAN_F2R1_FB26_Msk,	(0x1UL << CAN_F2R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F2R1_FB26,	CAN_F2R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F2R1_FB27_Pos,	(27U)
.equ	CAN_F2R1_FB27_Msk,	(0x1UL << CAN_F2R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F2R1_FB27,	CAN_F2R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F2R1_FB28_Pos,	(28U)
.equ	CAN_F2R1_FB28_Msk,	(0x1UL << CAN_F2R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F2R1_FB28,	CAN_F2R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F2R1_FB29_Pos,	(29U)
.equ	CAN_F2R1_FB29_Msk,	(0x1UL << CAN_F2R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F2R1_FB29,	CAN_F2R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F2R1_FB30_Pos,	(30U)
.equ	CAN_F2R1_FB30_Msk,	(0x1UL << CAN_F2R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F2R1_FB30,	CAN_F2R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F2R1_FB31_Pos,	(31U)
.equ	CAN_F2R1_FB31_Msk,	(0x1UL << CAN_F2R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F2R1_FB31,	CAN_F2R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R1 register  *******************/
.equ	CAN_F3R1_FB0_Pos,	0
.equ	CAN_F3R1_FB0_Msk,	(0x1UL << CAN_F3R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F3R1_FB0,	CAN_F3R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F3R1_FB1_Pos,	(1U)
.equ	CAN_F3R1_FB1_Msk,	(0x1UL << CAN_F3R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F3R1_FB1,	CAN_F3R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F3R1_FB2_Pos,	(2U)
.equ	CAN_F3R1_FB2_Msk,	(0x1UL << CAN_F3R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F3R1_FB2,	CAN_F3R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F3R1_FB3_Pos,	(3U)
.equ	CAN_F3R1_FB3_Msk,	(0x1UL << CAN_F3R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F3R1_FB3,	CAN_F3R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F3R1_FB4_Pos,	(4U)
.equ	CAN_F3R1_FB4_Msk,	(0x1UL << CAN_F3R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F3R1_FB4,	CAN_F3R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F3R1_FB5_Pos,	(5U)
.equ	CAN_F3R1_FB5_Msk,	(0x1UL << CAN_F3R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F3R1_FB5,	CAN_F3R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F3R1_FB6_Pos,	(6U)
.equ	CAN_F3R1_FB6_Msk,	(0x1UL << CAN_F3R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F3R1_FB6,	CAN_F3R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F3R1_FB7_Pos,	(7U)
.equ	CAN_F3R1_FB7_Msk,	(0x1UL << CAN_F3R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F3R1_FB7,	CAN_F3R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F3R1_FB8_Pos,	(8U)
.equ	CAN_F3R1_FB8_Msk,	(0x1UL << CAN_F3R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F3R1_FB8,	CAN_F3R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F3R1_FB9_Pos,	(9U)
.equ	CAN_F3R1_FB9_Msk,	(0x1UL << CAN_F3R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F3R1_FB9,	CAN_F3R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F3R1_FB10_Pos,	(10U)
.equ	CAN_F3R1_FB10_Msk,	(0x1UL << CAN_F3R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F3R1_FB10,	CAN_F3R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F3R1_FB11_Pos,	(11U)
.equ	CAN_F3R1_FB11_Msk,	(0x1UL << CAN_F3R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F3R1_FB11,	CAN_F3R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F3R1_FB12_Pos,	(12U)
.equ	CAN_F3R1_FB12_Msk,	(0x1UL << CAN_F3R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F3R1_FB12,	CAN_F3R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F3R1_FB13_Pos,	(13U)
.equ	CAN_F3R1_FB13_Msk,	(0x1UL << CAN_F3R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F3R1_FB13,	CAN_F3R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F3R1_FB14_Pos,	(14U)
.equ	CAN_F3R1_FB14_Msk,	(0x1UL << CAN_F3R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F3R1_FB14,	CAN_F3R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F3R1_FB15_Pos,	(15U)
.equ	CAN_F3R1_FB15_Msk,	(0x1UL << CAN_F3R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F3R1_FB15,	CAN_F3R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F3R1_FB16_Pos,	(16U)
.equ	CAN_F3R1_FB16_Msk,	(0x1UL << CAN_F3R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F3R1_FB16,	CAN_F3R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F3R1_FB17_Pos,	(17U)
.equ	CAN_F3R1_FB17_Msk,	(0x1UL << CAN_F3R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F3R1_FB17,	CAN_F3R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F3R1_FB18_Pos,	(18U)
.equ	CAN_F3R1_FB18_Msk,	(0x1UL << CAN_F3R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F3R1_FB18,	CAN_F3R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F3R1_FB19_Pos,	(19U)
.equ	CAN_F3R1_FB19_Msk,	(0x1UL << CAN_F3R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F3R1_FB19,	CAN_F3R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F3R1_FB20_Pos,	(20U)
.equ	CAN_F3R1_FB20_Msk,	(0x1UL << CAN_F3R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F3R1_FB20,	CAN_F3R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F3R1_FB21_Pos,	(21U)
.equ	CAN_F3R1_FB21_Msk,	(0x1UL << CAN_F3R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F3R1_FB21,	CAN_F3R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F3R1_FB22_Pos,	(22U)
.equ	CAN_F3R1_FB22_Msk,	(0x1UL << CAN_F3R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F3R1_FB22,	CAN_F3R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F3R1_FB23_Pos,	(23U)
.equ	CAN_F3R1_FB23_Msk,	(0x1UL << CAN_F3R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F3R1_FB23,	CAN_F3R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F3R1_FB24_Pos,	(24U)
.equ	CAN_F3R1_FB24_Msk,	(0x1UL << CAN_F3R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F3R1_FB24,	CAN_F3R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F3R1_FB25_Pos,	(25U)
.equ	CAN_F3R1_FB25_Msk,	(0x1UL << CAN_F3R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F3R1_FB25,	CAN_F3R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F3R1_FB26_Pos,	(26U)
.equ	CAN_F3R1_FB26_Msk,	(0x1UL << CAN_F3R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F3R1_FB26,	CAN_F3R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F3R1_FB27_Pos,	(27U)
.equ	CAN_F3R1_FB27_Msk,	(0x1UL << CAN_F3R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F3R1_FB27,	CAN_F3R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F3R1_FB28_Pos,	(28U)
.equ	CAN_F3R1_FB28_Msk,	(0x1UL << CAN_F3R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F3R1_FB28,	CAN_F3R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F3R1_FB29_Pos,	(29U)
.equ	CAN_F3R1_FB29_Msk,	(0x1UL << CAN_F3R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F3R1_FB29,	CAN_F3R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F3R1_FB30_Pos,	(30U)
.equ	CAN_F3R1_FB30_Msk,	(0x1UL << CAN_F3R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F3R1_FB30,	CAN_F3R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F3R1_FB31_Pos,	(31U)
.equ	CAN_F3R1_FB31_Msk,	(0x1UL << CAN_F3R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F3R1_FB31,	CAN_F3R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R1 register  *******************/
.equ	CAN_F4R1_FB0_Pos,	0
.equ	CAN_F4R1_FB0_Msk,	(0x1UL << CAN_F4R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F4R1_FB0,	CAN_F4R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F4R1_FB1_Pos,	(1U)
.equ	CAN_F4R1_FB1_Msk,	(0x1UL << CAN_F4R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F4R1_FB1,	CAN_F4R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F4R1_FB2_Pos,	(2U)
.equ	CAN_F4R1_FB2_Msk,	(0x1UL << CAN_F4R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F4R1_FB2,	CAN_F4R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F4R1_FB3_Pos,	(3U)
.equ	CAN_F4R1_FB3_Msk,	(0x1UL << CAN_F4R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F4R1_FB3,	CAN_F4R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F4R1_FB4_Pos,	(4U)
.equ	CAN_F4R1_FB4_Msk,	(0x1UL << CAN_F4R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F4R1_FB4,	CAN_F4R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F4R1_FB5_Pos,	(5U)
.equ	CAN_F4R1_FB5_Msk,	(0x1UL << CAN_F4R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F4R1_FB5,	CAN_F4R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F4R1_FB6_Pos,	(6U)
.equ	CAN_F4R1_FB6_Msk,	(0x1UL << CAN_F4R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F4R1_FB6,	CAN_F4R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F4R1_FB7_Pos,	(7U)
.equ	CAN_F4R1_FB7_Msk,	(0x1UL << CAN_F4R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F4R1_FB7,	CAN_F4R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F4R1_FB8_Pos,	(8U)
.equ	CAN_F4R1_FB8_Msk,	(0x1UL << CAN_F4R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F4R1_FB8,	CAN_F4R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F4R1_FB9_Pos,	(9U)
.equ	CAN_F4R1_FB9_Msk,	(0x1UL << CAN_F4R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F4R1_FB9,	CAN_F4R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F4R1_FB10_Pos,	(10U)
.equ	CAN_F4R1_FB10_Msk,	(0x1UL << CAN_F4R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F4R1_FB10,	CAN_F4R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F4R1_FB11_Pos,	(11U)
.equ	CAN_F4R1_FB11_Msk,	(0x1UL << CAN_F4R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F4R1_FB11,	CAN_F4R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F4R1_FB12_Pos,	(12U)
.equ	CAN_F4R1_FB12_Msk,	(0x1UL << CAN_F4R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F4R1_FB12,	CAN_F4R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F4R1_FB13_Pos,	(13U)
.equ	CAN_F4R1_FB13_Msk,	(0x1UL << CAN_F4R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F4R1_FB13,	CAN_F4R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F4R1_FB14_Pos,	(14U)
.equ	CAN_F4R1_FB14_Msk,	(0x1UL << CAN_F4R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F4R1_FB14,	CAN_F4R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F4R1_FB15_Pos,	(15U)
.equ	CAN_F4R1_FB15_Msk,	(0x1UL << CAN_F4R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F4R1_FB15,	CAN_F4R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F4R1_FB16_Pos,	(16U)
.equ	CAN_F4R1_FB16_Msk,	(0x1UL << CAN_F4R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F4R1_FB16,	CAN_F4R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F4R1_FB17_Pos,	(17U)
.equ	CAN_F4R1_FB17_Msk,	(0x1UL << CAN_F4R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F4R1_FB17,	CAN_F4R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F4R1_FB18_Pos,	(18U)
.equ	CAN_F4R1_FB18_Msk,	(0x1UL << CAN_F4R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F4R1_FB18,	CAN_F4R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F4R1_FB19_Pos,	(19U)
.equ	CAN_F4R1_FB19_Msk,	(0x1UL << CAN_F4R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F4R1_FB19,	CAN_F4R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F4R1_FB20_Pos,	(20U)
.equ	CAN_F4R1_FB20_Msk,	(0x1UL << CAN_F4R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F4R1_FB20,	CAN_F4R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F4R1_FB21_Pos,	(21U)
.equ	CAN_F4R1_FB21_Msk,	(0x1UL << CAN_F4R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F4R1_FB21,	CAN_F4R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F4R1_FB22_Pos,	(22U)
.equ	CAN_F4R1_FB22_Msk,	(0x1UL << CAN_F4R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F4R1_FB22,	CAN_F4R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F4R1_FB23_Pos,	(23U)
.equ	CAN_F4R1_FB23_Msk,	(0x1UL << CAN_F4R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F4R1_FB23,	CAN_F4R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F4R1_FB24_Pos,	(24U)
.equ	CAN_F4R1_FB24_Msk,	(0x1UL << CAN_F4R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F4R1_FB24,	CAN_F4R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F4R1_FB25_Pos,	(25U)
.equ	CAN_F4R1_FB25_Msk,	(0x1UL << CAN_F4R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F4R1_FB25,	CAN_F4R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F4R1_FB26_Pos,	(26U)
.equ	CAN_F4R1_FB26_Msk,	(0x1UL << CAN_F4R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F4R1_FB26,	CAN_F4R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F4R1_FB27_Pos,	(27U)
.equ	CAN_F4R1_FB27_Msk,	(0x1UL << CAN_F4R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F4R1_FB27,	CAN_F4R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F4R1_FB28_Pos,	(28U)
.equ	CAN_F4R1_FB28_Msk,	(0x1UL << CAN_F4R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F4R1_FB28,	CAN_F4R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F4R1_FB29_Pos,	(29U)
.equ	CAN_F4R1_FB29_Msk,	(0x1UL << CAN_F4R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F4R1_FB29,	CAN_F4R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F4R1_FB30_Pos,	(30U)
.equ	CAN_F4R1_FB30_Msk,	(0x1UL << CAN_F4R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F4R1_FB30,	CAN_F4R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F4R1_FB31_Pos,	(31U)
.equ	CAN_F4R1_FB31_Msk,	(0x1UL << CAN_F4R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F4R1_FB31,	CAN_F4R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R1 register  *******************/
.equ	CAN_F5R1_FB0_Pos,	0
.equ	CAN_F5R1_FB0_Msk,	(0x1UL << CAN_F5R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F5R1_FB0,	CAN_F5R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F5R1_FB1_Pos,	(1U)
.equ	CAN_F5R1_FB1_Msk,	(0x1UL << CAN_F5R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F5R1_FB1,	CAN_F5R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F5R1_FB2_Pos,	(2U)
.equ	CAN_F5R1_FB2_Msk,	(0x1UL << CAN_F5R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F5R1_FB2,	CAN_F5R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F5R1_FB3_Pos,	(3U)
.equ	CAN_F5R1_FB3_Msk,	(0x1UL << CAN_F5R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F5R1_FB3,	CAN_F5R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F5R1_FB4_Pos,	(4U)
.equ	CAN_F5R1_FB4_Msk,	(0x1UL << CAN_F5R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F5R1_FB4,	CAN_F5R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F5R1_FB5_Pos,	(5U)
.equ	CAN_F5R1_FB5_Msk,	(0x1UL << CAN_F5R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F5R1_FB5,	CAN_F5R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F5R1_FB6_Pos,	(6U)
.equ	CAN_F5R1_FB6_Msk,	(0x1UL << CAN_F5R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F5R1_FB6,	CAN_F5R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F5R1_FB7_Pos,	(7U)
.equ	CAN_F5R1_FB7_Msk,	(0x1UL << CAN_F5R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F5R1_FB7,	CAN_F5R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F5R1_FB8_Pos,	(8U)
.equ	CAN_F5R1_FB8_Msk,	(0x1UL << CAN_F5R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F5R1_FB8,	CAN_F5R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F5R1_FB9_Pos,	(9U)
.equ	CAN_F5R1_FB9_Msk,	(0x1UL << CAN_F5R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F5R1_FB9,	CAN_F5R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F5R1_FB10_Pos,	(10U)
.equ	CAN_F5R1_FB10_Msk,	(0x1UL << CAN_F5R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F5R1_FB10,	CAN_F5R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F5R1_FB11_Pos,	(11U)
.equ	CAN_F5R1_FB11_Msk,	(0x1UL << CAN_F5R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F5R1_FB11,	CAN_F5R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F5R1_FB12_Pos,	(12U)
.equ	CAN_F5R1_FB12_Msk,	(0x1UL << CAN_F5R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F5R1_FB12,	CAN_F5R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F5R1_FB13_Pos,	(13U)
.equ	CAN_F5R1_FB13_Msk,	(0x1UL << CAN_F5R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F5R1_FB13,	CAN_F5R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F5R1_FB14_Pos,	(14U)
.equ	CAN_F5R1_FB14_Msk,	(0x1UL << CAN_F5R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F5R1_FB14,	CAN_F5R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F5R1_FB15_Pos,	(15U)
.equ	CAN_F5R1_FB15_Msk,	(0x1UL << CAN_F5R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F5R1_FB15,	CAN_F5R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F5R1_FB16_Pos,	(16U)
.equ	CAN_F5R1_FB16_Msk,	(0x1UL << CAN_F5R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F5R1_FB16,	CAN_F5R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F5R1_FB17_Pos,	(17U)
.equ	CAN_F5R1_FB17_Msk,	(0x1UL << CAN_F5R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F5R1_FB17,	CAN_F5R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F5R1_FB18_Pos,	(18U)
.equ	CAN_F5R1_FB18_Msk,	(0x1UL << CAN_F5R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F5R1_FB18,	CAN_F5R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F5R1_FB19_Pos,	(19U)
.equ	CAN_F5R1_FB19_Msk,	(0x1UL << CAN_F5R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F5R1_FB19,	CAN_F5R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F5R1_FB20_Pos,	(20U)
.equ	CAN_F5R1_FB20_Msk,	(0x1UL << CAN_F5R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F5R1_FB20,	CAN_F5R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F5R1_FB21_Pos,	(21U)
.equ	CAN_F5R1_FB21_Msk,	(0x1UL << CAN_F5R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F5R1_FB21,	CAN_F5R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F5R1_FB22_Pos,	(22U)
.equ	CAN_F5R1_FB22_Msk,	(0x1UL << CAN_F5R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F5R1_FB22,	CAN_F5R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F5R1_FB23_Pos,	(23U)
.equ	CAN_F5R1_FB23_Msk,	(0x1UL << CAN_F5R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F5R1_FB23,	CAN_F5R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F5R1_FB24_Pos,	(24U)
.equ	CAN_F5R1_FB24_Msk,	(0x1UL << CAN_F5R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F5R1_FB24,	CAN_F5R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F5R1_FB25_Pos,	(25U)
.equ	CAN_F5R1_FB25_Msk,	(0x1UL << CAN_F5R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F5R1_FB25,	CAN_F5R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F5R1_FB26_Pos,	(26U)
.equ	CAN_F5R1_FB26_Msk,	(0x1UL << CAN_F5R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F5R1_FB26,	CAN_F5R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F5R1_FB27_Pos,	(27U)
.equ	CAN_F5R1_FB27_Msk,	(0x1UL << CAN_F5R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F5R1_FB27,	CAN_F5R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F5R1_FB28_Pos,	(28U)
.equ	CAN_F5R1_FB28_Msk,	(0x1UL << CAN_F5R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F5R1_FB28,	CAN_F5R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F5R1_FB29_Pos,	(29U)
.equ	CAN_F5R1_FB29_Msk,	(0x1UL << CAN_F5R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F5R1_FB29,	CAN_F5R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F5R1_FB30_Pos,	(30U)
.equ	CAN_F5R1_FB30_Msk,	(0x1UL << CAN_F5R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F5R1_FB30,	CAN_F5R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F5R1_FB31_Pos,	(31U)
.equ	CAN_F5R1_FB31_Msk,	(0x1UL << CAN_F5R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F5R1_FB31,	CAN_F5R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R1 register  *******************/
.equ	CAN_F6R1_FB0_Pos,	0
.equ	CAN_F6R1_FB0_Msk,	(0x1UL << CAN_F6R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F6R1_FB0,	CAN_F6R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F6R1_FB1_Pos,	(1U)
.equ	CAN_F6R1_FB1_Msk,	(0x1UL << CAN_F6R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F6R1_FB1,	CAN_F6R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F6R1_FB2_Pos,	(2U)
.equ	CAN_F6R1_FB2_Msk,	(0x1UL << CAN_F6R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F6R1_FB2,	CAN_F6R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F6R1_FB3_Pos,	(3U)
.equ	CAN_F6R1_FB3_Msk,	(0x1UL << CAN_F6R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F6R1_FB3,	CAN_F6R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F6R1_FB4_Pos,	(4U)
.equ	CAN_F6R1_FB4_Msk,	(0x1UL << CAN_F6R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F6R1_FB4,	CAN_F6R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F6R1_FB5_Pos,	(5U)
.equ	CAN_F6R1_FB5_Msk,	(0x1UL << CAN_F6R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F6R1_FB5,	CAN_F6R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F6R1_FB6_Pos,	(6U)
.equ	CAN_F6R1_FB6_Msk,	(0x1UL << CAN_F6R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F6R1_FB6,	CAN_F6R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F6R1_FB7_Pos,	(7U)
.equ	CAN_F6R1_FB7_Msk,	(0x1UL << CAN_F6R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F6R1_FB7,	CAN_F6R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F6R1_FB8_Pos,	(8U)
.equ	CAN_F6R1_FB8_Msk,	(0x1UL << CAN_F6R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F6R1_FB8,	CAN_F6R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F6R1_FB9_Pos,	(9U)
.equ	CAN_F6R1_FB9_Msk,	(0x1UL << CAN_F6R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F6R1_FB9,	CAN_F6R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F6R1_FB10_Pos,	(10U)
.equ	CAN_F6R1_FB10_Msk,	(0x1UL << CAN_F6R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F6R1_FB10,	CAN_F6R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F6R1_FB11_Pos,	(11U)
.equ	CAN_F6R1_FB11_Msk,	(0x1UL << CAN_F6R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F6R1_FB11,	CAN_F6R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F6R1_FB12_Pos,	(12U)
.equ	CAN_F6R1_FB12_Msk,	(0x1UL << CAN_F6R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F6R1_FB12,	CAN_F6R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F6R1_FB13_Pos,	(13U)
.equ	CAN_F6R1_FB13_Msk,	(0x1UL << CAN_F6R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F6R1_FB13,	CAN_F6R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F6R1_FB14_Pos,	(14U)
.equ	CAN_F6R1_FB14_Msk,	(0x1UL << CAN_F6R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F6R1_FB14,	CAN_F6R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F6R1_FB15_Pos,	(15U)
.equ	CAN_F6R1_FB15_Msk,	(0x1UL << CAN_F6R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F6R1_FB15,	CAN_F6R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F6R1_FB16_Pos,	(16U)
.equ	CAN_F6R1_FB16_Msk,	(0x1UL << CAN_F6R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F6R1_FB16,	CAN_F6R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F6R1_FB17_Pos,	(17U)
.equ	CAN_F6R1_FB17_Msk,	(0x1UL << CAN_F6R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F6R1_FB17,	CAN_F6R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F6R1_FB18_Pos,	(18U)
.equ	CAN_F6R1_FB18_Msk,	(0x1UL << CAN_F6R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F6R1_FB18,	CAN_F6R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F6R1_FB19_Pos,	(19U)
.equ	CAN_F6R1_FB19_Msk,	(0x1UL << CAN_F6R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F6R1_FB19,	CAN_F6R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F6R1_FB20_Pos,	(20U)
.equ	CAN_F6R1_FB20_Msk,	(0x1UL << CAN_F6R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F6R1_FB20,	CAN_F6R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F6R1_FB21_Pos,	(21U)
.equ	CAN_F6R1_FB21_Msk,	(0x1UL << CAN_F6R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F6R1_FB21,	CAN_F6R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F6R1_FB22_Pos,	(22U)
.equ	CAN_F6R1_FB22_Msk,	(0x1UL << CAN_F6R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F6R1_FB22,	CAN_F6R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F6R1_FB23_Pos,	(23U)
.equ	CAN_F6R1_FB23_Msk,	(0x1UL << CAN_F6R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F6R1_FB23,	CAN_F6R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F6R1_FB24_Pos,	(24U)
.equ	CAN_F6R1_FB24_Msk,	(0x1UL << CAN_F6R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F6R1_FB24,	CAN_F6R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F6R1_FB25_Pos,	(25U)
.equ	CAN_F6R1_FB25_Msk,	(0x1UL << CAN_F6R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F6R1_FB25,	CAN_F6R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F6R1_FB26_Pos,	(26U)
.equ	CAN_F6R1_FB26_Msk,	(0x1UL << CAN_F6R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F6R1_FB26,	CAN_F6R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F6R1_FB27_Pos,	(27U)
.equ	CAN_F6R1_FB27_Msk,	(0x1UL << CAN_F6R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F6R1_FB27,	CAN_F6R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F6R1_FB28_Pos,	(28U)
.equ	CAN_F6R1_FB28_Msk,	(0x1UL << CAN_F6R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F6R1_FB28,	CAN_F6R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F6R1_FB29_Pos,	(29U)
.equ	CAN_F6R1_FB29_Msk,	(0x1UL << CAN_F6R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F6R1_FB29,	CAN_F6R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F6R1_FB30_Pos,	(30U)
.equ	CAN_F6R1_FB30_Msk,	(0x1UL << CAN_F6R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F6R1_FB30,	CAN_F6R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F6R1_FB31_Pos,	(31U)
.equ	CAN_F6R1_FB31_Msk,	(0x1UL << CAN_F6R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F6R1_FB31,	CAN_F6R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R1 register  *******************/
.equ	CAN_F7R1_FB0_Pos,	0
.equ	CAN_F7R1_FB0_Msk,	(0x1UL << CAN_F7R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F7R1_FB0,	CAN_F7R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F7R1_FB1_Pos,	(1U)
.equ	CAN_F7R1_FB1_Msk,	(0x1UL << CAN_F7R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F7R1_FB1,	CAN_F7R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F7R1_FB2_Pos,	(2U)
.equ	CAN_F7R1_FB2_Msk,	(0x1UL << CAN_F7R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F7R1_FB2,	CAN_F7R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F7R1_FB3_Pos,	(3U)
.equ	CAN_F7R1_FB3_Msk,	(0x1UL << CAN_F7R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F7R1_FB3,	CAN_F7R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F7R1_FB4_Pos,	(4U)
.equ	CAN_F7R1_FB4_Msk,	(0x1UL << CAN_F7R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F7R1_FB4,	CAN_F7R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F7R1_FB5_Pos,	(5U)
.equ	CAN_F7R1_FB5_Msk,	(0x1UL << CAN_F7R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F7R1_FB5,	CAN_F7R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F7R1_FB6_Pos,	(6U)
.equ	CAN_F7R1_FB6_Msk,	(0x1UL << CAN_F7R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F7R1_FB6,	CAN_F7R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F7R1_FB7_Pos,	(7U)
.equ	CAN_F7R1_FB7_Msk,	(0x1UL << CAN_F7R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F7R1_FB7,	CAN_F7R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F7R1_FB8_Pos,	(8U)
.equ	CAN_F7R1_FB8_Msk,	(0x1UL << CAN_F7R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F7R1_FB8,	CAN_F7R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F7R1_FB9_Pos,	(9U)
.equ	CAN_F7R1_FB9_Msk,	(0x1UL << CAN_F7R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F7R1_FB9,	CAN_F7R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F7R1_FB10_Pos,	(10U)
.equ	CAN_F7R1_FB10_Msk,	(0x1UL << CAN_F7R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F7R1_FB10,	CAN_F7R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F7R1_FB11_Pos,	(11U)
.equ	CAN_F7R1_FB11_Msk,	(0x1UL << CAN_F7R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F7R1_FB11,	CAN_F7R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F7R1_FB12_Pos,	(12U)
.equ	CAN_F7R1_FB12_Msk,	(0x1UL << CAN_F7R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F7R1_FB12,	CAN_F7R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F7R1_FB13_Pos,	(13U)
.equ	CAN_F7R1_FB13_Msk,	(0x1UL << CAN_F7R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F7R1_FB13,	CAN_F7R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F7R1_FB14_Pos,	(14U)
.equ	CAN_F7R1_FB14_Msk,	(0x1UL << CAN_F7R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F7R1_FB14,	CAN_F7R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F7R1_FB15_Pos,	(15U)
.equ	CAN_F7R1_FB15_Msk,	(0x1UL << CAN_F7R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F7R1_FB15,	CAN_F7R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F7R1_FB16_Pos,	(16U)
.equ	CAN_F7R1_FB16_Msk,	(0x1UL << CAN_F7R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F7R1_FB16,	CAN_F7R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F7R1_FB17_Pos,	(17U)
.equ	CAN_F7R1_FB17_Msk,	(0x1UL << CAN_F7R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F7R1_FB17,	CAN_F7R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F7R1_FB18_Pos,	(18U)
.equ	CAN_F7R1_FB18_Msk,	(0x1UL << CAN_F7R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F7R1_FB18,	CAN_F7R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F7R1_FB19_Pos,	(19U)
.equ	CAN_F7R1_FB19_Msk,	(0x1UL << CAN_F7R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F7R1_FB19,	CAN_F7R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F7R1_FB20_Pos,	(20U)
.equ	CAN_F7R1_FB20_Msk,	(0x1UL << CAN_F7R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F7R1_FB20,	CAN_F7R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F7R1_FB21_Pos,	(21U)
.equ	CAN_F7R1_FB21_Msk,	(0x1UL << CAN_F7R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F7R1_FB21,	CAN_F7R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F7R1_FB22_Pos,	(22U)
.equ	CAN_F7R1_FB22_Msk,	(0x1UL << CAN_F7R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F7R1_FB22,	CAN_F7R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F7R1_FB23_Pos,	(23U)
.equ	CAN_F7R1_FB23_Msk,	(0x1UL << CAN_F7R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F7R1_FB23,	CAN_F7R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F7R1_FB24_Pos,	(24U)
.equ	CAN_F7R1_FB24_Msk,	(0x1UL << CAN_F7R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F7R1_FB24,	CAN_F7R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F7R1_FB25_Pos,	(25U)
.equ	CAN_F7R1_FB25_Msk,	(0x1UL << CAN_F7R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F7R1_FB25,	CAN_F7R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F7R1_FB26_Pos,	(26U)
.equ	CAN_F7R1_FB26_Msk,	(0x1UL << CAN_F7R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F7R1_FB26,	CAN_F7R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F7R1_FB27_Pos,	(27U)
.equ	CAN_F7R1_FB27_Msk,	(0x1UL << CAN_F7R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F7R1_FB27,	CAN_F7R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F7R1_FB28_Pos,	(28U)
.equ	CAN_F7R1_FB28_Msk,	(0x1UL << CAN_F7R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F7R1_FB28,	CAN_F7R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F7R1_FB29_Pos,	(29U)
.equ	CAN_F7R1_FB29_Msk,	(0x1UL << CAN_F7R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F7R1_FB29,	CAN_F7R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F7R1_FB30_Pos,	(30U)
.equ	CAN_F7R1_FB30_Msk,	(0x1UL << CAN_F7R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F7R1_FB30,	CAN_F7R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F7R1_FB31_Pos,	(31U)
.equ	CAN_F7R1_FB31_Msk,	(0x1UL << CAN_F7R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F7R1_FB31,	CAN_F7R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R1 register  *******************/
.equ	CAN_F8R1_FB0_Pos,	0
.equ	CAN_F8R1_FB0_Msk,	(0x1UL << CAN_F8R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F8R1_FB0,	CAN_F8R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F8R1_FB1_Pos,	(1U)
.equ	CAN_F8R1_FB1_Msk,	(0x1UL << CAN_F8R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F8R1_FB1,	CAN_F8R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F8R1_FB2_Pos,	(2U)
.equ	CAN_F8R1_FB2_Msk,	(0x1UL << CAN_F8R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F8R1_FB2,	CAN_F8R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F8R1_FB3_Pos,	(3U)
.equ	CAN_F8R1_FB3_Msk,	(0x1UL << CAN_F8R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F8R1_FB3,	CAN_F8R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F8R1_FB4_Pos,	(4U)
.equ	CAN_F8R1_FB4_Msk,	(0x1UL << CAN_F8R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F8R1_FB4,	CAN_F8R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F8R1_FB5_Pos,	(5U)
.equ	CAN_F8R1_FB5_Msk,	(0x1UL << CAN_F8R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F8R1_FB5,	CAN_F8R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F8R1_FB6_Pos,	(6U)
.equ	CAN_F8R1_FB6_Msk,	(0x1UL << CAN_F8R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F8R1_FB6,	CAN_F8R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F8R1_FB7_Pos,	(7U)
.equ	CAN_F8R1_FB7_Msk,	(0x1UL << CAN_F8R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F8R1_FB7,	CAN_F8R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F8R1_FB8_Pos,	(8U)
.equ	CAN_F8R1_FB8_Msk,	(0x1UL << CAN_F8R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F8R1_FB8,	CAN_F8R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F8R1_FB9_Pos,	(9U)
.equ	CAN_F8R1_FB9_Msk,	(0x1UL << CAN_F8R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F8R1_FB9,	CAN_F8R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F8R1_FB10_Pos,	(10U)
.equ	CAN_F8R1_FB10_Msk,	(0x1UL << CAN_F8R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F8R1_FB10,	CAN_F8R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F8R1_FB11_Pos,	(11U)
.equ	CAN_F8R1_FB11_Msk,	(0x1UL << CAN_F8R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F8R1_FB11,	CAN_F8R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F8R1_FB12_Pos,	(12U)
.equ	CAN_F8R1_FB12_Msk,	(0x1UL << CAN_F8R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F8R1_FB12,	CAN_F8R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F8R1_FB13_Pos,	(13U)
.equ	CAN_F8R1_FB13_Msk,	(0x1UL << CAN_F8R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F8R1_FB13,	CAN_F8R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F8R1_FB14_Pos,	(14U)
.equ	CAN_F8R1_FB14_Msk,	(0x1UL << CAN_F8R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F8R1_FB14,	CAN_F8R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F8R1_FB15_Pos,	(15U)
.equ	CAN_F8R1_FB15_Msk,	(0x1UL << CAN_F8R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F8R1_FB15,	CAN_F8R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F8R1_FB16_Pos,	(16U)
.equ	CAN_F8R1_FB16_Msk,	(0x1UL << CAN_F8R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F8R1_FB16,	CAN_F8R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F8R1_FB17_Pos,	(17U)
.equ	CAN_F8R1_FB17_Msk,	(0x1UL << CAN_F8R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F8R1_FB17,	CAN_F8R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F8R1_FB18_Pos,	(18U)
.equ	CAN_F8R1_FB18_Msk,	(0x1UL << CAN_F8R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F8R1_FB18,	CAN_F8R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F8R1_FB19_Pos,	(19U)
.equ	CAN_F8R1_FB19_Msk,	(0x1UL << CAN_F8R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F8R1_FB19,	CAN_F8R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F8R1_FB20_Pos,	(20U)
.equ	CAN_F8R1_FB20_Msk,	(0x1UL << CAN_F8R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F8R1_FB20,	CAN_F8R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F8R1_FB21_Pos,	(21U)
.equ	CAN_F8R1_FB21_Msk,	(0x1UL << CAN_F8R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F8R1_FB21,	CAN_F8R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F8R1_FB22_Pos,	(22U)
.equ	CAN_F8R1_FB22_Msk,	(0x1UL << CAN_F8R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F8R1_FB22,	CAN_F8R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F8R1_FB23_Pos,	(23U)
.equ	CAN_F8R1_FB23_Msk,	(0x1UL << CAN_F8R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F8R1_FB23,	CAN_F8R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F8R1_FB24_Pos,	(24U)
.equ	CAN_F8R1_FB24_Msk,	(0x1UL << CAN_F8R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F8R1_FB24,	CAN_F8R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F8R1_FB25_Pos,	(25U)
.equ	CAN_F8R1_FB25_Msk,	(0x1UL << CAN_F8R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F8R1_FB25,	CAN_F8R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F8R1_FB26_Pos,	(26U)
.equ	CAN_F8R1_FB26_Msk,	(0x1UL << CAN_F8R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F8R1_FB26,	CAN_F8R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F8R1_FB27_Pos,	(27U)
.equ	CAN_F8R1_FB27_Msk,	(0x1UL << CAN_F8R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F8R1_FB27,	CAN_F8R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F8R1_FB28_Pos,	(28U)
.equ	CAN_F8R1_FB28_Msk,	(0x1UL << CAN_F8R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F8R1_FB28,	CAN_F8R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F8R1_FB29_Pos,	(29U)
.equ	CAN_F8R1_FB29_Msk,	(0x1UL << CAN_F8R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F8R1_FB29,	CAN_F8R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F8R1_FB30_Pos,	(30U)
.equ	CAN_F8R1_FB30_Msk,	(0x1UL << CAN_F8R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F8R1_FB30,	CAN_F8R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F8R1_FB31_Pos,	(31U)
.equ	CAN_F8R1_FB31_Msk,	(0x1UL << CAN_F8R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F8R1_FB31,	CAN_F8R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R1 register  *******************/
.equ	CAN_F9R1_FB0_Pos,	0
.equ	CAN_F9R1_FB0_Msk,	(0x1UL << CAN_F9R1_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F9R1_FB0,	CAN_F9R1_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F9R1_FB1_Pos,	(1U)
.equ	CAN_F9R1_FB1_Msk,	(0x1UL << CAN_F9R1_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F9R1_FB1,	CAN_F9R1_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F9R1_FB2_Pos,	(2U)
.equ	CAN_F9R1_FB2_Msk,	(0x1UL << CAN_F9R1_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F9R1_FB2,	CAN_F9R1_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F9R1_FB3_Pos,	(3U)
.equ	CAN_F9R1_FB3_Msk,	(0x1UL << CAN_F9R1_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F9R1_FB3,	CAN_F9R1_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F9R1_FB4_Pos,	(4U)
.equ	CAN_F9R1_FB4_Msk,	(0x1UL << CAN_F9R1_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F9R1_FB4,	CAN_F9R1_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F9R1_FB5_Pos,	(5U)
.equ	CAN_F9R1_FB5_Msk,	(0x1UL << CAN_F9R1_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F9R1_FB5,	CAN_F9R1_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F9R1_FB6_Pos,	(6U)
.equ	CAN_F9R1_FB6_Msk,	(0x1UL << CAN_F9R1_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F9R1_FB6,	CAN_F9R1_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F9R1_FB7_Pos,	(7U)
.equ	CAN_F9R1_FB7_Msk,	(0x1UL << CAN_F9R1_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F9R1_FB7,	CAN_F9R1_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F9R1_FB8_Pos,	(8U)
.equ	CAN_F9R1_FB8_Msk,	(0x1UL << CAN_F9R1_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F9R1_FB8,	CAN_F9R1_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F9R1_FB9_Pos,	(9U)
.equ	CAN_F9R1_FB9_Msk,	(0x1UL << CAN_F9R1_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F9R1_FB9,	CAN_F9R1_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F9R1_FB10_Pos,	(10U)
.equ	CAN_F9R1_FB10_Msk,	(0x1UL << CAN_F9R1_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F9R1_FB10,	CAN_F9R1_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F9R1_FB11_Pos,	(11U)
.equ	CAN_F9R1_FB11_Msk,	(0x1UL << CAN_F9R1_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F9R1_FB11,	CAN_F9R1_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F9R1_FB12_Pos,	(12U)
.equ	CAN_F9R1_FB12_Msk,	(0x1UL << CAN_F9R1_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F9R1_FB12,	CAN_F9R1_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F9R1_FB13_Pos,	(13U)
.equ	CAN_F9R1_FB13_Msk,	(0x1UL << CAN_F9R1_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F9R1_FB13,	CAN_F9R1_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F9R1_FB14_Pos,	(14U)
.equ	CAN_F9R1_FB14_Msk,	(0x1UL << CAN_F9R1_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F9R1_FB14,	CAN_F9R1_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F9R1_FB15_Pos,	(15U)
.equ	CAN_F9R1_FB15_Msk,	(0x1UL << CAN_F9R1_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F9R1_FB15,	CAN_F9R1_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F9R1_FB16_Pos,	(16U)
.equ	CAN_F9R1_FB16_Msk,	(0x1UL << CAN_F9R1_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F9R1_FB16,	CAN_F9R1_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F9R1_FB17_Pos,	(17U)
.equ	CAN_F9R1_FB17_Msk,	(0x1UL << CAN_F9R1_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F9R1_FB17,	CAN_F9R1_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F9R1_FB18_Pos,	(18U)
.equ	CAN_F9R1_FB18_Msk,	(0x1UL << CAN_F9R1_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F9R1_FB18,	CAN_F9R1_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F9R1_FB19_Pos,	(19U)
.equ	CAN_F9R1_FB19_Msk,	(0x1UL << CAN_F9R1_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F9R1_FB19,	CAN_F9R1_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F9R1_FB20_Pos,	(20U)
.equ	CAN_F9R1_FB20_Msk,	(0x1UL << CAN_F9R1_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F9R1_FB20,	CAN_F9R1_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F9R1_FB21_Pos,	(21U)
.equ	CAN_F9R1_FB21_Msk,	(0x1UL << CAN_F9R1_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F9R1_FB21,	CAN_F9R1_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F9R1_FB22_Pos,	(22U)
.equ	CAN_F9R1_FB22_Msk,	(0x1UL << CAN_F9R1_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F9R1_FB22,	CAN_F9R1_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F9R1_FB23_Pos,	(23U)
.equ	CAN_F9R1_FB23_Msk,	(0x1UL << CAN_F9R1_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F9R1_FB23,	CAN_F9R1_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F9R1_FB24_Pos,	(24U)
.equ	CAN_F9R1_FB24_Msk,	(0x1UL << CAN_F9R1_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F9R1_FB24,	CAN_F9R1_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F9R1_FB25_Pos,	(25U)
.equ	CAN_F9R1_FB25_Msk,	(0x1UL << CAN_F9R1_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F9R1_FB25,	CAN_F9R1_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F9R1_FB26_Pos,	(26U)
.equ	CAN_F9R1_FB26_Msk,	(0x1UL << CAN_F9R1_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F9R1_FB26,	CAN_F9R1_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F9R1_FB27_Pos,	(27U)
.equ	CAN_F9R1_FB27_Msk,	(0x1UL << CAN_F9R1_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F9R1_FB27,	CAN_F9R1_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F9R1_FB28_Pos,	(28U)
.equ	CAN_F9R1_FB28_Msk,	(0x1UL << CAN_F9R1_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F9R1_FB28,	CAN_F9R1_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F9R1_FB29_Pos,	(29U)
.equ	CAN_F9R1_FB29_Msk,	(0x1UL << CAN_F9R1_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F9R1_FB29,	CAN_F9R1_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F9R1_FB30_Pos,	(30U)
.equ	CAN_F9R1_FB30_Msk,	(0x1UL << CAN_F9R1_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F9R1_FB30,	CAN_F9R1_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F9R1_FB31_Pos,	(31U)
.equ	CAN_F9R1_FB31_Msk,	(0x1UL << CAN_F9R1_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F9R1_FB31,	CAN_F9R1_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R1 register  ******************/
.equ	CAN_F10R1_FB0_Pos,	0
.equ	CAN_F10R1_FB0_Msk,	(0x1UL << CAN_F10R1_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F10R1_FB0,	CAN_F10R1_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F10R1_FB1_Pos,	(1U)
.equ	CAN_F10R1_FB1_Msk,	(0x1UL << CAN_F10R1_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F10R1_FB1,	CAN_F10R1_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F10R1_FB2_Pos,	(2U)
.equ	CAN_F10R1_FB2_Msk,	(0x1UL << CAN_F10R1_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F10R1_FB2,	CAN_F10R1_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F10R1_FB3_Pos,	(3U)
.equ	CAN_F10R1_FB3_Msk,	(0x1UL << CAN_F10R1_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F10R1_FB3,	CAN_F10R1_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F10R1_FB4_Pos,	(4U)
.equ	CAN_F10R1_FB4_Msk,	(0x1UL << CAN_F10R1_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F10R1_FB4,	CAN_F10R1_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F10R1_FB5_Pos,	(5U)
.equ	CAN_F10R1_FB5_Msk,	(0x1UL << CAN_F10R1_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F10R1_FB5,	CAN_F10R1_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F10R1_FB6_Pos,	(6U)
.equ	CAN_F10R1_FB6_Msk,	(0x1UL << CAN_F10R1_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F10R1_FB6,	CAN_F10R1_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F10R1_FB7_Pos,	(7U)
.equ	CAN_F10R1_FB7_Msk,	(0x1UL << CAN_F10R1_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F10R1_FB7,	CAN_F10R1_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F10R1_FB8_Pos,	(8U)
.equ	CAN_F10R1_FB8_Msk,	(0x1UL << CAN_F10R1_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F10R1_FB8,	CAN_F10R1_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F10R1_FB9_Pos,	(9U)
.equ	CAN_F10R1_FB9_Msk,	(0x1UL << CAN_F10R1_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F10R1_FB9,	CAN_F10R1_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F10R1_FB10_Pos,	(10U)
.equ	CAN_F10R1_FB10_Msk,	(0x1UL << CAN_F10R1_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F10R1_FB10,	CAN_F10R1_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F10R1_FB11_Pos,	(11U)
.equ	CAN_F10R1_FB11_Msk,	(0x1UL << CAN_F10R1_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F10R1_FB11,	CAN_F10R1_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F10R1_FB12_Pos,	(12U)
.equ	CAN_F10R1_FB12_Msk,	(0x1UL << CAN_F10R1_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F10R1_FB12,	CAN_F10R1_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F10R1_FB13_Pos,	(13U)
.equ	CAN_F10R1_FB13_Msk,	(0x1UL << CAN_F10R1_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F10R1_FB13,	CAN_F10R1_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F10R1_FB14_Pos,	(14U)
.equ	CAN_F10R1_FB14_Msk,	(0x1UL << CAN_F10R1_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F10R1_FB14,	CAN_F10R1_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F10R1_FB15_Pos,	(15U)
.equ	CAN_F10R1_FB15_Msk,	(0x1UL << CAN_F10R1_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F10R1_FB15,	CAN_F10R1_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F10R1_FB16_Pos,	(16U)
.equ	CAN_F10R1_FB16_Msk,	(0x1UL << CAN_F10R1_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F10R1_FB16,	CAN_F10R1_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F10R1_FB17_Pos,	(17U)
.equ	CAN_F10R1_FB17_Msk,	(0x1UL << CAN_F10R1_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F10R1_FB17,	CAN_F10R1_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F10R1_FB18_Pos,	(18U)
.equ	CAN_F10R1_FB18_Msk,	(0x1UL << CAN_F10R1_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F10R1_FB18,	CAN_F10R1_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F10R1_FB19_Pos,	(19U)
.equ	CAN_F10R1_FB19_Msk,	(0x1UL << CAN_F10R1_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F10R1_FB19,	CAN_F10R1_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F10R1_FB20_Pos,	(20U)
.equ	CAN_F10R1_FB20_Msk,	(0x1UL << CAN_F10R1_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F10R1_FB20,	CAN_F10R1_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F10R1_FB21_Pos,	(21U)
.equ	CAN_F10R1_FB21_Msk,	(0x1UL << CAN_F10R1_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F10R1_FB21,	CAN_F10R1_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F10R1_FB22_Pos,	(22U)
.equ	CAN_F10R1_FB22_Msk,	(0x1UL << CAN_F10R1_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F10R1_FB22,	CAN_F10R1_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F10R1_FB23_Pos,	(23U)
.equ	CAN_F10R1_FB23_Msk,	(0x1UL << CAN_F10R1_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F10R1_FB23,	CAN_F10R1_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F10R1_FB24_Pos,	(24U)
.equ	CAN_F10R1_FB24_Msk,	(0x1UL << CAN_F10R1_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F10R1_FB24,	CAN_F10R1_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F10R1_FB25_Pos,	(25U)
.equ	CAN_F10R1_FB25_Msk,	(0x1UL << CAN_F10R1_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F10R1_FB25,	CAN_F10R1_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F10R1_FB26_Pos,	(26U)
.equ	CAN_F10R1_FB26_Msk,	(0x1UL << CAN_F10R1_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F10R1_FB26,	CAN_F10R1_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F10R1_FB27_Pos,	(27U)
.equ	CAN_F10R1_FB27_Msk,	(0x1UL << CAN_F10R1_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F10R1_FB27,	CAN_F10R1_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F10R1_FB28_Pos,	(28U)
.equ	CAN_F10R1_FB28_Msk,	(0x1UL << CAN_F10R1_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F10R1_FB28,	CAN_F10R1_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F10R1_FB29_Pos,	(29U)
.equ	CAN_F10R1_FB29_Msk,	(0x1UL << CAN_F10R1_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F10R1_FB29,	CAN_F10R1_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F10R1_FB30_Pos,	(30U)
.equ	CAN_F10R1_FB30_Msk,	(0x1UL << CAN_F10R1_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F10R1_FB30,	CAN_F10R1_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F10R1_FB31_Pos,	(31U)
.equ	CAN_F10R1_FB31_Msk,	(0x1UL << CAN_F10R1_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F10R1_FB31,	CAN_F10R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R1 register  ******************/
.equ	CAN_F11R1_FB0_Pos,	0
.equ	CAN_F11R1_FB0_Msk,	(0x1UL << CAN_F11R1_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F11R1_FB0,	CAN_F11R1_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F11R1_FB1_Pos,	(1U)
.equ	CAN_F11R1_FB1_Msk,	(0x1UL << CAN_F11R1_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F11R1_FB1,	CAN_F11R1_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F11R1_FB2_Pos,	(2U)
.equ	CAN_F11R1_FB2_Msk,	(0x1UL << CAN_F11R1_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F11R1_FB2,	CAN_F11R1_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F11R1_FB3_Pos,	(3U)
.equ	CAN_F11R1_FB3_Msk,	(0x1UL << CAN_F11R1_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F11R1_FB3,	CAN_F11R1_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F11R1_FB4_Pos,	(4U)
.equ	CAN_F11R1_FB4_Msk,	(0x1UL << CAN_F11R1_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F11R1_FB4,	CAN_F11R1_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F11R1_FB5_Pos,	(5U)
.equ	CAN_F11R1_FB5_Msk,	(0x1UL << CAN_F11R1_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F11R1_FB5,	CAN_F11R1_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F11R1_FB6_Pos,	(6U)
.equ	CAN_F11R1_FB6_Msk,	(0x1UL << CAN_F11R1_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F11R1_FB6,	CAN_F11R1_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F11R1_FB7_Pos,	(7U)
.equ	CAN_F11R1_FB7_Msk,	(0x1UL << CAN_F11R1_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F11R1_FB7,	CAN_F11R1_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F11R1_FB8_Pos,	(8U)
.equ	CAN_F11R1_FB8_Msk,	(0x1UL << CAN_F11R1_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F11R1_FB8,	CAN_F11R1_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F11R1_FB9_Pos,	(9U)
.equ	CAN_F11R1_FB9_Msk,	(0x1UL << CAN_F11R1_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F11R1_FB9,	CAN_F11R1_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F11R1_FB10_Pos,	(10U)
.equ	CAN_F11R1_FB10_Msk,	(0x1UL << CAN_F11R1_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F11R1_FB10,	CAN_F11R1_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F11R1_FB11_Pos,	(11U)
.equ	CAN_F11R1_FB11_Msk,	(0x1UL << CAN_F11R1_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F11R1_FB11,	CAN_F11R1_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F11R1_FB12_Pos,	(12U)
.equ	CAN_F11R1_FB12_Msk,	(0x1UL << CAN_F11R1_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F11R1_FB12,	CAN_F11R1_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F11R1_FB13_Pos,	(13U)
.equ	CAN_F11R1_FB13_Msk,	(0x1UL << CAN_F11R1_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F11R1_FB13,	CAN_F11R1_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F11R1_FB14_Pos,	(14U)
.equ	CAN_F11R1_FB14_Msk,	(0x1UL << CAN_F11R1_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F11R1_FB14,	CAN_F11R1_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F11R1_FB15_Pos,	(15U)
.equ	CAN_F11R1_FB15_Msk,	(0x1UL << CAN_F11R1_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F11R1_FB15,	CAN_F11R1_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F11R1_FB16_Pos,	(16U)
.equ	CAN_F11R1_FB16_Msk,	(0x1UL << CAN_F11R1_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F11R1_FB16,	CAN_F11R1_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F11R1_FB17_Pos,	(17U)
.equ	CAN_F11R1_FB17_Msk,	(0x1UL << CAN_F11R1_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F11R1_FB17,	CAN_F11R1_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F11R1_FB18_Pos,	(18U)
.equ	CAN_F11R1_FB18_Msk,	(0x1UL << CAN_F11R1_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F11R1_FB18,	CAN_F11R1_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F11R1_FB19_Pos,	(19U)
.equ	CAN_F11R1_FB19_Msk,	(0x1UL << CAN_F11R1_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F11R1_FB19,	CAN_F11R1_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F11R1_FB20_Pos,	(20U)
.equ	CAN_F11R1_FB20_Msk,	(0x1UL << CAN_F11R1_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F11R1_FB20,	CAN_F11R1_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F11R1_FB21_Pos,	(21U)
.equ	CAN_F11R1_FB21_Msk,	(0x1UL << CAN_F11R1_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F11R1_FB21,	CAN_F11R1_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F11R1_FB22_Pos,	(22U)
.equ	CAN_F11R1_FB22_Msk,	(0x1UL << CAN_F11R1_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F11R1_FB22,	CAN_F11R1_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F11R1_FB23_Pos,	(23U)
.equ	CAN_F11R1_FB23_Msk,	(0x1UL << CAN_F11R1_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F11R1_FB23,	CAN_F11R1_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F11R1_FB24_Pos,	(24U)
.equ	CAN_F11R1_FB24_Msk,	(0x1UL << CAN_F11R1_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F11R1_FB24,	CAN_F11R1_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F11R1_FB25_Pos,	(25U)
.equ	CAN_F11R1_FB25_Msk,	(0x1UL << CAN_F11R1_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F11R1_FB25,	CAN_F11R1_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F11R1_FB26_Pos,	(26U)
.equ	CAN_F11R1_FB26_Msk,	(0x1UL << CAN_F11R1_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F11R1_FB26,	CAN_F11R1_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F11R1_FB27_Pos,	(27U)
.equ	CAN_F11R1_FB27_Msk,	(0x1UL << CAN_F11R1_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F11R1_FB27,	CAN_F11R1_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F11R1_FB28_Pos,	(28U)
.equ	CAN_F11R1_FB28_Msk,	(0x1UL << CAN_F11R1_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F11R1_FB28,	CAN_F11R1_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F11R1_FB29_Pos,	(29U)
.equ	CAN_F11R1_FB29_Msk,	(0x1UL << CAN_F11R1_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F11R1_FB29,	CAN_F11R1_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F11R1_FB30_Pos,	(30U)
.equ	CAN_F11R1_FB30_Msk,	(0x1UL << CAN_F11R1_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F11R1_FB30,	CAN_F11R1_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F11R1_FB31_Pos,	(31U)
.equ	CAN_F11R1_FB31_Msk,	(0x1UL << CAN_F11R1_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F11R1_FB31,	CAN_F11R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R1 register  ******************/
.equ	CAN_F12R1_FB0_Pos,	0
.equ	CAN_F12R1_FB0_Msk,	(0x1UL << CAN_F12R1_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F12R1_FB0,	CAN_F12R1_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F12R1_FB1_Pos,	(1U)
.equ	CAN_F12R1_FB1_Msk,	(0x1UL << CAN_F12R1_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F12R1_FB1,	CAN_F12R1_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F12R1_FB2_Pos,	(2U)
.equ	CAN_F12R1_FB2_Msk,	(0x1UL << CAN_F12R1_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F12R1_FB2,	CAN_F12R1_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F12R1_FB3_Pos,	(3U)
.equ	CAN_F12R1_FB3_Msk,	(0x1UL << CAN_F12R1_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F12R1_FB3,	CAN_F12R1_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F12R1_FB4_Pos,	(4U)
.equ	CAN_F12R1_FB4_Msk,	(0x1UL << CAN_F12R1_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F12R1_FB4,	CAN_F12R1_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F12R1_FB5_Pos,	(5U)
.equ	CAN_F12R1_FB5_Msk,	(0x1UL << CAN_F12R1_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F12R1_FB5,	CAN_F12R1_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F12R1_FB6_Pos,	(6U)
.equ	CAN_F12R1_FB6_Msk,	(0x1UL << CAN_F12R1_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F12R1_FB6,	CAN_F12R1_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F12R1_FB7_Pos,	(7U)
.equ	CAN_F12R1_FB7_Msk,	(0x1UL << CAN_F12R1_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F12R1_FB7,	CAN_F12R1_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F12R1_FB8_Pos,	(8U)
.equ	CAN_F12R1_FB8_Msk,	(0x1UL << CAN_F12R1_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F12R1_FB8,	CAN_F12R1_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F12R1_FB9_Pos,	(9U)
.equ	CAN_F12R1_FB9_Msk,	(0x1UL << CAN_F12R1_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F12R1_FB9,	CAN_F12R1_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F12R1_FB10_Pos,	(10U)
.equ	CAN_F12R1_FB10_Msk,	(0x1UL << CAN_F12R1_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F12R1_FB10,	CAN_F12R1_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F12R1_FB11_Pos,	(11U)
.equ	CAN_F12R1_FB11_Msk,	(0x1UL << CAN_F12R1_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F12R1_FB11,	CAN_F12R1_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F12R1_FB12_Pos,	(12U)
.equ	CAN_F12R1_FB12_Msk,	(0x1UL << CAN_F12R1_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F12R1_FB12,	CAN_F12R1_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F12R1_FB13_Pos,	(13U)
.equ	CAN_F12R1_FB13_Msk,	(0x1UL << CAN_F12R1_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F12R1_FB13,	CAN_F12R1_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F12R1_FB14_Pos,	(14U)
.equ	CAN_F12R1_FB14_Msk,	(0x1UL << CAN_F12R1_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F12R1_FB14,	CAN_F12R1_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F12R1_FB15_Pos,	(15U)
.equ	CAN_F12R1_FB15_Msk,	(0x1UL << CAN_F12R1_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F12R1_FB15,	CAN_F12R1_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F12R1_FB16_Pos,	(16U)
.equ	CAN_F12R1_FB16_Msk,	(0x1UL << CAN_F12R1_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F12R1_FB16,	CAN_F12R1_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F12R1_FB17_Pos,	(17U)
.equ	CAN_F12R1_FB17_Msk,	(0x1UL << CAN_F12R1_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F12R1_FB17,	CAN_F12R1_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F12R1_FB18_Pos,	(18U)
.equ	CAN_F12R1_FB18_Msk,	(0x1UL << CAN_F12R1_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F12R1_FB18,	CAN_F12R1_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F12R1_FB19_Pos,	(19U)
.equ	CAN_F12R1_FB19_Msk,	(0x1UL << CAN_F12R1_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F12R1_FB19,	CAN_F12R1_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F12R1_FB20_Pos,	(20U)
.equ	CAN_F12R1_FB20_Msk,	(0x1UL << CAN_F12R1_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F12R1_FB20,	CAN_F12R1_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F12R1_FB21_Pos,	(21U)
.equ	CAN_F12R1_FB21_Msk,	(0x1UL << CAN_F12R1_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F12R1_FB21,	CAN_F12R1_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F12R1_FB22_Pos,	(22U)
.equ	CAN_F12R1_FB22_Msk,	(0x1UL << CAN_F12R1_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F12R1_FB22,	CAN_F12R1_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F12R1_FB23_Pos,	(23U)
.equ	CAN_F12R1_FB23_Msk,	(0x1UL << CAN_F12R1_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F12R1_FB23,	CAN_F12R1_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F12R1_FB24_Pos,	(24U)
.equ	CAN_F12R1_FB24_Msk,	(0x1UL << CAN_F12R1_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F12R1_FB24,	CAN_F12R1_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F12R1_FB25_Pos,	(25U)
.equ	CAN_F12R1_FB25_Msk,	(0x1UL << CAN_F12R1_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F12R1_FB25,	CAN_F12R1_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F12R1_FB26_Pos,	(26U)
.equ	CAN_F12R1_FB26_Msk,	(0x1UL << CAN_F12R1_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F12R1_FB26,	CAN_F12R1_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F12R1_FB27_Pos,	(27U)
.equ	CAN_F12R1_FB27_Msk,	(0x1UL << CAN_F12R1_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F12R1_FB27,	CAN_F12R1_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F12R1_FB28_Pos,	(28U)
.equ	CAN_F12R1_FB28_Msk,	(0x1UL << CAN_F12R1_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F12R1_FB28,	CAN_F12R1_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F12R1_FB29_Pos,	(29U)
.equ	CAN_F12R1_FB29_Msk,	(0x1UL << CAN_F12R1_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F12R1_FB29,	CAN_F12R1_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F12R1_FB30_Pos,	(30U)
.equ	CAN_F12R1_FB30_Msk,	(0x1UL << CAN_F12R1_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F12R1_FB30,	CAN_F12R1_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F12R1_FB31_Pos,	(31U)
.equ	CAN_F12R1_FB31_Msk,	(0x1UL << CAN_F12R1_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F12R1_FB31,	CAN_F12R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R1 register  ******************/
.equ	CAN_F13R1_FB0_Pos,	0
.equ	CAN_F13R1_FB0_Msk,	(0x1UL << CAN_F13R1_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F13R1_FB0,	CAN_F13R1_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F13R1_FB1_Pos,	(1U)
.equ	CAN_F13R1_FB1_Msk,	(0x1UL << CAN_F13R1_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F13R1_FB1,	CAN_F13R1_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F13R1_FB2_Pos,	(2U)
.equ	CAN_F13R1_FB2_Msk,	(0x1UL << CAN_F13R1_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F13R1_FB2,	CAN_F13R1_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F13R1_FB3_Pos,	(3U)
.equ	CAN_F13R1_FB3_Msk,	(0x1UL << CAN_F13R1_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F13R1_FB3,	CAN_F13R1_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F13R1_FB4_Pos,	(4U)
.equ	CAN_F13R1_FB4_Msk,	(0x1UL << CAN_F13R1_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F13R1_FB4,	CAN_F13R1_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F13R1_FB5_Pos,	(5U)
.equ	CAN_F13R1_FB5_Msk,	(0x1UL << CAN_F13R1_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F13R1_FB5,	CAN_F13R1_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F13R1_FB6_Pos,	(6U)
.equ	CAN_F13R1_FB6_Msk,	(0x1UL << CAN_F13R1_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F13R1_FB6,	CAN_F13R1_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F13R1_FB7_Pos,	(7U)
.equ	CAN_F13R1_FB7_Msk,	(0x1UL << CAN_F13R1_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F13R1_FB7,	CAN_F13R1_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F13R1_FB8_Pos,	(8U)
.equ	CAN_F13R1_FB8_Msk,	(0x1UL << CAN_F13R1_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F13R1_FB8,	CAN_F13R1_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F13R1_FB9_Pos,	(9U)
.equ	CAN_F13R1_FB9_Msk,	(0x1UL << CAN_F13R1_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F13R1_FB9,	CAN_F13R1_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F13R1_FB10_Pos,	(10U)
.equ	CAN_F13R1_FB10_Msk,	(0x1UL << CAN_F13R1_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F13R1_FB10,	CAN_F13R1_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F13R1_FB11_Pos,	(11U)
.equ	CAN_F13R1_FB11_Msk,	(0x1UL << CAN_F13R1_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F13R1_FB11,	CAN_F13R1_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F13R1_FB12_Pos,	(12U)
.equ	CAN_F13R1_FB12_Msk,	(0x1UL << CAN_F13R1_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F13R1_FB12,	CAN_F13R1_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F13R1_FB13_Pos,	(13U)
.equ	CAN_F13R1_FB13_Msk,	(0x1UL << CAN_F13R1_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F13R1_FB13,	CAN_F13R1_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F13R1_FB14_Pos,	(14U)
.equ	CAN_F13R1_FB14_Msk,	(0x1UL << CAN_F13R1_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F13R1_FB14,	CAN_F13R1_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F13R1_FB15_Pos,	(15U)
.equ	CAN_F13R1_FB15_Msk,	(0x1UL << CAN_F13R1_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F13R1_FB15,	CAN_F13R1_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F13R1_FB16_Pos,	(16U)
.equ	CAN_F13R1_FB16_Msk,	(0x1UL << CAN_F13R1_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F13R1_FB16,	CAN_F13R1_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F13R1_FB17_Pos,	(17U)
.equ	CAN_F13R1_FB17_Msk,	(0x1UL << CAN_F13R1_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F13R1_FB17,	CAN_F13R1_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F13R1_FB18_Pos,	(18U)
.equ	CAN_F13R1_FB18_Msk,	(0x1UL << CAN_F13R1_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F13R1_FB18,	CAN_F13R1_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F13R1_FB19_Pos,	(19U)
.equ	CAN_F13R1_FB19_Msk,	(0x1UL << CAN_F13R1_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F13R1_FB19,	CAN_F13R1_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F13R1_FB20_Pos,	(20U)
.equ	CAN_F13R1_FB20_Msk,	(0x1UL << CAN_F13R1_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F13R1_FB20,	CAN_F13R1_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F13R1_FB21_Pos,	(21U)
.equ	CAN_F13R1_FB21_Msk,	(0x1UL << CAN_F13R1_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F13R1_FB21,	CAN_F13R1_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F13R1_FB22_Pos,	(22U)
.equ	CAN_F13R1_FB22_Msk,	(0x1UL << CAN_F13R1_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F13R1_FB22,	CAN_F13R1_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F13R1_FB23_Pos,	(23U)
.equ	CAN_F13R1_FB23_Msk,	(0x1UL << CAN_F13R1_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F13R1_FB23,	CAN_F13R1_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F13R1_FB24_Pos,	(24U)
.equ	CAN_F13R1_FB24_Msk,	(0x1UL << CAN_F13R1_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F13R1_FB24,	CAN_F13R1_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F13R1_FB25_Pos,	(25U)
.equ	CAN_F13R1_FB25_Msk,	(0x1UL << CAN_F13R1_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F13R1_FB25,	CAN_F13R1_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F13R1_FB26_Pos,	(26U)
.equ	CAN_F13R1_FB26_Msk,	(0x1UL << CAN_F13R1_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F13R1_FB26,	CAN_F13R1_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F13R1_FB27_Pos,	(27U)
.equ	CAN_F13R1_FB27_Msk,	(0x1UL << CAN_F13R1_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F13R1_FB27,	CAN_F13R1_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F13R1_FB28_Pos,	(28U)
.equ	CAN_F13R1_FB28_Msk,	(0x1UL << CAN_F13R1_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F13R1_FB28,	CAN_F13R1_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F13R1_FB29_Pos,	(29U)
.equ	CAN_F13R1_FB29_Msk,	(0x1UL << CAN_F13R1_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F13R1_FB29,	CAN_F13R1_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F13R1_FB30_Pos,	(30U)
.equ	CAN_F13R1_FB30_Msk,	(0x1UL << CAN_F13R1_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F13R1_FB30,	CAN_F13R1_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F13R1_FB31_Pos,	(31U)
.equ	CAN_F13R1_FB31_Msk,	(0x1UL << CAN_F13R1_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F13R1_FB31,	CAN_F13R1_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F0R2 register  *******************/
.equ	CAN_F0R2_FB0_Pos,	0
.equ	CAN_F0R2_FB0_Msk,	(0x1UL << CAN_F0R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F0R2_FB0,	CAN_F0R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F0R2_FB1_Pos,	(1U)
.equ	CAN_F0R2_FB1_Msk,	(0x1UL << CAN_F0R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F0R2_FB1,	CAN_F0R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F0R2_FB2_Pos,	(2U)
.equ	CAN_F0R2_FB2_Msk,	(0x1UL << CAN_F0R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F0R2_FB2,	CAN_F0R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F0R2_FB3_Pos,	(3U)
.equ	CAN_F0R2_FB3_Msk,	(0x1UL << CAN_F0R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F0R2_FB3,	CAN_F0R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F0R2_FB4_Pos,	(4U)
.equ	CAN_F0R2_FB4_Msk,	(0x1UL << CAN_F0R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F0R2_FB4,	CAN_F0R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F0R2_FB5_Pos,	(5U)
.equ	CAN_F0R2_FB5_Msk,	(0x1UL << CAN_F0R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F0R2_FB5,	CAN_F0R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F0R2_FB6_Pos,	(6U)
.equ	CAN_F0R2_FB6_Msk,	(0x1UL << CAN_F0R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F0R2_FB6,	CAN_F0R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F0R2_FB7_Pos,	(7U)
.equ	CAN_F0R2_FB7_Msk,	(0x1UL << CAN_F0R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F0R2_FB7,	CAN_F0R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F0R2_FB8_Pos,	(8U)
.equ	CAN_F0R2_FB8_Msk,	(0x1UL << CAN_F0R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F0R2_FB8,	CAN_F0R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F0R2_FB9_Pos,	(9U)
.equ	CAN_F0R2_FB9_Msk,	(0x1UL << CAN_F0R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F0R2_FB9,	CAN_F0R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F0R2_FB10_Pos,	(10U)
.equ	CAN_F0R2_FB10_Msk,	(0x1UL << CAN_F0R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F0R2_FB10,	CAN_F0R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F0R2_FB11_Pos,	(11U)
.equ	CAN_F0R2_FB11_Msk,	(0x1UL << CAN_F0R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F0R2_FB11,	CAN_F0R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F0R2_FB12_Pos,	(12U)
.equ	CAN_F0R2_FB12_Msk,	(0x1UL << CAN_F0R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F0R2_FB12,	CAN_F0R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F0R2_FB13_Pos,	(13U)
.equ	CAN_F0R2_FB13_Msk,	(0x1UL << CAN_F0R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F0R2_FB13,	CAN_F0R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F0R2_FB14_Pos,	(14U)
.equ	CAN_F0R2_FB14_Msk,	(0x1UL << CAN_F0R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F0R2_FB14,	CAN_F0R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F0R2_FB15_Pos,	(15U)
.equ	CAN_F0R2_FB15_Msk,	(0x1UL << CAN_F0R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F0R2_FB15,	CAN_F0R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F0R2_FB16_Pos,	(16U)
.equ	CAN_F0R2_FB16_Msk,	(0x1UL << CAN_F0R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F0R2_FB16,	CAN_F0R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F0R2_FB17_Pos,	(17U)
.equ	CAN_F0R2_FB17_Msk,	(0x1UL << CAN_F0R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F0R2_FB17,	CAN_F0R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F0R2_FB18_Pos,	(18U)
.equ	CAN_F0R2_FB18_Msk,	(0x1UL << CAN_F0R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F0R2_FB18,	CAN_F0R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F0R2_FB19_Pos,	(19U)
.equ	CAN_F0R2_FB19_Msk,	(0x1UL << CAN_F0R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F0R2_FB19,	CAN_F0R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F0R2_FB20_Pos,	(20U)
.equ	CAN_F0R2_FB20_Msk,	(0x1UL << CAN_F0R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F0R2_FB20,	CAN_F0R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F0R2_FB21_Pos,	(21U)
.equ	CAN_F0R2_FB21_Msk,	(0x1UL << CAN_F0R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F0R2_FB21,	CAN_F0R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F0R2_FB22_Pos,	(22U)
.equ	CAN_F0R2_FB22_Msk,	(0x1UL << CAN_F0R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F0R2_FB22,	CAN_F0R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F0R2_FB23_Pos,	(23U)
.equ	CAN_F0R2_FB23_Msk,	(0x1UL << CAN_F0R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F0R2_FB23,	CAN_F0R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F0R2_FB24_Pos,	(24U)
.equ	CAN_F0R2_FB24_Msk,	(0x1UL << CAN_F0R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F0R2_FB24,	CAN_F0R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F0R2_FB25_Pos,	(25U)
.equ	CAN_F0R2_FB25_Msk,	(0x1UL << CAN_F0R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F0R2_FB25,	CAN_F0R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F0R2_FB26_Pos,	(26U)
.equ	CAN_F0R2_FB26_Msk,	(0x1UL << CAN_F0R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F0R2_FB26,	CAN_F0R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F0R2_FB27_Pos,	(27U)
.equ	CAN_F0R2_FB27_Msk,	(0x1UL << CAN_F0R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F0R2_FB27,	CAN_F0R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F0R2_FB28_Pos,	(28U)
.equ	CAN_F0R2_FB28_Msk,	(0x1UL << CAN_F0R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F0R2_FB28,	CAN_F0R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F0R2_FB29_Pos,	(29U)
.equ	CAN_F0R2_FB29_Msk,	(0x1UL << CAN_F0R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F0R2_FB29,	CAN_F0R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F0R2_FB30_Pos,	(30U)
.equ	CAN_F0R2_FB30_Msk,	(0x1UL << CAN_F0R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F0R2_FB30,	CAN_F0R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F0R2_FB31_Pos,	(31U)
.equ	CAN_F0R2_FB31_Msk,	(0x1UL << CAN_F0R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F0R2_FB31,	CAN_F0R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R2 register  *******************/
.equ	CAN_F1R2_FB0_Pos,	0
.equ	CAN_F1R2_FB0_Msk,	(0x1UL << CAN_F1R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F1R2_FB0,	CAN_F1R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F1R2_FB1_Pos,	(1U)
.equ	CAN_F1R2_FB1_Msk,	(0x1UL << CAN_F1R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F1R2_FB1,	CAN_F1R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F1R2_FB2_Pos,	(2U)
.equ	CAN_F1R2_FB2_Msk,	(0x1UL << CAN_F1R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F1R2_FB2,	CAN_F1R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F1R2_FB3_Pos,	(3U)
.equ	CAN_F1R2_FB3_Msk,	(0x1UL << CAN_F1R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F1R2_FB3,	CAN_F1R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F1R2_FB4_Pos,	(4U)
.equ	CAN_F1R2_FB4_Msk,	(0x1UL << CAN_F1R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F1R2_FB4,	CAN_F1R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F1R2_FB5_Pos,	(5U)
.equ	CAN_F1R2_FB5_Msk,	(0x1UL << CAN_F1R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F1R2_FB5,	CAN_F1R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F1R2_FB6_Pos,	(6U)
.equ	CAN_F1R2_FB6_Msk,	(0x1UL << CAN_F1R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F1R2_FB6,	CAN_F1R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F1R2_FB7_Pos,	(7U)
.equ	CAN_F1R2_FB7_Msk,	(0x1UL << CAN_F1R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F1R2_FB7,	CAN_F1R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F1R2_FB8_Pos,	(8U)
.equ	CAN_F1R2_FB8_Msk,	(0x1UL << CAN_F1R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F1R2_FB8,	CAN_F1R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F1R2_FB9_Pos,	(9U)
.equ	CAN_F1R2_FB9_Msk,	(0x1UL << CAN_F1R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F1R2_FB9,	CAN_F1R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F1R2_FB10_Pos,	(10U)
.equ	CAN_F1R2_FB10_Msk,	(0x1UL << CAN_F1R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F1R2_FB10,	CAN_F1R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F1R2_FB11_Pos,	(11U)
.equ	CAN_F1R2_FB11_Msk,	(0x1UL << CAN_F1R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F1R2_FB11,	CAN_F1R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F1R2_FB12_Pos,	(12U)
.equ	CAN_F1R2_FB12_Msk,	(0x1UL << CAN_F1R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F1R2_FB12,	CAN_F1R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F1R2_FB13_Pos,	(13U)
.equ	CAN_F1R2_FB13_Msk,	(0x1UL << CAN_F1R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F1R2_FB13,	CAN_F1R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F1R2_FB14_Pos,	(14U)
.equ	CAN_F1R2_FB14_Msk,	(0x1UL << CAN_F1R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F1R2_FB14,	CAN_F1R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F1R2_FB15_Pos,	(15U)
.equ	CAN_F1R2_FB15_Msk,	(0x1UL << CAN_F1R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F1R2_FB15,	CAN_F1R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F1R2_FB16_Pos,	(16U)
.equ	CAN_F1R2_FB16_Msk,	(0x1UL << CAN_F1R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F1R2_FB16,	CAN_F1R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F1R2_FB17_Pos,	(17U)
.equ	CAN_F1R2_FB17_Msk,	(0x1UL << CAN_F1R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F1R2_FB17,	CAN_F1R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F1R2_FB18_Pos,	(18U)
.equ	CAN_F1R2_FB18_Msk,	(0x1UL << CAN_F1R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F1R2_FB18,	CAN_F1R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F1R2_FB19_Pos,	(19U)
.equ	CAN_F1R2_FB19_Msk,	(0x1UL << CAN_F1R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F1R2_FB19,	CAN_F1R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F1R2_FB20_Pos,	(20U)
.equ	CAN_F1R2_FB20_Msk,	(0x1UL << CAN_F1R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F1R2_FB20,	CAN_F1R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F1R2_FB21_Pos,	(21U)
.equ	CAN_F1R2_FB21_Msk,	(0x1UL << CAN_F1R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F1R2_FB21,	CAN_F1R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F1R2_FB22_Pos,	(22U)
.equ	CAN_F1R2_FB22_Msk,	(0x1UL << CAN_F1R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F1R2_FB22,	CAN_F1R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F1R2_FB23_Pos,	(23U)
.equ	CAN_F1R2_FB23_Msk,	(0x1UL << CAN_F1R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F1R2_FB23,	CAN_F1R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F1R2_FB24_Pos,	(24U)
.equ	CAN_F1R2_FB24_Msk,	(0x1UL << CAN_F1R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F1R2_FB24,	CAN_F1R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F1R2_FB25_Pos,	(25U)
.equ	CAN_F1R2_FB25_Msk,	(0x1UL << CAN_F1R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F1R2_FB25,	CAN_F1R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F1R2_FB26_Pos,	(26U)
.equ	CAN_F1R2_FB26_Msk,	(0x1UL << CAN_F1R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F1R2_FB26,	CAN_F1R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F1R2_FB27_Pos,	(27U)
.equ	CAN_F1R2_FB27_Msk,	(0x1UL << CAN_F1R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F1R2_FB27,	CAN_F1R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F1R2_FB28_Pos,	(28U)
.equ	CAN_F1R2_FB28_Msk,	(0x1UL << CAN_F1R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F1R2_FB28,	CAN_F1R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F1R2_FB29_Pos,	(29U)
.equ	CAN_F1R2_FB29_Msk,	(0x1UL << CAN_F1R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F1R2_FB29,	CAN_F1R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F1R2_FB30_Pos,	(30U)
.equ	CAN_F1R2_FB30_Msk,	(0x1UL << CAN_F1R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F1R2_FB30,	CAN_F1R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F1R2_FB31_Pos,	(31U)
.equ	CAN_F1R2_FB31_Msk,	(0x1UL << CAN_F1R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F1R2_FB31,	CAN_F1R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R2 register  *******************/
.equ	CAN_F2R2_FB0_Pos,	0
.equ	CAN_F2R2_FB0_Msk,	(0x1UL << CAN_F2R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F2R2_FB0,	CAN_F2R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F2R2_FB1_Pos,	(1U)
.equ	CAN_F2R2_FB1_Msk,	(0x1UL << CAN_F2R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F2R2_FB1,	CAN_F2R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F2R2_FB2_Pos,	(2U)
.equ	CAN_F2R2_FB2_Msk,	(0x1UL << CAN_F2R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F2R2_FB2,	CAN_F2R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F2R2_FB3_Pos,	(3U)
.equ	CAN_F2R2_FB3_Msk,	(0x1UL << CAN_F2R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F2R2_FB3,	CAN_F2R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F2R2_FB4_Pos,	(4U)
.equ	CAN_F2R2_FB4_Msk,	(0x1UL << CAN_F2R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F2R2_FB4,	CAN_F2R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F2R2_FB5_Pos,	(5U)
.equ	CAN_F2R2_FB5_Msk,	(0x1UL << CAN_F2R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F2R2_FB5,	CAN_F2R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F2R2_FB6_Pos,	(6U)
.equ	CAN_F2R2_FB6_Msk,	(0x1UL << CAN_F2R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F2R2_FB6,	CAN_F2R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F2R2_FB7_Pos,	(7U)
.equ	CAN_F2R2_FB7_Msk,	(0x1UL << CAN_F2R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F2R2_FB7,	CAN_F2R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F2R2_FB8_Pos,	(8U)
.equ	CAN_F2R2_FB8_Msk,	(0x1UL << CAN_F2R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F2R2_FB8,	CAN_F2R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F2R2_FB9_Pos,	(9U)
.equ	CAN_F2R2_FB9_Msk,	(0x1UL << CAN_F2R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F2R2_FB9,	CAN_F2R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F2R2_FB10_Pos,	(10U)
.equ	CAN_F2R2_FB10_Msk,	(0x1UL << CAN_F2R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F2R2_FB10,	CAN_F2R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F2R2_FB11_Pos,	(11U)
.equ	CAN_F2R2_FB11_Msk,	(0x1UL << CAN_F2R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F2R2_FB11,	CAN_F2R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F2R2_FB12_Pos,	(12U)
.equ	CAN_F2R2_FB12_Msk,	(0x1UL << CAN_F2R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F2R2_FB12,	CAN_F2R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F2R2_FB13_Pos,	(13U)
.equ	CAN_F2R2_FB13_Msk,	(0x1UL << CAN_F2R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F2R2_FB13,	CAN_F2R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F2R2_FB14_Pos,	(14U)
.equ	CAN_F2R2_FB14_Msk,	(0x1UL << CAN_F2R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F2R2_FB14,	CAN_F2R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F2R2_FB15_Pos,	(15U)
.equ	CAN_F2R2_FB15_Msk,	(0x1UL << CAN_F2R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F2R2_FB15,	CAN_F2R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F2R2_FB16_Pos,	(16U)
.equ	CAN_F2R2_FB16_Msk,	(0x1UL << CAN_F2R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F2R2_FB16,	CAN_F2R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F2R2_FB17_Pos,	(17U)
.equ	CAN_F2R2_FB17_Msk,	(0x1UL << CAN_F2R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F2R2_FB17,	CAN_F2R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F2R2_FB18_Pos,	(18U)
.equ	CAN_F2R2_FB18_Msk,	(0x1UL << CAN_F2R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F2R2_FB18,	CAN_F2R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F2R2_FB19_Pos,	(19U)
.equ	CAN_F2R2_FB19_Msk,	(0x1UL << CAN_F2R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F2R2_FB19,	CAN_F2R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F2R2_FB20_Pos,	(20U)
.equ	CAN_F2R2_FB20_Msk,	(0x1UL << CAN_F2R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F2R2_FB20,	CAN_F2R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F2R2_FB21_Pos,	(21U)
.equ	CAN_F2R2_FB21_Msk,	(0x1UL << CAN_F2R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F2R2_FB21,	CAN_F2R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F2R2_FB22_Pos,	(22U)
.equ	CAN_F2R2_FB22_Msk,	(0x1UL << CAN_F2R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F2R2_FB22,	CAN_F2R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F2R2_FB23_Pos,	(23U)
.equ	CAN_F2R2_FB23_Msk,	(0x1UL << CAN_F2R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F2R2_FB23,	CAN_F2R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F2R2_FB24_Pos,	(24U)
.equ	CAN_F2R2_FB24_Msk,	(0x1UL << CAN_F2R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F2R2_FB24,	CAN_F2R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F2R2_FB25_Pos,	(25U)
.equ	CAN_F2R2_FB25_Msk,	(0x1UL << CAN_F2R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F2R2_FB25,	CAN_F2R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F2R2_FB26_Pos,	(26U)
.equ	CAN_F2R2_FB26_Msk,	(0x1UL << CAN_F2R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F2R2_FB26,	CAN_F2R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F2R2_FB27_Pos,	(27U)
.equ	CAN_F2R2_FB27_Msk,	(0x1UL << CAN_F2R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F2R2_FB27,	CAN_F2R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F2R2_FB28_Pos,	(28U)
.equ	CAN_F2R2_FB28_Msk,	(0x1UL << CAN_F2R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F2R2_FB28,	CAN_F2R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F2R2_FB29_Pos,	(29U)
.equ	CAN_F2R2_FB29_Msk,	(0x1UL << CAN_F2R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F2R2_FB29,	CAN_F2R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F2R2_FB30_Pos,	(30U)
.equ	CAN_F2R2_FB30_Msk,	(0x1UL << CAN_F2R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F2R2_FB30,	CAN_F2R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F2R2_FB31_Pos,	(31U)
.equ	CAN_F2R2_FB31_Msk,	(0x1UL << CAN_F2R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F2R2_FB31,	CAN_F2R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R2 register  *******************/
.equ	CAN_F3R2_FB0_Pos,	0
.equ	CAN_F3R2_FB0_Msk,	(0x1UL << CAN_F3R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F3R2_FB0,	CAN_F3R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F3R2_FB1_Pos,	(1U)
.equ	CAN_F3R2_FB1_Msk,	(0x1UL << CAN_F3R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F3R2_FB1,	CAN_F3R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F3R2_FB2_Pos,	(2U)
.equ	CAN_F3R2_FB2_Msk,	(0x1UL << CAN_F3R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F3R2_FB2,	CAN_F3R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F3R2_FB3_Pos,	(3U)
.equ	CAN_F3R2_FB3_Msk,	(0x1UL << CAN_F3R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F3R2_FB3,	CAN_F3R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F3R2_FB4_Pos,	(4U)
.equ	CAN_F3R2_FB4_Msk,	(0x1UL << CAN_F3R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F3R2_FB4,	CAN_F3R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F3R2_FB5_Pos,	(5U)
.equ	CAN_F3R2_FB5_Msk,	(0x1UL << CAN_F3R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F3R2_FB5,	CAN_F3R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F3R2_FB6_Pos,	(6U)
.equ	CAN_F3R2_FB6_Msk,	(0x1UL << CAN_F3R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F3R2_FB6,	CAN_F3R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F3R2_FB7_Pos,	(7U)
.equ	CAN_F3R2_FB7_Msk,	(0x1UL << CAN_F3R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F3R2_FB7,	CAN_F3R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F3R2_FB8_Pos,	(8U)
.equ	CAN_F3R2_FB8_Msk,	(0x1UL << CAN_F3R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F3R2_FB8,	CAN_F3R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F3R2_FB9_Pos,	(9U)
.equ	CAN_F3R2_FB9_Msk,	(0x1UL << CAN_F3R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F3R2_FB9,	CAN_F3R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F3R2_FB10_Pos,	(10U)
.equ	CAN_F3R2_FB10_Msk,	(0x1UL << CAN_F3R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F3R2_FB10,	CAN_F3R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F3R2_FB11_Pos,	(11U)
.equ	CAN_F3R2_FB11_Msk,	(0x1UL << CAN_F3R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F3R2_FB11,	CAN_F3R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F3R2_FB12_Pos,	(12U)
.equ	CAN_F3R2_FB12_Msk,	(0x1UL << CAN_F3R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F3R2_FB12,	CAN_F3R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F3R2_FB13_Pos,	(13U)
.equ	CAN_F3R2_FB13_Msk,	(0x1UL << CAN_F3R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F3R2_FB13,	CAN_F3R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F3R2_FB14_Pos,	(14U)
.equ	CAN_F3R2_FB14_Msk,	(0x1UL << CAN_F3R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F3R2_FB14,	CAN_F3R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F3R2_FB15_Pos,	(15U)
.equ	CAN_F3R2_FB15_Msk,	(0x1UL << CAN_F3R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F3R2_FB15,	CAN_F3R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F3R2_FB16_Pos,	(16U)
.equ	CAN_F3R2_FB16_Msk,	(0x1UL << CAN_F3R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F3R2_FB16,	CAN_F3R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F3R2_FB17_Pos,	(17U)
.equ	CAN_F3R2_FB17_Msk,	(0x1UL << CAN_F3R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F3R2_FB17,	CAN_F3R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F3R2_FB18_Pos,	(18U)
.equ	CAN_F3R2_FB18_Msk,	(0x1UL << CAN_F3R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F3R2_FB18,	CAN_F3R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F3R2_FB19_Pos,	(19U)
.equ	CAN_F3R2_FB19_Msk,	(0x1UL << CAN_F3R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F3R2_FB19,	CAN_F3R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F3R2_FB20_Pos,	(20U)
.equ	CAN_F3R2_FB20_Msk,	(0x1UL << CAN_F3R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F3R2_FB20,	CAN_F3R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F3R2_FB21_Pos,	(21U)
.equ	CAN_F3R2_FB21_Msk,	(0x1UL << CAN_F3R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F3R2_FB21,	CAN_F3R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F3R2_FB22_Pos,	(22U)
.equ	CAN_F3R2_FB22_Msk,	(0x1UL << CAN_F3R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F3R2_FB22,	CAN_F3R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F3R2_FB23_Pos,	(23U)
.equ	CAN_F3R2_FB23_Msk,	(0x1UL << CAN_F3R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F3R2_FB23,	CAN_F3R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F3R2_FB24_Pos,	(24U)
.equ	CAN_F3R2_FB24_Msk,	(0x1UL << CAN_F3R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F3R2_FB24,	CAN_F3R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F3R2_FB25_Pos,	(25U)
.equ	CAN_F3R2_FB25_Msk,	(0x1UL << CAN_F3R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F3R2_FB25,	CAN_F3R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F3R2_FB26_Pos,	(26U)
.equ	CAN_F3R2_FB26_Msk,	(0x1UL << CAN_F3R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F3R2_FB26,	CAN_F3R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F3R2_FB27_Pos,	(27U)
.equ	CAN_F3R2_FB27_Msk,	(0x1UL << CAN_F3R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F3R2_FB27,	CAN_F3R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F3R2_FB28_Pos,	(28U)
.equ	CAN_F3R2_FB28_Msk,	(0x1UL << CAN_F3R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F3R2_FB28,	CAN_F3R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F3R2_FB29_Pos,	(29U)
.equ	CAN_F3R2_FB29_Msk,	(0x1UL << CAN_F3R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F3R2_FB29,	CAN_F3R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F3R2_FB30_Pos,	(30U)
.equ	CAN_F3R2_FB30_Msk,	(0x1UL << CAN_F3R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F3R2_FB30,	CAN_F3R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F3R2_FB31_Pos,	(31U)
.equ	CAN_F3R2_FB31_Msk,	(0x1UL << CAN_F3R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F3R2_FB31,	CAN_F3R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R2 register  *******************/
.equ	CAN_F4R2_FB0_Pos,	0
.equ	CAN_F4R2_FB0_Msk,	(0x1UL << CAN_F4R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F4R2_FB0,	CAN_F4R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F4R2_FB1_Pos,	(1U)
.equ	CAN_F4R2_FB1_Msk,	(0x1UL << CAN_F4R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F4R2_FB1,	CAN_F4R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F4R2_FB2_Pos,	(2U)
.equ	CAN_F4R2_FB2_Msk,	(0x1UL << CAN_F4R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F4R2_FB2,	CAN_F4R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F4R2_FB3_Pos,	(3U)
.equ	CAN_F4R2_FB3_Msk,	(0x1UL << CAN_F4R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F4R2_FB3,	CAN_F4R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F4R2_FB4_Pos,	(4U)
.equ	CAN_F4R2_FB4_Msk,	(0x1UL << CAN_F4R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F4R2_FB4,	CAN_F4R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F4R2_FB5_Pos,	(5U)
.equ	CAN_F4R2_FB5_Msk,	(0x1UL << CAN_F4R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F4R2_FB5,	CAN_F4R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F4R2_FB6_Pos,	(6U)
.equ	CAN_F4R2_FB6_Msk,	(0x1UL << CAN_F4R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F4R2_FB6,	CAN_F4R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F4R2_FB7_Pos,	(7U)
.equ	CAN_F4R2_FB7_Msk,	(0x1UL << CAN_F4R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F4R2_FB7,	CAN_F4R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F4R2_FB8_Pos,	(8U)
.equ	CAN_F4R2_FB8_Msk,	(0x1UL << CAN_F4R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F4R2_FB8,	CAN_F4R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F4R2_FB9_Pos,	(9U)
.equ	CAN_F4R2_FB9_Msk,	(0x1UL << CAN_F4R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F4R2_FB9,	CAN_F4R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F4R2_FB10_Pos,	(10U)
.equ	CAN_F4R2_FB10_Msk,	(0x1UL << CAN_F4R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F4R2_FB10,	CAN_F4R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F4R2_FB11_Pos,	(11U)
.equ	CAN_F4R2_FB11_Msk,	(0x1UL << CAN_F4R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F4R2_FB11,	CAN_F4R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F4R2_FB12_Pos,	(12U)
.equ	CAN_F4R2_FB12_Msk,	(0x1UL << CAN_F4R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F4R2_FB12,	CAN_F4R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F4R2_FB13_Pos,	(13U)
.equ	CAN_F4R2_FB13_Msk,	(0x1UL << CAN_F4R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F4R2_FB13,	CAN_F4R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F4R2_FB14_Pos,	(14U)
.equ	CAN_F4R2_FB14_Msk,	(0x1UL << CAN_F4R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F4R2_FB14,	CAN_F4R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F4R2_FB15_Pos,	(15U)
.equ	CAN_F4R2_FB15_Msk,	(0x1UL << CAN_F4R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F4R2_FB15,	CAN_F4R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F4R2_FB16_Pos,	(16U)
.equ	CAN_F4R2_FB16_Msk,	(0x1UL << CAN_F4R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F4R2_FB16,	CAN_F4R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F4R2_FB17_Pos,	(17U)
.equ	CAN_F4R2_FB17_Msk,	(0x1UL << CAN_F4R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F4R2_FB17,	CAN_F4R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F4R2_FB18_Pos,	(18U)
.equ	CAN_F4R2_FB18_Msk,	(0x1UL << CAN_F4R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F4R2_FB18,	CAN_F4R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F4R2_FB19_Pos,	(19U)
.equ	CAN_F4R2_FB19_Msk,	(0x1UL << CAN_F4R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F4R2_FB19,	CAN_F4R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F4R2_FB20_Pos,	(20U)
.equ	CAN_F4R2_FB20_Msk,	(0x1UL << CAN_F4R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F4R2_FB20,	CAN_F4R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F4R2_FB21_Pos,	(21U)
.equ	CAN_F4R2_FB21_Msk,	(0x1UL << CAN_F4R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F4R2_FB21,	CAN_F4R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F4R2_FB22_Pos,	(22U)
.equ	CAN_F4R2_FB22_Msk,	(0x1UL << CAN_F4R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F4R2_FB22,	CAN_F4R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F4R2_FB23_Pos,	(23U)
.equ	CAN_F4R2_FB23_Msk,	(0x1UL << CAN_F4R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F4R2_FB23,	CAN_F4R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F4R2_FB24_Pos,	(24U)
.equ	CAN_F4R2_FB24_Msk,	(0x1UL << CAN_F4R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F4R2_FB24,	CAN_F4R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F4R2_FB25_Pos,	(25U)
.equ	CAN_F4R2_FB25_Msk,	(0x1UL << CAN_F4R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F4R2_FB25,	CAN_F4R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F4R2_FB26_Pos,	(26U)
.equ	CAN_F4R2_FB26_Msk,	(0x1UL << CAN_F4R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F4R2_FB26,	CAN_F4R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F4R2_FB27_Pos,	(27U)
.equ	CAN_F4R2_FB27_Msk,	(0x1UL << CAN_F4R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F4R2_FB27,	CAN_F4R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F4R2_FB28_Pos,	(28U)
.equ	CAN_F4R2_FB28_Msk,	(0x1UL << CAN_F4R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F4R2_FB28,	CAN_F4R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F4R2_FB29_Pos,	(29U)
.equ	CAN_F4R2_FB29_Msk,	(0x1UL << CAN_F4R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F4R2_FB29,	CAN_F4R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F4R2_FB30_Pos,	(30U)
.equ	CAN_F4R2_FB30_Msk,	(0x1UL << CAN_F4R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F4R2_FB30,	CAN_F4R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F4R2_FB31_Pos,	(31U)
.equ	CAN_F4R2_FB31_Msk,	(0x1UL << CAN_F4R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F4R2_FB31,	CAN_F4R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R2 register  *******************/
.equ	CAN_F5R2_FB0_Pos,	0
.equ	CAN_F5R2_FB0_Msk,	(0x1UL << CAN_F5R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F5R2_FB0,	CAN_F5R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F5R2_FB1_Pos,	(1U)
.equ	CAN_F5R2_FB1_Msk,	(0x1UL << CAN_F5R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F5R2_FB1,	CAN_F5R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F5R2_FB2_Pos,	(2U)
.equ	CAN_F5R2_FB2_Msk,	(0x1UL << CAN_F5R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F5R2_FB2,	CAN_F5R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F5R2_FB3_Pos,	(3U)
.equ	CAN_F5R2_FB3_Msk,	(0x1UL << CAN_F5R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F5R2_FB3,	CAN_F5R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F5R2_FB4_Pos,	(4U)
.equ	CAN_F5R2_FB4_Msk,	(0x1UL << CAN_F5R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F5R2_FB4,	CAN_F5R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F5R2_FB5_Pos,	(5U)
.equ	CAN_F5R2_FB5_Msk,	(0x1UL << CAN_F5R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F5R2_FB5,	CAN_F5R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F5R2_FB6_Pos,	(6U)
.equ	CAN_F5R2_FB6_Msk,	(0x1UL << CAN_F5R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F5R2_FB6,	CAN_F5R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F5R2_FB7_Pos,	(7U)
.equ	CAN_F5R2_FB7_Msk,	(0x1UL << CAN_F5R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F5R2_FB7,	CAN_F5R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F5R2_FB8_Pos,	(8U)
.equ	CAN_F5R2_FB8_Msk,	(0x1UL << CAN_F5R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F5R2_FB8,	CAN_F5R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F5R2_FB9_Pos,	(9U)
.equ	CAN_F5R2_FB9_Msk,	(0x1UL << CAN_F5R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F5R2_FB9,	CAN_F5R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F5R2_FB10_Pos,	(10U)
.equ	CAN_F5R2_FB10_Msk,	(0x1UL << CAN_F5R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F5R2_FB10,	CAN_F5R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F5R2_FB11_Pos,	(11U)
.equ	CAN_F5R2_FB11_Msk,	(0x1UL << CAN_F5R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F5R2_FB11,	CAN_F5R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F5R2_FB12_Pos,	(12U)
.equ	CAN_F5R2_FB12_Msk,	(0x1UL << CAN_F5R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F5R2_FB12,	CAN_F5R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F5R2_FB13_Pos,	(13U)
.equ	CAN_F5R2_FB13_Msk,	(0x1UL << CAN_F5R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F5R2_FB13,	CAN_F5R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F5R2_FB14_Pos,	(14U)
.equ	CAN_F5R2_FB14_Msk,	(0x1UL << CAN_F5R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F5R2_FB14,	CAN_F5R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F5R2_FB15_Pos,	(15U)
.equ	CAN_F5R2_FB15_Msk,	(0x1UL << CAN_F5R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F5R2_FB15,	CAN_F5R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F5R2_FB16_Pos,	(16U)
.equ	CAN_F5R2_FB16_Msk,	(0x1UL << CAN_F5R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F5R2_FB16,	CAN_F5R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F5R2_FB17_Pos,	(17U)
.equ	CAN_F5R2_FB17_Msk,	(0x1UL << CAN_F5R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F5R2_FB17,	CAN_F5R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F5R2_FB18_Pos,	(18U)
.equ	CAN_F5R2_FB18_Msk,	(0x1UL << CAN_F5R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F5R2_FB18,	CAN_F5R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F5R2_FB19_Pos,	(19U)
.equ	CAN_F5R2_FB19_Msk,	(0x1UL << CAN_F5R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F5R2_FB19,	CAN_F5R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F5R2_FB20_Pos,	(20U)
.equ	CAN_F5R2_FB20_Msk,	(0x1UL << CAN_F5R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F5R2_FB20,	CAN_F5R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F5R2_FB21_Pos,	(21U)
.equ	CAN_F5R2_FB21_Msk,	(0x1UL << CAN_F5R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F5R2_FB21,	CAN_F5R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F5R2_FB22_Pos,	(22U)
.equ	CAN_F5R2_FB22_Msk,	(0x1UL << CAN_F5R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F5R2_FB22,	CAN_F5R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F5R2_FB23_Pos,	(23U)
.equ	CAN_F5R2_FB23_Msk,	(0x1UL << CAN_F5R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F5R2_FB23,	CAN_F5R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F5R2_FB24_Pos,	(24U)
.equ	CAN_F5R2_FB24_Msk,	(0x1UL << CAN_F5R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F5R2_FB24,	CAN_F5R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F5R2_FB25_Pos,	(25U)
.equ	CAN_F5R2_FB25_Msk,	(0x1UL << CAN_F5R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F5R2_FB25,	CAN_F5R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F5R2_FB26_Pos,	(26U)
.equ	CAN_F5R2_FB26_Msk,	(0x1UL << CAN_F5R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F5R2_FB26,	CAN_F5R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F5R2_FB27_Pos,	(27U)
.equ	CAN_F5R2_FB27_Msk,	(0x1UL << CAN_F5R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F5R2_FB27,	CAN_F5R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F5R2_FB28_Pos,	(28U)
.equ	CAN_F5R2_FB28_Msk,	(0x1UL << CAN_F5R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F5R2_FB28,	CAN_F5R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F5R2_FB29_Pos,	(29U)
.equ	CAN_F5R2_FB29_Msk,	(0x1UL << CAN_F5R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F5R2_FB29,	CAN_F5R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F5R2_FB30_Pos,	(30U)
.equ	CAN_F5R2_FB30_Msk,	(0x1UL << CAN_F5R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F5R2_FB30,	CAN_F5R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F5R2_FB31_Pos,	(31U)
.equ	CAN_F5R2_FB31_Msk,	(0x1UL << CAN_F5R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F5R2_FB31,	CAN_F5R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R2 register  *******************/
.equ	CAN_F6R2_FB0_Pos,	0
.equ	CAN_F6R2_FB0_Msk,	(0x1UL << CAN_F6R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F6R2_FB0,	CAN_F6R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F6R2_FB1_Pos,	(1U)
.equ	CAN_F6R2_FB1_Msk,	(0x1UL << CAN_F6R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F6R2_FB1,	CAN_F6R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F6R2_FB2_Pos,	(2U)
.equ	CAN_F6R2_FB2_Msk,	(0x1UL << CAN_F6R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F6R2_FB2,	CAN_F6R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F6R2_FB3_Pos,	(3U)
.equ	CAN_F6R2_FB3_Msk,	(0x1UL << CAN_F6R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F6R2_FB3,	CAN_F6R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F6R2_FB4_Pos,	(4U)
.equ	CAN_F6R2_FB4_Msk,	(0x1UL << CAN_F6R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F6R2_FB4,	CAN_F6R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F6R2_FB5_Pos,	(5U)
.equ	CAN_F6R2_FB5_Msk,	(0x1UL << CAN_F6R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F6R2_FB5,	CAN_F6R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F6R2_FB6_Pos,	(6U)
.equ	CAN_F6R2_FB6_Msk,	(0x1UL << CAN_F6R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F6R2_FB6,	CAN_F6R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F6R2_FB7_Pos,	(7U)
.equ	CAN_F6R2_FB7_Msk,	(0x1UL << CAN_F6R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F6R2_FB7,	CAN_F6R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F6R2_FB8_Pos,	(8U)
.equ	CAN_F6R2_FB8_Msk,	(0x1UL << CAN_F6R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F6R2_FB8,	CAN_F6R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F6R2_FB9_Pos,	(9U)
.equ	CAN_F6R2_FB9_Msk,	(0x1UL << CAN_F6R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F6R2_FB9,	CAN_F6R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F6R2_FB10_Pos,	(10U)
.equ	CAN_F6R2_FB10_Msk,	(0x1UL << CAN_F6R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F6R2_FB10,	CAN_F6R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F6R2_FB11_Pos,	(11U)
.equ	CAN_F6R2_FB11_Msk,	(0x1UL << CAN_F6R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F6R2_FB11,	CAN_F6R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F6R2_FB12_Pos,	(12U)
.equ	CAN_F6R2_FB12_Msk,	(0x1UL << CAN_F6R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F6R2_FB12,	CAN_F6R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F6R2_FB13_Pos,	(13U)
.equ	CAN_F6R2_FB13_Msk,	(0x1UL << CAN_F6R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F6R2_FB13,	CAN_F6R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F6R2_FB14_Pos,	(14U)
.equ	CAN_F6R2_FB14_Msk,	(0x1UL << CAN_F6R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F6R2_FB14,	CAN_F6R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F6R2_FB15_Pos,	(15U)
.equ	CAN_F6R2_FB15_Msk,	(0x1UL << CAN_F6R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F6R2_FB15,	CAN_F6R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F6R2_FB16_Pos,	(16U)
.equ	CAN_F6R2_FB16_Msk,	(0x1UL << CAN_F6R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F6R2_FB16,	CAN_F6R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F6R2_FB17_Pos,	(17U)
.equ	CAN_F6R2_FB17_Msk,	(0x1UL << CAN_F6R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F6R2_FB17,	CAN_F6R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F6R2_FB18_Pos,	(18U)
.equ	CAN_F6R2_FB18_Msk,	(0x1UL << CAN_F6R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F6R2_FB18,	CAN_F6R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F6R2_FB19_Pos,	(19U)
.equ	CAN_F6R2_FB19_Msk,	(0x1UL << CAN_F6R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F6R2_FB19,	CAN_F6R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F6R2_FB20_Pos,	(20U)
.equ	CAN_F6R2_FB20_Msk,	(0x1UL << CAN_F6R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F6R2_FB20,	CAN_F6R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F6R2_FB21_Pos,	(21U)
.equ	CAN_F6R2_FB21_Msk,	(0x1UL << CAN_F6R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F6R2_FB21,	CAN_F6R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F6R2_FB22_Pos,	(22U)
.equ	CAN_F6R2_FB22_Msk,	(0x1UL << CAN_F6R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F6R2_FB22,	CAN_F6R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F6R2_FB23_Pos,	(23U)
.equ	CAN_F6R2_FB23_Msk,	(0x1UL << CAN_F6R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F6R2_FB23,	CAN_F6R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F6R2_FB24_Pos,	(24U)
.equ	CAN_F6R2_FB24_Msk,	(0x1UL << CAN_F6R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F6R2_FB24,	CAN_F6R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F6R2_FB25_Pos,	(25U)
.equ	CAN_F6R2_FB25_Msk,	(0x1UL << CAN_F6R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F6R2_FB25,	CAN_F6R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F6R2_FB26_Pos,	(26U)
.equ	CAN_F6R2_FB26_Msk,	(0x1UL << CAN_F6R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F6R2_FB26,	CAN_F6R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F6R2_FB27_Pos,	(27U)
.equ	CAN_F6R2_FB27_Msk,	(0x1UL << CAN_F6R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F6R2_FB27,	CAN_F6R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F6R2_FB28_Pos,	(28U)
.equ	CAN_F6R2_FB28_Msk,	(0x1UL << CAN_F6R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F6R2_FB28,	CAN_F6R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F6R2_FB29_Pos,	(29U)
.equ	CAN_F6R2_FB29_Msk,	(0x1UL << CAN_F6R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F6R2_FB29,	CAN_F6R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F6R2_FB30_Pos,	(30U)
.equ	CAN_F6R2_FB30_Msk,	(0x1UL << CAN_F6R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F6R2_FB30,	CAN_F6R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F6R2_FB31_Pos,	(31U)
.equ	CAN_F6R2_FB31_Msk,	(0x1UL << CAN_F6R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F6R2_FB31,	CAN_F6R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R2 register  *******************/
.equ	CAN_F7R2_FB0_Pos,	0
.equ	CAN_F7R2_FB0_Msk,	(0x1UL << CAN_F7R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F7R2_FB0,	CAN_F7R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F7R2_FB1_Pos,	(1U)
.equ	CAN_F7R2_FB1_Msk,	(0x1UL << CAN_F7R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F7R2_FB1,	CAN_F7R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F7R2_FB2_Pos,	(2U)
.equ	CAN_F7R2_FB2_Msk,	(0x1UL << CAN_F7R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F7R2_FB2,	CAN_F7R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F7R2_FB3_Pos,	(3U)
.equ	CAN_F7R2_FB3_Msk,	(0x1UL << CAN_F7R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F7R2_FB3,	CAN_F7R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F7R2_FB4_Pos,	(4U)
.equ	CAN_F7R2_FB4_Msk,	(0x1UL << CAN_F7R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F7R2_FB4,	CAN_F7R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F7R2_FB5_Pos,	(5U)
.equ	CAN_F7R2_FB5_Msk,	(0x1UL << CAN_F7R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F7R2_FB5,	CAN_F7R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F7R2_FB6_Pos,	(6U)
.equ	CAN_F7R2_FB6_Msk,	(0x1UL << CAN_F7R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F7R2_FB6,	CAN_F7R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F7R2_FB7_Pos,	(7U)
.equ	CAN_F7R2_FB7_Msk,	(0x1UL << CAN_F7R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F7R2_FB7,	CAN_F7R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F7R2_FB8_Pos,	(8U)
.equ	CAN_F7R2_FB8_Msk,	(0x1UL << CAN_F7R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F7R2_FB8,	CAN_F7R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F7R2_FB9_Pos,	(9U)
.equ	CAN_F7R2_FB9_Msk,	(0x1UL << CAN_F7R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F7R2_FB9,	CAN_F7R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F7R2_FB10_Pos,	(10U)
.equ	CAN_F7R2_FB10_Msk,	(0x1UL << CAN_F7R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F7R2_FB10,	CAN_F7R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F7R2_FB11_Pos,	(11U)
.equ	CAN_F7R2_FB11_Msk,	(0x1UL << CAN_F7R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F7R2_FB11,	CAN_F7R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F7R2_FB12_Pos,	(12U)
.equ	CAN_F7R2_FB12_Msk,	(0x1UL << CAN_F7R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F7R2_FB12,	CAN_F7R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F7R2_FB13_Pos,	(13U)
.equ	CAN_F7R2_FB13_Msk,	(0x1UL << CAN_F7R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F7R2_FB13,	CAN_F7R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F7R2_FB14_Pos,	(14U)
.equ	CAN_F7R2_FB14_Msk,	(0x1UL << CAN_F7R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F7R2_FB14,	CAN_F7R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F7R2_FB15_Pos,	(15U)
.equ	CAN_F7R2_FB15_Msk,	(0x1UL << CAN_F7R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F7R2_FB15,	CAN_F7R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F7R2_FB16_Pos,	(16U)
.equ	CAN_F7R2_FB16_Msk,	(0x1UL << CAN_F7R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F7R2_FB16,	CAN_F7R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F7R2_FB17_Pos,	(17U)
.equ	CAN_F7R2_FB17_Msk,	(0x1UL << CAN_F7R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F7R2_FB17,	CAN_F7R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F7R2_FB18_Pos,	(18U)
.equ	CAN_F7R2_FB18_Msk,	(0x1UL << CAN_F7R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F7R2_FB18,	CAN_F7R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F7R2_FB19_Pos,	(19U)
.equ	CAN_F7R2_FB19_Msk,	(0x1UL << CAN_F7R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F7R2_FB19,	CAN_F7R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F7R2_FB20_Pos,	(20U)
.equ	CAN_F7R2_FB20_Msk,	(0x1UL << CAN_F7R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F7R2_FB20,	CAN_F7R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F7R2_FB21_Pos,	(21U)
.equ	CAN_F7R2_FB21_Msk,	(0x1UL << CAN_F7R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F7R2_FB21,	CAN_F7R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F7R2_FB22_Pos,	(22U)
.equ	CAN_F7R2_FB22_Msk,	(0x1UL << CAN_F7R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F7R2_FB22,	CAN_F7R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F7R2_FB23_Pos,	(23U)
.equ	CAN_F7R2_FB23_Msk,	(0x1UL << CAN_F7R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F7R2_FB23,	CAN_F7R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F7R2_FB24_Pos,	(24U)
.equ	CAN_F7R2_FB24_Msk,	(0x1UL << CAN_F7R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F7R2_FB24,	CAN_F7R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F7R2_FB25_Pos,	(25U)
.equ	CAN_F7R2_FB25_Msk,	(0x1UL << CAN_F7R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F7R2_FB25,	CAN_F7R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F7R2_FB26_Pos,	(26U)
.equ	CAN_F7R2_FB26_Msk,	(0x1UL << CAN_F7R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F7R2_FB26,	CAN_F7R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F7R2_FB27_Pos,	(27U)
.equ	CAN_F7R2_FB27_Msk,	(0x1UL << CAN_F7R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F7R2_FB27,	CAN_F7R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F7R2_FB28_Pos,	(28U)
.equ	CAN_F7R2_FB28_Msk,	(0x1UL << CAN_F7R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F7R2_FB28,	CAN_F7R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F7R2_FB29_Pos,	(29U)
.equ	CAN_F7R2_FB29_Msk,	(0x1UL << CAN_F7R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F7R2_FB29,	CAN_F7R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F7R2_FB30_Pos,	(30U)
.equ	CAN_F7R2_FB30_Msk,	(0x1UL << CAN_F7R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F7R2_FB30,	CAN_F7R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F7R2_FB31_Pos,	(31U)
.equ	CAN_F7R2_FB31_Msk,	(0x1UL << CAN_F7R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F7R2_FB31,	CAN_F7R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R2 register  *******************/
.equ	CAN_F8R2_FB0_Pos,	0
.equ	CAN_F8R2_FB0_Msk,	(0x1UL << CAN_F8R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F8R2_FB0,	CAN_F8R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F8R2_FB1_Pos,	(1U)
.equ	CAN_F8R2_FB1_Msk,	(0x1UL << CAN_F8R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F8R2_FB1,	CAN_F8R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F8R2_FB2_Pos,	(2U)
.equ	CAN_F8R2_FB2_Msk,	(0x1UL << CAN_F8R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F8R2_FB2,	CAN_F8R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F8R2_FB3_Pos,	(3U)
.equ	CAN_F8R2_FB3_Msk,	(0x1UL << CAN_F8R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F8R2_FB3,	CAN_F8R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F8R2_FB4_Pos,	(4U)
.equ	CAN_F8R2_FB4_Msk,	(0x1UL << CAN_F8R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F8R2_FB4,	CAN_F8R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F8R2_FB5_Pos,	(5U)
.equ	CAN_F8R2_FB5_Msk,	(0x1UL << CAN_F8R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F8R2_FB5,	CAN_F8R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F8R2_FB6_Pos,	(6U)
.equ	CAN_F8R2_FB6_Msk,	(0x1UL << CAN_F8R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F8R2_FB6,	CAN_F8R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F8R2_FB7_Pos,	(7U)
.equ	CAN_F8R2_FB7_Msk,	(0x1UL << CAN_F8R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F8R2_FB7,	CAN_F8R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F8R2_FB8_Pos,	(8U)
.equ	CAN_F8R2_FB8_Msk,	(0x1UL << CAN_F8R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F8R2_FB8,	CAN_F8R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F8R2_FB9_Pos,	(9U)
.equ	CAN_F8R2_FB9_Msk,	(0x1UL << CAN_F8R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F8R2_FB9,	CAN_F8R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F8R2_FB10_Pos,	(10U)
.equ	CAN_F8R2_FB10_Msk,	(0x1UL << CAN_F8R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F8R2_FB10,	CAN_F8R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F8R2_FB11_Pos,	(11U)
.equ	CAN_F8R2_FB11_Msk,	(0x1UL << CAN_F8R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F8R2_FB11,	CAN_F8R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F8R2_FB12_Pos,	(12U)
.equ	CAN_F8R2_FB12_Msk,	(0x1UL << CAN_F8R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F8R2_FB12,	CAN_F8R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F8R2_FB13_Pos,	(13U)
.equ	CAN_F8R2_FB13_Msk,	(0x1UL << CAN_F8R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F8R2_FB13,	CAN_F8R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F8R2_FB14_Pos,	(14U)
.equ	CAN_F8R2_FB14_Msk,	(0x1UL << CAN_F8R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F8R2_FB14,	CAN_F8R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F8R2_FB15_Pos,	(15U)
.equ	CAN_F8R2_FB15_Msk,	(0x1UL << CAN_F8R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F8R2_FB15,	CAN_F8R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F8R2_FB16_Pos,	(16U)
.equ	CAN_F8R2_FB16_Msk,	(0x1UL << CAN_F8R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F8R2_FB16,	CAN_F8R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F8R2_FB17_Pos,	(17U)
.equ	CAN_F8R2_FB17_Msk,	(0x1UL << CAN_F8R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F8R2_FB17,	CAN_F8R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F8R2_FB18_Pos,	(18U)
.equ	CAN_F8R2_FB18_Msk,	(0x1UL << CAN_F8R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F8R2_FB18,	CAN_F8R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F8R2_FB19_Pos,	(19U)
.equ	CAN_F8R2_FB19_Msk,	(0x1UL << CAN_F8R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F8R2_FB19,	CAN_F8R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F8R2_FB20_Pos,	(20U)
.equ	CAN_F8R2_FB20_Msk,	(0x1UL << CAN_F8R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F8R2_FB20,	CAN_F8R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F8R2_FB21_Pos,	(21U)
.equ	CAN_F8R2_FB21_Msk,	(0x1UL << CAN_F8R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F8R2_FB21,	CAN_F8R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F8R2_FB22_Pos,	(22U)
.equ	CAN_F8R2_FB22_Msk,	(0x1UL << CAN_F8R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F8R2_FB22,	CAN_F8R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F8R2_FB23_Pos,	(23U)
.equ	CAN_F8R2_FB23_Msk,	(0x1UL << CAN_F8R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F8R2_FB23,	CAN_F8R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F8R2_FB24_Pos,	(24U)
.equ	CAN_F8R2_FB24_Msk,	(0x1UL << CAN_F8R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F8R2_FB24,	CAN_F8R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F8R2_FB25_Pos,	(25U)
.equ	CAN_F8R2_FB25_Msk,	(0x1UL << CAN_F8R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F8R2_FB25,	CAN_F8R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F8R2_FB26_Pos,	(26U)
.equ	CAN_F8R2_FB26_Msk,	(0x1UL << CAN_F8R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F8R2_FB26,	CAN_F8R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F8R2_FB27_Pos,	(27U)
.equ	CAN_F8R2_FB27_Msk,	(0x1UL << CAN_F8R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F8R2_FB27,	CAN_F8R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F8R2_FB28_Pos,	(28U)
.equ	CAN_F8R2_FB28_Msk,	(0x1UL << CAN_F8R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F8R2_FB28,	CAN_F8R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F8R2_FB29_Pos,	(29U)
.equ	CAN_F8R2_FB29_Msk,	(0x1UL << CAN_F8R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F8R2_FB29,	CAN_F8R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F8R2_FB30_Pos,	(30U)
.equ	CAN_F8R2_FB30_Msk,	(0x1UL << CAN_F8R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F8R2_FB30,	CAN_F8R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F8R2_FB31_Pos,	(31U)
.equ	CAN_F8R2_FB31_Msk,	(0x1UL << CAN_F8R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F8R2_FB31,	CAN_F8R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R2 register  *******************/
.equ	CAN_F9R2_FB0_Pos,	0
.equ	CAN_F9R2_FB0_Msk,	(0x1UL << CAN_F9R2_FB0_Pos)        /*!< 0x00000001 */
.equ	CAN_F9R2_FB0,	CAN_F9R2_FB0_Msk                  /*!< Filter bit 0 */
.equ	CAN_F9R2_FB1_Pos,	(1U)
.equ	CAN_F9R2_FB1_Msk,	(0x1UL << CAN_F9R2_FB1_Pos)        /*!< 0x00000002 */
.equ	CAN_F9R2_FB1,	CAN_F9R2_FB1_Msk                  /*!< Filter bit 1 */
.equ	CAN_F9R2_FB2_Pos,	(2U)
.equ	CAN_F9R2_FB2_Msk,	(0x1UL << CAN_F9R2_FB2_Pos)        /*!< 0x00000004 */
.equ	CAN_F9R2_FB2,	CAN_F9R2_FB2_Msk                  /*!< Filter bit 2 */
.equ	CAN_F9R2_FB3_Pos,	(3U)
.equ	CAN_F9R2_FB3_Msk,	(0x1UL << CAN_F9R2_FB3_Pos)        /*!< 0x00000008 */
.equ	CAN_F9R2_FB3,	CAN_F9R2_FB3_Msk                  /*!< Filter bit 3 */
.equ	CAN_F9R2_FB4_Pos,	(4U)
.equ	CAN_F9R2_FB4_Msk,	(0x1UL << CAN_F9R2_FB4_Pos)        /*!< 0x00000010 */
.equ	CAN_F9R2_FB4,	CAN_F9R2_FB4_Msk                  /*!< Filter bit 4 */
.equ	CAN_F9R2_FB5_Pos,	(5U)
.equ	CAN_F9R2_FB5_Msk,	(0x1UL << CAN_F9R2_FB5_Pos)        /*!< 0x00000020 */
.equ	CAN_F9R2_FB5,	CAN_F9R2_FB5_Msk                  /*!< Filter bit 5 */
.equ	CAN_F9R2_FB6_Pos,	(6U)
.equ	CAN_F9R2_FB6_Msk,	(0x1UL << CAN_F9R2_FB6_Pos)        /*!< 0x00000040 */
.equ	CAN_F9R2_FB6,	CAN_F9R2_FB6_Msk                  /*!< Filter bit 6 */
.equ	CAN_F9R2_FB7_Pos,	(7U)
.equ	CAN_F9R2_FB7_Msk,	(0x1UL << CAN_F9R2_FB7_Pos)        /*!< 0x00000080 */
.equ	CAN_F9R2_FB7,	CAN_F9R2_FB7_Msk                  /*!< Filter bit 7 */
.equ	CAN_F9R2_FB8_Pos,	(8U)
.equ	CAN_F9R2_FB8_Msk,	(0x1UL << CAN_F9R2_FB8_Pos)        /*!< 0x00000100 */
.equ	CAN_F9R2_FB8,	CAN_F9R2_FB8_Msk                  /*!< Filter bit 8 */
.equ	CAN_F9R2_FB9_Pos,	(9U)
.equ	CAN_F9R2_FB9_Msk,	(0x1UL << CAN_F9R2_FB9_Pos)        /*!< 0x00000200 */
.equ	CAN_F9R2_FB9,	CAN_F9R2_FB9_Msk                  /*!< Filter bit 9 */
.equ	CAN_F9R2_FB10_Pos,	(10U)
.equ	CAN_F9R2_FB10_Msk,	(0x1UL << CAN_F9R2_FB10_Pos)       /*!< 0x00000400 */
.equ	CAN_F9R2_FB10,	CAN_F9R2_FB10_Msk                 /*!< Filter bit 10 */
.equ	CAN_F9R2_FB11_Pos,	(11U)
.equ	CAN_F9R2_FB11_Msk,	(0x1UL << CAN_F9R2_FB11_Pos)       /*!< 0x00000800 */
.equ	CAN_F9R2_FB11,	CAN_F9R2_FB11_Msk                 /*!< Filter bit 11 */
.equ	CAN_F9R2_FB12_Pos,	(12U)
.equ	CAN_F9R2_FB12_Msk,	(0x1UL << CAN_F9R2_FB12_Pos)       /*!< 0x00001000 */
.equ	CAN_F9R2_FB12,	CAN_F9R2_FB12_Msk                 /*!< Filter bit 12 */
.equ	CAN_F9R2_FB13_Pos,	(13U)
.equ	CAN_F9R2_FB13_Msk,	(0x1UL << CAN_F9R2_FB13_Pos)       /*!< 0x00002000 */
.equ	CAN_F9R2_FB13,	CAN_F9R2_FB13_Msk                 /*!< Filter bit 13 */
.equ	CAN_F9R2_FB14_Pos,	(14U)
.equ	CAN_F9R2_FB14_Msk,	(0x1UL << CAN_F9R2_FB14_Pos)       /*!< 0x00004000 */
.equ	CAN_F9R2_FB14,	CAN_F9R2_FB14_Msk                 /*!< Filter bit 14 */
.equ	CAN_F9R2_FB15_Pos,	(15U)
.equ	CAN_F9R2_FB15_Msk,	(0x1UL << CAN_F9R2_FB15_Pos)       /*!< 0x00008000 */
.equ	CAN_F9R2_FB15,	CAN_F9R2_FB15_Msk                 /*!< Filter bit 15 */
.equ	CAN_F9R2_FB16_Pos,	(16U)
.equ	CAN_F9R2_FB16_Msk,	(0x1UL << CAN_F9R2_FB16_Pos)       /*!< 0x00010000 */
.equ	CAN_F9R2_FB16,	CAN_F9R2_FB16_Msk                 /*!< Filter bit 16 */
.equ	CAN_F9R2_FB17_Pos,	(17U)
.equ	CAN_F9R2_FB17_Msk,	(0x1UL << CAN_F9R2_FB17_Pos)       /*!< 0x00020000 */
.equ	CAN_F9R2_FB17,	CAN_F9R2_FB17_Msk                 /*!< Filter bit 17 */
.equ	CAN_F9R2_FB18_Pos,	(18U)
.equ	CAN_F9R2_FB18_Msk,	(0x1UL << CAN_F9R2_FB18_Pos)       /*!< 0x00040000 */
.equ	CAN_F9R2_FB18,	CAN_F9R2_FB18_Msk                 /*!< Filter bit 18 */
.equ	CAN_F9R2_FB19_Pos,	(19U)
.equ	CAN_F9R2_FB19_Msk,	(0x1UL << CAN_F9R2_FB19_Pos)       /*!< 0x00080000 */
.equ	CAN_F9R2_FB19,	CAN_F9R2_FB19_Msk                 /*!< Filter bit 19 */
.equ	CAN_F9R2_FB20_Pos,	(20U)
.equ	CAN_F9R2_FB20_Msk,	(0x1UL << CAN_F9R2_FB20_Pos)       /*!< 0x00100000 */
.equ	CAN_F9R2_FB20,	CAN_F9R2_FB20_Msk                 /*!< Filter bit 20 */
.equ	CAN_F9R2_FB21_Pos,	(21U)
.equ	CAN_F9R2_FB21_Msk,	(0x1UL << CAN_F9R2_FB21_Pos)       /*!< 0x00200000 */
.equ	CAN_F9R2_FB21,	CAN_F9R2_FB21_Msk                 /*!< Filter bit 21 */
.equ	CAN_F9R2_FB22_Pos,	(22U)
.equ	CAN_F9R2_FB22_Msk,	(0x1UL << CAN_F9R2_FB22_Pos)       /*!< 0x00400000 */
.equ	CAN_F9R2_FB22,	CAN_F9R2_FB22_Msk                 /*!< Filter bit 22 */
.equ	CAN_F9R2_FB23_Pos,	(23U)
.equ	CAN_F9R2_FB23_Msk,	(0x1UL << CAN_F9R2_FB23_Pos)       /*!< 0x00800000 */
.equ	CAN_F9R2_FB23,	CAN_F9R2_FB23_Msk                 /*!< Filter bit 23 */
.equ	CAN_F9R2_FB24_Pos,	(24U)
.equ	CAN_F9R2_FB24_Msk,	(0x1UL << CAN_F9R2_FB24_Pos)       /*!< 0x01000000 */
.equ	CAN_F9R2_FB24,	CAN_F9R2_FB24_Msk                 /*!< Filter bit 24 */
.equ	CAN_F9R2_FB25_Pos,	(25U)
.equ	CAN_F9R2_FB25_Msk,	(0x1UL << CAN_F9R2_FB25_Pos)       /*!< 0x02000000 */
.equ	CAN_F9R2_FB25,	CAN_F9R2_FB25_Msk                 /*!< Filter bit 25 */
.equ	CAN_F9R2_FB26_Pos,	(26U)
.equ	CAN_F9R2_FB26_Msk,	(0x1UL << CAN_F9R2_FB26_Pos)       /*!< 0x04000000 */
.equ	CAN_F9R2_FB26,	CAN_F9R2_FB26_Msk                 /*!< Filter bit 26 */
.equ	CAN_F9R2_FB27_Pos,	(27U)
.equ	CAN_F9R2_FB27_Msk,	(0x1UL << CAN_F9R2_FB27_Pos)       /*!< 0x08000000 */
.equ	CAN_F9R2_FB27,	CAN_F9R2_FB27_Msk                 /*!< Filter bit 27 */
.equ	CAN_F9R2_FB28_Pos,	(28U)
.equ	CAN_F9R2_FB28_Msk,	(0x1UL << CAN_F9R2_FB28_Pos)       /*!< 0x10000000 */
.equ	CAN_F9R2_FB28,	CAN_F9R2_FB28_Msk                 /*!< Filter bit 28 */
.equ	CAN_F9R2_FB29_Pos,	(29U)
.equ	CAN_F9R2_FB29_Msk,	(0x1UL << CAN_F9R2_FB29_Pos)       /*!< 0x20000000 */
.equ	CAN_F9R2_FB29,	CAN_F9R2_FB29_Msk                 /*!< Filter bit 29 */
.equ	CAN_F9R2_FB30_Pos,	(30U)
.equ	CAN_F9R2_FB30_Msk,	(0x1UL << CAN_F9R2_FB30_Pos)       /*!< 0x40000000 */
.equ	CAN_F9R2_FB30,	CAN_F9R2_FB30_Msk                 /*!< Filter bit 30 */
.equ	CAN_F9R2_FB31_Pos,	(31U)
.equ	CAN_F9R2_FB31_Msk,	(0x1UL << CAN_F9R2_FB31_Pos)       /*!< 0x80000000 */
.equ	CAN_F9R2_FB31,	CAN_F9R2_FB31_Msk                 /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R2 register  ******************/
.equ	CAN_F10R2_FB0_Pos,	0
.equ	CAN_F10R2_FB0_Msk,	(0x1UL << CAN_F10R2_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F10R2_FB0,	CAN_F10R2_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F10R2_FB1_Pos,	(1U)
.equ	CAN_F10R2_FB1_Msk,	(0x1UL << CAN_F10R2_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F10R2_FB1,	CAN_F10R2_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F10R2_FB2_Pos,	(2U)
.equ	CAN_F10R2_FB2_Msk,	(0x1UL << CAN_F10R2_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F10R2_FB2,	CAN_F10R2_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F10R2_FB3_Pos,	(3U)
.equ	CAN_F10R2_FB3_Msk,	(0x1UL << CAN_F10R2_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F10R2_FB3,	CAN_F10R2_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F10R2_FB4_Pos,	(4U)
.equ	CAN_F10R2_FB4_Msk,	(0x1UL << CAN_F10R2_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F10R2_FB4,	CAN_F10R2_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F10R2_FB5_Pos,	(5U)
.equ	CAN_F10R2_FB5_Msk,	(0x1UL << CAN_F10R2_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F10R2_FB5,	CAN_F10R2_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F10R2_FB6_Pos,	(6U)
.equ	CAN_F10R2_FB6_Msk,	(0x1UL << CAN_F10R2_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F10R2_FB6,	CAN_F10R2_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F10R2_FB7_Pos,	(7U)
.equ	CAN_F10R2_FB7_Msk,	(0x1UL << CAN_F10R2_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F10R2_FB7,	CAN_F10R2_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F10R2_FB8_Pos,	(8U)
.equ	CAN_F10R2_FB8_Msk,	(0x1UL << CAN_F10R2_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F10R2_FB8,	CAN_F10R2_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F10R2_FB9_Pos,	(9U)
.equ	CAN_F10R2_FB9_Msk,	(0x1UL << CAN_F10R2_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F10R2_FB9,	CAN_F10R2_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F10R2_FB10_Pos,	(10U)
.equ	CAN_F10R2_FB10_Msk,	(0x1UL << CAN_F10R2_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F10R2_FB10,	CAN_F10R2_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F10R2_FB11_Pos,	(11U)
.equ	CAN_F10R2_FB11_Msk,	(0x1UL << CAN_F10R2_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F10R2_FB11,	CAN_F10R2_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F10R2_FB12_Pos,	(12U)
.equ	CAN_F10R2_FB12_Msk,	(0x1UL << CAN_F10R2_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F10R2_FB12,	CAN_F10R2_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F10R2_FB13_Pos,	(13U)
.equ	CAN_F10R2_FB13_Msk,	(0x1UL << CAN_F10R2_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F10R2_FB13,	CAN_F10R2_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F10R2_FB14_Pos,	(14U)
.equ	CAN_F10R2_FB14_Msk,	(0x1UL << CAN_F10R2_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F10R2_FB14,	CAN_F10R2_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F10R2_FB15_Pos,	(15U)
.equ	CAN_F10R2_FB15_Msk,	(0x1UL << CAN_F10R2_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F10R2_FB15,	CAN_F10R2_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F10R2_FB16_Pos,	(16U)
.equ	CAN_F10R2_FB16_Msk,	(0x1UL << CAN_F10R2_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F10R2_FB16,	CAN_F10R2_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F10R2_FB17_Pos,	(17U)
.equ	CAN_F10R2_FB17_Msk,	(0x1UL << CAN_F10R2_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F10R2_FB17,	CAN_F10R2_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F10R2_FB18_Pos,	(18U)
.equ	CAN_F10R2_FB18_Msk,	(0x1UL << CAN_F10R2_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F10R2_FB18,	CAN_F10R2_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F10R2_FB19_Pos,	(19U)
.equ	CAN_F10R2_FB19_Msk,	(0x1UL << CAN_F10R2_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F10R2_FB19,	CAN_F10R2_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F10R2_FB20_Pos,	(20U)
.equ	CAN_F10R2_FB20_Msk,	(0x1UL << CAN_F10R2_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F10R2_FB20,	CAN_F10R2_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F10R2_FB21_Pos,	(21U)
.equ	CAN_F10R2_FB21_Msk,	(0x1UL << CAN_F10R2_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F10R2_FB21,	CAN_F10R2_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F10R2_FB22_Pos,	(22U)
.equ	CAN_F10R2_FB22_Msk,	(0x1UL << CAN_F10R2_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F10R2_FB22,	CAN_F10R2_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F10R2_FB23_Pos,	(23U)
.equ	CAN_F10R2_FB23_Msk,	(0x1UL << CAN_F10R2_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F10R2_FB23,	CAN_F10R2_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F10R2_FB24_Pos,	(24U)
.equ	CAN_F10R2_FB24_Msk,	(0x1UL << CAN_F10R2_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F10R2_FB24,	CAN_F10R2_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F10R2_FB25_Pos,	(25U)
.equ	CAN_F10R2_FB25_Msk,	(0x1UL << CAN_F10R2_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F10R2_FB25,	CAN_F10R2_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F10R2_FB26_Pos,	(26U)
.equ	CAN_F10R2_FB26_Msk,	(0x1UL << CAN_F10R2_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F10R2_FB26,	CAN_F10R2_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F10R2_FB27_Pos,	(27U)
.equ	CAN_F10R2_FB27_Msk,	(0x1UL << CAN_F10R2_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F10R2_FB27,	CAN_F10R2_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F10R2_FB28_Pos,	(28U)
.equ	CAN_F10R2_FB28_Msk,	(0x1UL << CAN_F10R2_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F10R2_FB28,	CAN_F10R2_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F10R2_FB29_Pos,	(29U)
.equ	CAN_F10R2_FB29_Msk,	(0x1UL << CAN_F10R2_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F10R2_FB29,	CAN_F10R2_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F10R2_FB30_Pos,	(30U)
.equ	CAN_F10R2_FB30_Msk,	(0x1UL << CAN_F10R2_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F10R2_FB30,	CAN_F10R2_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F10R2_FB31_Pos,	(31U)
.equ	CAN_F10R2_FB31_Msk,	(0x1UL << CAN_F10R2_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F10R2_FB31,	CAN_F10R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R2 register  ******************/
.equ	CAN_F11R2_FB0_Pos,	0
.equ	CAN_F11R2_FB0_Msk,	(0x1UL << CAN_F11R2_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F11R2_FB0,	CAN_F11R2_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F11R2_FB1_Pos,	(1U)
.equ	CAN_F11R2_FB1_Msk,	(0x1UL << CAN_F11R2_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F11R2_FB1,	CAN_F11R2_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F11R2_FB2_Pos,	(2U)
.equ	CAN_F11R2_FB2_Msk,	(0x1UL << CAN_F11R2_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F11R2_FB2,	CAN_F11R2_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F11R2_FB3_Pos,	(3U)
.equ	CAN_F11R2_FB3_Msk,	(0x1UL << CAN_F11R2_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F11R2_FB3,	CAN_F11R2_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F11R2_FB4_Pos,	(4U)
.equ	CAN_F11R2_FB4_Msk,	(0x1UL << CAN_F11R2_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F11R2_FB4,	CAN_F11R2_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F11R2_FB5_Pos,	(5U)
.equ	CAN_F11R2_FB5_Msk,	(0x1UL << CAN_F11R2_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F11R2_FB5,	CAN_F11R2_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F11R2_FB6_Pos,	(6U)
.equ	CAN_F11R2_FB6_Msk,	(0x1UL << CAN_F11R2_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F11R2_FB6,	CAN_F11R2_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F11R2_FB7_Pos,	(7U)
.equ	CAN_F11R2_FB7_Msk,	(0x1UL << CAN_F11R2_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F11R2_FB7,	CAN_F11R2_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F11R2_FB8_Pos,	(8U)
.equ	CAN_F11R2_FB8_Msk,	(0x1UL << CAN_F11R2_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F11R2_FB8,	CAN_F11R2_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F11R2_FB9_Pos,	(9U)
.equ	CAN_F11R2_FB9_Msk,	(0x1UL << CAN_F11R2_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F11R2_FB9,	CAN_F11R2_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F11R2_FB10_Pos,	(10U)
.equ	CAN_F11R2_FB10_Msk,	(0x1UL << CAN_F11R2_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F11R2_FB10,	CAN_F11R2_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F11R2_FB11_Pos,	(11U)
.equ	CAN_F11R2_FB11_Msk,	(0x1UL << CAN_F11R2_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F11R2_FB11,	CAN_F11R2_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F11R2_FB12_Pos,	(12U)
.equ	CAN_F11R2_FB12_Msk,	(0x1UL << CAN_F11R2_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F11R2_FB12,	CAN_F11R2_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F11R2_FB13_Pos,	(13U)
.equ	CAN_F11R2_FB13_Msk,	(0x1UL << CAN_F11R2_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F11R2_FB13,	CAN_F11R2_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F11R2_FB14_Pos,	(14U)
.equ	CAN_F11R2_FB14_Msk,	(0x1UL << CAN_F11R2_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F11R2_FB14,	CAN_F11R2_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F11R2_FB15_Pos,	(15U)
.equ	CAN_F11R2_FB15_Msk,	(0x1UL << CAN_F11R2_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F11R2_FB15,	CAN_F11R2_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F11R2_FB16_Pos,	(16U)
.equ	CAN_F11R2_FB16_Msk,	(0x1UL << CAN_F11R2_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F11R2_FB16,	CAN_F11R2_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F11R2_FB17_Pos,	(17U)
.equ	CAN_F11R2_FB17_Msk,	(0x1UL << CAN_F11R2_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F11R2_FB17,	CAN_F11R2_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F11R2_FB18_Pos,	(18U)
.equ	CAN_F11R2_FB18_Msk,	(0x1UL << CAN_F11R2_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F11R2_FB18,	CAN_F11R2_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F11R2_FB19_Pos,	(19U)
.equ	CAN_F11R2_FB19_Msk,	(0x1UL << CAN_F11R2_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F11R2_FB19,	CAN_F11R2_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F11R2_FB20_Pos,	(20U)
.equ	CAN_F11R2_FB20_Msk,	(0x1UL << CAN_F11R2_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F11R2_FB20,	CAN_F11R2_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F11R2_FB21_Pos,	(21U)
.equ	CAN_F11R2_FB21_Msk,	(0x1UL << CAN_F11R2_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F11R2_FB21,	CAN_F11R2_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F11R2_FB22_Pos,	(22U)
.equ	CAN_F11R2_FB22_Msk,	(0x1UL << CAN_F11R2_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F11R2_FB22,	CAN_F11R2_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F11R2_FB23_Pos,	(23U)
.equ	CAN_F11R2_FB23_Msk,	(0x1UL << CAN_F11R2_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F11R2_FB23,	CAN_F11R2_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F11R2_FB24_Pos,	(24U)
.equ	CAN_F11R2_FB24_Msk,	(0x1UL << CAN_F11R2_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F11R2_FB24,	CAN_F11R2_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F11R2_FB25_Pos,	(25U)
.equ	CAN_F11R2_FB25_Msk,	(0x1UL << CAN_F11R2_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F11R2_FB25,	CAN_F11R2_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F11R2_FB26_Pos,	(26U)
.equ	CAN_F11R2_FB26_Msk,	(0x1UL << CAN_F11R2_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F11R2_FB26,	CAN_F11R2_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F11R2_FB27_Pos,	(27U)
.equ	CAN_F11R2_FB27_Msk,	(0x1UL << CAN_F11R2_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F11R2_FB27,	CAN_F11R2_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F11R2_FB28_Pos,	(28U)
.equ	CAN_F11R2_FB28_Msk,	(0x1UL << CAN_F11R2_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F11R2_FB28,	CAN_F11R2_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F11R2_FB29_Pos,	(29U)
.equ	CAN_F11R2_FB29_Msk,	(0x1UL << CAN_F11R2_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F11R2_FB29,	CAN_F11R2_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F11R2_FB30_Pos,	(30U)
.equ	CAN_F11R2_FB30_Msk,	(0x1UL << CAN_F11R2_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F11R2_FB30,	CAN_F11R2_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F11R2_FB31_Pos,	(31U)
.equ	CAN_F11R2_FB31_Msk,	(0x1UL << CAN_F11R2_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F11R2_FB31,	CAN_F11R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R2 register  ******************/
.equ	CAN_F12R2_FB0_Pos,	0
.equ	CAN_F12R2_FB0_Msk,	(0x1UL << CAN_F12R2_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F12R2_FB0,	CAN_F12R2_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F12R2_FB1_Pos,	(1U)
.equ	CAN_F12R2_FB1_Msk,	(0x1UL << CAN_F12R2_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F12R2_FB1,	CAN_F12R2_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F12R2_FB2_Pos,	(2U)
.equ	CAN_F12R2_FB2_Msk,	(0x1UL << CAN_F12R2_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F12R2_FB2,	CAN_F12R2_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F12R2_FB3_Pos,	(3U)
.equ	CAN_F12R2_FB3_Msk,	(0x1UL << CAN_F12R2_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F12R2_FB3,	CAN_F12R2_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F12R2_FB4_Pos,	(4U)
.equ	CAN_F12R2_FB4_Msk,	(0x1UL << CAN_F12R2_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F12R2_FB4,	CAN_F12R2_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F12R2_FB5_Pos,	(5U)
.equ	CAN_F12R2_FB5_Msk,	(0x1UL << CAN_F12R2_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F12R2_FB5,	CAN_F12R2_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F12R2_FB6_Pos,	(6U)
.equ	CAN_F12R2_FB6_Msk,	(0x1UL << CAN_F12R2_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F12R2_FB6,	CAN_F12R2_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F12R2_FB7_Pos,	(7U)
.equ	CAN_F12R2_FB7_Msk,	(0x1UL << CAN_F12R2_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F12R2_FB7,	CAN_F12R2_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F12R2_FB8_Pos,	(8U)
.equ	CAN_F12R2_FB8_Msk,	(0x1UL << CAN_F12R2_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F12R2_FB8,	CAN_F12R2_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F12R2_FB9_Pos,	(9U)
.equ	CAN_F12R2_FB9_Msk,	(0x1UL << CAN_F12R2_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F12R2_FB9,	CAN_F12R2_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F12R2_FB10_Pos,	(10U)
.equ	CAN_F12R2_FB10_Msk,	(0x1UL << CAN_F12R2_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F12R2_FB10,	CAN_F12R2_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F12R2_FB11_Pos,	(11U)
.equ	CAN_F12R2_FB11_Msk,	(0x1UL << CAN_F12R2_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F12R2_FB11,	CAN_F12R2_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F12R2_FB12_Pos,	(12U)
.equ	CAN_F12R2_FB12_Msk,	(0x1UL << CAN_F12R2_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F12R2_FB12,	CAN_F12R2_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F12R2_FB13_Pos,	(13U)
.equ	CAN_F12R2_FB13_Msk,	(0x1UL << CAN_F12R2_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F12R2_FB13,	CAN_F12R2_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F12R2_FB14_Pos,	(14U)
.equ	CAN_F12R2_FB14_Msk,	(0x1UL << CAN_F12R2_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F12R2_FB14,	CAN_F12R2_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F12R2_FB15_Pos,	(15U)
.equ	CAN_F12R2_FB15_Msk,	(0x1UL << CAN_F12R2_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F12R2_FB15,	CAN_F12R2_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F12R2_FB16_Pos,	(16U)
.equ	CAN_F12R2_FB16_Msk,	(0x1UL << CAN_F12R2_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F12R2_FB16,	CAN_F12R2_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F12R2_FB17_Pos,	(17U)
.equ	CAN_F12R2_FB17_Msk,	(0x1UL << CAN_F12R2_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F12R2_FB17,	CAN_F12R2_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F12R2_FB18_Pos,	(18U)
.equ	CAN_F12R2_FB18_Msk,	(0x1UL << CAN_F12R2_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F12R2_FB18,	CAN_F12R2_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F12R2_FB19_Pos,	(19U)
.equ	CAN_F12R2_FB19_Msk,	(0x1UL << CAN_F12R2_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F12R2_FB19,	CAN_F12R2_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F12R2_FB20_Pos,	(20U)
.equ	CAN_F12R2_FB20_Msk,	(0x1UL << CAN_F12R2_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F12R2_FB20,	CAN_F12R2_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F12R2_FB21_Pos,	(21U)
.equ	CAN_F12R2_FB21_Msk,	(0x1UL << CAN_F12R2_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F12R2_FB21,	CAN_F12R2_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F12R2_FB22_Pos,	(22U)
.equ	CAN_F12R2_FB22_Msk,	(0x1UL << CAN_F12R2_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F12R2_FB22,	CAN_F12R2_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F12R2_FB23_Pos,	(23U)
.equ	CAN_F12R2_FB23_Msk,	(0x1UL << CAN_F12R2_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F12R2_FB23,	CAN_F12R2_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F12R2_FB24_Pos,	(24U)
.equ	CAN_F12R2_FB24_Msk,	(0x1UL << CAN_F12R2_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F12R2_FB24,	CAN_F12R2_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F12R2_FB25_Pos,	(25U)
.equ	CAN_F12R2_FB25_Msk,	(0x1UL << CAN_F12R2_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F12R2_FB25,	CAN_F12R2_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F12R2_FB26_Pos,	(26U)
.equ	CAN_F12R2_FB26_Msk,	(0x1UL << CAN_F12R2_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F12R2_FB26,	CAN_F12R2_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F12R2_FB27_Pos,	(27U)
.equ	CAN_F12R2_FB27_Msk,	(0x1UL << CAN_F12R2_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F12R2_FB27,	CAN_F12R2_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F12R2_FB28_Pos,	(28U)
.equ	CAN_F12R2_FB28_Msk,	(0x1UL << CAN_F12R2_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F12R2_FB28,	CAN_F12R2_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F12R2_FB29_Pos,	(29U)
.equ	CAN_F12R2_FB29_Msk,	(0x1UL << CAN_F12R2_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F12R2_FB29,	CAN_F12R2_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F12R2_FB30_Pos,	(30U)
.equ	CAN_F12R2_FB30_Msk,	(0x1UL << CAN_F12R2_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F12R2_FB30,	CAN_F12R2_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F12R2_FB31_Pos,	(31U)
.equ	CAN_F12R2_FB31_Msk,	(0x1UL << CAN_F12R2_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F12R2_FB31,	CAN_F12R2_FB31_Msk                /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R2 register  ******************/
.equ	CAN_F13R2_FB0_Pos,	0
.equ	CAN_F13R2_FB0_Msk,	(0x1UL << CAN_F13R2_FB0_Pos)       /*!< 0x00000001 */
.equ	CAN_F13R2_FB0,	CAN_F13R2_FB0_Msk                 /*!< Filter bit 0 */
.equ	CAN_F13R2_FB1_Pos,	(1U)
.equ	CAN_F13R2_FB1_Msk,	(0x1UL << CAN_F13R2_FB1_Pos)       /*!< 0x00000002 */
.equ	CAN_F13R2_FB1,	CAN_F13R2_FB1_Msk                 /*!< Filter bit 1 */
.equ	CAN_F13R2_FB2_Pos,	(2U)
.equ	CAN_F13R2_FB2_Msk,	(0x1UL << CAN_F13R2_FB2_Pos)       /*!< 0x00000004 */
.equ	CAN_F13R2_FB2,	CAN_F13R2_FB2_Msk                 /*!< Filter bit 2 */
.equ	CAN_F13R2_FB3_Pos,	(3U)
.equ	CAN_F13R2_FB3_Msk,	(0x1UL << CAN_F13R2_FB3_Pos)       /*!< 0x00000008 */
.equ	CAN_F13R2_FB3,	CAN_F13R2_FB3_Msk                 /*!< Filter bit 3 */
.equ	CAN_F13R2_FB4_Pos,	(4U)
.equ	CAN_F13R2_FB4_Msk,	(0x1UL << CAN_F13R2_FB4_Pos)       /*!< 0x00000010 */
.equ	CAN_F13R2_FB4,	CAN_F13R2_FB4_Msk                 /*!< Filter bit 4 */
.equ	CAN_F13R2_FB5_Pos,	(5U)
.equ	CAN_F13R2_FB5_Msk,	(0x1UL << CAN_F13R2_FB5_Pos)       /*!< 0x00000020 */
.equ	CAN_F13R2_FB5,	CAN_F13R2_FB5_Msk                 /*!< Filter bit 5 */
.equ	CAN_F13R2_FB6_Pos,	(6U)
.equ	CAN_F13R2_FB6_Msk,	(0x1UL << CAN_F13R2_FB6_Pos)       /*!< 0x00000040 */
.equ	CAN_F13R2_FB6,	CAN_F13R2_FB6_Msk                 /*!< Filter bit 6 */
.equ	CAN_F13R2_FB7_Pos,	(7U)
.equ	CAN_F13R2_FB7_Msk,	(0x1UL << CAN_F13R2_FB7_Pos)       /*!< 0x00000080 */
.equ	CAN_F13R2_FB7,	CAN_F13R2_FB7_Msk                 /*!< Filter bit 7 */
.equ	CAN_F13R2_FB8_Pos,	(8U)
.equ	CAN_F13R2_FB8_Msk,	(0x1UL << CAN_F13R2_FB8_Pos)       /*!< 0x00000100 */
.equ	CAN_F13R2_FB8,	CAN_F13R2_FB8_Msk                 /*!< Filter bit 8 */
.equ	CAN_F13R2_FB9_Pos,	(9U)
.equ	CAN_F13R2_FB9_Msk,	(0x1UL << CAN_F13R2_FB9_Pos)       /*!< 0x00000200 */
.equ	CAN_F13R2_FB9,	CAN_F13R2_FB9_Msk                 /*!< Filter bit 9 */
.equ	CAN_F13R2_FB10_Pos,	(10U)
.equ	CAN_F13R2_FB10_Msk,	(0x1UL << CAN_F13R2_FB10_Pos)      /*!< 0x00000400 */
.equ	CAN_F13R2_FB10,	CAN_F13R2_FB10_Msk                /*!< Filter bit 10 */
.equ	CAN_F13R2_FB11_Pos,	(11U)
.equ	CAN_F13R2_FB11_Msk,	(0x1UL << CAN_F13R2_FB11_Pos)      /*!< 0x00000800 */
.equ	CAN_F13R2_FB11,	CAN_F13R2_FB11_Msk                /*!< Filter bit 11 */
.equ	CAN_F13R2_FB12_Pos,	(12U)
.equ	CAN_F13R2_FB12_Msk,	(0x1UL << CAN_F13R2_FB12_Pos)      /*!< 0x00001000 */
.equ	CAN_F13R2_FB12,	CAN_F13R2_FB12_Msk                /*!< Filter bit 12 */
.equ	CAN_F13R2_FB13_Pos,	(13U)
.equ	CAN_F13R2_FB13_Msk,	(0x1UL << CAN_F13R2_FB13_Pos)      /*!< 0x00002000 */
.equ	CAN_F13R2_FB13,	CAN_F13R2_FB13_Msk                /*!< Filter bit 13 */
.equ	CAN_F13R2_FB14_Pos,	(14U)
.equ	CAN_F13R2_FB14_Msk,	(0x1UL << CAN_F13R2_FB14_Pos)      /*!< 0x00004000 */
.equ	CAN_F13R2_FB14,	CAN_F13R2_FB14_Msk                /*!< Filter bit 14 */
.equ	CAN_F13R2_FB15_Pos,	(15U)
.equ	CAN_F13R2_FB15_Msk,	(0x1UL << CAN_F13R2_FB15_Pos)      /*!< 0x00008000 */
.equ	CAN_F13R2_FB15,	CAN_F13R2_FB15_Msk                /*!< Filter bit 15 */
.equ	CAN_F13R2_FB16_Pos,	(16U)
.equ	CAN_F13R2_FB16_Msk,	(0x1UL << CAN_F13R2_FB16_Pos)      /*!< 0x00010000 */
.equ	CAN_F13R2_FB16,	CAN_F13R2_FB16_Msk                /*!< Filter bit 16 */
.equ	CAN_F13R2_FB17_Pos,	(17U)
.equ	CAN_F13R2_FB17_Msk,	(0x1UL << CAN_F13R2_FB17_Pos)      /*!< 0x00020000 */
.equ	CAN_F13R2_FB17,	CAN_F13R2_FB17_Msk                /*!< Filter bit 17 */
.equ	CAN_F13R2_FB18_Pos,	(18U)
.equ	CAN_F13R2_FB18_Msk,	(0x1UL << CAN_F13R2_FB18_Pos)      /*!< 0x00040000 */
.equ	CAN_F13R2_FB18,	CAN_F13R2_FB18_Msk                /*!< Filter bit 18 */
.equ	CAN_F13R2_FB19_Pos,	(19U)
.equ	CAN_F13R2_FB19_Msk,	(0x1UL << CAN_F13R2_FB19_Pos)      /*!< 0x00080000 */
.equ	CAN_F13R2_FB19,	CAN_F13R2_FB19_Msk                /*!< Filter bit 19 */
.equ	CAN_F13R2_FB20_Pos,	(20U)
.equ	CAN_F13R2_FB20_Msk,	(0x1UL << CAN_F13R2_FB20_Pos)      /*!< 0x00100000 */
.equ	CAN_F13R2_FB20,	CAN_F13R2_FB20_Msk                /*!< Filter bit 20 */
.equ	CAN_F13R2_FB21_Pos,	(21U)
.equ	CAN_F13R2_FB21_Msk,	(0x1UL << CAN_F13R2_FB21_Pos)      /*!< 0x00200000 */
.equ	CAN_F13R2_FB21,	CAN_F13R2_FB21_Msk                /*!< Filter bit 21 */
.equ	CAN_F13R2_FB22_Pos,	(22U)
.equ	CAN_F13R2_FB22_Msk,	(0x1UL << CAN_F13R2_FB22_Pos)      /*!< 0x00400000 */
.equ	CAN_F13R2_FB22,	CAN_F13R2_FB22_Msk                /*!< Filter bit 22 */
.equ	CAN_F13R2_FB23_Pos,	(23U)
.equ	CAN_F13R2_FB23_Msk,	(0x1UL << CAN_F13R2_FB23_Pos)      /*!< 0x00800000 */
.equ	CAN_F13R2_FB23,	CAN_F13R2_FB23_Msk                /*!< Filter bit 23 */
.equ	CAN_F13R2_FB24_Pos,	(24U)
.equ	CAN_F13R2_FB24_Msk,	(0x1UL << CAN_F13R2_FB24_Pos)      /*!< 0x01000000 */
.equ	CAN_F13R2_FB24,	CAN_F13R2_FB24_Msk                /*!< Filter bit 24 */
.equ	CAN_F13R2_FB25_Pos,	(25U)
.equ	CAN_F13R2_FB25_Msk,	(0x1UL << CAN_F13R2_FB25_Pos)      /*!< 0x02000000 */
.equ	CAN_F13R2_FB25,	CAN_F13R2_FB25_Msk                /*!< Filter bit 25 */
.equ	CAN_F13R2_FB26_Pos,	(26U)
.equ	CAN_F13R2_FB26_Msk,	(0x1UL << CAN_F13R2_FB26_Pos)      /*!< 0x04000000 */
.equ	CAN_F13R2_FB26,	CAN_F13R2_FB26_Msk                /*!< Filter bit 26 */
.equ	CAN_F13R2_FB27_Pos,	(27U)
.equ	CAN_F13R2_FB27_Msk,	(0x1UL << CAN_F13R2_FB27_Pos)      /*!< 0x08000000 */
.equ	CAN_F13R2_FB27,	CAN_F13R2_FB27_Msk                /*!< Filter bit 27 */
.equ	CAN_F13R2_FB28_Pos,	(28U)
.equ	CAN_F13R2_FB28_Msk,	(0x1UL << CAN_F13R2_FB28_Pos)      /*!< 0x10000000 */
.equ	CAN_F13R2_FB28,	CAN_F13R2_FB28_Msk                /*!< Filter bit 28 */
.equ	CAN_F13R2_FB29_Pos,	(29U)
.equ	CAN_F13R2_FB29_Msk,	(0x1UL << CAN_F13R2_FB29_Pos)      /*!< 0x20000000 */
.equ	CAN_F13R2_FB29,	CAN_F13R2_FB29_Msk                /*!< Filter bit 29 */
.equ	CAN_F13R2_FB30_Pos,	(30U)
.equ	CAN_F13R2_FB30_Msk,	(0x1UL << CAN_F13R2_FB30_Pos)      /*!< 0x40000000 */
.equ	CAN_F13R2_FB30,	CAN_F13R2_FB30_Msk                /*!< Filter bit 30 */
.equ	CAN_F13R2_FB31_Pos,	(31U)
.equ	CAN_F13R2_FB31_Msk,	(0x1UL << CAN_F13R2_FB31_Pos)      /*!< 0x80000000 */
.equ	CAN_F13R2_FB31,	CAN_F13R2_FB31_Msk                /*!< Filter bit 31 */

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for SPI_CR1 register  ********************/
.equ	SPI_CR1_CPHA_Pos,	0
.equ	SPI_CR1_CPHA_Msk,	(0x1UL << SPI_CR1_CPHA_Pos)         /*!< 0x00000001 */
.equ	SPI_CR1_CPHA,	SPI_CR1_CPHA_Msk                   /*!< Clock Phase */
.equ	SPI_CR1_CPOL_Pos,	(1U)
.equ	SPI_CR1_CPOL_Msk,	(0x1UL << SPI_CR1_CPOL_Pos)         /*!< 0x00000002 */
.equ	SPI_CR1_CPOL,	SPI_CR1_CPOL_Msk                   /*!< Clock Polarity */
.equ	SPI_CR1_MSTR_Pos,	(2U)
.equ	SPI_CR1_MSTR_Msk,	(0x1UL << SPI_CR1_MSTR_Pos)         /*!< 0x00000004 */
.equ	SPI_CR1_MSTR,	SPI_CR1_MSTR_Msk                   /*!< Master Selection */

.equ	SPI_CR1_BR_Pos,	(3U)
.equ	SPI_CR1_BR_Msk,	(0x7UL << SPI_CR1_BR_Pos)           /*!< 0x00000038 */
.equ	SPI_CR1_BR,	SPI_CR1_BR_Msk                     /*!< BR[2:0] bits (Baud Rate Control) */
.equ	SPI_CR1_BR_0,	(0x1UL << SPI_CR1_BR_Pos)           /*!< 0x00000008 */
.equ	SPI_CR1_BR_1,	(0x2UL << SPI_CR1_BR_Pos)           /*!< 0x00000010 */
.equ	SPI_CR1_BR_2,	(0x4UL << SPI_CR1_BR_Pos)           /*!< 0x00000020 */

.equ	SPI_CR1_SPE_Pos,	(6U)
.equ	SPI_CR1_SPE_Msk,	(0x1UL << SPI_CR1_SPE_Pos)          /*!< 0x00000040 */
.equ	SPI_CR1_SPE,	SPI_CR1_SPE_Msk                    /*!< SPI Enable */
.equ	SPI_CR1_LSBFIRST_Pos,	(7U)
.equ	SPI_CR1_LSBFIRST_Msk,	(0x1UL << SPI_CR1_LSBFIRST_Pos)     /*!< 0x00000080 */
.equ	SPI_CR1_LSBFIRST,	SPI_CR1_LSBFIRST_Msk               /*!< Frame Format */
.equ	SPI_CR1_SSI_Pos,	(8U)
.equ	SPI_CR1_SSI_Msk,	(0x1UL << SPI_CR1_SSI_Pos)          /*!< 0x00000100 */
.equ	SPI_CR1_SSI,	SPI_CR1_SSI_Msk                    /*!< Internal slave select */
.equ	SPI_CR1_SSM_Pos,	(9U)
.equ	SPI_CR1_SSM_Msk,	(0x1UL << SPI_CR1_SSM_Pos)          /*!< 0x00000200 */
.equ	SPI_CR1_SSM,	SPI_CR1_SSM_Msk                    /*!< Software slave management */
.equ	SPI_CR1_RXONLY_Pos,	(10U)
.equ	SPI_CR1_RXONLY_Msk,	(0x1UL << SPI_CR1_RXONLY_Pos)       /*!< 0x00000400 */
.equ	SPI_CR1_RXONLY,	SPI_CR1_RXONLY_Msk                 /*!< Receive only */
.equ	SPI_CR1_DFF_Pos,	(11U)
.equ	SPI_CR1_DFF_Msk,	(0x1UL << SPI_CR1_DFF_Pos)          /*!< 0x00000800 */
.equ	SPI_CR1_DFF,	SPI_CR1_DFF_Msk                    /*!< Data Frame Format */
.equ	SPI_CR1_CRCNEXT_Pos,	(12U)
.equ	SPI_CR1_CRCNEXT_Msk,	(0x1UL << SPI_CR1_CRCNEXT_Pos)      /*!< 0x00001000 */
.equ	SPI_CR1_CRCNEXT,	SPI_CR1_CRCNEXT_Msk                /*!< Transmit CRC next */
.equ	SPI_CR1_CRCEN_Pos,	(13U)
.equ	SPI_CR1_CRCEN_Msk,	(0x1UL << SPI_CR1_CRCEN_Pos)        /*!< 0x00002000 */
.equ	SPI_CR1_CRCEN,	SPI_CR1_CRCEN_Msk                  /*!< Hardware CRC calculation enable */
.equ	SPI_CR1_BIDIOE_Pos,	(14U)
.equ	SPI_CR1_BIDIOE_Msk,	(0x1UL << SPI_CR1_BIDIOE_Pos)       /*!< 0x00004000 */
.equ	SPI_CR1_BIDIOE,	SPI_CR1_BIDIOE_Msk                 /*!< Output enable in bidirectional mode */
.equ	SPI_CR1_BIDIMODE_Pos,	(15U)
.equ	SPI_CR1_BIDIMODE_Msk,	(0x1UL << SPI_CR1_BIDIMODE_Pos)     /*!< 0x00008000 */
.equ	SPI_CR1_BIDIMODE,	SPI_CR1_BIDIMODE_Msk               /*!< Bidirectional data mode enable */

/*******************  Bit definition for SPI_CR2 register  ********************/
.equ	SPI_CR2_RXDMAEN_Pos,	0
.equ	SPI_CR2_RXDMAEN_Msk,	(0x1UL << SPI_CR2_RXDMAEN_Pos)      /*!< 0x00000001 */
.equ	SPI_CR2_RXDMAEN,	SPI_CR2_RXDMAEN_Msk                /*!< Rx Buffer DMA Enable */
.equ	SPI_CR2_TXDMAEN_Pos,	(1U)
.equ	SPI_CR2_TXDMAEN_Msk,	(0x1UL << SPI_CR2_TXDMAEN_Pos)      /*!< 0x00000002 */
.equ	SPI_CR2_TXDMAEN,	SPI_CR2_TXDMAEN_Msk                /*!< Tx Buffer DMA Enable */
.equ	SPI_CR2_SSOE_Pos,	(2U)
.equ	SPI_CR2_SSOE_Msk,	(0x1UL << SPI_CR2_SSOE_Pos)         /*!< 0x00000004 */
.equ	SPI_CR2_SSOE,	SPI_CR2_SSOE_Msk                   /*!< SS Output Enable */
.equ	SPI_CR2_ERRIE_Pos,	(5U)
.equ	SPI_CR2_ERRIE_Msk,	(0x1UL << SPI_CR2_ERRIE_Pos)        /*!< 0x00000020 */
.equ	SPI_CR2_ERRIE,	SPI_CR2_ERRIE_Msk                  /*!< Error Interrupt Enable */
.equ	SPI_CR2_RXNEIE_Pos,	(6U)
.equ	SPI_CR2_RXNEIE_Msk,	(0x1UL << SPI_CR2_RXNEIE_Pos)       /*!< 0x00000040 */
.equ	SPI_CR2_RXNEIE,	SPI_CR2_RXNEIE_Msk                 /*!< RX buffer Not Empty Interrupt Enable */
.equ	SPI_CR2_TXEIE_Pos,	(7U)
.equ	SPI_CR2_TXEIE_Msk,	(0x1UL << SPI_CR2_TXEIE_Pos)        /*!< 0x00000080 */
.equ	SPI_CR2_TXEIE,	SPI_CR2_TXEIE_Msk                  /*!< Tx buffer Empty Interrupt Enable */

/********************  Bit definition for SPI_SR register  ********************/
.equ	SPI_SR_RXNE_Pos,	0
.equ	SPI_SR_RXNE_Msk,	(0x1UL << SPI_SR_RXNE_Pos)          /*!< 0x00000001 */
.equ	SPI_SR_RXNE,	SPI_SR_RXNE_Msk                    /*!< Receive buffer Not Empty */
.equ	SPI_SR_TXE_Pos,	(1U)
.equ	SPI_SR_TXE_Msk,	(0x1UL << SPI_SR_TXE_Pos)           /*!< 0x00000002 */
.equ	SPI_SR_TXE,	SPI_SR_TXE_Msk                     /*!< Transmit buffer Empty */
.equ	SPI_SR_CHSIDE_Pos,	(2U)
.equ	SPI_SR_CHSIDE_Msk,	(0x1UL << SPI_SR_CHSIDE_Pos)        /*!< 0x00000004 */
.equ	SPI_SR_CHSIDE,	SPI_SR_CHSIDE_Msk                  /*!< Channel side */
.equ	SPI_SR_UDR_Pos,	(3U)
.equ	SPI_SR_UDR_Msk,	(0x1UL << SPI_SR_UDR_Pos)           /*!< 0x00000008 */
.equ	SPI_SR_UDR,	SPI_SR_UDR_Msk                     /*!< Underrun flag */
.equ	SPI_SR_CRCERR_Pos,	(4U)
.equ	SPI_SR_CRCERR_Msk,	(0x1UL << SPI_SR_CRCERR_Pos)        /*!< 0x00000010 */
.equ	SPI_SR_CRCERR,	SPI_SR_CRCERR_Msk                  /*!< CRC Error flag */
.equ	SPI_SR_MODF_Pos,	(5U)
.equ	SPI_SR_MODF_Msk,	(0x1UL << SPI_SR_MODF_Pos)          /*!< 0x00000020 */
.equ	SPI_SR_MODF,	SPI_SR_MODF_Msk                    /*!< Mode fault */
.equ	SPI_SR_OVR_Pos,	(6U)
.equ	SPI_SR_OVR_Msk,	(0x1UL << SPI_SR_OVR_Pos)           /*!< 0x00000040 */
.equ	SPI_SR_OVR,	SPI_SR_OVR_Msk                     /*!< Overrun flag */
.equ	SPI_SR_BSY_Pos,	(7U)
.equ	SPI_SR_BSY_Msk,	(0x1UL << SPI_SR_BSY_Pos)           /*!< 0x00000080 */
.equ	SPI_SR_BSY,	SPI_SR_BSY_Msk                     /*!< Busy flag */

/********************  Bit definition for SPI_DR register  ********************/
.equ	SPI_DR_DR_Pos,	0
.equ	SPI_DR_DR_Msk,	(0xFFFFUL << SPI_DR_DR_Pos)         /*!< 0x0000FFFF */
.equ	SPI_DR_DR,	SPI_DR_DR_Msk                      /*!< Data Register */

/*******************  Bit definition for SPI_CRCPR register  ******************/
.equ	SPI_CRCPR_CRCPOLY_Pos,	0
.equ	SPI_CRCPR_CRCPOLY_Msk,	(0xFFFFUL << SPI_CRCPR_CRCPOLY_Pos) /*!< 0x0000FFFF */
.equ	SPI_CRCPR_CRCPOLY,	SPI_CRCPR_CRCPOLY_Msk              /*!< CRC polynomial register */

/******************  Bit definition for SPI_RXCRCR register  ******************/
.equ	SPI_RXCRCR_RXCRC_Pos,	0
.equ	SPI_RXCRCR_RXCRC_Msk,	(0xFFFFUL << SPI_RXCRCR_RXCRC_Pos)  /*!< 0x0000FFFF */
.equ	SPI_RXCRCR_RXCRC,	SPI_RXCRCR_RXCRC_Msk               /*!< Rx CRC Register */

/******************  Bit definition for SPI_TXCRCR register  ******************/
.equ	SPI_TXCRCR_TXCRC_Pos,	0
.equ	SPI_TXCRCR_TXCRC_Msk,	(0xFFFFUL << SPI_TXCRCR_TXCRC_Pos)  /*!< 0x0000FFFF */
.equ	SPI_TXCRCR_TXCRC,	SPI_TXCRCR_TXCRC_Msk               /*!< Tx CRC Register */

.equ	SPI_I2SCFGR_I2SMOD_Pos,	(11U)
.equ	SPI_I2SCFGR_I2SMOD_Msk,	(0x1UL << SPI_I2SCFGR_I2SMOD_Pos)   /*!< 0x00000800 */
.equ	SPI_I2SCFGR_I2SMOD,	SPI_I2SCFGR_I2SMOD_Msk             /*!< I2S mode selection */

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CR1 register  ********************/
.equ	I2C_CR1_PE_Pos,	0
.equ	I2C_CR1_PE_Msk,	(0x1UL << I2C_CR1_PE_Pos)           /*!< 0x00000001 */
.equ	I2C_CR1_PE,	I2C_CR1_PE_Msk                     /*!< Peripheral Enable */
.equ	I2C_CR1_SMBUS_Pos,	(1U)
.equ	I2C_CR1_SMBUS_Msk,	(0x1UL << I2C_CR1_SMBUS_Pos)        /*!< 0x00000002 */
.equ	I2C_CR1_SMBUS,	I2C_CR1_SMBUS_Msk                  /*!< SMBus Mode */
.equ	I2C_CR1_SMBTYPE_Pos,	(3U)
.equ	I2C_CR1_SMBTYPE_Msk,	(0x1UL << I2C_CR1_SMBTYPE_Pos)      /*!< 0x00000008 */
.equ	I2C_CR1_SMBTYPE,	I2C_CR1_SMBTYPE_Msk                /*!< SMBus Type */
.equ	I2C_CR1_ENARP_Pos,	(4U)
.equ	I2C_CR1_ENARP_Msk,	(0x1UL << I2C_CR1_ENARP_Pos)        /*!< 0x00000010 */
.equ	I2C_CR1_ENARP,	I2C_CR1_ENARP_Msk                  /*!< ARP Enable */
.equ	I2C_CR1_ENPEC_Pos,	(5U)
.equ	I2C_CR1_ENPEC_Msk,	(0x1UL << I2C_CR1_ENPEC_Pos)        /*!< 0x00000020 */
.equ	I2C_CR1_ENPEC,	I2C_CR1_ENPEC_Msk                  /*!< PEC Enable */
.equ	I2C_CR1_ENGC_Pos,	(6U)
.equ	I2C_CR1_ENGC_Msk,	(0x1UL << I2C_CR1_ENGC_Pos)         /*!< 0x00000040 */
.equ	I2C_CR1_ENGC,	I2C_CR1_ENGC_Msk                   /*!< General Call Enable */
.equ	I2C_CR1_NOSTRETCH_Pos,	(7U)
.equ	I2C_CR1_NOSTRETCH_Msk,	(0x1UL << I2C_CR1_NOSTRETCH_Pos)    /*!< 0x00000080 */
.equ	I2C_CR1_NOSTRETCH,	I2C_CR1_NOSTRETCH_Msk              /*!< Clock Stretching Disable (Slave mode) */
.equ	I2C_CR1_START_Pos,	(8U)
.equ	I2C_CR1_START_Msk,	(0x1UL << I2C_CR1_START_Pos)        /*!< 0x00000100 */
.equ	I2C_CR1_START,	I2C_CR1_START_Msk                  /*!< Start Generation */
.equ	I2C_CR1_STOP_Pos,	(9U)
.equ	I2C_CR1_STOP_Msk,	(0x1UL << I2C_CR1_STOP_Pos)         /*!< 0x00000200 */
.equ	I2C_CR1_STOP,	I2C_CR1_STOP_Msk                   /*!< Stop Generation */
.equ	I2C_CR1_ACK_Pos,	(10U)
.equ	I2C_CR1_ACK_Msk,	(0x1UL << I2C_CR1_ACK_Pos)          /*!< 0x00000400 */
.equ	I2C_CR1_ACK,	I2C_CR1_ACK_Msk                    /*!< Acknowledge Enable */
.equ	I2C_CR1_POS_Pos,	(11U)
.equ	I2C_CR1_POS_Msk,	(0x1UL << I2C_CR1_POS_Pos)          /*!< 0x00000800 */
.equ	I2C_CR1_POS,	I2C_CR1_POS_Msk                    /*!< Acknowledge/PEC Position (for data reception) */
.equ	I2C_CR1_PEC_Pos,	(12U)
.equ	I2C_CR1_PEC_Msk,	(0x1UL << I2C_CR1_PEC_Pos)          /*!< 0x00001000 */
.equ	I2C_CR1_PEC,	I2C_CR1_PEC_Msk                    /*!< Packet Error Checking */
.equ	I2C_CR1_ALERT_Pos,	(13U)
.equ	I2C_CR1_ALERT_Msk,	(0x1UL << I2C_CR1_ALERT_Pos)        /*!< 0x00002000 */
.equ	I2C_CR1_ALERT,	I2C_CR1_ALERT_Msk                  /*!< SMBus Alert */
.equ	I2C_CR1_SWRST_Pos,	(15U)
.equ	I2C_CR1_SWRST_Msk,	(0x1UL << I2C_CR1_SWRST_Pos)        /*!< 0x00008000 */
.equ	I2C_CR1_SWRST,	I2C_CR1_SWRST_Msk                  /*!< Software Reset */

/*******************  Bit definition for I2C_CR2 register  ********************/
.equ	I2C_CR2_FREQ_Pos,	0
.equ	I2C_CR2_FREQ_Msk,	(0x3FUL << I2C_CR2_FREQ_Pos)        /*!< 0x0000003F */
.equ	I2C_CR2_FREQ,	I2C_CR2_FREQ_Msk                   /*!< FREQ[5:0] bits (Peripheral Clock Frequency) */
.equ	I2C_CR2_FREQ_0,	(0x01UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000001 */
.equ	I2C_CR2_FREQ_1,	(0x02UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000002 */
.equ	I2C_CR2_FREQ_2,	(0x04UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000004 */
.equ	I2C_CR2_FREQ_3,	(0x08UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000008 */
.equ	I2C_CR2_FREQ_4,	(0x10UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000010 */
.equ	I2C_CR2_FREQ_5,	(0x20UL << I2C_CR2_FREQ_Pos)        /*!< 0x00000020 */

.equ	I2C_CR2_ITERREN_Pos,	(8U)
.equ	I2C_CR2_ITERREN_Msk,	(0x1UL << I2C_CR2_ITERREN_Pos)      /*!< 0x00000100 */
.equ	I2C_CR2_ITERREN,	I2C_CR2_ITERREN_Msk                /*!< Error Interrupt Enable */
.equ	I2C_CR2_ITEVTEN_Pos,	(9U)
.equ	I2C_CR2_ITEVTEN_Msk,	(0x1UL << I2C_CR2_ITEVTEN_Pos)      /*!< 0x00000200 */
.equ	I2C_CR2_ITEVTEN,	I2C_CR2_ITEVTEN_Msk                /*!< Event Interrupt Enable */
.equ	I2C_CR2_ITBUFEN_Pos,	(10U)
.equ	I2C_CR2_ITBUFEN_Msk,	(0x1UL << I2C_CR2_ITBUFEN_Pos)      /*!< 0x00000400 */
.equ	I2C_CR2_ITBUFEN,	I2C_CR2_ITBUFEN_Msk                /*!< Buffer Interrupt Enable */
.equ	I2C_CR2_DMAEN_Pos,	(11U)
.equ	I2C_CR2_DMAEN_Msk,	(0x1UL << I2C_CR2_DMAEN_Pos)        /*!< 0x00000800 */
.equ	I2C_CR2_DMAEN,	I2C_CR2_DMAEN_Msk                  /*!< DMA Requests Enable */
.equ	I2C_CR2_LAST_Pos,	(12U)
.equ	I2C_CR2_LAST_Msk,	(0x1UL << I2C_CR2_LAST_Pos)         /*!< 0x00001000 */
.equ	I2C_CR2_LAST,	I2C_CR2_LAST_Msk                   /*!< DMA Last Transfer */

/*******************  Bit definition for I2C_OAR1 register  *******************/
.equ	I2C_OAR1_ADD1_7,	0x000000FEU             /*!< Interface Address */
.equ	I2C_OAR1_ADD8_9,	0x00000300U             /*!< Interface Address */

.equ	I2C_OAR1_ADD0_Pos,	0
.equ	I2C_OAR1_ADD0_Msk,	(0x1UL << I2C_OAR1_ADD0_Pos)        /*!< 0x00000001 */
.equ	I2C_OAR1_ADD0,	I2C_OAR1_ADD0_Msk                  /*!< Bit 0 */
.equ	I2C_OAR1_ADD1_Pos,	(1U)
.equ	I2C_OAR1_ADD1_Msk,	(0x1UL << I2C_OAR1_ADD1_Pos)        /*!< 0x00000002 */
.equ	I2C_OAR1_ADD1,	I2C_OAR1_ADD1_Msk                  /*!< Bit 1 */
.equ	I2C_OAR1_ADD2_Pos,	(2U)
.equ	I2C_OAR1_ADD2_Msk,	(0x1UL << I2C_OAR1_ADD2_Pos)        /*!< 0x00000004 */
.equ	I2C_OAR1_ADD2,	I2C_OAR1_ADD2_Msk                  /*!< Bit 2 */
.equ	I2C_OAR1_ADD3_Pos,	(3U)
.equ	I2C_OAR1_ADD3_Msk,	(0x1UL << I2C_OAR1_ADD3_Pos)        /*!< 0x00000008 */
.equ	I2C_OAR1_ADD3,	I2C_OAR1_ADD3_Msk                  /*!< Bit 3 */
.equ	I2C_OAR1_ADD4_Pos,	(4U)
.equ	I2C_OAR1_ADD4_Msk,	(0x1UL << I2C_OAR1_ADD4_Pos)        /*!< 0x00000010 */
.equ	I2C_OAR1_ADD4,	I2C_OAR1_ADD4_Msk                  /*!< Bit 4 */
.equ	I2C_OAR1_ADD5_Pos,	(5U)
.equ	I2C_OAR1_ADD5_Msk,	(0x1UL << I2C_OAR1_ADD5_Pos)        /*!< 0x00000020 */
.equ	I2C_OAR1_ADD5,	I2C_OAR1_ADD5_Msk                  /*!< Bit 5 */
.equ	I2C_OAR1_ADD6_Pos,	(6U)
.equ	I2C_OAR1_ADD6_Msk,	(0x1UL << I2C_OAR1_ADD6_Pos)        /*!< 0x00000040 */
.equ	I2C_OAR1_ADD6,	I2C_OAR1_ADD6_Msk                  /*!< Bit 6 */
.equ	I2C_OAR1_ADD7_Pos,	(7U)
.equ	I2C_OAR1_ADD7_Msk,	(0x1UL << I2C_OAR1_ADD7_Pos)        /*!< 0x00000080 */
.equ	I2C_OAR1_ADD7,	I2C_OAR1_ADD7_Msk                  /*!< Bit 7 */
.equ	I2C_OAR1_ADD8_Pos,	(8U)
.equ	I2C_OAR1_ADD8_Msk,	(0x1UL << I2C_OAR1_ADD8_Pos)        /*!< 0x00000100 */
.equ	I2C_OAR1_ADD8,	I2C_OAR1_ADD8_Msk                  /*!< Bit 8 */
.equ	I2C_OAR1_ADD9_Pos,	(9U)
.equ	I2C_OAR1_ADD9_Msk,	(0x1UL << I2C_OAR1_ADD9_Pos)        /*!< 0x00000200 */
.equ	I2C_OAR1_ADD9,	I2C_OAR1_ADD9_Msk                  /*!< Bit 9 */

.equ	I2C_OAR1_ADDMODE_Pos,	(15U)
.equ	I2C_OAR1_ADDMODE_Msk,	(0x1UL << I2C_OAR1_ADDMODE_Pos)     /*!< 0x00008000 */
.equ	I2C_OAR1_ADDMODE,	I2C_OAR1_ADDMODE_Msk               /*!< Addressing Mode (Slave mode) */

/*******************  Bit definition for I2C_OAR2 register  *******************/
.equ	I2C_OAR2_ENDUAL_Pos,	0
.equ	I2C_OAR2_ENDUAL_Msk,	(0x1UL << I2C_OAR2_ENDUAL_Pos)      /*!< 0x00000001 */
.equ	I2C_OAR2_ENDUAL,	I2C_OAR2_ENDUAL_Msk                /*!< Dual addressing mode enable */
.equ	I2C_OAR2_ADD2_Pos,	(1U)
.equ	I2C_OAR2_ADD2_Msk,	(0x7FUL << I2C_OAR2_ADD2_Pos)       /*!< 0x000000FE */
.equ	I2C_OAR2_ADD2,	I2C_OAR2_ADD2_Msk                  /*!< Interface address */

/********************  Bit definition for I2C_DR register  ********************/
.equ	I2C_DR_DR_Pos,	0
.equ	I2C_DR_DR_Msk,	(0xFFUL << I2C_DR_DR_Pos)                     /*!< 0x000000FF */
.equ	I2C_DR_DR,	I2C_DR_DR_Msk                                /*!< 8-bit Data Register         */

/*******************  Bit definition for I2C_SR1 register  ********************/
.equ	I2C_SR1_SB_Pos,	0
.equ	I2C_SR1_SB_Msk,	(0x1UL << I2C_SR1_SB_Pos)           /*!< 0x00000001 */
.equ	I2C_SR1_SB,	I2C_SR1_SB_Msk                     /*!< Start Bit (Master mode) */
.equ	I2C_SR1_ADDR_Pos,	(1U)
.equ	I2C_SR1_ADDR_Msk,	(0x1UL << I2C_SR1_ADDR_Pos)         /*!< 0x00000002 */
.equ	I2C_SR1_ADDR,	I2C_SR1_ADDR_Msk                   /*!< Address sent (master mode)/matched (slave mode) */
.equ	I2C_SR1_BTF_Pos,	(2U)
.equ	I2C_SR1_BTF_Msk,	(0x1UL << I2C_SR1_BTF_Pos)          /*!< 0x00000004 */
.equ	I2C_SR1_BTF,	I2C_SR1_BTF_Msk                    /*!< Byte Transfer Finished */
.equ	I2C_SR1_ADD10_Pos,	(3U)
.equ	I2C_SR1_ADD10_Msk,	(0x1UL << I2C_SR1_ADD10_Pos)        /*!< 0x00000008 */
.equ	I2C_SR1_ADD10,	I2C_SR1_ADD10_Msk                  /*!< 10-bit header sent (Master mode) */
.equ	I2C_SR1_STOPF_Pos,	(4U)
.equ	I2C_SR1_STOPF_Msk,	(0x1UL << I2C_SR1_STOPF_Pos)        /*!< 0x00000010 */
.equ	I2C_SR1_STOPF,	I2C_SR1_STOPF_Msk                  /*!< Stop detection (Slave mode) */
.equ	I2C_SR1_RXNE_Pos,	(6U)
.equ	I2C_SR1_RXNE_Msk,	(0x1UL << I2C_SR1_RXNE_Pos)         /*!< 0x00000040 */
.equ	I2C_SR1_RXNE,	I2C_SR1_RXNE_Msk                   /*!< Data Register not Empty (receivers) */
.equ	I2C_SR1_TXE_Pos,	(7U)
.equ	I2C_SR1_TXE_Msk,	(0x1UL << I2C_SR1_TXE_Pos)          /*!< 0x00000080 */
.equ	I2C_SR1_TXE,	I2C_SR1_TXE_Msk                    /*!< Data Register Empty (transmitters) */
.equ	I2C_SR1_BERR_Pos,	(8U)
.equ	I2C_SR1_BERR_Msk,	(0x1UL << I2C_SR1_BERR_Pos)         /*!< 0x00000100 */
.equ	I2C_SR1_BERR,	I2C_SR1_BERR_Msk                   /*!< Bus Error */
.equ	I2C_SR1_ARLO_Pos,	(9U)
.equ	I2C_SR1_ARLO_Msk,	(0x1UL << I2C_SR1_ARLO_Pos)         /*!< 0x00000200 */
.equ	I2C_SR1_ARLO,	I2C_SR1_ARLO_Msk                   /*!< Arbitration Lost (master mode) */
.equ	I2C_SR1_AF_Pos,	(10U)
.equ	I2C_SR1_AF_Msk,	(0x1UL << I2C_SR1_AF_Pos)           /*!< 0x00000400 */
.equ	I2C_SR1_AF,	I2C_SR1_AF_Msk                     /*!< Acknowledge Failure */
.equ	I2C_SR1_OVR_Pos,	(11U)
.equ	I2C_SR1_OVR_Msk,	(0x1UL << I2C_SR1_OVR_Pos)          /*!< 0x00000800 */
.equ	I2C_SR1_OVR,	I2C_SR1_OVR_Msk                    /*!< Overrun/Underrun */
.equ	I2C_SR1_PECERR_Pos,	(12U)
.equ	I2C_SR1_PECERR_Msk,	(0x1UL << I2C_SR1_PECERR_Pos)       /*!< 0x00001000 */
.equ	I2C_SR1_PECERR,	I2C_SR1_PECERR_Msk                 /*!< PEC Error in reception */
.equ	I2C_SR1_TIMEOUT_Pos,	(14U)
.equ	I2C_SR1_TIMEOUT_Msk,	(0x1UL << I2C_SR1_TIMEOUT_Pos)      /*!< 0x00004000 */
.equ	I2C_SR1_TIMEOUT,	I2C_SR1_TIMEOUT_Msk                /*!< Timeout or Tlow Error */
.equ	I2C_SR1_SMBALERT_Pos,	(15U)
.equ	I2C_SR1_SMBALERT_Msk,	(0x1UL << I2C_SR1_SMBALERT_Pos)     /*!< 0x00008000 */
.equ	I2C_SR1_SMBALERT,	I2C_SR1_SMBALERT_Msk               /*!< SMBus Alert */

/*******************  Bit definition for I2C_SR2 register  ********************/
.equ	I2C_SR2_MSL_Pos,	0
.equ	I2C_SR2_MSL_Msk,	(0x1UL << I2C_SR2_MSL_Pos)          /*!< 0x00000001 */
.equ	I2C_SR2_MSL,	I2C_SR2_MSL_Msk                    /*!< Master/Slave */
.equ	I2C_SR2_BUSY_Pos,	(1U)
.equ	I2C_SR2_BUSY_Msk,	(0x1UL << I2C_SR2_BUSY_Pos)         /*!< 0x00000002 */
.equ	I2C_SR2_BUSY,	I2C_SR2_BUSY_Msk                   /*!< Bus Busy */
.equ	I2C_SR2_TRA_Pos,	(2U)
.equ	I2C_SR2_TRA_Msk,	(0x1UL << I2C_SR2_TRA_Pos)          /*!< 0x00000004 */
.equ	I2C_SR2_TRA,	I2C_SR2_TRA_Msk                    /*!< Transmitter/Receiver */
.equ	I2C_SR2_GENCALL_Pos,	(4U)
.equ	I2C_SR2_GENCALL_Msk,	(0x1UL << I2C_SR2_GENCALL_Pos)      /*!< 0x00000010 */
.equ	I2C_SR2_GENCALL,	I2C_SR2_GENCALL_Msk                /*!< General Call Address (Slave mode) */
.equ	I2C_SR2_SMBDEFAULT_Pos,	(5U)
.equ	I2C_SR2_SMBDEFAULT_Msk,	(0x1UL << I2C_SR2_SMBDEFAULT_Pos)   /*!< 0x00000020 */
.equ	I2C_SR2_SMBDEFAULT,	I2C_SR2_SMBDEFAULT_Msk             /*!< SMBus Device Default Address (Slave mode) */
.equ	I2C_SR2_SMBHOST_Pos,	(6U)
.equ	I2C_SR2_SMBHOST_Msk,	(0x1UL << I2C_SR2_SMBHOST_Pos)      /*!< 0x00000040 */
.equ	I2C_SR2_SMBHOST,	I2C_SR2_SMBHOST_Msk                /*!< SMBus Host Header (Slave mode) */
.equ	I2C_SR2_DUALF_Pos,	(7U)
.equ	I2C_SR2_DUALF_Msk,	(0x1UL << I2C_SR2_DUALF_Pos)        /*!< 0x00000080 */
.equ	I2C_SR2_DUALF,	I2C_SR2_DUALF_Msk                  /*!< Dual Flag (Slave mode) */
.equ	I2C_SR2_PEC_Pos,	(8U)
.equ	I2C_SR2_PEC_Msk,	(0xFFUL << I2C_SR2_PEC_Pos)         /*!< 0x0000FF00 */
.equ	I2C_SR2_PEC,	I2C_SR2_PEC_Msk                    /*!< Packet Error Checking Register */

/*******************  Bit definition for I2C_CCR register  ********************/
.equ	I2C_CCR_CCR_Pos,	0
.equ	I2C_CCR_CCR_Msk,	(0xFFFUL << I2C_CCR_CCR_Pos)        /*!< 0x00000FFF */
.equ	I2C_CCR_CCR,	I2C_CCR_CCR_Msk                    /*!< Clock Control Register in Fast/Standard mode (Master mode) */
.equ	I2C_CCR_DUTY_Pos,	(14U)
.equ	I2C_CCR_DUTY_Msk,	(0x1UL << I2C_CCR_DUTY_Pos)         /*!< 0x00004000 */
.equ	I2C_CCR_DUTY,	I2C_CCR_DUTY_Msk                   /*!< Fast Mode Duty Cycle */
.equ	I2C_CCR_FS_Pos,	(15U)
.equ	I2C_CCR_FS_Msk,	(0x1UL << I2C_CCR_FS_Pos)           /*!< 0x00008000 */
.equ	I2C_CCR_FS,	I2C_CCR_FS_Msk                     /*!< I2C Master Mode Selection */

/******************  Bit definition for I2C_TRISE register  *******************/
.equ	I2C_TRISE_TRISE_Pos,	0
.equ	I2C_TRISE_TRISE_Msk,	(0x3FUL << I2C_TRISE_TRISE_Pos)     /*!< 0x0000003F */
.equ	I2C_TRISE_TRISE,	I2C_TRISE_TRISE_Msk                /*!< Maximum Rise Time in Fast/Standard mode (Master mode) */

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for USART_SR register  *******************/
.equ	USART_SR_PE_Pos,	0
.equ	USART_SR_PE_Msk,	(0x1UL << USART_SR_PE_Pos)          /*!< 0x00000001 */
.equ	USART_SR_PE,	USART_SR_PE_Msk                    /*!< Parity Error */
.equ	USART_SR_FE_Pos,	(1U)
.equ	USART_SR_FE_Msk,	(0x1UL << USART_SR_FE_Pos)          /*!< 0x00000002 */
.equ	USART_SR_FE,	USART_SR_FE_Msk                    /*!< Framing Error */
.equ	USART_SR_NE_Pos,	(2U)
.equ	USART_SR_NE_Msk,	(0x1UL << USART_SR_NE_Pos)          /*!< 0x00000004 */
.equ	USART_SR_NE,	USART_SR_NE_Msk                    /*!< Noise Error Flag */
.equ	USART_SR_ORE_Pos,	(3U)
.equ	USART_SR_ORE_Msk,	(0x1UL << USART_SR_ORE_Pos)         /*!< 0x00000008 */
.equ	USART_SR_ORE,	USART_SR_ORE_Msk                   /*!< OverRun Error */
.equ	USART_SR_IDLE_Pos,	(4U)
.equ	USART_SR_IDLE_Msk,	(0x1UL << USART_SR_IDLE_Pos)        /*!< 0x00000010 */
.equ	USART_SR_IDLE,	USART_SR_IDLE_Msk                  /*!< IDLE line detected */
.equ	USART_SR_RXNE_Pos,	(5U)
.equ	USART_SR_RXNE_Msk,	(0x1UL << USART_SR_RXNE_Pos)        /*!< 0x00000020 */
.equ	USART_SR_RXNE,	USART_SR_RXNE_Msk                  /*!< Read Data Register Not Empty */
.equ	USART_SR_TC_Pos,	(6U)
.equ	USART_SR_TC_Msk,	(0x1UL << USART_SR_TC_Pos)          /*!< 0x00000040 */
.equ	USART_SR_TC,	USART_SR_TC_Msk                    /*!< Transmission Complete */
.equ	USART_SR_TXE_Pos,	(7U)
.equ	USART_SR_TXE_Msk,	(0x1UL << USART_SR_TXE_Pos)         /*!< 0x00000080 */
.equ	USART_SR_TXE,	USART_SR_TXE_Msk                   /*!< Transmit Data Register Empty */
.equ	USART_SR_LBD_Pos,	(8U)
.equ	USART_SR_LBD_Msk,	(0x1UL << USART_SR_LBD_Pos)         /*!< 0x00000100 */
.equ	USART_SR_LBD,	USART_SR_LBD_Msk                   /*!< LIN Break Detection Flag */
.equ	USART_SR_CTS_Pos,	(9U)
.equ	USART_SR_CTS_Msk,	(0x1UL << USART_SR_CTS_Pos)         /*!< 0x00000200 */
.equ	USART_SR_CTS,	USART_SR_CTS_Msk                   /*!< CTS Flag */

/*******************  Bit definition for USART_DR register  *******************/
.equ	USART_DR_DR_Pos,	0
.equ	USART_DR_DR_Msk,	(0x1FFUL << USART_DR_DR_Pos)        /*!< 0x000001FF */
.equ	USART_DR_DR,	USART_DR_DR_Msk                    /*!< Data value */

/******************  Bit definition for USART_BRR register  *******************/
.equ	USART_BRR_DIV_Fraction_Pos,	0
.equ	USART_BRR_DIV_Fraction_Msk,	(0xFUL << USART_BRR_DIV_Fraction_Pos) /*!< 0x0000000F */
.equ	USART_BRR_DIV_Fraction,	USART_BRR_DIV_Fraction_Msk         /*!< Fraction of USARTDIV */
.equ	USART_BRR_DIV_Mantissa_Pos,	(4U)
.equ	USART_BRR_DIV_Mantissa_Msk,	(0xFFFUL << USART_BRR_DIV_Mantissa_Pos) /*!< 0x0000FFF0 */
.equ	USART_BRR_DIV_Mantissa,	USART_BRR_DIV_Mantissa_Msk         /*!< Mantissa of USARTDIV */

/******************  Bit definition for USART_CR1 register  *******************/
.equ	USART_CR1_SBK_Pos,	0
.equ	USART_CR1_SBK_Msk,	(0x1UL << USART_CR1_SBK_Pos)        /*!< 0x00000001 */
.equ	USART_CR1_SBK,	USART_CR1_SBK_Msk                  /*!< Send Break */
.equ	USART_CR1_RWU_Pos,	(1U)
.equ	USART_CR1_RWU_Msk,	(0x1UL << USART_CR1_RWU_Pos)        /*!< 0x00000002 */
.equ	USART_CR1_RWU,	USART_CR1_RWU_Msk                  /*!< Receiver wakeup */
.equ	USART_CR1_RE_Pos,	(2U)
.equ	USART_CR1_RE_Msk,	(0x1UL << USART_CR1_RE_Pos)         /*!< 0x00000004 */
.equ	USART_CR1_RE,	USART_CR1_RE_Msk                   /*!< Receiver Enable */
.equ	USART_CR1_TE_Pos,	(3U)
.equ	USART_CR1_TE_Msk,	(0x1UL << USART_CR1_TE_Pos)         /*!< 0x00000008 */
.equ	USART_CR1_TE,	USART_CR1_TE_Msk                   /*!< Transmitter Enable */
.equ	USART_CR1_IDLEIE_Pos,	(4U)
.equ	USART_CR1_IDLEIE_Msk,	(0x1UL << USART_CR1_IDLEIE_Pos)     /*!< 0x00000010 */
.equ	USART_CR1_IDLEIE,	USART_CR1_IDLEIE_Msk               /*!< IDLE Interrupt Enable */
.equ	USART_CR1_RXNEIE_Pos,	(5U)
.equ	USART_CR1_RXNEIE_Msk,	(0x1UL << USART_CR1_RXNEIE_Pos)     /*!< 0x00000020 */
.equ	USART_CR1_RXNEIE,	USART_CR1_RXNEIE_Msk               /*!< RXNE Interrupt Enable */
.equ	USART_CR1_TCIE_Pos,	(6U)
.equ	USART_CR1_TCIE_Msk,	(0x1UL << USART_CR1_TCIE_Pos)       /*!< 0x00000040 */
.equ	USART_CR1_TCIE,	USART_CR1_TCIE_Msk                 /*!< Transmission Complete Interrupt Enable */
.equ	USART_CR1_TXEIE_Pos,	(7U)
.equ	USART_CR1_TXEIE_Msk,	(0x1UL << USART_CR1_TXEIE_Pos)      /*!< 0x00000080 */
.equ	USART_CR1_TXEIE,	USART_CR1_TXEIE_Msk                /*!< PE Interrupt Enable */
.equ	USART_CR1_PEIE_Pos,	(8U)
.equ	USART_CR1_PEIE_Msk,	(0x1UL << USART_CR1_PEIE_Pos)       /*!< 0x00000100 */
.equ	USART_CR1_PEIE,	USART_CR1_PEIE_Msk                 /*!< PE Interrupt Enable */
.equ	USART_CR1_PS_Pos,	(9U)
.equ	USART_CR1_PS_Msk,	(0x1UL << USART_CR1_PS_Pos)         /*!< 0x00000200 */
.equ	USART_CR1_PS,	USART_CR1_PS_Msk                   /*!< Parity Selection */
.equ	USART_CR1_PCE_Pos,	(10U)
.equ	USART_CR1_PCE_Msk,	(0x1UL << USART_CR1_PCE_Pos)        /*!< 0x00000400 */
.equ	USART_CR1_PCE,	USART_CR1_PCE_Msk                  /*!< Parity Control Enable */
.equ	USART_CR1_WAKE_Pos,	(11U)
.equ	USART_CR1_WAKE_Msk,	(0x1UL << USART_CR1_WAKE_Pos)       /*!< 0x00000800 */
.equ	USART_CR1_WAKE,	USART_CR1_WAKE_Msk                 /*!< Wakeup method */
.equ	USART_CR1_M_Pos,	(12U)
.equ	USART_CR1_M_Msk,	(0x1UL << USART_CR1_M_Pos)          /*!< 0x00001000 */
.equ	USART_CR1_M,	USART_CR1_M_Msk                    /*!< Word length */
.equ	USART_CR1_UE_Pos,	(13U)
.equ	USART_CR1_UE_Msk,	(0x1UL << USART_CR1_UE_Pos)         /*!< 0x00002000 */
.equ	USART_CR1_UE,	USART_CR1_UE_Msk                   /*!< USART Enable */

/******************  Bit definition for USART_CR2 register  *******************/
.equ	USART_CR2_ADD_Pos,	0
.equ	USART_CR2_ADD_Msk,	(0xFUL << USART_CR2_ADD_Pos)        /*!< 0x0000000F */
.equ	USART_CR2_ADD,	USART_CR2_ADD_Msk                  /*!< Address of the USART node */
.equ	USART_CR2_LBDL_Pos,	(5U)
.equ	USART_CR2_LBDL_Msk,	(0x1UL << USART_CR2_LBDL_Pos)       /*!< 0x00000020 */
.equ	USART_CR2_LBDL,	USART_CR2_LBDL_Msk                 /*!< LIN Break Detection Length */
.equ	USART_CR2_LBDIE_Pos,	(6U)
.equ	USART_CR2_LBDIE_Msk,	(0x1UL << USART_CR2_LBDIE_Pos)      /*!< 0x00000040 */
.equ	USART_CR2_LBDIE,	USART_CR2_LBDIE_Msk                /*!< LIN Break Detection Interrupt Enable */
.equ	USART_CR2_LBCL_Pos,	(8U)
.equ	USART_CR2_LBCL_Msk,	(0x1UL << USART_CR2_LBCL_Pos)       /*!< 0x00000100 */
.equ	USART_CR2_LBCL,	USART_CR2_LBCL_Msk                 /*!< Last Bit Clock pulse */
.equ	USART_CR2_CPHA_Pos,	(9U)
.equ	USART_CR2_CPHA_Msk,	(0x1UL << USART_CR2_CPHA_Pos)       /*!< 0x00000200 */
.equ	USART_CR2_CPHA,	USART_CR2_CPHA_Msk                 /*!< Clock Phase */
.equ	USART_CR2_CPOL_Pos,	(10U)
.equ	USART_CR2_CPOL_Msk,	(0x1UL << USART_CR2_CPOL_Pos)       /*!< 0x00000400 */
.equ	USART_CR2_CPOL,	USART_CR2_CPOL_Msk                 /*!< Clock Polarity */
.equ	USART_CR2_CLKEN_Pos,	(11U)
.equ	USART_CR2_CLKEN_Msk,	(0x1UL << USART_CR2_CLKEN_Pos)      /*!< 0x00000800 */
.equ	USART_CR2_CLKEN,	USART_CR2_CLKEN_Msk                /*!< Clock Enable */

.equ	USART_CR2_STOP_Pos,	(12U)
.equ	USART_CR2_STOP_Msk,	(0x3UL << USART_CR2_STOP_Pos)       /*!< 0x00003000 */
.equ	USART_CR2_STOP,	USART_CR2_STOP_Msk                 /*!< STOP[1:0] bits (STOP bits) */
.equ	USART_CR2_STOP_0,	(0x1UL << USART_CR2_STOP_Pos)       /*!< 0x00001000 */
.equ	USART_CR2_STOP_1,	(0x2UL << USART_CR2_STOP_Pos)       /*!< 0x00002000 */

.equ	USART_CR2_LINEN_Pos,	(14U)
.equ	USART_CR2_LINEN_Msk,	(0x1UL << USART_CR2_LINEN_Pos)      /*!< 0x00004000 */
.equ	USART_CR2_LINEN,	USART_CR2_LINEN_Msk                /*!< LIN mode enable */

/******************  Bit definition for USART_CR3 register  *******************/
.equ	USART_CR3_EIE_Pos,	0
.equ	USART_CR3_EIE_Msk,	(0x1UL << USART_CR3_EIE_Pos)        /*!< 0x00000001 */
.equ	USART_CR3_EIE,	USART_CR3_EIE_Msk                  /*!< Error Interrupt Enable */
.equ	USART_CR3_IREN_Pos,	(1U)
.equ	USART_CR3_IREN_Msk,	(0x1UL << USART_CR3_IREN_Pos)       /*!< 0x00000002 */
.equ	USART_CR3_IREN,	USART_CR3_IREN_Msk                 /*!< IrDA mode Enable */
.equ	USART_CR3_IRLP_Pos,	(2U)
.equ	USART_CR3_IRLP_Msk,	(0x1UL << USART_CR3_IRLP_Pos)       /*!< 0x00000004 */
.equ	USART_CR3_IRLP,	USART_CR3_IRLP_Msk                 /*!< IrDA Low-Power */
.equ	USART_CR3_HDSEL_Pos,	(3U)
.equ	USART_CR3_HDSEL_Msk,	(0x1UL << USART_CR3_HDSEL_Pos)      /*!< 0x00000008 */
.equ	USART_CR3_HDSEL,	USART_CR3_HDSEL_Msk                /*!< Half-Duplex Selection */
.equ	USART_CR3_NACK_Pos,	(4U)
.equ	USART_CR3_NACK_Msk,	(0x1UL << USART_CR3_NACK_Pos)       /*!< 0x00000010 */
.equ	USART_CR3_NACK,	USART_CR3_NACK_Msk                 /*!< Smartcard NACK enable */
.equ	USART_CR3_SCEN_Pos,	(5U)
.equ	USART_CR3_SCEN_Msk,	(0x1UL << USART_CR3_SCEN_Pos)       /*!< 0x00000020 */
.equ	USART_CR3_SCEN,	USART_CR3_SCEN_Msk                 /*!< Smartcard mode enable */
.equ	USART_CR3_DMAR_Pos,	(6U)
.equ	USART_CR3_DMAR_Msk,	(0x1UL << USART_CR3_DMAR_Pos)       /*!< 0x00000040 */
.equ	USART_CR3_DMAR,	USART_CR3_DMAR_Msk                 /*!< DMA Enable Receiver */
.equ	USART_CR3_DMAT_Pos,	(7U)
.equ	USART_CR3_DMAT_Msk,	(0x1UL << USART_CR3_DMAT_Pos)       /*!< 0x00000080 */
.equ	USART_CR3_DMAT,	USART_CR3_DMAT_Msk                 /*!< DMA Enable Transmitter */
.equ	USART_CR3_RTSE_Pos,	(8U)
.equ	USART_CR3_RTSE_Msk,	(0x1UL << USART_CR3_RTSE_Pos)       /*!< 0x00000100 */
.equ	USART_CR3_RTSE,	USART_CR3_RTSE_Msk                 /*!< RTS Enable */
.equ	USART_CR3_CTSE_Pos,	(9U)
.equ	USART_CR3_CTSE_Msk,	(0x1UL << USART_CR3_CTSE_Pos)       /*!< 0x00000200 */
.equ	USART_CR3_CTSE,	USART_CR3_CTSE_Msk                 /*!< CTS Enable */
.equ	USART_CR3_CTSIE_Pos,	(10U)
.equ	USART_CR3_CTSIE_Msk,	(0x1UL << USART_CR3_CTSIE_Pos)      /*!< 0x00000400 */
.equ	USART_CR3_CTSIE,	USART_CR3_CTSIE_Msk                /*!< CTS Interrupt Enable */

/******************  Bit definition for USART_GTPR register  ******************/
.equ	USART_GTPR_PSC_Pos,	0
.equ	USART_GTPR_PSC_Msk,	(0xFFUL << USART_GTPR_PSC_Pos)      /*!< 0x000000FF */
.equ	USART_GTPR_PSC,	USART_GTPR_PSC_Msk                 /*!< PSC[7:0] bits (Prescaler value) */
.equ	USART_GTPR_PSC_0,	(0x01UL << USART_GTPR_PSC_Pos)      /*!< 0x00000001 */
.equ	USART_GTPR_PSC_1,	(0x02UL << USART_GTPR_PSC_Pos)      /*!< 0x00000002 */
.equ	USART_GTPR_PSC_2,	(0x04UL << USART_GTPR_PSC_Pos)      /*!< 0x00000004 */
.equ	USART_GTPR_PSC_3,	(0x08UL << USART_GTPR_PSC_Pos)      /*!< 0x00000008 */
.equ	USART_GTPR_PSC_4,	(0x10UL << USART_GTPR_PSC_Pos)      /*!< 0x00000010 */
.equ	USART_GTPR_PSC_5,	(0x20UL << USART_GTPR_PSC_Pos)      /*!< 0x00000020 */
.equ	USART_GTPR_PSC_6,	(0x40UL << USART_GTPR_PSC_Pos)      /*!< 0x00000040 */
.equ	USART_GTPR_PSC_7,	(0x80UL << USART_GTPR_PSC_Pos)      /*!< 0x00000080 */

.equ	USART_GTPR_GT_Pos,	(8U)
.equ	USART_GTPR_GT_Msk,	(0xFFUL << USART_GTPR_GT_Pos)       /*!< 0x0000FF00 */
.equ	USART_GTPR_GT,	USART_GTPR_GT_Msk                  /*!< Guard time value */

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
.equ	DBGMCU_IDCODE_DEV_ID_Pos,	0
.equ	DBGMCU_IDCODE_DEV_ID_Msk,	(0xFFFUL << DBGMCU_IDCODE_DEV_ID_Pos) /*!< 0x00000FFF */
.equ	DBGMCU_IDCODE_DEV_ID,	DBGMCU_IDCODE_DEV_ID_Msk           /*!< Device Identifier */

.equ	DBGMCU_IDCODE_REV_ID_Pos,	(16U)
.equ	DBGMCU_IDCODE_REV_ID_Msk,	(0xFFFFUL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0xFFFF0000 */
.equ	DBGMCU_IDCODE_REV_ID,	DBGMCU_IDCODE_REV_ID_Msk           /*!< REV_ID[15:0] bits (Revision Identifier) */
.equ	DBGMCU_IDCODE_REV_ID_0,	(0x0001UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00010000 */
.equ	DBGMCU_IDCODE_REV_ID_1,	(0x0002UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00020000 */
.equ	DBGMCU_IDCODE_REV_ID_2,	(0x0004UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00040000 */
.equ	DBGMCU_IDCODE_REV_ID_3,	(0x0008UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00080000 */
.equ	DBGMCU_IDCODE_REV_ID_4,	(0x0010UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00100000 */
.equ	DBGMCU_IDCODE_REV_ID_5,	(0x0020UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00200000 */
.equ	DBGMCU_IDCODE_REV_ID_6,	(0x0040UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00400000 */
.equ	DBGMCU_IDCODE_REV_ID_7,	(0x0080UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x00800000 */
.equ	DBGMCU_IDCODE_REV_ID_8,	(0x0100UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x01000000 */
.equ	DBGMCU_IDCODE_REV_ID_9,	(0x0200UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x02000000 */
.equ	DBGMCU_IDCODE_REV_ID_10,	(0x0400UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x04000000 */
.equ	DBGMCU_IDCODE_REV_ID_11,	(0x0800UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x08000000 */
.equ	DBGMCU_IDCODE_REV_ID_12,	(0x1000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x10000000 */
.equ	DBGMCU_IDCODE_REV_ID_13,	(0x2000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x20000000 */
.equ	DBGMCU_IDCODE_REV_ID_14,	(0x4000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x40000000 */
.equ	DBGMCU_IDCODE_REV_ID_15,	(0x8000UL << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0x80000000 */

/******************  Bit definition for DBGMCU_CR register  *******************/
.equ	DBGMCU_CR_DBG_SLEEP_Pos,	0
.equ	DBGMCU_CR_DBG_SLEEP_Msk,	(0x1UL << DBGMCU_CR_DBG_SLEEP_Pos)  /*!< 0x00000001 */
.equ	DBGMCU_CR_DBG_SLEEP,	DBGMCU_CR_DBG_SLEEP_Msk            /*!< Debug Sleep Mode */
.equ	DBGMCU_CR_DBG_STOP_Pos,	(1U)
.equ	DBGMCU_CR_DBG_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_STOP_Pos)   /*!< 0x00000002 */
.equ	DBGMCU_CR_DBG_STOP,	DBGMCU_CR_DBG_STOP_Msk             /*!< Debug Stop Mode */
.equ	DBGMCU_CR_DBG_STANDBY_Pos,	(2U)
.equ	DBGMCU_CR_DBG_STANDBY_Msk,	(0x1UL << DBGMCU_CR_DBG_STANDBY_Pos) /*!< 0x00000004 */
.equ	DBGMCU_CR_DBG_STANDBY,	DBGMCU_CR_DBG_STANDBY_Msk          /*!< Debug Standby mode */
.equ	DBGMCU_CR_TRACE_IOEN_Pos,	(5U)
.equ	DBGMCU_CR_TRACE_IOEN_Msk,	(0x1UL << DBGMCU_CR_TRACE_IOEN_Pos) /*!< 0x00000020 */
.equ	DBGMCU_CR_TRACE_IOEN,	DBGMCU_CR_TRACE_IOEN_Msk           /*!< Trace Pin Assignment Control */

.equ	DBGMCU_CR_TRACE_MODE_Pos,	(6U)
.equ	DBGMCU_CR_TRACE_MODE_Msk,	(0x3UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x000000C0 */
.equ	DBGMCU_CR_TRACE_MODE,	DBGMCU_CR_TRACE_MODE_Msk           /*!< TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
.equ	DBGMCU_CR_TRACE_MODE_0,	(0x1UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000040 */
.equ	DBGMCU_CR_TRACE_MODE_1,	(0x2UL << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000080 */

.equ	DBGMCU_CR_DBG_IWDG_STOP_Pos,	(8U)
.equ	DBGMCU_CR_DBG_IWDG_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_IWDG_STOP_Pos) /*!< 0x00000100 */
.equ	DBGMCU_CR_DBG_IWDG_STOP,	DBGMCU_CR_DBG_IWDG_STOP_Msk        /*!< Debug Independent Watchdog stopped when Core is halted */
.equ	DBGMCU_CR_DBG_WWDG_STOP_Pos,	(9U)
.equ	DBGMCU_CR_DBG_WWDG_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_WWDG_STOP_Pos) /*!< 0x00000200 */
.equ	DBGMCU_CR_DBG_WWDG_STOP,	DBGMCU_CR_DBG_WWDG_STOP_Msk        /*!< Debug Window Watchdog stopped when Core is halted */
.equ	DBGMCU_CR_DBG_TIM1_STOP_Pos,	(10U)
.equ	DBGMCU_CR_DBG_TIM1_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_TIM1_STOP_Pos) /*!< 0x00000400 */
.equ	DBGMCU_CR_DBG_TIM1_STOP,	DBGMCU_CR_DBG_TIM1_STOP_Msk        /*!< TIM1 counter stopped when core is halted */
.equ	DBGMCU_CR_DBG_TIM2_STOP_Pos,	(11U)
.equ	DBGMCU_CR_DBG_TIM2_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_TIM2_STOP_Pos) /*!< 0x00000800 */
.equ	DBGMCU_CR_DBG_TIM2_STOP,	DBGMCU_CR_DBG_TIM2_STOP_Msk        /*!< TIM2 counter stopped when core is halted */
.equ	DBGMCU_CR_DBG_TIM3_STOP_Pos,	(12U)
.equ	DBGMCU_CR_DBG_TIM3_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_TIM3_STOP_Pos) /*!< 0x00001000 */
.equ	DBGMCU_CR_DBG_TIM3_STOP,	DBGMCU_CR_DBG_TIM3_STOP_Msk        /*!< TIM3 counter stopped when core is halted */
.equ	DBGMCU_CR_DBG_TIM4_STOP_Pos,	(13U)
.equ	DBGMCU_CR_DBG_TIM4_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_TIM4_STOP_Pos) /*!< 0x00002000 */
.equ	DBGMCU_CR_DBG_TIM4_STOP,	DBGMCU_CR_DBG_TIM4_STOP_Msk        /*!< TIM4 counter stopped when core is halted */
.equ	DBGMCU_CR_DBG_CAN1_STOP_Pos,	(14U)
.equ	DBGMCU_CR_DBG_CAN1_STOP_Msk,	(0x1UL << DBGMCU_CR_DBG_CAN1_STOP_Pos) /*!< 0x00004000 */
.equ	DBGMCU_CR_DBG_CAN1_STOP,	DBGMCU_CR_DBG_CAN1_STOP_Msk        /*!< Debug CAN1 stopped when Core is halted */
.equ	DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos,	(15U)
.equ	DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk,	(0x1UL << DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Pos) /*!< 0x00008000 */
.equ	DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT,	DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT_Msk /*!< SMBUS timeout mode stopped when Core is halted */
.equ	DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos,	(16U)
.equ	DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk,	(0x1UL << DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Pos) /*!< 0x00010000 */
.equ	DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT,	DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT_Msk /*!< SMBUS timeout mode stopped when Core is halted */

/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for FLASH_ACR register  ******************/
.equ	FLASH_ACR_LATENCY_Pos,	0
.equ	FLASH_ACR_LATENCY_Msk,	(0x7UL << FLASH_ACR_LATENCY_Pos)    /*!< 0x00000007 */
.equ	FLASH_ACR_LATENCY,	FLASH_ACR_LATENCY_Msk              /*!< LATENCY[2:0] bits (Latency) */
.equ	FLASH_ACR_LATENCY_0,	(0x1UL << FLASH_ACR_LATENCY_Pos)    /*!< 0x00000001 */
.equ	FLASH_ACR_LATENCY_1,	(0x2UL << FLASH_ACR_LATENCY_Pos)    /*!< 0x00000002 */
.equ	FLASH_ACR_LATENCY_2,	(0x4UL << FLASH_ACR_LATENCY_Pos)    /*!< 0x00000004 */

.equ	FLASH_ACR_HLFCYA_Pos,	(3U)
.equ	FLASH_ACR_HLFCYA_Msk,	(0x1UL << FLASH_ACR_HLFCYA_Pos)     /*!< 0x00000008 */
.equ	FLASH_ACR_HLFCYA,	FLASH_ACR_HLFCYA_Msk               /*!< Flash Half Cycle Access Enable */
.equ	FLASH_ACR_PRFTBE_Pos,	(4U)
.equ	FLASH_ACR_PRFTBE_Msk,	(0x1UL << FLASH_ACR_PRFTBE_Pos)     /*!< 0x00000010 */
.equ	FLASH_ACR_PRFTBE,	FLASH_ACR_PRFTBE_Msk               /*!< Prefetch Buffer Enable */
.equ	FLASH_ACR_PRFTBS_Pos,	(5U)
.equ	FLASH_ACR_PRFTBS_Msk,	(0x1UL << FLASH_ACR_PRFTBS_Pos)     /*!< 0x00000020 */
.equ	FLASH_ACR_PRFTBS,	FLASH_ACR_PRFTBS_Msk               /*!< Prefetch Buffer Status */

/******************  Bit definition for FLASH_KEYR register  ******************/
.equ	FLASH_KEYR_FKEYR_Pos,	0
.equ	FLASH_KEYR_FKEYR_Msk,	(0xFFFFFFFFUL << FLASH_KEYR_FKEYR_Pos) /*!< 0xFFFFFFFF */
.equ	FLASH_KEYR_FKEYR,	FLASH_KEYR_FKEYR_Msk               /*!< FPEC Key */

.equ	RDP_KEY_Pos,	0
.equ	RDP_KEY_Msk,	(0xA5UL << RDP_KEY_Pos)             /*!< 0x000000A5 */
.equ	RDP_KEY,	RDP_KEY_Msk                        /*!< RDP Key */
.equ	FLASH_KEY1_Pos,	0
.equ	FLASH_KEY1_Msk,	(0x45670123UL << FLASH_KEY1_Pos)    /*!< 0x45670123 */
.equ	FLASH_KEY1,	FLASH_KEY1_Msk                     /*!< FPEC Key1 */
.equ	FLASH_KEY2_Pos,	0
.equ	FLASH_KEY2_Msk,	(0xCDEF89ABUL << FLASH_KEY2_Pos)    /*!< 0xCDEF89AB */
.equ	FLASH_KEY2,	FLASH_KEY2_Msk                     /*!< FPEC Key2 */

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
.equ	FLASH_OPTKEYR_OPTKEYR_Pos,	0
.equ	FLASH_OPTKEYR_OPTKEYR_Msk,	(0xFFFFFFFFUL << FLASH_OPTKEYR_OPTKEYR_Pos) /*!< 0xFFFFFFFF */
.equ	FLASH_OPTKEYR_OPTKEYR,	FLASH_OPTKEYR_OPTKEYR_Msk          /*!< Option Byte Key */

.equ	FLASH_OPTKEY1,	FLASH_KEY1                    /*!< Option Byte Key1 */
.equ	FLASH_OPTKEY2,	FLASH_KEY2                    /*!< Option Byte Key2 */

/******************  Bit definition for FLASH_SR register  ********************/
.equ	FLASH_SR_BSY_Pos,	0
.equ	FLASH_SR_BSY_Msk,	(0x1UL << FLASH_SR_BSY_Pos)         /*!< 0x00000001 */
.equ	FLASH_SR_BSY,	FLASH_SR_BSY_Msk                   /*!< Busy */
.equ	FLASH_SR_PGERR_Pos,	(2U)
.equ	FLASH_SR_PGERR_Msk,	(0x1UL << FLASH_SR_PGERR_Pos)       /*!< 0x00000004 */
.equ	FLASH_SR_PGERR,	FLASH_SR_PGERR_Msk                 /*!< Programming Error */
.equ	FLASH_SR_WRPRTERR_Pos,	(4U)
.equ	FLASH_SR_WRPRTERR_Msk,	(0x1UL << FLASH_SR_WRPRTERR_Pos)    /*!< 0x00000010 */
.equ	FLASH_SR_WRPRTERR,	FLASH_SR_WRPRTERR_Msk              /*!< Write Protection Error */
.equ	FLASH_SR_EOP_Pos,	(5U)
.equ	FLASH_SR_EOP_Msk,	(0x1UL << FLASH_SR_EOP_Pos)         /*!< 0x00000020 */
.equ	FLASH_SR_EOP,	FLASH_SR_EOP_Msk                   /*!< End of operation */

/*******************  Bit definition for FLASH_CR register  *******************/
.equ	FLASH_CR_PG_Pos,	0
.equ	FLASH_CR_PG_Msk,	(0x1UL << FLASH_CR_PG_Pos)          /*!< 0x00000001 */
.equ	FLASH_CR_PG,	FLASH_CR_PG_Msk                    /*!< Programming */
.equ	FLASH_CR_PER_Pos,	(1U)
.equ	FLASH_CR_PER_Msk,	(0x1UL << FLASH_CR_PER_Pos)         /*!< 0x00000002 */
.equ	FLASH_CR_PER,	FLASH_CR_PER_Msk                   /*!< Page Erase */
.equ	FLASH_CR_MER_Pos,	(2U)
.equ	FLASH_CR_MER_Msk,	(0x1UL << FLASH_CR_MER_Pos)         /*!< 0x00000004 */
.equ	FLASH_CR_MER,	FLASH_CR_MER_Msk                   /*!< Mass Erase */
.equ	FLASH_CR_OPTPG_Pos,	(4U)
.equ	FLASH_CR_OPTPG_Msk,	(0x1UL << FLASH_CR_OPTPG_Pos)       /*!< 0x00000010 */
.equ	FLASH_CR_OPTPG,	FLASH_CR_OPTPG_Msk                 /*!< Option Byte Programming */
.equ	FLASH_CR_OPTER_Pos,	(5U)
.equ	FLASH_CR_OPTER_Msk,	(0x1UL << FLASH_CR_OPTER_Pos)       /*!< 0x00000020 */
.equ	FLASH_CR_OPTER,	FLASH_CR_OPTER_Msk                 /*!< Option Byte Erase */
.equ	FLASH_CR_STRT_Pos,	(6U)
.equ	FLASH_CR_STRT_Msk,	(0x1UL << FLASH_CR_STRT_Pos)        /*!< 0x00000040 */
.equ	FLASH_CR_STRT,	FLASH_CR_STRT_Msk                  /*!< Start */
.equ	FLASH_CR_LOCK_Pos,	(7U)
.equ	FLASH_CR_LOCK_Msk,	(0x1UL << FLASH_CR_LOCK_Pos)        /*!< 0x00000080 */
.equ	FLASH_CR_LOCK,	FLASH_CR_LOCK_Msk                  /*!< Lock */
.equ	FLASH_CR_OPTWRE_Pos,	(9U)
.equ	FLASH_CR_OPTWRE_Msk,	(0x1UL << FLASH_CR_OPTWRE_Pos)      /*!< 0x00000200 */
.equ	FLASH_CR_OPTWRE,	FLASH_CR_OPTWRE_Msk                /*!< Option Bytes Write Enable */
.equ	FLASH_CR_ERRIE_Pos,	(10U)
.equ	FLASH_CR_ERRIE_Msk,	(0x1UL << FLASH_CR_ERRIE_Pos)       /*!< 0x00000400 */
.equ	FLASH_CR_ERRIE,	FLASH_CR_ERRIE_Msk                 /*!< Error Interrupt Enable */
.equ	FLASH_CR_EOPIE_Pos,	(12U)
.equ	FLASH_CR_EOPIE_Msk,	(0x1UL << FLASH_CR_EOPIE_Pos)       /*!< 0x00001000 */
.equ	FLASH_CR_EOPIE,	FLASH_CR_EOPIE_Msk                 /*!< End of operation interrupt enable */

/*******************  Bit definition for FLASH_AR register  *******************/
.equ	FLASH_AR_FAR_Pos,	0
.equ	FLASH_AR_FAR_Msk,	(0xFFFFFFFFUL << FLASH_AR_FAR_Pos)  /*!< 0xFFFFFFFF */
.equ	FLASH_AR_FAR,	FLASH_AR_FAR_Msk                   /*!< Flash Address */

/******************  Bit definition for FLASH_OBR register  *******************/
.equ	FLASH_OBR_OPTERR_Pos,	0
.equ	FLASH_OBR_OPTERR_Msk,	(0x1UL << FLASH_OBR_OPTERR_Pos)     /*!< 0x00000001 */
.equ	FLASH_OBR_OPTERR,	FLASH_OBR_OPTERR_Msk               /*!< Option Byte Error */
.equ	FLASH_OBR_RDPRT_Pos,	(1U)
.equ	FLASH_OBR_RDPRT_Msk,	(0x1UL << FLASH_OBR_RDPRT_Pos)      /*!< 0x00000002 */
.equ	FLASH_OBR_RDPRT,	FLASH_OBR_RDPRT_Msk                /*!< Read protection */

.equ	FLASH_OBR_IWDG_SW_Pos,	(2U)
.equ	FLASH_OBR_IWDG_SW_Msk,	(0x1UL << FLASH_OBR_IWDG_SW_Pos)    /*!< 0x00000004 */
.equ	FLASH_OBR_IWDG_SW,	FLASH_OBR_IWDG_SW_Msk              /*!< IWDG SW */
.equ	FLASH_OBR_nRST_STOP_Pos,	(3U)
.equ	FLASH_OBR_nRST_STOP_Msk,	(0x1UL << FLASH_OBR_nRST_STOP_Pos)  /*!< 0x00000008 */
.equ	FLASH_OBR_nRST_STOP,	FLASH_OBR_nRST_STOP_Msk            /*!< nRST_STOP */
.equ	FLASH_OBR_nRST_STDBY_Pos,	(4U)
.equ	FLASH_OBR_nRST_STDBY_Msk,	(0x1UL << FLASH_OBR_nRST_STDBY_Pos) /*!< 0x00000010 */
.equ	FLASH_OBR_nRST_STDBY,	FLASH_OBR_nRST_STDBY_Msk           /*!< nRST_STDBY */
.equ	FLASH_OBR_USER_Pos,	(2U)
.equ	FLASH_OBR_USER_Msk,	(0x7UL << FLASH_OBR_USER_Pos)       /*!< 0x0000001C */
.equ	FLASH_OBR_USER,	FLASH_OBR_USER_Msk                 /*!< User Option Bytes */
.equ	FLASH_OBR_DATA0_Pos,	(10U)
.equ	FLASH_OBR_DATA0_Msk,	(0xFFUL << FLASH_OBR_DATA0_Pos)     /*!< 0x0003FC00 */
.equ	FLASH_OBR_DATA0,	FLASH_OBR_DATA0_Msk                /*!< Data0 */
.equ	FLASH_OBR_DATA1_Pos,	(18U)
.equ	FLASH_OBR_DATA1_Msk,	(0xFFUL << FLASH_OBR_DATA1_Pos)     /*!< 0x03FC0000 */
.equ	FLASH_OBR_DATA1,	FLASH_OBR_DATA1_Msk                /*!< Data1 */

/******************  Bit definition for FLASH_WRPR register  ******************/
.equ	FLASH_WRPR_WRP_Pos,	0
.equ	FLASH_WRPR_WRP_Msk,	(0xFFFFFFFFUL << FLASH_WRPR_WRP_Pos) /*!< 0xFFFFFFFF */
.equ	FLASH_WRPR_WRP,	FLASH_WRPR_WRP_Msk                 /*!< Write Protect */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for FLASH_RDP register  *******************/
.equ	FLASH_RDP_RDP_Pos,	0
.equ	FLASH_RDP_RDP_Msk,	(0xFFUL << FLASH_RDP_RDP_Pos)       /*!< 0x000000FF */
.equ	FLASH_RDP_RDP,	FLASH_RDP_RDP_Msk                  /*!< Read protection option byte */
.equ	FLASH_RDP_nRDP_Pos,	(8U)
.equ	FLASH_RDP_nRDP_Msk,	(0xFFUL << FLASH_RDP_nRDP_Pos)      /*!< 0x0000FF00 */
.equ	FLASH_RDP_nRDP,	FLASH_RDP_nRDP_Msk                 /*!< Read protection complemented option byte */

/******************  Bit definition for FLASH_USER register  ******************/
.equ	FLASH_USER_USER_Pos,	(16U)
.equ	FLASH_USER_USER_Msk,	(0xFFUL << FLASH_USER_USER_Pos)     /*!< 0x00FF0000 */
.equ	FLASH_USER_USER,	FLASH_USER_USER_Msk                /*!< User option byte */
.equ	FLASH_USER_nUSER_Pos,	(24U)
.equ	FLASH_USER_nUSER_Msk,	(0xFFUL << FLASH_USER_nUSER_Pos)    /*!< 0xFF000000 */
.equ	FLASH_USER_nUSER,	FLASH_USER_nUSER_Msk               /*!< User complemented option byte */

/******************  Bit definition for FLASH_Data0 register  *****************/
.equ	FLASH_DATA0_DATA0_Pos,	0
.equ	FLASH_DATA0_DATA0_Msk,	(0xFFUL << FLASH_DATA0_DATA0_Pos)   /*!< 0x000000FF */
.equ	FLASH_DATA0_DATA0,	FLASH_DATA0_DATA0_Msk              /*!< User data storage option byte */
.equ	FLASH_DATA0_nDATA0_Pos,	(8U)
.equ	FLASH_DATA0_nDATA0_Msk,	(0xFFUL << FLASH_DATA0_nDATA0_Pos)  /*!< 0x0000FF00 */
.equ	FLASH_DATA0_nDATA0,	FLASH_DATA0_nDATA0_Msk             /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_Data1 register  *****************/
.equ	FLASH_DATA1_DATA1_Pos,	(16U)
.equ	FLASH_DATA1_DATA1_Msk,	(0xFFUL << FLASH_DATA1_DATA1_Pos)   /*!< 0x00FF0000 */
.equ	FLASH_DATA1_DATA1,	FLASH_DATA1_DATA1_Msk              /*!< User data storage option byte */
.equ	FLASH_DATA1_nDATA1_Pos,	(24U)
.equ	FLASH_DATA1_nDATA1_Msk,	(0xFFUL << FLASH_DATA1_nDATA1_Pos)  /*!< 0xFF000000 */
.equ	FLASH_DATA1_nDATA1,	FLASH_DATA1_nDATA1_Msk             /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_WRP0 register  ******************/
.equ	FLASH_WRP0_WRP0_Pos,	0
.equ	FLASH_WRP0_WRP0_Msk,	(0xFFUL << FLASH_WRP0_WRP0_Pos)     /*!< 0x000000FF */
.equ	FLASH_WRP0_WRP0,		FLASH_WRP0_WRP0_Msk                /*!< Flash memory write protection option bytes */
.equ	FLASH_WRP0_nWRP0_Pos,	(8U)
.equ	FLASH_WRP0_nWRP0_Msk,	(0xFFUL << FLASH_WRP0_nWRP0_Pos)    /*!< 0x0000FF00 */
.equ	FLASH_WRP0_nWRP0,		FLASH_WRP0_nWRP0_Msk               /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP1 register  ******************/
.equ	FLASH_WRP1_WRP1_Pos,	(16U)
.equ	FLASH_WRP1_WRP1_Msk,	(0xFFUL << FLASH_WRP1_WRP1_Pos)     /*!< 0x00FF0000 */
.equ	FLASH_WRP1_WRP1,		FLASH_WRP1_WRP1_Msk                /*!< Flash memory write protection option bytes */
.equ	FLASH_WRP1_nWRP1_Pos,	(24U)
.equ	FLASH_WRP1_nWRP1_Msk,	(0xFFUL << FLASH_WRP1_nWRP1_Pos)    /*!< 0xFF000000 */
.equ	FLASH_WRP1_nWRP1,		FLASH_WRP1_nWRP1_Msk               /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP2 register  ******************/
.equ	FLASH_WRP2_WRP2_Pos,	0
.equ	FLASH_WRP2_WRP2_Msk,	(0xFFUL << FLASH_WRP2_WRP2_Pos)     /*!< 0x000000FF */
.equ	FLASH_WRP2_WRP2,		FLASH_WRP2_WRP2_Msk                /*!< Flash memory write protection option bytes */
.equ	FLASH_WRP2_nWRP2_Pos,	(8U)
.equ	FLASH_WRP2_nWRP2_Msk,	(0xFFUL << FLASH_WRP2_nWRP2_Pos)    /*!< 0x0000FF00 */
.equ	FLASH_WRP2_nWRP2,		FLASH_WRP2_nWRP2_Msk               /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP3 register  ******************/
.equ	FLASH_WRP3_WRP3_Pos,	(16U)
.equ	FLASH_WRP3_WRP3_Msk,	(0xFFUL << FLASH_WRP3_WRP3_Pos)     /*!< 0x00FF0000 */
.equ	FLASH_WRP3_WRP3,		FLASH_WRP3_WRP3_Msk                /*!< Flash memory write protection option bytes */
.equ	FLASH_WRP3_nWRP3_Pos,	(24U)
.equ	FLASH_WRP3_nWRP3_Msk,	(0xFFUL << FLASH_WRP3_nWRP3_Pos)    /*!< 0xFF000000 */
.equ	FLASH_WRP3_nWRP3,		FLASH_WRP3_nWRP3_Msk               /*!< Flash memory write protection complemented option bytes */







.equ	RCC_HSE_MIN,		4000000U
.equ	RCC_HSE_MAX,		16000000U

.equ	RCC_MAX_FREQUENCY,	72000000U

/**
  * @}
  */
/******************************************************************************/
/*  For a painless codes migration between the STM32F1xx device product       */
/*  lines the aliases defined below are put in place to overcome the         */
/*  differences in the interrupt handlers and IRQn definitions.               */
/*  No need to update developed interrupt code when moving across             */
/*  product lines within the same STM32F1 Family                              */
/******************************************************************************/

/* Aliases for __IRQn */
.equ	ADC1_IRQn,						ADC1_2_IRQn
.equ	TIM9_IRQn,						TIM1_BRK_IRQn
.equ	TIM1_BRK_TIM9_IRQn,				TIM1_BRK_IRQn
.equ	TIM1_BRK_TIM15_IRQn,			TIM1_BRK_IRQn
.equ	TIM1_TRG_COM_TIM17_IRQn,		TIM1_TRG_COM_IRQn
.equ	TIM1_TRG_COM_TIM11_IRQn,		TIM1_TRG_COM_IRQn
.equ	TIM11_IRQn,						TIM1_TRG_COM_IRQn
.equ	TIM10_IRQn,						TIM1_UP_IRQn
.equ	TIM1_UP_TIM10_IRQn,				TIM1_UP_IRQn
.equ	TIM1_UP_TIM16_IRQn,				TIM1_UP_IRQn
.equ	OTG_FS_WKUP_IRQn,				USBWakeUp_IRQn
.equ	CEC_IRQn,						USBWakeUp_IRQn
.equ	USB_HP_IRQn,					USB_HP_CAN1_TX_IRQn
.equ	CAN1_TX_IRQn,					USB_HP_CAN1_TX_IRQn
.equ	CAN1_RX0_IRQn,					USB_LP_CAN1_RX0_IRQn
.equ	USB_LP_IRQn,					USB_LP_CAN1_RX0_IRQn


/* Aliases for __IRQHandler */
.equ	ADC1_IRQHandler,				ADC1_2_IRQHandler
.equ	TIM9_IRQHandler,				TIM1_BRK_IRQHandler
.equ	TIM1_BRK_TIM9_IRQHandler,		TIM1_BRK_IRQHandler
.equ	TIM1_BRK_TIM15_IRQHandler,		TIM1_BRK_IRQHandler
.equ	TIM1_TRG_COM_TIM17_IRQHandler,	TIM1_TRG_COM_IRQHandler
.equ	TIM1_TRG_COM_TIM11_IRQHandler,	TIM1_TRG_COM_IRQHandler
.equ	TIM11_IRQHandler,				TIM1_TRG_COM_IRQHandler
.equ	TIM10_IRQHandler,				TIM1_UP_IRQHandler
.equ	TIM1_UP_TIM10_IRQHandler,		TIM1_UP_IRQHandler
.equ	TIM1_UP_TIM16_IRQHandler,		TIM1_UP_IRQHandler
.equ	OTG_FS_WKUP_IRQHandler,			USBWakeUp_IRQHandler
.equ	CEC_IRQHandler,					USBWakeUp_IRQHandler
.equ	USB_HP_IRQHandler,				USB_HP_CAN1_TX_IRQHandler
.equ	CAN1_TX_IRQHandler,				USB_HP_CAN1_TX_IRQHandler
.equ	CAN1_RX0_IRQHandler,			USB_LP_CAN1_RX0_IRQHandler
.equ	USB_LP_IRQHandler,				USB_LP_CAN1_RX0_IRQHandler




