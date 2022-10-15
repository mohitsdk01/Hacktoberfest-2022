class Solution {
public:
    int edgeScore(vector<int>& v) {
        int len  =v.size();
        vector <long long > sum_of_label(len);
        for (int i = 0; i< len ;  i++) {
            // adding label's value to the node at which the current edge is pointing.
            sum_of_label[v[i]]+=i;
        }
        long long maximum  = -1;
        int index = -1;
        for (int i = 0 ; i< len  ; i++) {
            long long sum = 0;
            if (maximum < sum_of_label[i]) {
                maximum = sum_of_label[i] ; 
                index = i;
            }
        }
        return index;
    }
};
