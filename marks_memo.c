#include <stdio.h>
int main ()
{
  int first = 75;
  int second = 48;
  int third = 70;
  int maths = 62;
  int science = 79;
  int social = 100;
  int total = first + second + third + maths + science + social;
  float percentage = (float)total / 6;
  printf ("AP SSC MARKS MEMO\n");
  printf ("-----------------------\n");
  printf ("First Language   : %d\n", first);
  printf ("Second Language  : %d\n", second);
  printf ("Third Language   : %d\n", third);
  printf ("Maths            : %d\n", maths);
  printf ("Science          : %d\n", science);
  printf ("Social Studies   : %d\n", social);
  printf ("-----------------------\n");
  printf ("Grand Total : %d\n", total);
  printf ("Percentile : %.2f", percentage);
  
  return 0;
  }