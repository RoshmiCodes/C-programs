//Convert a Decimal Number to Binary, Octal, and Hexadecimal
#include <stdio.h>

int main()
{
    int decimal, copy, d;
    int binary = 0, octal = 0, place = 1;
    char hex[100];
    int i = 0;

    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d", &decimal);
    // Binary
    copy = decimal;
    place = 1;
    while (copy > 0)
    {
        d = copy % 2;
        binary += d * place;
        place *= 10;
        copy /= 2;
    }
    printf("THE BINARY EQUIVALENT: %d\n", binary);
    // Octal
    copy = decimal;
    place = 1;
    while (copy > 0)
    {
        d = copy % 8;
        octal += d * place;
        place *= 10;
        copy /= 8;
    }
    printf("THE OCTAL EQUIVALENT: %d\n", octal);
    // Hexadecimal
    copy = decimal;
    while (copy > 0)
    {
        d = copy % 16;
        if (d < 10)
            hex[i] = d + '0';
        else
            hex[i] = d - 10 + 'A';
        i++;
        copy /= 16;
    }
    hex[i] = '\0';  // null-terminate the string
    printf("THE HEXADECIMAL EQUIVALENT: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}