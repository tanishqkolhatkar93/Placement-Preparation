class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
            
            int l=1;
            int r=*max_element(piles.begin(),piles.end());
            
            while(l<r)
            {
                 int m = (l+r)/2;
                 int sum = 0;
                 for(int i=0;i<piles.size();i++)
                 {
                         sum += (piles[i]+m-1)/m;
                 }
                    if(sum>h)
                    {
                            l = m + 1;
                    }
                    else
                    {
                            r = m; 
                    }
                    
                    
                         
            }
        
            return l;
    }
};
