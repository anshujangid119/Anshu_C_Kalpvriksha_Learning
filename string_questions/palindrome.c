#include <stdio.h>
#include <string.h>
  
int main()
{
    char str[50];
    gets(str);
    int s = 0;
    int e = strlen(str) - 1;
    while (e > s) {
        if (str[s++] != str[e--]) {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);
    return 0;
}