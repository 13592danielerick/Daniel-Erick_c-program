#include <stdio.h>
int main(){
    int x=1;
    for(int x=0;x<10;x++){
        printf("Enter a number: ");
        scanf("%d", &x);
        printf("Entered number is:%d\n", x);
        if(x%2==0){
            printf("Even number");
        }else {
            printf("Odd number");
        }
    }
}