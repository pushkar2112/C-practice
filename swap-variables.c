//
// Created by Pushkar on 10-09-2021.
//

#include <stdio.h>

int main(){
    int x = 10;
    int y= 20;
    printf("Before swap\n");
    printf("First variable is: %d \n",x);
    printf("Second variable is: %d \n",y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap:\n");
    printf("First variable is: %d \n",x);
    printf("Second variable is: %d \n",y);

    return(0);
}