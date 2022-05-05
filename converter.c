#include <stdio.h>
#include <string.h>

int getDecimalValue(char c) {
    int decimal = 0;
    if (c >= '0' && c <= '9') {
        decimal = c - 48;
    } else if (c >= 'a' && c <= 'f') {
        decimal = c - 87;
    } else if (c >= 'A' && c <= 'F') {
        decimal = c - 55;
    }
    return decimal;
}


int main(void)
{
    int length;
//    char sample[11] = "68656c6c6f";
//    char sample[] = "5961776E";
    char sample[] = "63686F6D70";
//    printf("%s\n", sample);
    length = strlen(sample);
    char result[length/2];

    for (int j = 0; j <= length; j+=2)
    {
        int dec1 = getDecimalValue(sample[j]) * 16;
        int dec2 = getDecimalValue(sample[j+1]);
//        printf("%d\n", dec1);
//        printf("%d\n", dec2);
        int dec = dec1 + dec2;
        strcat(result, &dec);
    }
            printf(result);
    return 0;
}