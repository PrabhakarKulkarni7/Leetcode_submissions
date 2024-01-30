class Solution {
public:
 int findMax(vector<int>& piles)
        {
            int maxi = 0;
            for(int i=0;i<piles.size();i++)
            {
                if(piles[i]>maxi)
                {
                    maxi=piles[i];
                }
            }
            return maxi;
        }

long long calculateTotalHours(vector<int> &piles, int hourly)
{
        long long totalHour=0;
        for(int i=0;i<piles.size();i++)
        {
            totalHour =totalHour + ceil((double)piles[i]/(double)hourly);
        }
        return totalHour;
}
int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low=1,high = findMax(piles);
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long totalHours=calculateTotalHours(piles,mid);
            if(totalHours<=h)
            {
                high = mid - 1;
            }
            else
                {
                    low = mid + 1;
                }
        }
          return low;
    }
  
};