// Complete the countingValleys function below.
int countingValleys(int n, char* s)
{
int count=0,valley=0;
scanf("%d",&n);
scanf("%s",s);
for(int i=0;i<n;i++)
{
    if(s[i]=='D')
      count++;
    else 
      count--;
    if(count==0 && s[i]=='U')
           valley++;
      
}

return valley;

}
