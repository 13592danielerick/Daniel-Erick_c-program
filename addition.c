#include <stdio.h>
int main(){
    int x;
  
    for(x=1;x<5;x+=1){
        printf("The numbers from 1 to 4 are:\n");
        printf("%d\n",x);
        scanf("%d",&x);
    }
}