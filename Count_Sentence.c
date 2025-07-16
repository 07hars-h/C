#include <stdio.h>
#include <ctype.h>
int main()
{
		int sentence_cout = 0 ; 
		char a[100];
			printf("Enter Sentence : ");
			scanf("%[^\n]",&a);
				for(int i = 0; a[i] != '\0';i++)
				{
					if (a[i] == '.' || a[i] == '!' || a[i] == '?') 
					{
						sentence_cout++;
					}
				}
			printf("Sentence Cout %d",sentence_cout);
	return 0;
}