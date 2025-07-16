
#include<stdio.h>

int main()
{   char c; 
    int dollar = 1;
 while(1)
{      
        printf("Here's a $%d Double it and give it to the next Poerson?", dollar);
        scanf(" %c",&c);
        if (c == 'y')
        {
            dollar = dollar * 2 ;
        }
        else
        {
            break;
        }
 
 printf("Here's $%d \n", dollar );
}
 return 0 ;
}

