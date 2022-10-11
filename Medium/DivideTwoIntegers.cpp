class Solution {
public:
    int divide(int dividend, int divisor) {
    
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;

        

        long int absdd = abs(dividend), abddv = abs(divisor);
        
     
        int result=0;
        while(abddv<=absdd) 
        {
            long int sum=abddv, ct=1;
            while(sum<=absdd-sum) 
            {
                sum+=sum;
                ct+=ct;
            }
            result+=ct;
            absdd-=sum;
        }
        
if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -result;
        
        return result;
          
    }
};
