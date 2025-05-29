Basic C Programs:
Here are a few simple C programs to get started:

1.//Print Hello, World!
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

2. //Adding Two Numbers
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}

3. //Checking Even or Odd
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    
    return 0;
}

4. //Finding factorial
 #include <stdio.h>

long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld\n", num, factorial(num));
    return 0;
}

5. //Finding Fibonacci
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
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

6 //Finding LCD
#include <stdio.h>

int lcd(int a, int b) {
    int min = (a < b) ? a : b;
    while (min > 0) {
        if (a % min == 0 && b % min == 0) return min;
        min--;
    }
    return 1;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCD of %d and %d is %d\n", a, b, lcd(a, b));
    return 0;
}

7. //Checking palindrome
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) printf("%s is a palindrome.\n", str);
    else printf("%s is not a palindrome.\n", str);
    return 0;
}

8. //Finding GCM
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("GCM (LCM) of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

9. //switch case
#include <stdio.h>

int main() {
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        case 3:
            printf("You chose option 3\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

10. //for loop
#include <stdio.h>

int main() {
    printf("Counting 1 to 5 using for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}


11. //while loop
#include <stdio.h>

int main() {
    int num = 1;
    printf("Counting 1 to 5 using while loop:\n");
    while (num <= 5) {
        printf("%d ", num);
        num++;
    }
    printf("\n");
    return 0;
}

12. //Do while Loop 
#include <stdio.h>

int main() {
    int num = 1;
    printf("Counting 1 to 5 using do-while loop:\n");
    do {
        printf("%d ", num);
        num++;
    } while (num <= 5);
    printf("\n");
    return 0;
}

13. //Nested Loop
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

14. 

