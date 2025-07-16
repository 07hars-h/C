#include <stdio.h>


int check_triangle(int a, int b, int c);


int main(void)
{
    int x, y, z;
    printf("Enter Three Number:   ");
    scanf("%d %d %d",&x , &y , &z);
    
    int t = check_triangle(x, y, z);
    if (t == 0)
    {
        printf("Triangle is Valid!");
    }
    else 
    {
        printf("Triangle is not Valid!");
    }
   getchar("");
}
int check_triangle(int a, int b, int c)
{
    if ( a > 0 && b > 0 && c > 0 ) 
    {   
        int u = a + b; 
        if ( u > c)
        {
            return 0;
        }
    }
   return 1;
}