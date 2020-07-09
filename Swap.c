#include<stdio.h>
int main()
{
int a=10,b=5;
printf("Number before swapping \n");
printf("First number - %d \n",a);
printf("Second number - %d \n",b);
a=a-b;
b=b+a;
printf("Number after swapping \n");
printf("First number - %d \n",a);
printf("Second number - %d \n",b);
return 0;
}
