// running led
#include<LPC17xx.h>
#include<stdint.h>
void delay(uint32_t ms);

int main()
{
 uint32_t led;
 LPC_GPIO1-> FIODIR |=0xFF<<19;
 while(1)
 {	   uint32_t i;
   led=1<<19;
   for(i=0;i<=7;i++)
   {
     LPC_GPIO1->FIOSET = led;
	 delay(100);
	 LPC_GPIO1->FIOCLR = led;
	 delay(100);
     led<<=1;

   }
   }
   return 0;
   }

   void delay(uint32_t ms)
   {
    uint32_t i,j;
	for(i=0;i<ms;i++)
	{
	 for(j=0;j<10000;j++)
	 {
	 }
	 }
	 return;
	 }

  