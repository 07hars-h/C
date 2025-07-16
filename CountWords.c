#include <stdio.h>
#include <ctype.h>
 
int main()
{
	int Words_Numbers = 0 ;
	char c[100];
	printf("Enter A String To Find The Total Number Of Words : ");
	scanf("%[^\n]",&c);
	for(int i = 0 ; c[i] != '\0';i++)
	{
		if(c[i] == ' ')
		{
            Words_Numbers++;
		}
	}

	printf("%d",Words_Numbers+1);
	return 0;
}