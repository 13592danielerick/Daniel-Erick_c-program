#include <stdio.h>

int main() {
    double number;
    double largest;
    int x;
    
    printf("Enter 5 numbers:");
    
    
    if(
        scanf("%lf", &largest) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    
    
    for(x= 1; x< 5; x+=1) {
        if(
            scanf("%lf", &number) != 1) {
            printf("No Large number\n");
            return 1;
        }
        if(number > largest) {
            largest = number;
        }
    }
    
    printf("\nThe largest number is: %.2f\n", largest);
    return 0;
}