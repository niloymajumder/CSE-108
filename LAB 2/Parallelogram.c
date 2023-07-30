#include <stdio.h>
int main(){
    float base, height, areaPara;
    printf("Enter the base and height: ");
    scanf("%f %f", &base, &height);
    areaPara = base * height; //calculation formula
    printf("Area of parallelogram : %0.4f\n",areaPara);
    return 0;
}