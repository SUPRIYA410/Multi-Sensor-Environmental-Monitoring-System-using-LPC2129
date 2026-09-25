#include"header.h"
#define DONE ((ADDR>>31)&1)
void adc_init()
{
PINSEL1|=0x15400000;
ADCR=0x00200400;
}

unsigned char adc_read(unsigned char ch_num)
{
unsigned int result=0;
ADCR|=(1<<ch_num);
ADCR|=(1<<24);
while(DONE==0);
ADCR^=(1<<24);
ADCR^=(1<<ch_num);
result=(ADDR>>6)&0x03ff;
return result;
}

