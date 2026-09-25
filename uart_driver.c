#include<lpc21xx.h>
#include"header.h"
void uart0_init(unsigned int baud)
{
int pclk,result=0;
if(VPBDIV==0x0)
pclk=15000000;
else if(VPBDIV==0x01)
pclk=60000000;
else if(VPBDIV==0x02)
pclk=30000000;
result=pclk/(16*baud);
PINSEL0|=0x5;
U0LCR=0x83;
U0DLL=(result&0xff);
U0DLM=((result>>8)&0xff);
U0LCR=0x03;
}
#define THRE ((U0LSR>>5)&1)
void uart0_tx(unsigned char data)
{
U0THR=data;
while(THRE==0);
}
#define RDR (U0LSR&1)
unsigned char uart0_rx()
{			
while(RDR==0);
return U0RBR;
}											            
void uart0_tx_string(char *p)
{
while(*p!='\0')
{
uart0_tx(*p);
p++;
}
}
void uart0_binary(int num)
{
int pos,temp;
for(pos=7;pos>=0;pos--)
{
temp=(num>>pos&1);
uart0_tx(temp+48);
}
}
void uart0_rx_string(char *p,int a)
{
int i=0;
char ch;
for(i=0;i<a;i++)
{
while(RDR==0);
ch=U0RBR;
uart0_tx(ch);
p[i]=ch;
if(p[i]=='\r')
break;
}
p[i]='\0';
}
int uart0_strcmp(char *p,char *q)
{
int i;
for(i=0;p[i];i++)
if(p[i]!=q[i])
break;
return p[i]-q[i];
}
void uart0_integer(int num)
{
int a[10],i=0;
if(num==0)
uart0_tx('0');
if(num<0)
{
num=-num;
uart0_tx('-');
}
while(num>0)
{
a[i]=(num%10)+48;
num=num/10;
i++;
}
for(i=i-1;i>=0;i--)
uart0_tx(a[i]);
}

void uart0_float(float num)
{
int a[20],n1,fra,i;
if(num==0)
{
uart0_tx('0');
}
if(num<0)
{
num=-num;
uart0_tx('-');
}
n1=(int)num;
fra=(num-n1)*100;
i=0;
while(n1>0)
{
a[i]=n1%10+48;
n1=n1/10;
i++;
}
for(i=i-1;i>0;i--)
{
uart0_tx(a[i]);
}
uart0_tx('.');
i=0;
while(fra>0)
{
a[i]=fra%10+48;
fra=fra/10;
i++;
}
for(i=i-1;i>=0;i--)
uart0_tx(a[i]);
}
void uart0_tx_integer(int num)
{
char a[10];
int i;
if(num<0)
{
uart0_tx('-');
num=-num;
}
if(num==0)
{
uart0_tx('0');
return;
}
for(i=0;num;num=num/10,i++)
a[i]=num%10+48;
for(--i;i>=0;i--)
uart0_tx(a[i]);
}

