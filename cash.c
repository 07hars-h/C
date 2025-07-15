#include <stdio.h>
#include <conio.h>
int main()
{
    int change = 0;
    int coins = 0;
    do
    {
      printf("Change Owed: ");
      scanf("%d",&change);
    }
    while (change < 0);

     coins = change + coins/25 ;
     change = change % 25;

     coins = change + coins/10 ;
     change = change % 10;

     coins  = change + coins/5 ;
     change = change % 5;

     coins = change + coins/1 ;
     change = change % 1;


    printf("%i",coins);
    getch();
    return 0;
}
