#include <stdio.h >   
#define PI 3.141  
int main()   
{  
    float radius, area;  
    printf("Enter radius of circle:");  
    scanf("%f", & radius);  
    area = PI * radius * radius;  // circle area formula
    printf("Area of circle : %0.4f\n", area); 
    return 0;  
}   