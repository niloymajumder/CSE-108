#include<stdio.h>
int main() {
    float width, length, area;

    printf("Enter a width: ");
    scanf("%f", &width);
    printf("Enter a length: ");
    scanf("%f", &length);
    area = width * length; //rectangle area formula
    printf("The area of rectangle is = %.2f\n", area);

    return 0;
}
