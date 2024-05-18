#include <stdio.h>
#include <conio.h>

main()
{
  int a = 3;
  int b = 5;
  int c = 2;
  int d;

  d = a;
  a = b;
  b = c;
  c = d;

  printf("a=%d  b=%d c=%d ", a, b, c);

  getch();
}
