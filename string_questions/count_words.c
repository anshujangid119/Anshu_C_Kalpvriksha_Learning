#include <stdio.h>

int main() {
   char str[50];
   int count = 1;
   printf("Enter a string: ");
   gets(str);
   for (int i = 0; str[i]; i++) {
      if (str[i] == ' ') {
          if(str[i+1]!='\0')
          {
              count++;
          }
      }
   }
   printf("Number of words: %d\n", count);
   return 0;
}
