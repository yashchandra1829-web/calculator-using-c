#include<stdio.h>

int main(){
    int a,b;
    char op;
    float sum;
    printf("Entre the first number : \n ");
    scanf("%d",&a);
    printf("Enter the operator(+,-,*,/) : \n");
    scanf(" %c",&op);
    printf("Enter the second number : \n");
    scanf("%d",&b);

    switch(op){
        case '+':
        sum = a + b;
        printf("The sum is : %d",sum);
        break;
        
        case '-':
        sum = a - b;
        printf("The difference is : %d",sum);
        break;

        case '*':
        sum = a * b;
        printf("The multiplicaion is %d",sum);
        break;

        case '/':
        if(b == 0){
            printf("Undefined");
        }
        else{
            sum = a / b;
            printf("The division is : %f",sum);
        }
        break;
        
        default:
        printf("Invalid Operator!!");
    }
    return 0;
}