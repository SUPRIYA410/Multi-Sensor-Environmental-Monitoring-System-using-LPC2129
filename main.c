#include<lpc21xx.h>
#include"header.h"
#define RED_LED (1<<17)
#define GREEN_LED (1<<18)
#define YELLOW_LED (1<<19)

int main()
{
float temp;
unsigned int light,soil,water;

IODIR0|=RED_LED|YELLOW_LED|GREEN_LED;
uart0_init(9600);
adc_init();
while(1)
{
uart0_tx_string("\r\n====MULTI SENSOR ENVIRONMENTAL MONIROTING===\n");


temp=temperature_read();
light=ldr_read();
water=water_level_read();
soil=soil_sensor();

uart0_tx_string("Temperature:");
uart0_float(temp);
uart0_tx_string("C\r\n");


uart0_tx_string("Light Level:");
if(light<30)
uart0_tx_string("LOW\r\n");
else
uart0_tx_string("NORMAL\r\n");


uart0_tx_string("Soil Moisture:");
uart0_integer(soil);
uart0_tx_string("%\r\n");


if(water==1)
uart0_tx_string("Water Detected\r\n");
else
uart0_tx_string("Water not Detected\r\n");


if(temp>40||water==1)
{
uart0_tx_string("system status: ALERT\r\n");
IOCLR0=RED_LED;
uart0_tx_string("LED status:RED\r\n");
}
else if(light<30 || soil<30)
{
uart0_tx_string("system status :WARNING\r\n");
IOSET0=YELLOW_LED;
uart0_tx_string("LED status: YELLOW\r\n");
}
else
{
uart0_tx_string("system status:SAFE\r\n");
IOSET0=GREEN_LED;
uart0_tx_string("LED status: GREEN\r\n");
}
delay_ms(500);
}
}

