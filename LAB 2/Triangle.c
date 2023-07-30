#include<stdio.h>
int main(){
    float base, height, area_Triangle;
    printf("Enter a base:");
    scanf("%f", &base);
    printf("Enter height value: ");
    scanf("%f", &height);
    area_Triangle= (base * height)/2;
    printf("Area of Triangle is: %.4f", area_Triangle);
    return 0;
    }