#include <stdio.h>
int main(){
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    int grade;
    printf("Enter grade");
    scanf("%d",&grade);
    
    if (age<=18){
        if(grade<=39){
            printf("FAILED");
        }else{
            printf("PASSED");
        }
    }
   
}


































































































// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter a Age: ");
//     scanf("%d",&age);
//     int Marks;
//     if (age <=18){
//         if (Marks<=39){
//             printf("You have failed");
//         }else if (Marks>=40 && Marks<=59){
//             printf("You have passed");
//         }else{
//             printf("Invalid Marks");
//         }

//     }
// }