#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int sum=0;
    int i;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {   scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }  
    printf("%d",sum);
    return 0;
}

