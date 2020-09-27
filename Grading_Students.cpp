vector<int> gradingStudents(vector<int> grades) 
{
  int n=grades.size();

  for(int i=0;i<n;i++)
  {    
      cin>>grades[i];
      int b=grades[i]%5;
      if(grades[i]>=38 && b>=3 )
         grades[i]=grades[i]+5-b;
  }

  return grades;
}
