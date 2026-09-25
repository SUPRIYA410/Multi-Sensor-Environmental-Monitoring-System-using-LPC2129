#include<lpc21xx.h>
#include"header.h"

float temperature_read(void)
{
unsigned int adc_value;
float vout, temp;
adc_value=adc_read(1);
vout=(adc_value*3.3)/1023;
temp=vout*100;
return temp;
}

unsigned int ldr_read(void)
{
unsigned int adc_value;
unsigned int light;
adc_value=adc_read(2);
light=(adc_value*100)/1023;
return light;
}

unsigned int water_level_read(void)
{
if(IOPIN0&(1<<5))
return 1;
else
return 0;
}

unsigned int soil_sensor(void)
{
unsigned int adc_value;
unsigned int soil;
adc_value=adc_read(3);
soil=(adc_value*100)/1023;
return soil;

}

