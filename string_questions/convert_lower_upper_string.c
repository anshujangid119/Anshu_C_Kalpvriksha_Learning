#include <stdio.h>
#include <string.h>
int main() {
   char str[50];
   printf("Enter a string: ");
   gets(str);
   for (int i = 0; str[i]; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] - 'a' + 'A';
      }
   }
   printf("Uppercase: %s\n", str);
   for (int i = 0; str[i]; i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
         str[i] = str[i] - 'A' + 'a';
      }
   }
   printf("Lowercase: %s\n", str);
   return 0;
}
