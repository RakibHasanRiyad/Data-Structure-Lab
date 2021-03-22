#include <stdio.h>
int string_length(char*);

int main()
{
  char s[100];

  gets(s);

  printf("Length = %d\n", string_length(s));

  return 0;
}

int string_length(char *s) {
  if (*s == '\0') // Base condition
    return 0;

  return (1 + string_length(++s));
}
