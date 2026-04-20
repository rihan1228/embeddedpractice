#include<LPC17xx.h>
#include<stdint.h>
void delay(uint32_t ms);

int main()
{
  uint32_t led=1<<19;
  uinnt32_t dir=1;
  LPC_GPIO->FIODIR |= 0xFF<<19;
  while(1)
  {
    LPC_GPIO->FIOCLR =0xFF;
    LPC_GPIO->FIOSET =led;
    delay(100);
    if(dir)
    {
      led <<=1; //forward ,rightshift
    }
    else
    {
      led >>=1; //reverse,leftshift 
    }

    if(led==(1<<26))
    {
      dir=0;
    }
    else if(led==(1<<19))
    {
      dir=1;
    }
  }
  return 0;
}

void delay(uint32_t ms)
{uint32_t i,j;
  for(i=0;i<ms;i++)
  {
    for(j=0;j<10000;j++)
    {
      
    }
  }
}