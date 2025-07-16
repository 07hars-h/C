#include <stdio.h>

float multi(float x, float y);



int main()
{
    float a , b;
    float c;
    printf("Enter Two Floating Numbers :\n");
    scanf("%f %f",&a , &b);
    c = multi(a , b);
   printf("Multiplication is :%f",c);

    return 0; 
}












float multi(float x, float y)
{
    float add = x * y; 
    return add; 
}