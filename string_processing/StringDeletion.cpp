#include <stdio.h>
#include <conio.h>
#include <string.h>

void delchar(char *x,int a, int b);

int main()
{
     char string[10];
     int n,pos,p;
     //clrscr();

     puts("Enter a string :");
     gets(string);
     printf("Enter the position from where you want to delete:");
     scanf("%d",&pos);
     printf("Enter the number of characters to be deleted :");
     scanf("%d",&n);
     delchar(string, n,pos);
     getch();
}

// Function to delete n characters
void delchar(char *x,int a, int b)
{
  if ((a+b-1) <= strlen(x))
  {
    strcpy(&x[b-1],&x[a+b-1]);
    puts(x);
    }
}
