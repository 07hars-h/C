#include<stdio.h>
int main()
{
	char str1[20] = "Hello";
	char str2[20] = "World";
	int i = 0 , j = 0;

    while(str1[i] != '\0')
    {
    	i++;
    };

    while(str2[j] != '\0')
    {   
        i++;
        j++;
    	str1[i] = str2[j];
    	
    };
    str1[i] = '\0';
    printf("String is %s\n ",str1);
 	return 0;

}