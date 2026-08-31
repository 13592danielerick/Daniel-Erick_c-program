#include <stdio.h>
int main(){
    float number;
    float largest;
    int x;
    

    printf("Enter five numbers: ");
    scanf("%f", &largest);
    for(x=1; x<5; x++){
        scanf("%f", &number);
        if(number > largest){
            largest = number;
        }
    }
    
    printf("The largest number is: %.2f\n", largest);
}
