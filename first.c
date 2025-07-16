#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a;
    do 
    {
        printf("Height: ");
        scanf("%d",&a);
    
    }
    while( a < 1 || a > 8 );
    getch();
    return 0;
}