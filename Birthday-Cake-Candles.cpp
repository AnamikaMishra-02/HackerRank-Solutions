int birthdayCakeCandles(vector<int> candles) 
{
   int n=candles.size();
   int max=-100000;
   for(int i=0;i<n;i++)
   {
       if(candles[i]>max)
          max=candles[i];
   }
   int count=0;
   for(int i=0;i<n;i++)
   {
       if(candles[i]==max)
         count++;
   }
  return count;
}
