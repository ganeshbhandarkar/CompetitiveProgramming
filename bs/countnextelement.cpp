int solve(vector<int>& nums) {
    int ans =0;
    map<int , int> m;
    for(int i=0;i<nums.size();i++){
        // if(find(nums.begin(),nums.end(),nums[i]+1)!=nums.end()){
        //     ans++;
        // }
        m[nums[i]]++;
    }
    for(auto i:m){
        if(m.find(i.first+1)!=m.end()){
            ans += i.second;
        }
    }
    return ans;
}