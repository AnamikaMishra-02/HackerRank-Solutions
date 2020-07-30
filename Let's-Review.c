#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,c=0,d=0,i;
    char str[10001],even[10001],odd[10001];
    scanf("%d",&n);
    int x=strlen(str);
    scanf("%s",str);
    while(n!=0)
    {  
        for(i=0 ; i<x; i++)
         {
           if(i%2==0)
            {
              even[c]==str[i];
              c++;
            }
           else 
           {
             odd[d]==str[i];
             d++;
           }
         }
             printf("%s",even);
             printf(" ");
             printf("%s\n",odd);
     n--;
    }
   
       
    return 0;
}

