#include <stdio.h>
#include <stdlib.h>
#include"Bit_Math.h"
/*typedef enum LED_St
{
    LED_OFF,LED_ON
}st;
void LED_Status(st LED)
{
    switch(LED)
    {
    case LED_OFF:
        printf("off");
        break;
    case LED_ON:
        printf("on");
        break;
    }
}*/
void print_Bin(char a)
{
    char no = sizeof(a)*7;
    while(no>=0)
    {
        printf("%d",(a>>no)&1);
        no--;
    }
    printf("\n");
}
int calculate_the_maximum(int n, int k)
{
    int i,max_and = 0,max_or = 0,max_xor = 0,temp,x;
    for(i=1;i<n;i++)
    {
        for(x=n;x>i;x--)
        {
        temp = i&x;
        if(temp>=k)
            temp=0;
        if(temp>max_and)
            max_and = temp;
    }
}
    printf("%d \n",max_and);
for(i=1;i<n;i++)
    {
        for(x=n;x>i;x--)
        {
        temp = i|x;
        if(temp>=k)
            temp=0;
        if(temp>max_or)
            max_or = temp;
        }
    }
    printf("%d \n",max_or);
for(i=1;i<n;i++)
    {
        for(x=n;x>i;x--)
        {
        temp = i^x;
        if(temp>=k)
            temp=0;
        if(temp>max_xor)
            max_xor = temp;
        }
    }
    printf("%d \n",max_xor);
}
int main()
{
    int n,k;
    printf("Please enter n: \n");
    scanf("%d",&n);
    printf("Please enter k: \n");
    scanf("%d",&k);
    calculate_the_maximum(n,k);
//    print_Bin(z);
    /*unsigned char x = 5;
    //int max = max_ones(x);
    //printf("%d",max);
    print_Bin(x);
    x = (x|((get_bit(x,0))<<7))>>1;
    x = (get_bit(x,0)) << 7) | (x >> 1);
    print_Bin(x);
    //printf("%d",x);*/
//    st LED1 = LED_OFF;
   // LED_Status(LED1);
}
