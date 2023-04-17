#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char* str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int countConsonants(char* str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char c = tolower(str[i]); 
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[] = "Hello World!";
    
    int numVowels = countVowels(str);
    int numConsonants = countConsonants(str);
    
    printf("Number of vowels in the string: %d\n", numVowels);
    printf("Number of consonants in the string: %d\n", numConsonants);
    
    return 0;
}

