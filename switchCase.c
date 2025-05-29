//switch function
#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
		case 4:
            printf("Wednesday\n");
            break;
		case 5:
            printf("Thursday\n");
            break;
		case 6:
            printf("Fiday\n");
            break;
		case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid number\n");
    }
    return 0;
}

/* Q1. Write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number.(use switch case)
example: 
date 23: 

calculation for life path number 
		a = date%10  3
		b = date/10  2
		c = a+b      5

if life number :
		1: Lucky 
		2. Carefuly do your work
		3. Storger
		4. Happy
		5. Can get Help
		6. Doubt
		7. Sad
		8. Like
		9. Courage
*/ 

#include<stdio h>

int main(){
	int date, a, b, num;
	
	printf("Enter Your Birth date");
	scanf("%d",&date);

			a = date % 10; 
			b = date / 10; 
			num = a + b;


switch (num)
{
	case 1:
		printf("Lucky");
		break;
		
	case 2:
		printf("Carefuly do your work");
		break;
		
	case 3:
		printf(" Storger");
		break;
		
		
	case 4:
		printf("Happy");
		break;
		
		
	case 5:
		printf("Can get Help");
		break;
	
	case 6:
		printf("Doubt");
		break;
	
	case 7:
		printf("Courage");
		break;
	
	case 8:
		printf("Lucky");
		break;
	
	case 9:
		printf("Lucky");
		break;
		
	default 
		printf("Invalid");
}
return 0;	
		

}
