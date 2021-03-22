#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include<stdlib.h>

char* substring(char*, int, int);

int main()
{
   char string[100], *p;
   int position = 1, length = 1, t, string_length;

   printf("Enter a string\n");
   gets(string);

   t = string_length = strlen(string);

   printf("Substring of \"%s\" are\n", string);

   while (position <= string_length)
   {
      while (length <= t)
      {
         p = substring(string, position, length);
         printf("%s\n", p);
         free(p);
         length++;
      }
      t--;
      position++;
      length = 1;
   }

   return 0;
}



char *substring(char *string, int position, int length)
{
   char *p;
   int c;

   p = (char*) malloc(length+1);

   if (p == NULL)
   {
      printf("Unable to allocate memory.\n");
      exit(1);
   }

   for (c = 0; c < length; c++)
   {
      *(p+c) = *(string+position-1);
      string++;
   }

   *(p+c) = '\0';

   return p;
}
