#ifndef __AD9854_DR_H
#define __AD9854_DR_H
#include "main.h"

#define AD9854_RST(x) 						HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,x)
#define AD9854_UDCLK(x) 					HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,x)
#define AD9854_WR(x) 						HAL_GPIO_WritePin(GPIOC,GPIO_PIN_1,x)
#define AD9854_RD(x) 						HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,x)
#define AD9854_OSK(x) 						HAL_GPIO_WritePin(GPIOC,GPIO_PIN_2,x)
#define AD9854_FDATA(x) 					HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,x)

#define AD9854_DataBus GPIOB->BSRR
#define AD9854_AdrBus  GPIOB->BSRR

#define uint  unsigned int
#define uchar unsigned char
#define ulong unsigned long
	

void AD9854_Init(void);						  
void Freq_convert(long Freq);	         	  
void AD9854_SetSine(ulong Freq,uint Shape);	  
void Freq_double_convert(double Freq);		  
void AD9854_SetSine_double(double Freq,uint Shape);
void AD9854_InitFSK(void);				
void AD9854_SetFSK(ulong Freq1,ulong Freq2);					  
void AD9854_InitBPSK(void);					  
void AD9854_SetBPSK(uint Phase1,uint Phase2);					
void AD9854_InitOSK(void);					 
void AD9854_SetOSK(uchar RateShape);					  
void AD9854_InitAM(void);					 
void AD9854_SetAM(uint Shape);					
void AD9854_InitRFSK(void);					 
void AD9854_SetRFSK(ulong Freq_Low,ulong Freq_High,ulong Freq_Up_Down,ulong FreRate);		


#endif
