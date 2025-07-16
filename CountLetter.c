#include <stdio.h>
#include <ctype.h>
int main()
{
	
	char c[100];
	printf("Enter A string : ");
	scanf(" %[^\n]", c);
    int leanth_cout = 0;
	for(int i = 0 ; c[i] != '\0'; i++)
	{
		if (isalpha(c[i]))
		{
			leanth_cout++;
		}
        
	}
	printf("Number Of Words :%d",leanth_cout);

	return 0;
}	