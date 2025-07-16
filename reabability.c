#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef char* string;
float count_letters(string text);
float count_words(string text);
float count_sentences(string text);

int main(void)
{
    float L = 0, S = 0;
    char buffer[100];
    printf("Test :\n");
    scanf("%[^\n]",&buffer);
    string text = buffer;
    L = ((float) count_letters(text) / count_words(text)) * 100;
    S = ((float) count_sentences(text) / count_words(text)) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int points = round(index);
    if (points < 1)
    {
        printf("Before Grade 1");
        printf("\n");
    }
    else if (points > 16)
    {
        printf("Grade 16+");
        printf("\n");
    }
    else
    {
        printf("Grade %d", points);
        printf("\n");
    }
    return 0;
}

float count_letters(string text)
{
    float leanth_cout = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            leanth_cout++;
        }
    }
    return leanth_cout;
}

float count_words(string text)
{
    float Words_Numbers = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            Words_Numbers++;
        }
    }

    return Words_Numbers + 1;
}
float count_sentences(string text)
{
    float sentence_cout = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_cout++;
        }
    }

    return sentence_cout;
}
