// LED on
#include<LPC17xx.h>
#include<stdint.h>
int main()
{
 LPC_GPIO1->FIODIR |=1<<18;
 LPC_GPIO1->FIOSET =1<<18;
 return 0;
 }