/* Body Mass Index (BMI) */
/* According to the Center for Disease Control (CDC) */
#include <stdio.h>
#include <string.h>
#include "cbmi.h"

int main(){
    /* Enter Weight */
    float w;
    do {
    printf("Weight in kg: ");
    w = getFloat();
    if (w < 0)
    printf("I doubt that.\n");
    }
    while(w < 0);
    
    /* Get Height */
    float h;
    do {
        printf("Height (cm): ");
        h = getFloat();
        if (h < 0)
        printf("I doubt that.\n");
    }
    while (h < 0);
    
    float BMI = calculateBMI(h, w);
    
    char l[15];
    if (category(BMI) == 1){
        strcpy(l, "underweight");
    }
    else if (category(BMI) == 2){
        strcpy(l, "normal");
    }
    else if ( category(BMI) == 3){
        strcpy(l, "overweigh");
    }
    else{
        strcpy(l, "obese");
    }
    printf("You are %s.\n", l);
    return 0;
}
