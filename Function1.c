#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    float list[] = {1, 2 ,4, 5, 7, 8};
    float average = ((list[0] + list[1] + list[2] + list[3] + list[4] + list[5]) / 6);

   float std = (sqrt(((list[0] - average) * (list[0] - average) + (list[1] - average) * (list[1] - average) + 
   (list[2] - average) * (list[2] - average) + (list[3] - average) * (list[3] - average) + 
   (list[4] - average) * (list[4] - average) + (list[5] - average) * (list[5] - average)) / 6)); 


    printf("std is: %.2f", std);


    return 0;
}