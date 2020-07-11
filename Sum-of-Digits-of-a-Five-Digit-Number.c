#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int a;
    int rem;
    int sum=0;
    a=n;
    scanf("%d", &n);
    while(n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    printf("%d",sum);
    return 0;
}

