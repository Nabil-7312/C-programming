#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter Operator[+,-,*,/]:");
    scanf("%c",&op);
    switch(op){
        case '+':
          printf("Result:%d",a+b);
          break;
        case '-':
          printf("Result:%d",a-b);
          break;
        case '*':
          printf("Result:%d",a*b);
          break;
        case '/':
          if(b!=0){
            printf("Result:%d",a/b);
            break;
          }
          else{
            printf("Zero Division Error.");
          }
          break;
        default:
          printf("Invalid Operator!");
    }
}