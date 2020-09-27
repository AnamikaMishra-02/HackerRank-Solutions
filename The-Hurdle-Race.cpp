int hurdleRace(int k, vector<int> height) 
{
    int n=height.size();
    int max=-10000;
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
        if(height[i]>max)
          max=height[i];
    }

    if(k<max)
      return max-k;
    else
      return 0;
}
