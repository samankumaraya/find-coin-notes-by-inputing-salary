#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sal;
  printf("Enter your salary :");scanf("%d",&sal);

  printf("\nNotes and coin summary");
  printf("\n5000 ---- %d\n",(sal/5000));
  sal=sal%5000;
  printf("1000 ---- %d\n",(sal/1000));
  sal=sal%1000;
  printf("500  ---- %d\n",(sal/500));
  sal=sal%500;
  printf("100  ---- %d\n",(sal/100));
   sal=sal%100;
  printf("50   ---- %d\n",(sal/50));
   sal=sal%50;
  printf("20   ---- %d\n",(sal/20));
  sal=sal%20;
  printf("10   ---- %d\n",(sal/10));
    return 0;
}
