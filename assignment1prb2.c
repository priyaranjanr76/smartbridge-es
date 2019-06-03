#include <stdio.h>
int main()
{
    int a;
    printf("enter the temperature in centigrades :" );
    scanf("%d",&a);
    int c=(a*9/5)+32;
    printf("the temperature in fahrenheit is %d ",c);
}
