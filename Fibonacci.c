/* write a c programe to generate and print the fibonnaci series up to the a specified number of terms. the program should take the number of terms as input from the user and then display the corresponding Fibonacci series*/

#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}