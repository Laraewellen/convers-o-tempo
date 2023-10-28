#include <stdio.h>

float converter(float tempfar);

int main(void){
    float tempfar, tempcel;

    printf("Temp. em Fahrenheit: ");
    scanf("%f", &tempfar);

    tempcel = converter(tempfar);

    printf("Em celsius %f", tempcel);

    return 0;
}
    float converter(float tempfar){
    float tempcel;
    tempcel =((tempfar-32)*5/9);
    return tempcel;
}
