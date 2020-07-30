#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int myfunction(char s[10001])
  {
        for(int i=0; i<strlen(s); i++)
        {
            if(i%2==0)
              printf("%c",s[i]);
        }
        printf(" ");
        for(int i=0; i<strlen(s); i++)
        {
            if(i%2 !=0)
              printf("%c",s[i]);
        }
        printf("\n");
     return 0;
    
   }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test_cases;
    char s[10001];
    scanf("%d",&test_cases);
    for(int i=0; i<test_cases; i++)
    {
        scanf("%s",s);
        myfunction(s);

    }
      
}
