#include<lpc21xx.h>
extern void delay_sec(unsigned int sec);
extern void delay_ms(unsigned int ms);
extern void uart0_init(unsigned int baud);
extern void uart0_tx(unsigned char data);
extern void uart0_tx_string(char *p);
extern void uart0_rx_string(char *p,int a);
extern int uart0_strcmp(char *p,char *q);
extern void uart0_integer(int num);
extern void uart0_float(float num);
extern void adc_init(void);
extern unsigned char adc_read(unsigned char ch_num);


typedef unsigned int u32;
typedef int s32;
typedef char s8;
typedef unsigned char u8;
extern void uart0_integer(int num);
extern float temperature_read(void);
extern unsigned int ldr_read(void);
extern unsigned int water_level_read(void);
extern unsigned int soil_sensor(void);

