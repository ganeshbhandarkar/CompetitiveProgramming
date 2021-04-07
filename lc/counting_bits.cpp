class Solution {
public:
    int pop_count(int n){
        int nu =0;
        while(n){
            if(n&1){
                nu++;
            }
            n>>=1;
        }
        return nu;
    }
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            ans.push_back(pop_count(i));
        }
        return ans;
    }
};