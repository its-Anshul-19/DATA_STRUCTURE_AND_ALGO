int Solution::solve(vector<int> &A) {
     
 unordered_set<int> sett;
 int ans = -1;
 
  for(int i = A.size()-1;i>=0;i--)
  {
      if(sett.find(A[i]) != sett.end())
      {
          ans = A[i];
      }
      sett.insert(A[i]);
  }
    return ans ;  
}
