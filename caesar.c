#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ctext(int k, char *pl)
{
    int i;
    char *ct = malloc(strlen(pl + 1));
    for (i = 0; pl[i] != '\0'; i++)
    {

        if (isalpha(pl[i]))
        {
            if (isupper(pl[i]))
            {
                ct[i] = (((pl[i] - 'A' + k) % 26) + 'A');
            }
            else
            {
                ct[i] = (((pl[i] - 'a' + k) % 26) + 'a');
            }
        }
        else
        {
            ct[i] = pl[i];
        }
    }
    ct[i] = '\0';
    return ct;
}
int isnumber(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            count++;
        }
    }
    if (count == strlen(str))
    {
        return 1;
    }
    return 0;
}

int main(int argv, char *argc[])
{
    if (argv != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (!isnumber(argc[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(argc[1]);
    char pt[100];
    printf(" Plaintext: ");
    fgets(pt, sizeof(pt), stdin);
    pt[strcspn(pt, "\n")] = '\0';
    char *ct = ctext(key, pt);
    printf("Ciphertext: %s\n", ct);
    free(ct);
    return 0;
}
