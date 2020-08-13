#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function   
    int *c= *a + *b ;
    printf("%d\n",c);
    int *d= abs(*a - *b) ;
    printf("%d",d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}

