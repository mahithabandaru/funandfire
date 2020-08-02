#include<stdio.h>
main()
{
int a,b;
printf("\n Enter the values of a and b");
scanf("%d %d",&a,&b);
printf("The values before swapping\n");
printf("a=%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("The values after swapping \n");
printf("a=%d,b=%d",a,b);
return 0;
}
