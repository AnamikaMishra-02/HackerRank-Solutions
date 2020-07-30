#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2 !=0)
      printf("Weird");
    else if(n%2==0 && n>=2 && n<=5)
      printf("Not Weird");
    else if(n%2==0 && n>=6 && n<=20)
      printf("Weird");
    else if(n%2==0 && n>20)
      printf("Not Weird");
  return 0;
}
