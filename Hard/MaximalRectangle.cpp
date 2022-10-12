class Solution {
public:
     vector<int>  NSL(vector<int>& heights){
           // code here
       stack<pair<int,int>> s;
        vector<int> v;
         int n=heights.size();
         
         
         
         
        for( int i=0;i<n;i++){
            if(s.size()==0){
                v.push_back(-1);
               //v[i]=-1;
            }
            
            
            // 2nd condtion
             else if( s.size()>0 && s.top().first<heights[i]){
                 
                 v.push_back(s.top().second);
                 //v[i]=s.top();
             }
            
            // 3rd condition
            else if( s.size()>0 && s.top().first>=heights[i] ){
                
            
             while(s.size()>0 && s.top().first>=heights[i]){
                s.pop();
            }
            
            
            
            
            if(s.size()==0){
                //v[i]=-1;
                v.push_back(-1);
                
            }
            else {
                v.push_back(s.top().second);
                //v[i]=s.top();
            }
            
            }
            
            s.push({heights[i],i});
        
    }
       // reverse(v.begin(),v.end());
        return v;    
    }    
    
    
    
    
    vector<int>  NSR(vector<int>& heights){
          vector<int> v;
         //int index=heights.size();
        stack<pair<int,int>>st;
         int n=heights.size();
        for(int i=n-1;i>=0;i--){

            if(st.size()==0) v.push_back(n);

            else if(st.size()>0 && st.top().first<heights[i]) v.push_back(st.top().second);

            else if(st.size()>0 && st.top().first>=heights[i]){

                while(st.size()>0 && st.top().first>=heights[i]) st.pop();

                if(st.size()==0) v.push_back(n);

                else v.push_back(st.top().second);

            }

            st.push({heights[i],i});

        }

        reverse(v.begin(),v.end());

        return v;
    }
    
    
     int MAH(vector<int>& heights) {
        vector<int> v1=NSL(heights);
        vector<int> v2=NSR(heights);
        int maxi=INT_MIN;
        vector<int> width;
        
   
//         for(int i=0;i<heights.size();i++){
//             // maxi=max(maxi,(v1[i]-v2[i]-1)
//             width.push_back(v2[i]-v1[i]-1);
//         }
        for(int i=0;i<heights.size();i++){
            maxi=max(maxi,(v2[i]-v1[i]-1)*heights[i]);
        }
        return maxi;
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=0;
        vector<int>v(m,0);
        
                if(n==1 and m==1 and matrix[0][0]=='0')
            return 0;
        else if(n==1 and m==1 and matrix[0][0]=='1')
            return 1;

        

        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0'){
                    v[j]=0;
                }
                
                else {
                    v[j]=v[j]+1;
                }
            }
            maxi=max(maxi,MAH(v));
            
        }
        return maxi;
    }
};