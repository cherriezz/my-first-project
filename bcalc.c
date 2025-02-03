#include<stdio.h>
int main(){

 int num1,num2,choice, result;
 do{
    printf("\nWelcome Charitha\n\n");
    printf("1.Select one for Addition\n");
    printf("2.Select one for Subtraction\n");
    printf("3.Select one for Multiplication\n");
    printf("4.Select one for Division\n");
    printf("5.Select one for Modulus\n");
    printf("6.Exit\n");

    printf("Select the operation to continue with the calculation:");
    scanf("%d",&choice);

    if(choice>=1 && choice<=5){
        printf("\nEnter two numbers\n");
        printf("Num1:");
        scanf("%d",&num1);
        printf("Num2:");
        scanf("%d",&num2);

        switch(choice){
        case 1:
            result=num1+num2;
            printf("%d\n",result);
            break;
        case 2:
            result=num1-num2;
            printf("%d\n",result);
            break;
        case 3:
            result=num1*num2;
            printf("%d\n",result);
            break;
        case 4:
            result=num1/num2;
            printf("%d\n",result);
            break;
        case 5:
            result=num1%num2;
            printf("%d\n",result);
            break;
        default:
            printf("Invalid! Re-enter the valid choice:\n");
        }
        }else if(choice==6){
            printf("Exiting..\n");
            break;
        } else {
            printf("Invalid!");
        }
 }
 while(1);
        return 0;

    }

