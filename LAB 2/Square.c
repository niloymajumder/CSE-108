#include<stdio.h>
int main(){
    float side, area_Square; 
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area_Square=side*side; //square area formula
    printf("The area of Square is: %.2f", area_Square);

    return 0;
}