class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res1;
        vector<int>res2;
        int x=-1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                x=i;
                break;
            }
        }
        for(int i=digits.size()-1;i>x;i--)
        {
            res1.push_back(0);
        }
        if(x!=-1)
        {
            res1.push_back(digits[x]+1);
        }
        else
        {
            
            res1.push_back(1);
        }
        for(int i=x-1;i>=0;i--)
        {
            res1.push_back(digits[i]);
        }
        for(int i=res1.size()-1;i>=0;i--)
        {
            res2.push_back(res1[i]);
        }
        return res2;
    }
};