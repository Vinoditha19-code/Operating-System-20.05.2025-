//Example 8
/*Writ a C program that takes a binary number(as an integer) as input and convert it to its decimal equvalent*/

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

int main() {
    int binary;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
    
    return 0;
}
