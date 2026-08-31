#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter First numbers:");
    scanf("%d",&num1);
    printf("Enter Second numbers:");
    scanf("\n%d",&num2);

    if(num1>num2){
        printf("%d is greater than %d\n",num1,num2);
    }else if(num1<num2){
        printf("%d is less than %d\n",num1,num2);
    }else{
        printf("%d is equal to %d\n",num1,num2);
    }
} 