#include <stdio.h>
#include <string.h>

typedef struct 
{
	char *name ;
	char *number;
}person;

int main(void)
{
    person people[3];

    people[0].name = "Hash";
    people[0].number = "133";
    people[1].name = "Amol";
    people[1].number= "33234";
    people[2].name = "Jati";
    people[2].number = "237";
    
    char name[100];
    printf("Name: ");
    scanf("%99s",name);
    for(int i = 0; i < 3 ; i++)
    {
    	if(strcmp(people[i].name, name) == 0 )
    	{
    		printf("Found:  %s\n",people[i].number);
    		return 0;

    	}
    }
    printf("Not Found");
    return 1;

}