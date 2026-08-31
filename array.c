#include <stdio.h>
int main(){
    // int array[5];//Array (numbers) store 5 integers
    // float prices[10];//array to store 10 float prices
    // char name[20];//array to contain 20 
    

    int scores[5]= {81,92,33,44,55};
    printf("These are an example in an array \n %d\n %d\n %d\n %d\n %d\n",
        scores[0],scores[1],scores[2],scores[3],scores[4]);

    // float prices[10]={1.6,2.4,3.7,4.5,5.9,6.4,7.8,8.9,9.1,10.2};
    // printf("These are an example in an array \n %f\n %f\n %f\n%f\n %f\n %f\n %f\n %f\n %f\n %f\n",
    //     prices[0],prices[1],prices[2],prices[3],prices[4],prices[5],prices[6],prices[7],prices[8],prices[9]);

    int studentScores[]={1,2,3,4,5,
        6,7,8,9,10};
    printf("%d %d %d %d %d %d ",
        studentScores[0],studentScores[1]
        ,studentScores[2],studentScores[3]
        ,studentScores[4],
        studentScores[5],studentScores[6]);
        


return 0;
}