#include <ctype.h>
#include <stdio.h>
#include <string.h>

int Calcuatescore(char *a);
int main(void)
{

   char W1[100],W2[100];
   printf("Player 1 :");
   scanf("%s",&W1);
   printf("Player 2 :");
   scanf("%s",&W2); 

  int Point1 = Calcuatescore(W1);
  int Point2 = Calcuatescore(W2);
  if(Point1 > Point2)
  {
    printf("Player 1 Wins! %d",Point1);
  }
  else if ( Point1 == Point2 )
  {
    printf("Tie! %d , %d ",Point1,Point2);
  }
  else
  {
   printf("Player 2 Wins! %d",Point2);
  }
printf("\n");
}




int Calcuatescore(char *a)
{
   char letters[26] = {'A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T',
                        'U','V','W','X','Y','Z'};
   int values[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
   int points = 0;

  for(int i = 0 ; a[i] != '\0';i++)
   {

      for(int j = 0 ; j <= 26 ; j++)
      {
         if(toupper(a[i]) == letters[j])
         {
            points = points + values[j];
         }
      }

   }
 return points;
}
