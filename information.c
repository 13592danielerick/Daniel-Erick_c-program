# include <stdio.h>
int main (){

  char name [20];
  printf("Enter your Name:");
  scanf("%s", name);

  int age ;
  printf("Enter your age :");
  scanf("%d",&age);

  int isStudent = 1 ;
  printf("Are you a student 1/0 :");
  scanf("%d",&isStudent);

  int num1, num2, num3, sum;
  printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

  printf("Your name is: %s \n", name);
  printf("Your age is:%d \n",age);
  if (isStudent) {
  printf("You are a student. \n");
} else {
  printf("You are not a student. \n");
}


    sum = num1 + num2 + num3;
    printf("The sum is: %d\n", sum);

  return 0;
}
