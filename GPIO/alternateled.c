// alternate led blinking
#include<LPC17xx.h>
#include<stdint.h>
void delay(uint32_t ms);//delay function declaration
int main()
{
 LPC_GPIO1->FIODIR |=0xFF<<19;// configuring output from 19
 while(1)
 {
  LPC_GPIO1->FIOSET =0x55<<19;// turn on led alternatively
  delay(100); //function call to create a delay
  LPC_GPIO1->FIOCLR=0x55<<19;//led turn off
  delay(100);
  }
  return 0;
  }
  void delay(uint32_t ms) //function definition
  {
   uint32_t i,j;
   for(i=0;i<ms;i++)
   {
    for(j=0;j<10000;j++)
	{
	}
	}
	} 