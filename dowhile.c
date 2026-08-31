#include <stdio.h>
int main() {
    int x;
    do {
        printf("Enter a number:");
        scanf("%d", &x);
        printf("%d\n", x);
        if(x%2==0){
            printf("Even number\n");
        }else{
            printf("Odd number\n");
        }
    } while (x != 0);
}