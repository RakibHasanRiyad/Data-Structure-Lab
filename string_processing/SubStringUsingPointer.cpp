#include <stdio.h>
#include <stdlib.h>

char* substring(char*, int, int);

int main()
{
   char string[100], *p;
   int position, length;

   printf("Input a string\n");
   gets(string);

   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);

   p = substring(string, position, length);

   printf("Required substring is \"%s\"\n", p);

   free(p);

   return 0;
}

/*C substring function: It returns a pointer to the substring */



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
