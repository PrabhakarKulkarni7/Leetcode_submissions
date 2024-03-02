class Solution {
public:
    double average(vector<int>& salary) {
      int n = salary.size();
      double ans = 0;
      int count = 0;
      sort(salary.begin(),salary.end());
      for(int i=1;i<n-1;++i){
          ans = ans + salary[i];
          count++;
      }  
      double result = (ans / count);
      return result;
    }
};