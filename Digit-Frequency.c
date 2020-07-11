#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    char str[1000];
    int arr[10]={0,0,0,0};
    scanf("%s",str);
 
 for(int i=0; i< strlen(str); i++)
 {
    if(str[i]>='0' && str[i]<='9')
    {
      arr[str[i] - '0']++;
    }
 }

 for(int i=0; i<10; i++)
 {
   printf("%d",arr[i]);
   printf(" ");
 }

    return 0;
}

