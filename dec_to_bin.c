#include <stdio.h>

long decimalToBinary(int dec)
{
    long bin = 0;
    int rem, temp = 1;

    while (dec!=0)
    {
        rem = dec%2;
        dec = dec / 2;
        bin = bin + rem*temp;
        temp = temp * 10;
    }
    return bin;
}

int main()
{
    int dec;
    printf("Enter a Decimal Number\n");
    scanf("%d", &dec);
    printf("Equivalent Binary Number is %ld\n", decimalToBinary(dec));
    return 0;
}
