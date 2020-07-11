#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{int s;
   if(a>=b && a>=c && a>=d)
     {
         s=a;
     }

   else if(b>=c && b>=d && b>=a)
      {
          s=b;
      }

   else if(c>=d && c>=a && c>=b )
   {
       s=c;
    
   }
   else
   s=d;
   return(s);
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

