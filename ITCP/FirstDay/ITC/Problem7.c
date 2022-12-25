#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char hexa [100];
    int i,len;
    int j=0, sum=0;

    printf("Enter any string: ");
    scanf("%s",&hexa);

    len=strlen(hexa);

    for (i=len-1; i>=0; i--)
    {
        if (hexa[i]>='0'&&hexa[i]<='9')
        {
            sum=sum=(hexa[i]-48)*pow(16,j);
            j++;
        }
    }
    printf("The integer of the string is: %d", sum);

    return 0;
}
