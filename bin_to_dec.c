#include<stdio.h>
int binaryToDecimal(long);
int binaryToDecimal(long bin)
{
    int dec = 0,base=1, rem;
    while (bin!=0)
    {
        rem = bin % 10;
	dec=dec+rem*base;
        bin = bin / 10;
        base=base*2;
    }
    return dec;
}

int main()
{
    long bin;
    printf("Enter a binary number\n");
    scanf("%ld", &bin);
    printf("the decimal number is %d\n", binaryToDecimal(bin));
    return 0;
}
