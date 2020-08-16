#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
static int m=0;
m=m+b;
 
    if (m % a == 0 && m % b == 0)
        return m;

    return lcm(a,b);
}
